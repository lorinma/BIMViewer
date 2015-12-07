// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTopoDS_Shape1_HeaderFile
#define _PTopoDS_Shape1_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_PTopoDS_TShape1_HeaderFile
#include <Handle_PTopoDS_TShape1.hxx>
#endif
#ifndef _PTopLoc_Location_HeaderFile
#include <PTopLoc_Location.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _Standard_Storable_HeaderFile
#include <Standard_Storable.hxx>
#endif
#ifndef _Standard_PrimitiveTypes_HeaderFile
#include <Standard_PrimitiveTypes.hxx>
#endif
class PTopoDS_TShape1;
class PTopLoc_Location;


Standard_EXPORT const Handle(Standard_Type)& STANDARD_TYPE(PTopoDS_Shape1);

//! The PTopoDS_Shape1 is the Persistent view of a TopoDS_Shape. <br>
//! <br>
//!  a  Shape1 contains : <br>
//! <br>
//!          - a reference to a TShape1. <br>
//! <br>
//!          - a Location  to put the TShape1 in  a local coordinate <br>
//!          system. <br>
//! <br>
//!          - an Orientation. <br>
//! <br>
//!          It inherits from ExternShareable, so that it can be shared <br>
//!          by other objects located outside the container. <br>
class PTopoDS_Shape1  {

public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   PTopoDS_Shape1();
  
  Standard_EXPORT     void Nullify() ;
  
  Standard_EXPORT    const Handle_PTopoDS_TShape1& TShape() const;
  
  Standard_EXPORT     void TShape(const Handle(PTopoDS_TShape1)& T) ;
  
  Standard_EXPORT     PTopLoc_Location Location() const;
  
  Standard_EXPORT     void Location(const PTopLoc_Location& L) ;
  
  Standard_EXPORT     TopAbs_Orientation Orientation() const;
  
  Standard_EXPORT     void Orientation(const TopAbs_Orientation O) ;
    Handle(PTopoDS_TShape1) _CSFDB_GetPTopoDS_Shape1myTShape() const { return myTShape; }
    void _CSFDB_SetPTopoDS_Shape1myTShape(const Handle(PTopoDS_TShape1)& p) { myTShape = p; }
    const PTopLoc_Location& _CSFDB_GetPTopoDS_Shape1myLocation() const { return myLocation; }
    TopAbs_Orientation _CSFDB_GetPTopoDS_Shape1myOrient() const { return myOrient; }
    void _CSFDB_SetPTopoDS_Shape1myOrient(const TopAbs_Orientation p) { myOrient = p; }



protected:




private: 


Handle_PTopoDS_TShape1 myTShape;
PTopLoc_Location myLocation;
TopAbs_Orientation myOrient;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
