
#include "OpaqueConversion.hpp"


//Conversion functions from the instanced type to the marshaled type


void RTT_extras_ReadOnlyPointer_Base_samples_frame_Frame__fromIntermediate(RTT::extras::ReadOnlyPointer<base::samples::frame::Frame>& result,  base::samples::frame::Frame & cppMarshall)
{
    /*Add user code for this conversion*/
        
    if (result.get() != &cppMarshall)
        result.reset(&cppMarshall);
}


void RTT_extras_ReadOnlyPointer_Base_samples_frame_Frame__toIntermediate(base::samples::frame::Frame& result, const RTT::extras::ReadOnlyPointer<base::samples::frame::Frame> & cppval)
{
    /*Add user code for this conversion*/
    if (!cppval.get())
        throw std::runtime_error("trying access the value inside an unset smart pointer");
    result = *(cppval.get());
    
    
}

void Base_Vector6d_fromIntermediate(base::Vector6d& result, const wrappers::Vector6d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 6; i++)
    {
		result[i] = cppMarshall.data[i];
	}
    
}

void Base_Vector6d_toIntermediate(wrappers::Vector6d& result, const base::Vector6d& cppval)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 6; i++)
    {
		 result.data[i] = cppval[i];
	}
    
}


void RTT_extras_ReadOnlyPointer_Base_samples_frame_FramePair__fromIntermediate(RTT::extras::ReadOnlyPointer<base::samples::frame::FramePair>& result,  base::samples::frame::FramePair & cppMarshall)
{
    /*Add user code for this conversion*/
   
    if (result.get() != &cppMarshall)
        result.reset(&cppMarshall);
    
}

void RTT_extras_ReadOnlyPointer_Base_samples_frame_FramePair__toIntermediate(base::samples::frame::FramePair& result, const RTT::extras::ReadOnlyPointer<base::samples::frame::FramePair>& cppval)
{
    /*Add user code for this conversion*/
    if (!cppval.get())
        throw std::runtime_error("trying access the value inside an unset smart pointer");
    result = *(cppval.get());
}


void Base_Affine3d_fromIntermediate(base::Affine3d& result, const wrappers::Matrix4d& cppMarshall)
{
    /*Add user code for this conversion*/
    //linear(3x3) T(3x1)
    //0 0 0          1
   Base_Matrix4d_fromIntermediate(result.matrix(),cppMarshall);
    result.makeAffine();
    
    
    
}

void Base_Affine3d_toIntermediate(wrappers::Matrix4d& result, const base::Affine3d& cppval)
{
    /*Add user code for this conversion*/
    Base_Matrix4d_toIntermediate(result,cppval.matrix());
    
    
}

void Base_Matrix4d_fromIntermediate(base::Matrix4d& result, const wrappers::Matrix4d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 4; i++)
    {
		for(int j=0; j < 4; j++)
		{
			result(i,j)=cppMarshall.data[j*4+i];
		}
	}
    
}

void Base_Matrix4d_toIntermediate(wrappers::Matrix4d& result, const base::Matrix4d& cppval)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 4; i++)
    {
		for(int j=0; j < 4; j++)
		{
			result.data[j*4+i] = cppval(i,j);
		}
	}
}


void Base_Vector3d_fromIntermediate(base::Vector3d& result, const wrappers::Vector3d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 3; i++)
    {
		result[i] = cppMarshall.data[i];
	}
}

void Base_Vector3d_toIntermediate(wrappers::Vector3d& result, const base::Vector3d& cppval)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 3; i++)
    {
		 result.data[i] = cppval[i];
	}
}


void Base_VectorXd_fromIntermediate(base::VectorXd& result, const wrappers::VectorXd& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i= 0; cppMarshall.data.size(); i++)
    {
		result[i] = cppMarshall.data[i];
	}
    
}

void Base_VectorXd_toIntermediate(wrappers::VectorXd& result, const base::VectorXd& cppval)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < cppval.size(); i++)
    {
		 result.data[i] = cppval[i];
	}
}


void Base_MatrixXd_fromIntermediate(base::MatrixXd& result, const wrappers::MatrixXd& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < cppMarshall.rows; i++)
    {
		for(int j=0; j < cppMarshall.cols; j++)
		{
			result(i,j)=cppMarshall.data[j*4+i];
		}
	}
    
}

void Base_MatrixXd_toIntermediate(wrappers::MatrixXd& result, const base::MatrixXd& cppval)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < cppval.rows(); i++)
    {
		for(int j=0; j < cppval.cols(); j++)
		{
			result.data[j*4+i] = cppval(i,j);
		}
	}
}


void Base_AngleAxisd_fromIntermediate(base::AngleAxisd& result, const wrappers::AngleAxisd& cppMarshall)
{
    /*Add user code for this conversion*/
    result.angle() = cppMarshall.angle;
    for(int i= 0; i < 3; i++)
    {
		result.axis()[i] = cppMarshall.axis[i];
	}
    
    
}

