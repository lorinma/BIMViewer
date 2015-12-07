// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2d_OffsetCurve_HeaderFile
#define _Geom2d_OffsetCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Geom2d_OffsetCurve_HeaderFile
#include <Handle_Geom2d_OffsetCurve.hxx>
#endif

#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Geom2d_Curve_HeaderFile
#include <Geom2d_Curve.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom2d_Geometry_HeaderFile
#include <Handle_Geom2d_Geometry.hxx>
#endif
class Geom2d_Curve;
class Standard_ConstructionError;
class Standard_RangeError;
class Standard_NoSuchObject;
class Geom2d_UndefinedDerivative;
class Geom2d_UndefinedValue;
class Standard_NotImplemented;
class gp_Pnt2d;
class gp_Vec2d;
class gp_Trsf2d;
class Geom2d_Geometry;



//!  This class implements the basis services for the creation, <br>
//!  edition, modification and evaluation of planar offset curve. <br>
//!  The offset curve is obtained by offsetting by distance along <br>
//!  the normal to a basis curve defined in 2D space. <br>
//!  The offset curve in this package can be a self intersecting <br>
//!  curve even if the basis curve does not self-intersect. <br>
//!  The self intersecting portions are not deleted at the <br>
//!  construction time. <br>
//!  An offset curve is a curve at constant distance (Offset) from a <br>
//!  basis curve and the offset curve takes its parametrization from <br>
//!  the basis curve. The Offset curve is in the direction of the <br>
//!  normal to the basis curve N. <br>
//!  The distance offset may be positive or negative to indicate the <br>
//!  preferred side of the curve : <br>
//!  . distance offset >0 => the curve is in the direction of N <br>
//!  . distance offset >0 => the curve is in the direction of - N <br>
//!  On the Offset curve : <br>
//!  Value(u) = BasisCurve.Value(U) + (Offset * (T ^ Z)) / ||T ^ Z|| <br>
//!  where T is the tangent vector to the basis curve and Z the <br>
//!  direction of the normal vector to the plane of the curve, <br>
//!  N = T ^ Z defines the offset direction and should not have <br>
//!  null length. <br>
//! <br>
//!  Warnings : <br>
//!  In this package we suppose that the continuity of the offset <br>
//!  curve is one degree less than the continuity of the <br>
//!  basis curve and we don't check that at any point ||T^Z|| != 0.0 <br>
//! <br>
//!  So to evaluate the curve it is better to check that the offset <br>
//!  curve is well defined at any point because an exception could <br>
//!  be raised. The check is not done in this package at the creation <br>
//!  of the offset curve because the control needs the use of an <br>
//!  algorithm which cannot be implemented in this package. <br>
//!  The OffsetCurve is closed if the first point and the last point <br>
//!  are the same (The distance between these two points is lower or <br>
//!  equal to the Resolution sea package gp) . The OffsetCurve can be <br>
//!  closed even if the basis curve is not closed. <br>
class Geom2d_OffsetCurve : public Geom2d_Curve {

public:

