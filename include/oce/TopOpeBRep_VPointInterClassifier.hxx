// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRep_VPointInterClassifier_HeaderFile
#define _TopOpeBRep_VPointInterClassifier_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _BRepClass_FaceClassifier_HeaderFile
#include <BRepClass_FaceClassifier.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRep_VPointInter;
class TopOpeBRep_PointClassifier;



class TopOpeBRep_VPointInterClassifier  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRep_VPointInterClassifier();
  //! compute position of VPoint <VP> regarding with face <F>. <br>
//! <ShapeIndex> (= 1,2) indicates which (u,v) point of <VP> is used. <br>
//! when state is ON, set VP.EdgeON() with the edge containing <VP> <br>
//! and associated parameter. <br>
//! returns state of VP on ShapeIndex. <br>
  Standard_EXPORT     TopAbs_State VPointPosition(const TopoDS_Shape& F,TopOpeBRep_VPointInter& VP,const Standard_Integer ShapeIndex,TopOpeBRep_PointClassifier& PC,const Standard_Boolean AssumeINON,const Standard_Real Tol) ;
  //! returns the edge containing the VPoint <VP> used in the <br>
//! last VPointPosition() call. Edge is defined if the state previously <br>
//! computed is ON, else Edge is a null shape. <br>
  Standard_EXPORT    const TopoDS_Shape& Edge() const;
  //! returns the parameter of the VPoint <VP> on Edge() <br>
  Standard_EXPORT     Standard_Real EdgeParameter() const;





protected:





private:



BRepClass_FaceClassifier mySlowFaceClassifier;
TopAbs_State myState;
TopoDS_Shape myNullShape;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