void Base_AngleAxisd_toIntermediate(wrappers::AngleAxisd& result, const base::AngleAxisd& cppval)
{
    /*Add user code for this conversion*/
    result.angle = cppval.angle();
    for(int i= 0; i < 3; i++)
    {
		result.axis[i] = cppval.axis()[i];
	}
    
}


void Base_Quaterniond_fromIntermediate(base::Quaterniond& result, const wrappers::Quaterniond& cppMarshall)
{
    /*Add user code for this conversion*/
    result.w() = cppMarshall.re;
    result.x()=cppMarshall.im[0];
    result.y()=cppMarshall.im[1];
    result.z()=cppMarshall.im[2];
}

void Base_Quaterniond_toIntermediate(wrappers::Quaterniond& result, const base::Quaterniond& cppval)
{
    /*Add user code for this conversion*/
    result.re = cppval.w();
    result.im[0] = cppval.x();
    result.im[1] = cppval.y();
    result.im[2] = cppval.z();
}


void Base_Matrix2d_fromIntermediate(base::Matrix2d& result, const wrappers::Matrix2d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 2; i++)
    {
		for(int j=0; j < 2; j++)
		{
			result(i,j)=cppMarshall.data[j*4+i];
		}
	}
}

void Base_Matrix2d_toIntermediate(wrappers::Matrix2d& result, const base::Matrix2d& cppval)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 2; i++)
    {
		for(int j=0; j < 2; j++)
		{
			result.data[j*2+i] = cppval(i,j);
		}
	}
}


void Base_Matrix3d_fromIntermediate(base::Matrix3d& result, const wrappers::Matrix3d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 3; i++)
    {
		for(int j=0; j < 3; j++)
		{
			result(i,j)=cppMarshall.data[j*4+i];
		}
	}
}

void Base_Matrix3d_toIntermediate(wrappers::Matrix3d& result, const base::Matrix3d& cppval)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 3; i++)
    {
		for(int j=0; j < 3; j++)
		{
			result.data[j*3+i] = cppval(i,j);
		}
	}
}


void Base_Matrix6d_fromIntermediate(base::Matrix6d& result, const wrappers::Matrix6d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 6; i++)
    {
		for(int j=0; j < 6; j++)
		{
			result(i,j)=cppMarshall.data[j*4+i];
		}
	}
}

void Base_Matrix6d_toIntermediate(wrappers::Matrix6d& result, const base::Matrix6d& cppval)
{
    /*Add user code for this conversion*/
    for(int i = 0; i < 6; i++)
    {
		for(int j=0; j < 6; j++)
		{
			result.data[j*6+i] = cppval(i,j);
		}
	}
}


void Base_Vector2d_fromIntermediate(base::Vector2d& result, const wrappers::Vector2d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 2; i++)
    {
		result[i] = cppMarshall.data[i];
	}
}

void Base_Vector2d_toIntermediate(wrappers::Vector2d& result, const base::Vector2d& cppval)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 2; i++)
    {
		 result.data[i] = cppval[i];
	}
}


void Base_Vector4d_fromIntermediate(base::Vector4d& result, const wrappers::Vector4d& cppMarshall)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 4; i++)
    {
		result[i] = cppMarshall.data[i];
	}
}

void Base_Vector4d_toIntermediate(wrappers::Vector4d& result, const base::Vector4d& cppval)
{
    /*Add user code for this conversion*/
    for(int i= 0; i < 4; i++)
    {
		 result.data[i] = cppval[i];
	}
}


void Base_geometry_Spline_1__fromIntermediate(base::geometry::Spline<1>& result, const wrappers::geometry::Spline& cppMarshall)
{
		//DIM will be equal to 1
		result.setGeometricResolution(cppMarshall.geometric_resolution);
		result.setCurveOrder(cppMarshall.curve_order);
		if (!cppMarshall.vertices.empty())
			result.reset(cppMarshall.vertices, cppMarshall.knots, cppMarshall.kind);
}

void Base_geometry_Spline_1__toIntermediate(wrappers::geometry::Spline& result, const base::geometry::Spline<1>& cppval)
{
    /*Add user code for this conversion*/
    result = wrappers::geometry::Spline(cppval);
}

void Base_geometry_Spline_3__fromIntermediate(base::geometry::Spline<3>& result, const wrappers::geometry::Spline& cppMarshall)
{
    /*Add user code for this conversion*/
    //DIM will be equal to 3
	result.setGeometricResolution(cppMarshall.geometric_resolution);
	result.setCurveOrder(cppMarshall.curve_order);
	if (!cppMarshall.vertices.empty())
		result.reset(cppMarshall.vertices, cppMarshall.knots, cppMarshall.kind);
    
}

void Base_geometry_Spline_3__toIntermediate(wrappers::geometry::Spline& result, const base::geometry::Spline<3>& cppval)
{
    /*Add user code for this conversion*/
    result = wrappers::geometry::Spline(cppval);
}





