// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_OrientedShapeMapHasher_HeaderFile
#define _TopTools_OrientedShapeMapHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class TopoDS_Shape;



class TopTools_OrientedShapeMapHasher  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a HasCode value  for  the  Key <K>  in the <br>
//!          range 0..Upper. <br>
//! <br>
      static  Standard_Integer HashCode(const TopoDS_Shape& S,const Standard_Integer Upper) ;
  //! Returns True when the two keys are equal. Two same <br>
//!          keys must have the same hashcode,  the contrary is <br>
//!          not necessary. <br>
//! <br>
      static  Standard_Boolean IsEqual(const TopoDS_Shape& S1,const TopoDS_Shape& S2) ;





protected:





private:





};


#include <TopTools_OrientedShapeMapHasher.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
