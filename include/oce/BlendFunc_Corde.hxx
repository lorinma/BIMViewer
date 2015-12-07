// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BlendFunc_Corde_HeaderFile
#define _BlendFunc_Corde_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor3d_HSurface_HeaderFile
#include <Handle_Adaptor3d_HSurface.hxx>
#endif
#ifndef _Handle_Adaptor3d_HCurve_HeaderFile
#include <Handle_Adaptor3d_HCurve.hxx>
#endif
#ifndef _gp_Pnt_HeaderFile
#include <gp_Pnt.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _gp_Vec_HeaderFile
#include <gp_Vec.hxx>
#endif
#ifndef _gp_Vec2d_HeaderFile
#include <gp_Vec2d.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Adaptor3d_HSurface;
class Adaptor3d_HCurve;
class Standard_DomainError;
class math_Vector;
class math_Matrix;
class gp_Pnt;
class gp_Vec;
class gp_Vec2d;


//! This function calculates point (pts) on the curve of <br>
//!          intersection between the normal to a curve (guide) <br>
//!          in a chosen parameter and a surface  (surf), so <br>
//!          that pts was at a given distance from the guide. <br>
//!          X(1),X(2) are the parameters U,V of pts on surf. <br>
class BlendFunc_Corde  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BlendFunc_Corde(const Handle(Adaptor3d_HSurface)& S,const Handle(Adaptor3d_HCurve)& CGuide);
  
  Standard_EXPORT     void SetParam(const Standard_Real Param) ;
  
  Standard_EXPORT     void SetDist(const Standard_Real Dist) ;
  //! computes the values <F> of the Function for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  //! returns the values <D> of the derivatives for the <br>
//!          variable <X>. <br>
//!          Returns True if the computation was done successfully, <br>
//!          False otherwise. <br>
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  
  Standard_EXPORT    const gp_Pnt& PointOnS() const;
  //! returns the point of parameter <Param> on CGuide <br>
  Standard_EXPORT    const gp_Pnt& PointOnGuide() const;
  //! returns the normal to CGuide at Ptgui. <br>
  Standard_EXPORT    const gp_Vec& NPlan() const;
  //! Returns True when it is not possible to compute <br>
//!          the tangent vectors at PointOnS. <br>
  Standard_EXPORT     Standard_Boolean IsTangencyPoint() const;
  //! Returns the tangent vector at PointOnS, in 3d space. <br>
  Standard_EXPORT    const gp_Vec& TangentOnS() const;
  //! Returns the tangent vector at PointOnS, in the <br>
//!          parametric space of the first surface. <br>
  Standard_EXPORT    const gp_Vec2d& Tangent2dOnS() const;
  //! Derived of the function compared to the parameter <br>
//! of the guideline <br>
  Standard_EXPORT     void DerFguide(const math_Vector& Sol,gp_Vec2d& DerF) ;
  //! Returns False if Sol is not solution else returns <br>
//!          True and updates the fields tgs and tg2d <br>
  Standard_EXPORT     Standard_Boolean IsSolution(const math_Vector& Sol,const Standard_Real Tol) ;





protected:





private:



Handle_Adaptor3d_HSurface surf;
Handle_Adaptor3d_HCurve guide;
gp_Pnt pts;
gp_Pnt2d pt2d;
Standard_Real dis;
Standard_Real normtg;
Standard_Real theD;
gp_Pnt ptgui;
gp_Vec nplan;
gp_Vec d1gui;
gp_Vec d2gui;
gp_Vec tgs;
gp_Vec2d tg2d;
Standard_Boolean istangent;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
