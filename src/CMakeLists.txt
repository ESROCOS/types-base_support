# H2020 ESROCOS Project
# Company: GMV Aerospace & Defence S.A.U.
# Licence: GPLv2


pkg_search_module(EIGEN3 REQUIRED eigen3)

set(SOURCES
    asn1AngleConvert.cpp
    asn1BodyStateConvert.cpp
    asn1JointsConvert.cpp
    asn1JointStateConvert.cpp
    asn1Matrix3dConvert.cpp
    asn1Matrix4dConvert.cpp
    asn1Matrix6dConvert.cpp
    asn1Motion2DConvert.cpp
    asn1OrientationConvert.cpp
    asn1OrientationUtils.c
    asn1PoseConvert.cpp
    asn1QuaterniondConvert.cpp
    asn1QuaterniondUtils.c
    asn1RigidBodyStateConvert.cpp
    asn1StringConvert.cpp
    asn1StringUtils.cpp
    asn1TemperatureConvert.cpp
    asn1TimeConvert.cpp
    asn1TransformWithCovarianceConvert.cpp
    asn1TwistWithCovarianceConvert.cpp
    asn1Vector3dConvert.cpp
    asn1Vector3dUtils.c
    asn1Vector4dConvert.cpp
    asn1Vector4dUtils.c
    asn1Vector6dConvert.cpp
    asn1Vector6dUtils.c
    asn1VectorXdConvert.cpp
    asn1WaypointConvert.cpp
    ia5stringConvert.cpp
    )
    
set(HEADERS
    asn1AngleConvert.hpp
    asn1ArrayUtils.hpp
    asn1Convert.hpp
    asn1BodyStateConvert.hpp
    asn1JointsConvert.hpp
    asn1JointStateConvert.hpp
    asn1Matrix3dConvert.hpp
    asn1Matrix3dUtils.h
    asn1Matrix4dConvert.hpp
    asn1Matrix4dUtils.h
    asn1Matrix6dConvert.hpp
    asn1Matrix6dUtils.h
    asn1Motion2DConvert.hpp
    asn1OrientationConvert.hpp
    asn1OrientationUtils.h
    asn1PoseConvert.hpp
    asn1QuaterniondConvert.hpp
    asn1QuaterniondUtils.h
    asn1RigidBodyStateConvert.hpp
    asn1StringConvert.hpp
    asn1StringUtils.h
    asn1TemperatureConvert.hpp
    asn1TimeConvert.hpp
    asn1TwistWithCovarianceConvert.hpp
    asn1TransformWithCovarianceConvert.hpp
    asn1Vector3dConvert.hpp
    asn1Vector3dUtils.h
    asn1Vector4dConvert.hpp
    asn1Vector4dUtils.h
    asn1Vector6dConvert.hpp
    asn1VectorXdConvert.hpp
    asn1Vector6dUtils.h
    asn1WaypointConvert.hpp
    baseTypes.h
    baseUtils.h
    ia5stringConvert.hpp
    )

# ASN.1 types are imported and compiled locally to the project, but not installed
esrocos_asn1_types_package(base_support_local_types
    OUTDIR asn1
    IMPORT types/base)
    
# Target library
add_library(esrocos_types_base_support SHARED ${SOURCES})
set_target_properties(esrocos_types_base_support PROPERTIES LINKER_LANGUAGE CXX)
target_include_directories(esrocos_types_base_support PUBLIC 
   PUBLIC ${EIGEN3_INCLUDE_DIRS}
   PUBLIC ${CMAKE_INSTALL_PREFIX}/include
   PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
)
add_dependencies(esrocos_types_base_support base_support_local_types_generate_c)

# Install headers, libraries and pkg-config file
install(FILES ${HEADERS}
        DESTINATION ${CMAKE_INSTALL_PREFIX}/include/${CMAKE_PROJECT_NAME}
)
        
install(TARGETS esrocos_types_base_support
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib
)

CONFIGURE_FILE("esrocos_types_base_support.pc.in" "esrocos_types_base_support.pc" @ONLY)
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/esrocos_types_base_support.pc
        DESTINATION ${CMAKE_INSTALL_PREFIX}/lib/pkgconfig
)
