# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2

set(LIB ${CMAKE_PROJECT_NAME})

file(GLOB SOURCES RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp)
file(GLOB HEADERS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.h *.hpp)


# ASN.1 types are imported and compiled locally to the project, but not installed
esrocos_asn1_types_package(${LIB}_local_types
    OUTDIR asn1
    IMPORT types/base)
    
if(${CMAKE_CROSSCOMPILING})
    # Find libraries in ESROCOS' target-specific directory
    link_directories(${CMAKE_INSTALL_PREFIX}/${RTEMS_TARGET}/lib)

    # Create link to Boost headers (cross-compile can use Boost header-only libraries, but cannot directly include /usr/include)
    execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink "/usr/include/boost" "${CMAKE_CURRENT_BINARY_DIR}/boost")
else()
    # Find libraries in ESROCOS' regular directory
    link_directories(${CMAKE_INSTALL_PREFIX}/lib)
endif()

# Target library
if(${CMAKE_CROSSCOMPILING})
    # Compiling for RTEMS, build static library
    add_library(${LIB} STATIC ${SOURCES})
else()
    # Compiling natively, build shared library    
    add_library(${LIB} SHARED ${SOURCES})
endif()

set_target_properties(${LIB} PROPERTIES LINKER_LANGUAGE CXX)
esrocos_pkgconfig_dependency(${LIB}
    eigen3
)
target_include_directories(${LIB} 
   PUBLIC ${CMAKE_INSTALL_PREFIX}/include
   PUBLIC ${CMAKE_INSTALL_PREFIX}/include/orocos
   PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
target_compile_definitions(${LIB} PUBLIC OROCOS_TARGET=$ENV{OROCOS_TARGET})
add_dependencies(${LIB} ${LIB}_local_types_generate_c)

# Install headers, libraries and pkg-config file
if(CMAKE_CROSSCOMPILING)
    set(TARGET_INSTALL_PREFIX ${RTEMS_TARGET})
endif()

install(FILES ${HEADERS}
    DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${CMAKE_PROJECT_NAME}
)

install(TARGETS ${LIB} DESTINATION ${CMAKE_INSTALL_PREFIX}/${TARGET_INSTALL_PREFIX}/lib)

# Add dependencies specific to base_support (replaced in .pc.in configuration file)
set(DEPS_PKGCONFIG "base-types base-transport-corba-$ENV{OROCOS_TARGET}")

CONFIGURE_FILE("${LIB}.pc.in" "${LIB}.pc" @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/${LIB}.pc
    DESTINATION ${CMAKE_INSTALL_PREFIX}/${TARGET_INSTALL_PREFIX}/lib/pkgconfig
)

