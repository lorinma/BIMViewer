// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESDimen_AngularDimension_HeaderFile
#define _IGESDimen_AngularDimension_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESDimen_AngularDimension_HeaderFile
#include <Handle_IGESDimen_AngularDimension.hxx>
#endif

#ifndef _Handle_IGESDimen_GeneralNote_HeaderFile
#include <Handle_IGESDimen_GeneralNote.hxx>
#endif
#ifndef _Handle_IGESDimen_WitnessLine_HeaderFile
#include <Handle_IGESDimen_WitnessLine.hxx>
#endif
#ifndef _gp_XY_HeaderFile
#include <gp_XY.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_IGESDimen_LeaderArrow_HeaderFile
#include <Handle_IGESDimen_LeaderArrow.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IGESDimen_GeneralNote;
class IGESDimen_WitnessLine;
class IGESDimen_LeaderArrow;
class gp_XY;
class gp_Pnt2d;


//! defines AngularDimension, Type <202> Form <0> <br>
//!          in package IGESDimen <br>
//!          Used to dimension angles <br>
class IGESDimen_AngularDimension : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESDimen_AngularDimension();
  //! This method is used to set the fields of the class <br>
//!           AngularDimension <br>
//!       - aNote         : General Note Entity <br>
//!       - aLine         : First Witness Line Entity or Null <br>
//!                             Handle <br>
//!       - anotherLine   : Second Witness Line Entity or Null <br>
//!                             Handle <br>
//!       - aVertex       : Coordinates of vertex point <br>
//!       - aRadius       : Radius of leader arcs <br>
//!       - aLeader       : First Leader Entity <br>
//!       - anotherLeader : Second Leader Entity <br>
  Standard_EXPORT     void Init(const Handle(IGESDimen_GeneralNote)& aNote,const Handle(IGESDimen_WitnessLine)& aLine,const Handle(IGESDimen_WitnessLine)& anotherLine,const gp_XY& aVertex,const Standard_Real aRadius,const Handle(IGESDimen_LeaderArrow)& aLeader,const Handle(IGESDimen_LeaderArrow)& anotherLeader) ;
  //! returns the General Note Entity of the Dimension. <br>
  Standard_EXPORT     Handle_IGESDimen_GeneralNote Note() const;
  //! returns False if theFirstWitnessLine is Null Handle. <br>
  Standard_EXPORT     Standard_Boolean HasFirstWitnessLine() const;
  //! returns the First Witness Line Entity or Null Handle. <br>
  Standard_EXPORT     Handle_IGESDimen_WitnessLine FirstWitnessLine() const;
  //! returns False if theSecondWitnessLine is Null Handle. <br>
  Standard_EXPORT     Standard_Boolean HasSecondWitnessLine() const;
  //! returns the Second Witness Line Entity or Null Handle. <br>
  Standard_EXPORT     Handle_IGESDimen_WitnessLine SecondWitnessLine() const;
  //! returns the co-ordinates of the Vertex point as Pnt2d from gp. <br>
  Standard_EXPORT     gp_Pnt2d Vertex() const;
  //! returns the co-ordinates of the Vertex point as Pnt2d from gp <br>
//! after Transformation. (Z = 0.0 for Transformation) <br>
  Standard_EXPORT     gp_Pnt2d TransformedVertex() const;
  //! returns the Radius of the Leader arcs. <br>
  Standard_EXPORT     Standard_Real Radius() const;
  //! returns the First Leader Entity. <br>
  Standard_EXPORT     Handle_IGESDimen_LeaderArrow FirstLeader() const;
  //! returns the Second Leader Entity. <br>
  Standard_EXPORT     Handle_IGESDimen_LeaderArrow SecondLeader() const;




  DEFINE_STANDARD_RTTI(IGESDimen_AngularDimension)

protected:




private: 


Handle_IGESDimen_GeneralNote theNote;
Handle_IGESDimen_WitnessLine theFirstWitnessLine;
Handle_IGESDimen_WitnessLine theSecondWitnessLine;
gp_XY theVertex;
Standard_Real theRadius;
Handle_IGESDimen_LeaderArrow theFirstLeader;
Handle_IGESDimen_LeaderArrow theSecondLeader;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
