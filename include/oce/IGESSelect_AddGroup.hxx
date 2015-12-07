// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_AddGroup_HeaderFile
#define _IGESSelect_AddGroup_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_AddGroup_HeaderFile
#include <Handle_IGESSelect_AddGroup.hxx>
#endif

#ifndef _IGESSelect_ModelModifier_HeaderFile
#include <IGESSelect_ModelModifier.hxx>
#endif
#ifndef _Handle_IGESData_IGESModel_HeaderFile
#include <Handle_IGESData_IGESModel.hxx>
#endif
class IFSelect_ContextModif;
class IGESData_IGESModel;
class Interface_CopyTool;
class TCollection_AsciiString;


//! Adds a Group to contain the entities designated by the <br>
//!           Selection. If no Selection is given, nothing is done <br>
class IGESSelect_AddGroup : public IGESSelect_ModelModifier {

public:

  //! Creates an AddGroup <br>
  Standard_EXPORT   IGESSelect_AddGroup();
  //! Specific action : Adds a new group <br>
  Standard_EXPORT     void Performing(IFSelect_ContextModif& ctx,const Handle(IGESData_IGESModel)& target,Interface_CopyTool& TC) const;
  //! Returns a text which is <br>
//!           "Add Group" <br>
  Standard_EXPORT     TCollection_AsciiString Label() const;




  DEFINE_STANDARD_RTTI(IGESSelect_AddGroup)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
