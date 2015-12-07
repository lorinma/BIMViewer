// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_LinearTension_HeaderFile
#define _FEmTool_LinearTension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_FEmTool_LinearTension_HeaderFile
#include <Handle_FEmTool_LinearTension.hxx>
#endif

#ifndef _math_Matrix_HeaderFile
#include <math_Matrix.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _FEmTool_ElementaryCriterion_HeaderFile
#include <FEmTool_ElementaryCriterion.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Handle_TColStd_HArray2OfInteger_HeaderFile
#include <Handle_TColStd_HArray2OfInteger.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Standard_NotImplemented;
class Standard_DomainError;
class TColStd_HArray2OfInteger;
class math_Matrix;
class math_Vector;


//! Criterium of LinearTension To Hermit-Jacobi  elements <br>
class FEmTool_LinearTension : public FEmTool_ElementaryCriterion {

public:

  
  Standard_EXPORT   FEmTool_LinearTension(const Standard_Integer WorkDegree,const GeomAbs_Shape ConstraintOrder);
  
  Standard_EXPORT   virtual  Handle_TColStd_HArray2OfInteger DependenceTable() const;
  
  Standard_EXPORT   virtual  Standard_Real Value() ;
  
  Standard_EXPORT   virtual  void Hessian(const Standard_Integer Dimension1,const Standard_Integer Dimension2,math_Matrix& H) ;
  
  Standard_EXPORT   virtual  void Gradient(const Standard_Integer Dimension,math_Vector& G) ;




  DEFINE_STANDARD_RTTI(FEmTool_LinearTension)

protected:




private: 


math_Matrix RefMatrix;
Standard_Integer myOrder;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
