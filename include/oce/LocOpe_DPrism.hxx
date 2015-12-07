// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _LocOpe_DPrism_HeaderFile
#define _LocOpe_DPrism_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepFill_Evolved_HeaderFile
#include <BRepFill_Evolved.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopoDS_Face_HeaderFile
#include <TopoDS_Face.hxx>
#endif
#ifndef _TopoDS_Wire_HeaderFile
#include <TopoDS_Wire.hxx>
#endif
#ifndef _TopoDS_Edge_HeaderFile
#include <TopoDS_Edge.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColGeom_SequenceOfCurve_HeaderFile
#include <TColGeom_SequenceOfCurve.hxx>
#endif
#ifndef _TopTools_DataMapOfShapeListOfShape_HeaderFile
#include <TopTools_DataMapOfShapeListOfShape.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
class Standard_NoSuchObject;
class Standard_DomainError;
class StdFail_NotDone;
class TopoDS_Face;
class TopoDS_Shape;
class TopTools_ListOfShape;
class TColGeom_SequenceOfCurve;
class Geom_Curve;


//! Defines a  pipe  (near from   Pipe from BRepFill), <br>
//!          with modifications provided for the Pipe feature. <br>
class LocOpe_DPrism  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   LocOpe_DPrism(const TopoDS_Face& Spine,const Standard_Real Height1,const Standard_Real Height2,const Standard_Real Angle);
  
  Standard_EXPORT   LocOpe_DPrism(const TopoDS_Face& Spine,const Standard_Real Height,const Standard_Real Angle);
  
  Standard_EXPORT     Standard_Boolean IsDone() const;
  
  Standard_EXPORT    const TopoDS_Shape& Spine() const;
  
  Standard_EXPORT    const TopoDS_Shape& Profile() const;
  
  Standard_EXPORT    const TopoDS_Shape& FirstShape() const;
  
  Standard_EXPORT    const TopoDS_Shape& LastShape() const;
  
  Standard_EXPORT    const TopoDS_Shape& Shape() const;
  
  Standard_EXPORT    const TopTools_ListOfShape& Shapes(const TopoDS_Shape& S) const;
  
  Standard_EXPORT     void Curves(TColGeom_SequenceOfCurve& SCurves) const;
  
  Standard_EXPORT     Handle_Geom_Curve BarycCurve() const;





protected:





private:

  
  Standard_EXPORT     void IntPerf() ;


BRepFill_Evolved myDPrism;
TopoDS_Shape myRes;
TopoDS_Face mySpine;
TopoDS_Wire myProfile;
TopoDS_Edge myProfile1;
TopoDS_Edge myProfile2;
TopoDS_Edge myProfile3;
Standard_Real myHeight;
TopoDS_Shape myFirstShape;
TopoDS_Shape myLastShape;
TColGeom_SequenceOfCurve myCurvs;
TopTools_DataMapOfShapeListOfShape myMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
