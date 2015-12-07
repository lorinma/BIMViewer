// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESSelect_SelectBypassSubfigure_HeaderFile
#define _IGESSelect_SelectBypassSubfigure_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESSelect_SelectBypassSubfigure_HeaderFile
#include <Handle_IGESSelect_SelectBypassSubfigure.hxx>
#endif

#ifndef _IFSelect_SelectExplore_HeaderFile
#include <IFSelect_SelectExplore.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
class Interface_InterfaceError;
class Standard_Transient;
class Interface_Graph;
class Interface_EntityIterator;
class TCollection_AsciiString;


//! Selects a list built as follows : <br>
//!           Subfigures correspond to <br>
//!           * Definition (basic : type 308, or Network : type 320) <br>
//!           * Instance (Singular : type 408, or Network : 420, or <br>
//!             patterns : 412,414) <br>
//! <br>
//!           Entities which are not Subfigure are taken as such <br>
//!           For Subfigures Instances, their definition is taken, then <br>
//!           explored itself <br>
//!           For Subfigures Definitions, the list of "Associated Entities" <br>
//!           is explored <br>
//!           Hence, level 0 (D) recursively explores a Subfigure if some of <br>
//!           its Elements are Subfigures. level 1 explores just at first <br>
//!           level (i.e. for an instance, returns its definition) <br>
class IGESSelect_SelectBypassSubfigure : public IFSelect_SelectExplore {

public:

  //! Creates a SelectBypassSubfigure, by default all level <br>
//!           (level = 1 explores at first level) <br>
  Standard_EXPORT   IGESSelect_SelectBypassSubfigure(const Standard_Integer level = 0);
  //! Explores an entity : for a Subfigure, gives its elements <br>
//!           Else, takes the entity itself <br>
  Standard_EXPORT     Standard_Boolean Explore(const Standard_Integer level,const Handle(Standard_Transient)& ent,const Interface_Graph& G,Interface_EntityIterator& explored) const;
  //! Returns a text defining the criterium : "Content of Subfigure" <br>
  Standard_EXPORT     TCollection_AsciiString ExploreLabel() const;




  DEFINE_STANDARD_RTTI(IGESSelect_SelectBypassSubfigure)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
