// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepTools_NurbsConvertModification_HeaderFile
#define _BRepTools_NurbsConvertModification_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepTools_NurbsConvertModification_HeaderFile
#include <Handle_BRepTools_NurbsConvertModification.hxx>
#endif

#ifndef _TopTools_ListOfShape_HeaderFile
#include <TopTools_ListOfShape.hxx>
#endif
#ifndef _TColStd_ListOfTransient_HeaderFile
#include <TColStd_ListOfTransient.hxx>
#endif
#ifndef _TColStd_IndexedDataMapOfTransientTransient_HeaderFile
#include <TColStd_IndexedDataMapOfTransientTransient.hxx>
#endif
#ifndef _BRepTools_Modification_HeaderFile
#include <BRepTools_Modification.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Geom_Curve_HeaderFile
#include <Handle_Geom_Curve.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
class TopoDS_Face;
class Geom_Surface;
class TopLoc_Location;
class TopoDS_Edge;
class Geom_Curve;
class TopoDS_Vertex;
class gp_Pnt;
class Geom2d_Curve;


//! Defines a modification of the  geometry by a  Trsf <br>
//!          from gp. All methods return True and transform the <br>
//!          geometry. <br>
class BRepTools_NurbsConvertModification : public BRepTools_Modification {

public:

  
  Standard_EXPORT   BRepTools_NurbsConvertModification();
  //! Returns Standard_True  if  the face  <F> has  been <br>
//!          modified.  In this  case, <S> is the new geometric <br>
//!          support of  the  face, <L> the  new location,<Tol> <br>
//!          the new  tolerance.<RevWires> has  to  be set   to <br>
//!          Standard_True   when the modification reverses the <br>
//!          normal of  the   surface.(the wires   have  to  be <br>
//!          reversed).   <RevFace>   has   to   be   set    to <br>
//!          Standard_True if  the orientation  of the modified <br>
//!          face changes in the  shells which contain  it.  -- <br>
//!          Here, <RevFace>  will  return Standard_True if the <br>
//!          -- gp_Trsf is negative. <br>
  Standard_EXPORT     Standard_Boolean NewSurface(const TopoDS_Face& F,Handle(Geom_Surface)& S,TopLoc_Location& L,Standard_Real& Tol,Standard_Boolean& RevWires,Standard_Boolean& RevFace) ;
  //! Returns Standard_True  if  the edge  <E> has  been <br>
//!          modified.  In this case,  <C> is the new geometric <br>
//!          support of the  edge, <L> the  new location, <Tol> <br>
//!          the         new    tolerance.   Otherwise, returns <br>
//!          Standard_False,    and  <C>,  <L>,   <Tol> are not <br>
//!          significant. <br>
  Standard_EXPORT     Standard_Boolean NewCurve(const TopoDS_Edge& E,Handle(Geom_Curve)& C,TopLoc_Location& L,Standard_Real& Tol) ;
  //! Returns  Standard_True if the  vertex <V> has been <br>
//!          modified.  In this  case, <P> is the new geometric <br>
//!          support of the vertex,   <Tol> the new  tolerance. <br>
//!          Otherwise, returns Standard_False, and <P>,  <Tol> <br>
//!          are not significant. <br>
  Standard_EXPORT     Standard_Boolean NewPoint(const TopoDS_Vertex& V,gp_Pnt& P,Standard_Real& Tol) ;
  //! Returns Standard_True if  the edge  <E> has a  new <br>
//!          curve on surface on the face <F>.In this case, <C> <br>
//!          is the new geometric support of  the edge, <L> the <br>
//!          new location, <Tol> the new tolerance. <br>
//!          Otherwise, returns  Standard_False, and <C>,  <L>, <br>
//!          <Tol> are not significant. <br>
  Standard_EXPORT     Standard_Boolean NewCurve2d(const TopoDS_Edge& E,const TopoDS_Face& F,const TopoDS_Edge& NewE,const TopoDS_Face& NewF,Handle(Geom2d_Curve)& C,Standard_Real& Tol) ;
  //! Returns Standard_True if the Vertex  <V> has a new <br>
//!          parameter on the  edge <E>. In  this case,  <P> is <br>
//!          the parameter,    <Tol>  the     new    tolerance. <br>
//!          Otherwise, returns Standard_False, and <P>,  <Tol> <br>
//!          are not significant. <br>
  Standard_EXPORT     Standard_Boolean NewParameter(const TopoDS_Vertex& V,const TopoDS_Edge& E,Standard_Real& P,Standard_Real& Tol) ;
  //! Returns the  continuity of  <NewE> between <NewF1> <br>
//!          and <NewF2>. <br>
//! <br>
//!          <NewE> is the new  edge created from <E>.  <NewF1> <br>
//!          (resp. <NewF2>) is the new  face created from <F1> <br>
//!          (resp. <F2>). <br>
  Standard_EXPORT     GeomAbs_Shape Continuity(const TopoDS_Edge& E,const TopoDS_Face& F1,const TopoDS_Face& F2,const TopoDS_Edge& NewE,const TopoDS_Face& NewF1,const TopoDS_Face& NewF2) ;




  DEFINE_STANDARD_RTTI(BRepTools_NurbsConvertModification)

protected:




private: 


TopTools_ListOfShape myled;
TColStd_ListOfTransient mylcu;
TColStd_IndexedDataMapOfTransientTransient myMap;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
