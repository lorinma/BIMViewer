// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepOffsetAPI_NormalProjection_HeaderFile
#define _BRepOffsetAPI_NormalProjection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepAlgo_NormalProjection_HeaderFile
#include <BRepAlgo_NormalProjection.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
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
class Standard_ConstructionError;
class Standard_NoSuchObject;
class StdFail_NotDone;
class TopoDS_Shape;
class TopoDS_Edge;
class TopTools_ListOfShape;


//! A framework to define projection onto a shape <br>
//! according to the normal from each point to be projected. <br>
//! The target shape is a face, and the source shape is an edge or a wire. <br>
//! The target face is considered to be a 2D surface. <br>
class BRepOffsetAPI_NormalProjection  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs an empty framework to define projection on <br>
//! a shape according to the normal from each point to be <br>
//! projected to the shape. <br>
  Standard_EXPORT   BRepOffsetAPI_NormalProjection();
  //!  Constructs a framework to define projection onto the <br>
//! basis shape S according to the normal from each point <br>
//! to be projected from the shape added to this framework by Add. <br>
//! Default parameters of the algorithm: Tol3D = 1.e-04, Tol2D =sqr(tol3d) <br>
//! , InternalContinuity = GeomAbs_C2, MaxDegree = 14, MaxSeg = 16. <br>
  Standard_EXPORT   BRepOffsetAPI_NormalProjection(const TopoDS_Shape& S);
  //! Initializes the empty constructor framework with the shape S. <br>
  Standard_EXPORT     void Init(const TopoDS_Shape& S) ;
  //! Adds the shape ToProj to the framework for calculation <br>
//! of the projection by Compute3d. <br>
//! ToProj is an edge or a wire and will be projected onto the basis shape. <br>
//! Exceptions <br>
//! Standard_ConstructionError if ToProj is not added. <br>
  Standard_EXPORT     void Add(const TopoDS_Shape& ToProj) ;
  //!  Sets the parameters  used  for computation <br>
//!          Tol3 is the requiered  tolerance between the  3d projected <br>
//!          curve  and     its    2d    representation <br>
//!          InternalContinuity  is the order of constraints <br>
//!          used for  approximation <br>
//!          MaxDeg and MaxSeg are the maximum degree and the maximum <br>
//!          number of segment for BSpline resulting of an approximation. <br>
  Standard_EXPORT     void SetParams(const Standard_Real Tol3D,const Standard_Real Tol2D,const GeomAbs_Shape InternalContinuity,const Standard_Integer MaxDegree,const Standard_Integer MaxSeg) ;
  //!  Sets the maximum distance between target shape and <br>
//!  shape to project. If this condition is not satisfied then corresponding <br>
//!  part of solution is discarded. <br>
//!  if MaxDist < 0 then this method does not affect the algorithm <br>
  Standard_EXPORT     void SetMaxDistance(const Standard_Real MaxDist) ;
  //!  Manage  limitation  of  projected  edges. <br>
  Standard_EXPORT     void SetLimit(const Standard_Boolean FaceBoundaries = Standard_True) ;
  //!  Returns true if a 3D curve is computed. If not, false is <br>
//! returned and an initial 3D curve is kept to build the resulting edges. <br>
  Standard_EXPORT     void Compute3d(const Standard_Boolean With3d = Standard_True) ;
  //!  Builds the result of the projection as a compound of <br>
//! wires. Tries to build oriented wires. <br>
  Standard_EXPORT   virtual  void Build() ;
  //! Returns true if the object was correctly built by the shape <br>
//! construction algorithm. <br>
//! If at the construction time of the shape, the algorithm <br>
//! cannot be completed, or the original data is corrupted, <br>
//! IsDone returns false and therefore protects the use of <br>
//! functions to access the result of the construction <br>
//! (typically the Shape function). <br>
  Standard_EXPORT     Standard_Boolean IsDone() const;
  //! Performs the projection. <br>
//! The construction of the result is performed by Build. <br>
//! Exceptions <br>
//! StdFail_NotDone if the projection was not performed. <br>
  Standard_EXPORT    const TopoDS_Shape& Projection() const;
  //! Returns the initial face corresponding to the projected edge E. <br>
//! Exceptions <br>
//! StdFail_NotDone if no face was found. <br>
//! Standard_NoSuchObject if if a face corresponding to <br>
//! E has already been found. <br>
  Standard_EXPORT    const TopoDS_Shape& Couple(const TopoDS_Edge& E) const;
  //! Returns the  list   of shapes generated   from the <br>
//!          shape <S>. <br>
  Standard_EXPORT   virtual const TopTools_ListOfShape& Generated(const TopoDS_Shape& S) ;
  //! Returns the initial edge corresponding to the edge E <br>
//! resulting from the computation of the projection. <br>
//! Exceptions <br>
//! StdFail_NotDone if no edge was found. <br>
//! Standard_NoSuchObject if an edge corresponding to <br>
//! E has already been found. <br>
  Standard_EXPORT    const TopoDS_Shape& Ancestor(const TopoDS_Edge& E) const;
  //! build the result as a list of wire if possible in -- <br>
//!  a first returns a wire only if there is only a wire. <br>
  Standard_EXPORT     Standard_Boolean BuildWire(TopTools_ListOfShape& Liste) const;





protected:





private:



BRepAlgo_NormalProjection myNormalProjector;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