  //! Constructs a curve offset from the basis curve C, <br>
//! where Offset is the distance between the offset <br>
//! curve and the basis curve at any point. <br>
//! A point on the offset curve is built by measuring the <br>
//! offset value along a normal vector at a point on C. <br>
//! This normal vector is obtained by rotating the <br>
//! vector tangential to C at 90 degrees in the <br>
//! anti-trigonometric sense. The side of C on which <br>
//! the offset value is measured is indicated by this <br>
//! normal vector if Offset is positive, or in the inverse <br>
//! sense if Offset is negative. <br>
//!   Warnings : <br>
//!  In this package the entities are not shared. The OffsetCurve is <br>
//!  built with a copy of the curve C. So when C is modified the <br>
//!  OffsetCurve is not modified <br>
//!  Warning!  ConstructionError  raised if the basis curve C is not at least C1. <br>
//!  No check is done to know if ||V^Z|| != 0.0 at any point. <br>
  Standard_EXPORT   Geom2d_OffsetCurve(const Handle(Geom2d_Curve)& C,const Standard_Real Offset);
  //! Changes the direction of parametrization of <me>. <br>
//!     As a result: <br>
//! - the basis curve is reversed, <br>
//! - the start point of the initial curve becomes the end <br>
//!   point of the reversed curve, <br>
//! - the end point of the initial curve becomes the start <br>
//!   point of the reversed curve, and <br>
//! - the first and last parameters are recomputed. <br>
  Standard_EXPORT     void Reverse() ;
  //! Computes the parameter on the reversed curve for <br>
//! the point of parameter U on this offset curve. <br>
  Standard_EXPORT     Standard_Real ReversedParameter(const Standard_Real U) const;
  //! Changes this offset curve by assigning C as the <br>
//! basis curve from which it is built. <br>
//! Exceptions <br>
//! Standard_ConstructionError if the curve C is not at least "C1" continuous. <br>
  Standard_EXPORT     void SetBasisCurve(const Handle(Geom2d_Curve)& C) ;
  //!  Changes this offset curve by assigning D as the offset value. <br>
  Standard_EXPORT     void SetOffsetValue(const Standard_Real D) ;
  //! Returns the basis curve of this offset curve. The basis curve can be an offset curve. <br>
  Standard_EXPORT     Handle_Geom2d_Curve BasisCurve() const;
  
//!  Continuity of the Offset curve : <br>
//!  C0 : only geometric continuity, <br>
//!  C1 : continuity of the first derivative all along the Curve, <br>
//!  C2 : continuity of the second derivative all along the Curve, <br>
//!  C3 : continuity of the third derivative all along the Curve, <br>
//!  G1 : tangency continuity all along the Curve, <br>
//!  G2 : curvature continuity all along the Curve, <br>
//!  CN : the order of continuity is infinite. <br>
//!   Warnings : <br>
//!  Returns the continuity of the basis curve - 1. <br>
//!  The offset curve must have a unique normal direction defined <br>
//!  at any point. <br>//! Value and derivatives <br>
//! <br>
//!  Warnings : <br>
//!  The exception UndefinedValue or UndefinedDerivative is <br>
//!  raised if it is not possible to compute a unique offset <br>
//!  direction. <br>
//!  If T is the first derivative with not null length and <br>
//!  Z the direction normal to the plane of the curve, the <br>
//!  relation ||T(U) ^ Z|| != 0  must be satisfied to evaluate <br>
//!  the offset curve. <br>
//!  No check is done at the creation time and we suppose <br>
//!  in this package that the offset curve is well defined. <br>
  Standard_EXPORT     GeomAbs_Shape Continuity() const;
  //!  Warning! this should not be called <br>
//!          if the basis curve is not at least C1. Nevertheless <br>
//!          if used on portion where the curve is C1, it is OK <br>
  Standard_EXPORT     void D0(const Standard_Real U,gp_Pnt2d& P) const;
  //!  Warning! this should not be called <br>
//!           if the continuity of the basis curve is not C2. <br>
//!           Nevertheless, it's OK to use it  on portion <br>
//!           where the curve is C2 <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1) const;
  //!  Warning!  This  should  not  be called <br>
//!           if the continuity of the basis curve is not C3. <br>
//!           Nevertheless, it's OK to use it  on portion <br>
//!           where the curve is C3 <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) const;
  //!  Warning! This should not be called <br>
//!           if the continuity of the basis curve is not C4. <br>
//!           Nevertheless, it's OK to use it  on portion <br>
//!           where the curve is C4 <br>
  Standard_EXPORT     void D3(const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) const;
  //! The returned vector gives the value of the derivative <br>
//!  for the order of derivation N. <br>
//!  Warning! this should not be called <br>
//!        raises  UndefunedDerivative   if the continuity of the basis curve is not CN+1. <br>
//!           Nevertheless, it's OK to use it  on portion <br>
//!           where the curve is CN+1 <br>
//! raises  RangeError if N < 1. <br>
//! raises  NotImplemented if N > 3. <br>//! The following functions compute the value and derivatives <br>
//!  on the offset curve and returns the derivatives on the <br>
//!  basis curve too. <br>
//!  The computation of the value and derivatives on the basis <br>
//!  curve are used to evaluate the offset curve <br>
//!  Warnings : <br>
//!  The exception UndefinedValue or UndefinedDerivative is <br>
//!  raised if it is not possible to compute a unique offset direction. <br>
  Standard_EXPORT     gp_Vec2d DN(const Standard_Real U,const Standard_Integer N) const;
  //!  Warning! this should not be called <br>
//!          if the basis curve is not at least C1. Nevertheless <br>
//!          if used on portion where the curve is C1, it is OK <br>
  Standard_EXPORT     void Value(const Standard_Real U,gp_Pnt2d& P,gp_Pnt2d& Pbasis,gp_Vec2d& V1basis) const;
  //!  Warning! this should not be called <br>
//!           if the continuity of the basis curve is not C1. <br>
//!           Nevertheless, it's OK to use it  on portion <br>
//!           where the curve is C1 <br>
  Standard_EXPORT     void D1(const Standard_Real U,gp_Pnt2d& P,gp_Pnt2d& Pbasis,gp_Vec2d& V1,gp_Vec2d& V1basis,gp_Vec2d& V2basis) const;
  //!  Warning! this should not be called <br>
//!           if the continuity of the basis curve is not C3. <br>
//!           Nevertheless, it's OK to use it  on portion <br>
//!           where the curve is C3 <br>
  Standard_EXPORT     void D2(const Standard_Real U,gp_Pnt2d& P,gp_Pnt2d& Pbasis,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V1basis,gp_Vec2d& V2basis,gp_Vec2d& V3basis) const;
  
