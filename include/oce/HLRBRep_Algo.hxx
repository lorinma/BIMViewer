// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _HLRBRep_Algo_HeaderFile
#define _HLRBRep_Algo_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_HLRBRep_Algo_HeaderFile
#include <Handle_HLRBRep_Algo.hxx>
#endif

#ifndef _HLRBRep_InternalAlgo_HeaderFile
#include <HLRBRep_InternalAlgo.hxx>
#endif
#ifndef _Handle_MMgt_TShared_HeaderFile
#include <Handle_MMgt_TShared.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TopoDS_Shape;
class MMgt_TShared;


//! A framework to compute a shape as seen in a projection plane. This is done by <br>
//! calculating the visible and the hidden parts of the shape. <br>
//! HLRBRep_Algo works with three types of entity: <br>
//! -   shapes to be visualized <br>
//! -   edges in these shapes (these edges are <br>
//! the basic entities which will be visualized or hidden), and <br>
//! -   faces in these shapes which hide the edges. <br>
//!   HLRBRep_Algo is based on the principle of comparing each edge of the shape to be <br>
//! visualized with each of its faces, and calculating the visible and the hidden parts of each edge. <br>
//! For a given projection, HLRBRep_Algo calculates a set of lines characteristic of the <br>
//! object being represented. It is also used in conjunction with the <br>
//! HLRBRep_HLRToShape extraction utilities, which reconstruct a new, simplified shape <br>
//! from a selection of calculation results. This new shape is made up of edges, which <br>
//! represent the shape visualized in the projection. <br>
//! HLRBRep_Algo takes the shape itself into account whereas HLRBRep_PolyAlgo <br>
//! works with a polyhedral simplification of the shape. When you use HLRBRep_Algo, you <br>
//! obtain an exact result, whereas, when you use HLRBRep_PolyAlgo, you reduce <br>
//! computation time but obtain polygonal segments. In the case of complicated <br>
//! shapes, HLRBRep_Algo may be time-consuming. <br>
//! An HLRBRep_Algo object provides a framework for: <br>
//! -   defining the point of view <br>
//! -   identifying the shape or shapes to be visualized <br>
//! -   calculating the outlines <br>
//! -   calculating the visible and hidden lines of the shape. <br>
//!   Warning <br>
//! -   Superimposed lines are not eliminated by this algorithm. <br>
//! -   There must be no unfinished objects inside the shape you wish to visualize. <br>
//! -   Points are not treated. <br>
//! -   Note that this is not the sort of algorithm used in generating shading, which <br>
//!   calculates the visible and hidden parts of each face in a shape to be visualized by <br>
//!   comparing each face in the shape with every other face in the same shape. <br>
class HLRBRep_Algo : public HLRBRep_InternalAlgo {

public:

  //! Constructs an empty framework for the <br>
//! calculation of visible and hidden lines of a shape in a projection. <br>
//! Use the function: <br>
//! -   Projector to define the point of view <br>
//! -   Add to select the shape or shapes to be visualized <br>
//! -   Update to compute the outlines of the shape, and <br>
//! -   Hide to compute the visible and hidden lines of the shape. <br>
  Standard_EXPORT   HLRBRep_Algo();
  
  Standard_EXPORT   HLRBRep_Algo(const Handle(HLRBRep_Algo)& A);
  //! add the Shape <S>. <br>
  Standard_EXPORT     void Add(const TopoDS_Shape& S,const Handle(MMgt_TShared)& SData,const Standard_Integer nbIso = 0) ;
  //!  Adds the shape S to this framework, and <br>
//! specifies the number of isoparameters nbiso desired in visualizing S. <br>
//! You may add as many shapes as you wish. Use the function Add once for each shape. <br>
  Standard_EXPORT     void Add(const TopoDS_Shape& S,const Standard_Integer nbIso = 0) ;
  //! return  the index  of  the  Shape <S>  and <br>
//!          return 0 if the Shape <S> is not found. <br>
  Standard_EXPORT     Standard_Integer Index(const TopoDS_Shape& S) ;
  //! nullify all the results of OutLiner from HLRTopoBRep. <br>
  Standard_EXPORT     void OutLinedShapeNullify() ;




  DEFINE_STANDARD_RTTI(HLRBRep_Algo)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
