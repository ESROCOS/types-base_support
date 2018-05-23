/*
 * H2020 ESROCOS Project
 * Company: GMV Aerospace & Defence S.A.U.
 * Licence: GPLv2
 */

/*
 * Intermediate conversion functions.
 */

#ifndef OPAQUE_CONVERSION_H
#define OPAQUE_CONVERSION_H


#include <base/Eigen.hpp>
#include <base/wrappers/Eigen.hpp>
#include <base/geometry/Spline.hpp>
#include <base/samples/Frame.hpp>
#include <rtt/extras/ReadOnlyPointer.hpp>
#include <base/wrappers/geometry/Spline.hpp>

//Conversion functions from the instanced type to the marshaled type


void Base_Quaterniond_fromIntermediate(base::Quaterniond& result, const wrappers::Quaterniond& cppMarshall);

void Base_Quaterniond_toIntermediate(wrappers::Quaterniond& result, const base::Quaterniond& cppVal);

void RTT_extras_ReadOnlyPointer_Base_samples_frame_Frame__fromIntermediate(RTT::extras::ReadOnlyPointer<base::samples::frame::Frame>& result, const base::samples::frame::Frame& cppMarshall);

void RTT_extras_ReadOnlyPointer_Base_samples_frame_Frame__toIntermediate(base::samples::frame::Frame& result, const RTT::extras::ReadOnlyPointer<base::samples::frame::Frame>& cppVal);

void Base_VectorXd_fromIntermediate(base::VectorXd& result, const wrappers::VectorXd& cppMarshall);

void Base_VectorXd_toIntermediate(wrappers::VectorXd& result, const base::VectorXd& cppVal);

void Base_Matrix6d_fromIntermediate(base::Matrix6d& result, const wrappers::Matrix6d& cppMarshall);

void Base_Matrix6d_toIntermediate(wrappers::Matrix6d& result, const base::Matrix6d& cppVal);

void Base_Matrix2d_fromIntermediate(base::Matrix2d& result, const wrappers::Matrix2d& cppMarshall);

void Base_Matrix2d_toIntermediate(wrappers::Matrix2d& result, const base::Matrix2d& cppVal);

void Base_Vector6d_fromIntermediate(base::Vector6d& result, const wrappers::Vector6d& cppMarshall);

void Base_Vector6d_toIntermediate(wrappers::Vector6d& result, const base::Vector6d& cppVal);

void Base_geometry_Spline_1__fromIntermediate(base::geometry::Spline<1>& result, const wrappers::geometry::Spline& cppMarshall);

void Base_geometry_Spline_1__toIntermediate(wrappers::geometry::Spline& result, const base::geometry::Spline<1>& cppVal);
void Base_geometry_Spline_3__fromIntermediate(base::geometry::Spline<3>& result, const wrappers::geometry::Spline& cppMarshall);

void Base_geometry_Spline_3__toIntermediate(wrappers::geometry::Spline& result, const base::geometry::Spline<3>& cppVal);

void Base_MatrixXd_fromIntermediate(base::MatrixXd& result, const wrappers::MatrixXd& cppMarshall);

void Base_MatrixXd_toIntermediate(wrappers::MatrixXd& result, const base::MatrixXd& cppVal);

void Base_AngleAxisd_fromIntermediate(base::AngleAxisd& result, const wrappers::AngleAxisd& cppMarshall);

void Base_AngleAxisd_toIntermediate(wrappers::AngleAxisd& result, const base::AngleAxisd& cppVal);

void Base_Vector3d_fromIntermediate(base::Vector3d& result, const wrappers::Vector3d& cppMarshall);

void Base_Vector3d_toIntermediate(wrappers::Vector3d& result, const base::Vector3d& cppVal);

void Base_Vector4d_fromIntermediate(base::Vector4d& result, const wrappers::Vector4d& cppMarshall);

void Base_Vector4d_toIntermediate(wrappers::Vector4d& result, const base::Vector4d& cppVal);

void RTT_extras_ReadOnlyPointer_Base_samples_frame_FramePair__fromIntermediate(RTT::extras::ReadOnlyPointer<base::samples::frame::FramePair>& result, const base::samples::frame::FramePair& cppMarshall);

void RTT_extras_ReadOnlyPointer_Base_samples_frame_FramePair__toIntermediate(base::samples::frame::FramePair& result, const RTT::extras::ReadOnlyPointer<base::samples::frame::FramePair>& cppVal);

void Base_Vector2d_fromIntermediate(base::Vector2d& result, const wrappers::Vector2d& cppMarshall);

void Base_Vector2d_toIntermediate(wrappers::Vector2d& result, const base::Vector2d& cppVal);

void Base_Matrix3d_fromIntermediate(base::Matrix3d& result, const wrappers::Matrix3d& cppMarshall);

void Base_Matrix3d_toIntermediate(wrappers::Matrix3d& result, const base::Matrix3d& cppVal);

void Base_Affine3d_fromIntermediate(base::Affine3d& result, const wrappers::Matrix4d& cppMarshall);

void Base_Affine3d_toIntermediate(wrappers::Matrix4d& result, const base::Affine3d& cppVal);
void Base_Matrix4d_fromIntermediate(base::Matrix4d& result, const wrappers::Matrix4d& cppMarshall);

void Base_Matrix4d_toIntermediate(wrappers::Matrix4d& result, const base::Matrix4d& cppVal);

#endif //OPAQUE_CONVERSION_H