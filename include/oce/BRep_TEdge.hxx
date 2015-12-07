// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRep_TEdge_HeaderFile
#define _BRep_TEdge_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRep_TEdge_HeaderFile
#include <Handle_BRep_TEdge.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _BRep_ListOfCurveRepresentation_HeaderFile
#include <BRep_ListOfCurveRepresentation.hxx>
#endif
#ifndef _TopoDS_TEdge_HeaderFile
#include <TopoDS_TEdge.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TopoDS_TShape_HeaderFile
#include <Handle_TopoDS_TShape.hxx>
#endif
class BRep_ListOfCurveRepresentation;
class TopoDS_TShape;


//! The TEdge from BRep is  inherited from  the  TEdge <br>
//!          from TopoDS. It contains the geometric data. <br>
//! <br>
//!          The TEdge contains : <br>
//! <br>
//!           * A tolerance. <br>
//! <br>
//!           * A same parameter flag. <br>
//! <br>
//!           * A same range flag. <br>
//! <br>
//!           * A Degenerated flag. <br>
//! <br>
//!           *  A  list   of curve representation. <br>
class BRep_TEdge : public TopoDS_TEdge {

public:

  //! Creates an empty TEdge. <br>
  Standard_EXPORT   BRep_TEdge();
  
        Standard_Real Tolerance() const;
  
        void Tolerance(const Standard_Real T) ;
  //! Sets the tolerance  to the   max  of <T>  and  the <br>
//!          current  tolerance. <br>
//! <br>
        void UpdateTolerance(const Standard_Real T) ;
  
  Standard_EXPORT     Standard_Boolean SameParameter() const;
  
  Standard_EXPORT     void SameParameter(const Standard_Boolean S) ;
  
  Standard_EXPORT     Standard_Boolean SameRange() const;
  
  Standard_EXPORT     void SameRange(const Standard_Boolean S) ;
  
  Standard_EXPORT     Standard_Boolean Degenerated() const;
  
  Standard_EXPORT     void Degenerated(const Standard_Boolean S) ;
  
       const BRep_ListOfCurveRepresentation& Curves() const;
  
        BRep_ListOfCurveRepresentation& ChangeCurves() ;
  //! Returns a copy  of the  TShape  with no sub-shapes. <br>
  Standard_EXPORT     Handle_TopoDS_TShape EmptyCopy() const;




  DEFINE_STANDARD_RTTI(BRep_TEdge)

protected:




private: 


Standard_Real myTolerance;
Standard_Integer myFlags;
BRep_ListOfCurveRepresentation myCurves;


};


#include <BRep_TEdge.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
