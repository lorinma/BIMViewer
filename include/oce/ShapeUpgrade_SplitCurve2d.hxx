// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ShapeUpgrade_SplitCurve2d_HeaderFile
#define _ShapeUpgrade_SplitCurve2d_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_ShapeUpgrade_SplitCurve2d_HeaderFile
#include <Handle_ShapeUpgrade_SplitCurve2d.hxx>
#endif

#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_TColGeom2d_HArray1OfCurve_HeaderFile
#include <Handle_TColGeom2d_HArray1OfCurve.hxx>
#endif
#ifndef _ShapeUpgrade_SplitCurve_HeaderFile
#include <ShapeUpgrade_SplitCurve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Geom2d_Curve;
class TColGeom2d_HArray1OfCurve;


//! Splits a 2d curve with a criterion. <br>
class ShapeUpgrade_SplitCurve2d : public ShapeUpgrade_SplitCurve {

public:

  //! Empty constructor. <br>
  Standard_EXPORT   ShapeUpgrade_SplitCurve2d();
  //! Initializes with pcurve with its first and last parameters. <br>
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C) ;
  //! Initializes with pcurve with its parameters. <br>
  Standard_EXPORT     void Init(const Handle(Geom2d_Curve)& C,const Standard_Real First,const Standard_Real Last) ;
  //! If Segment is True, the result is composed with <br>
//!  segments of the curve bounded by the SplitValues.  If <br>
//!  Segment is False, the result is composed with trimmed <br>
//!  Curves all based on the same complete curve. <br>
//! <br>
  Standard_EXPORT   virtual  void Build(const Standard_Boolean Segment) ;
  
  Standard_EXPORT    const Handle_TColGeom2d_HArray1OfCurve& GetCurves() const;




  DEFINE_STANDARD_RTTI(ShapeUpgrade_SplitCurve2d)

protected:


Handle_Geom2d_Curve myCurve;
Handle_TColGeom2d_HArray1OfCurve myResultingCurves;


private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
