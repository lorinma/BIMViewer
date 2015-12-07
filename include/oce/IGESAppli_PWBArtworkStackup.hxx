// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_PWBArtworkStackup_HeaderFile
#define _IGESAppli_PWBArtworkStackup_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESAppli_PWBArtworkStackup_HeaderFile
#include <Handle_IGESAppli_PWBArtworkStackup.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TCollection_HAsciiString_HeaderFile
#include <Handle_TCollection_HAsciiString.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _IGESData_IGESEntity_HeaderFile
#include <IGESData_IGESEntity.hxx>
#endif
class TCollection_HAsciiString;
class TColStd_HArray1OfInteger;
class Standard_OutOfRange;


//! defines PWBArtworkStackup, Type <406> Form <25> <br>
//!          in package IGESAppli <br>
//!          Used to communicate which exchange file levels are to <br>
//!          be combined in order to create the artwork for a <br>
//!          printed wire board (PWB). This property should be <br>
//!          attached to the entity defining the printed wire <br>
//!          assembly (PWA) or if no such entity exists, then the <br>
//!          property should stand alone in the file. <br>
class IGESAppli_PWBArtworkStackup : public IGESData_IGESEntity {

public:

  
  Standard_EXPORT   IGESAppli_PWBArtworkStackup();
  //! This method is used to set the fields of the class <br>
//!           PWBArtworkStackup <br>
//!       - nbPropVal    : number of property values <br>
//!       - anArtIdent   : Artwork Stackup Identification <br>
//!       - allLevelNums : Level Numbers <br>
  Standard_EXPORT     void Init(const Standard_Integer nbPropVal,const Handle(TCollection_HAsciiString)& anArtIdent,const Handle(TColStd_HArray1OfInteger)& allLevelNums) ;
  //! returns number of property values <br>
  Standard_EXPORT     Standard_Integer NbPropertyValues() const;
  //! returns Artwork Stackup Identification <br>
  Standard_EXPORT     Handle_TCollection_HAsciiString Identification() const;
  //! returns total number of Level Numbers <br>
  Standard_EXPORT     Standard_Integer NbLevelNumbers() const;
  //! returns Level Number <br>
//! raises exception if Index <= 0 or Index > NbLevelNumbers <br>
  Standard_EXPORT     Standard_Integer LevelNumber(const Standard_Integer Index) const;




  DEFINE_STANDARD_RTTI(IGESAppli_PWBArtworkStackup)

protected:




private: 


Standard_Integer theNbPropertyValues;
Handle_TCollection_HAsciiString theArtworkStackupIdent;
Handle_TColStd_HArray1OfInteger theLevelNumbers;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
