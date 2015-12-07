// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepBuilderAPI_MakeVertex_HeaderFile
#define _BRepBuilderAPI_MakeVertex_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepLib_MakeVertex_HeaderFile
#include <BRepLib_MakeVertex.hxx>
#endif
#ifndef _BRepBuilderAPI_MakeShape_HeaderFile
#include <BRepBuilderAPI_MakeShape.hxx>
#endif
class gp_Pnt;
class TopoDS_Vertex;


//! Describes functions to build BRepBuilder vertices directly <br>
//! from 3D geometric points. A vertex built using a <br>
//! MakeVertex object is only composed of a 3D point and <br>
//! a default precision value (Precision::Confusion()). <br>
//! Later on, 2D representations can be added, for example, <br>
//! when inserting a vertex in an edge. <br>
//! A MakeVertex object provides a framework for: <br>
//! -   defining and implementing the construction of a vertex, and <br>
//! -   consulting the result. <br>
class BRepBuilderAPI_MakeVertex  : public BRepBuilderAPI_MakeShape {
public:

  DEFINE_STANDARD_ALLOC

  //! Constructs a vertex from point P. <br>
//! Example create a vertex from a 3D point. <br>
//! gp_Pnt P(0,0,10); <br>
//! TopoDS_Vertex V = BRepBuilderAPI_MakeVertex(P); <br>
  Standard_EXPORT   BRepBuilderAPI_MakeVertex(const gp_Pnt& P);
  //! Returns the constructed vertex. <br>
  Standard_EXPORT    const TopoDS_Vertex& Vertex() const;
Standard_EXPORT operator TopoDS_Vertex() const;





protected:





private:



BRepLib_MakeVertex myMakeVertex;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
