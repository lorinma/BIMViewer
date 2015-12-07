// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dAPI_ProjectPointOnCurve_HeaderFile
#define _Geom2dAPI_ProjectPointOnCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Extrema_ExtPC2d_HeaderFile
#include <Extrema_ExtPC2d.hxx>
#endif
#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Quantity_Parameter_HeaderFile
#include <Quantity_Parameter.hxx>
#endif
#ifndef _Quantity_Length_HeaderFile
#include <Quantity_Length.hxx>
#endif
class Standard_OutOfRange;
class StdFail_NotDone;
class gp_Pnt2d;
class Geom2d_Curve;
class Extrema_ExtPC2d;



//! This class implements methods for computing all the orthogonal <br>
//! projections of a 2D point onto a 2D curve. <br>
class Geom2dAPI_ProjectPointOnCurve  {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs an empty projector algorithm. Use an Init <br>
//! function to define the point and the curve on which it is going to work. <br>
  Standard_EXPORT   Geom2dAPI_ProjectPointOnCurve();
  //! Create the projection  of a  point  <P> on a curve <br>
//!          <Curve> <br>
  Standard_EXPORT   Geom2dAPI_ProjectPointOnCurve(const gp_Pnt2d& P,const Handle(Geom2d_Curve)& Curve);
  //! Create  the projection  of a point <P>  on a curve <br>
//!          <Curve> limited by the two   points of parameter Umin and Usup. <br>
//!    Warning <br>
//! Use the function NbPoints to obtain the number of solutions. If <br>
//! projection fails, NbPoints returns 0. <br>
  Standard_EXPORT   Geom2dAPI_ProjectPointOnCurve(const gp_Pnt2d& P,const Handle(Geom2d_Curve)& Curve,const Quantity_Parameter Umin,const Quantity_Parameter Usup);
  //! Initializes this algorithm with the given arguments, and <br>
//! computes the orthogonal  projections  of a  point  <P> on a curve <Curve> <br>
  Standard_EXPORT     void Init(const gp_Pnt2d& P,const Handle(Geom2d_Curve)& Curve) ;
  //! Initializes this algorithm with the given arguments, and <br>
//! computes the orthogonal projections of the point P onto the portion <br>
//! of the curve Curve limited by the two points of parameter Umin and Usup. <br>
  Standard_EXPORT     void Init(const gp_Pnt2d& P,const Handle(Geom2d_Curve)& Curve,const Quantity_Parameter Umin,const Quantity_Parameter Usup) ;
  //! return the number of of computed <br>
//! orthogonal projectionn points. <br>
  Standard_EXPORT     Standard_Integer NbPoints() const;
Standard_EXPORT operator Standard_Integer() const;
  //! Returns the orthogonal projection <br>
//! on the curve. Index is a number of a computed point. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where <br>
//! NbPoints is the number of solution points. <br>
  Standard_EXPORT     gp_Pnt2d Point(const Standard_Integer Index) const;
  //! Returns the parameter on the curve <br>
//! of a point which is the orthogonal projection. Index is a number of a <br>
//! computed projected point. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where <br>
//! NbPoints is the number of solution points. <br>
  Standard_EXPORT     Quantity_Parameter Parameter(const Standard_Integer Index) const;
  //! Returns the parameter on the curve <br>
//! of a point which is the orthogonal projection. Index is a number of a <br>
//! computed projected point. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where <br>
//! NbPoints is the number of solution points <br>
  Standard_EXPORT     void Parameter(const Standard_Integer Index,Quantity_Parameter& U) const;
  //! Computes the distance between the <br>
//! point and its computed orthogonal projection on the curve. Index is a <br>
//! number of computed projected point. <br>
//! Exceptions <br>
//! Standard_OutOfRange if Index is not in the range [ 1,NbPoints ], where <br>
//! NbPoints is the number of solution points. <br>
  Standard_EXPORT     Quantity_Length Distance(const Standard_Integer Index) const;
  //!  Returns the nearest orthogonal projection of the point on the curve. <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm fails. <br>
  Standard_EXPORT     gp_Pnt2d NearestPoint() const;
Standard_EXPORT operator gp_Pnt2d() const;
  //! Returns the parameter on the curve <br>
//! of the nearest orthogonal projection of the point. <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm fails. <br>
  Standard_EXPORT     Quantity_Parameter LowerDistanceParameter() const;
  //! Computes the distance between the <br>
//! point and its nearest orthogonal projection on the curve. <br>
//! Exceptions <br>
//! StdFail_NotDone if this algorithm fails. <br>
  Standard_EXPORT     Quantity_Length LowerDistance() const;
Standard_EXPORT operator Standard_Real() const;
  //! return the algorithmic object from Extrema <br>
       const Extrema_ExtPC2d& Extrema() const;





protected:





private:



Standard_Boolean myIsDone;
Standard_Integer myIndex;
Extrema_ExtPC2d myExtPC;
Geom2dAdaptor_Curve myC;


};


#include <Geom2dAPI_ProjectPointOnCurve.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