  Standard_EXPORT     Standard_Real FirstParameter() const;
  //! Returns the value of the first or last parameter of this <br>
//! offset curve. The first parameter corresponds to the <br>
//! start point of the curve. The last parameter <br>
//! corresponds to the end point. <br>
//! Note: the first and last parameters of this offset curve <br>
//! are also the ones of its basis curve. <br>
  Standard_EXPORT     Standard_Real LastParameter() const;
  //! Returns the offset value of this offset curve. <br>
  Standard_EXPORT     Standard_Real Offset() const;
  
//!  Returns True if the distance between the start point <br>
//!  and the end point of the curve is lower or equal to <br>
//!  Resolution from package gp. <br>
  Standard_EXPORT     Standard_Boolean IsClosed() const;
  //! Is the order of continuity of the curve N ? <br>
//!   Warnings : <br>
//!  This method answer True if the continuity of the basis curve <br>
//!  is N + 1.  We suppose in this class that a normal direction <br>
//!  to the basis curve (used to compute the offset curve) is <br>
//!  defined at any point on the basis curve. <br>//! Raised if N < 0. <br>
  Standard_EXPORT     Standard_Boolean IsCN(const Standard_Integer N) const;
  //! Is the parametrization of a curve is periodic ? <br>
//!  If the basis curve is a circle or an ellipse the corresponding <br>
//!  OffsetCurve is periodic. If the basis curve can't be periodic <br>
//!  (for example BezierCurve) the OffsetCurve can't be periodic. <br>
  Standard_EXPORT     Standard_Boolean IsPeriodic() const;
  //! Returns the period of this offset curve, i.e. the period <br>
//! of the basis curve of this offset curve. <br>
//! Exceptions <br>
//! Standard_NoSuchObject if the basis curve is not periodic. <br>
  Standard_EXPORT   virtual  Standard_Real Period() const;
  //! Applies the transformation T to this offset curve. <br>
//! Note: the basis curve is also modified. <br>
  Standard_EXPORT     void Transform(const gp_Trsf2d& T) ;
  //! Returns the  parameter on the  transformed  curve for <br>
//!          the transform of the point of parameter U on <me>. <br>
//! <br>
//!          me->Transformed(T)->Value(me->TransformedParameter(U,T)) <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U).Transformed(T) <br>
//! <br>
//!          This methods calls the basis curve method. <br>
  Standard_EXPORT   virtual  Standard_Real TransformedParameter(const Standard_Real U,const gp_Trsf2d& T) const;
  //! Returns a  coefficient to compute the parameter on <br>
//!          the transformed  curve  for  the transform  of the <br>
//!          point on <me>. <br>
//! <br>
//!          Transformed(T)->Value(U * ParametricTransformation(T)) <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          Value(U).Transformed(T) <br>
//! <br>
//!          This methods calls the basis curve method. <br>
  Standard_EXPORT   virtual  Standard_Real ParametricTransformation(const gp_Trsf2d& T) const;
  //! Creates a new object, which is a copy of this offset curve. <br>
  Standard_EXPORT     Handle_Geom2d_Geometry Copy() const;




  DEFINE_STANDARD_RTTI(Geom2d_OffsetCurve)

protected:




private: 


Handle_Geom2d_Curve basisCurve;
Standard_Real offsetValue;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
