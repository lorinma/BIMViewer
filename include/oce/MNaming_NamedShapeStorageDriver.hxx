// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MNaming_NamedShapeStorageDriver_HeaderFile
#define _MNaming_NamedShapeStorageDriver_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MNaming_NamedShapeStorageDriver_HeaderFile
#include <Handle_MNaming_NamedShapeStorageDriver.hxx>
#endif

#ifndef _MDF_ASDriver_HeaderFile
#include <MDF_ASDriver.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Type_HeaderFile
#include <Handle_Standard_Type.hxx>
#endif
#ifndef _Handle_PDF_Attribute_HeaderFile
#include <Handle_PDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_MDF_SRelocationTable_HeaderFile
#include <Handle_MDF_SRelocationTable.hxx>
#endif
class CDM_MessageDriver;
class Standard_Type;
class PDF_Attribute;
class TDF_Attribute;
class MDF_SRelocationTable;



class MNaming_NamedShapeStorageDriver : public MDF_ASDriver {

public:

  
  Standard_EXPORT   MNaming_NamedShapeStorageDriver(const Handle(CDM_MessageDriver)& theMessageDriver);
  //! Returns the version number from which the driver <br>
//!          is available: 0. <br>
  Standard_EXPORT     Standard_Integer VersionNumber() const;
  //! Returns the type: NamedShape from PNaming. <br>
  Standard_EXPORT     Handle_Standard_Type SourceType() const;
  
  Standard_EXPORT     Handle_PDF_Attribute NewEmpty() const;
  
  Standard_EXPORT     void Paste(const Handle(TDF_Attribute)& Source,const Handle(PDF_Attribute)& Target,const Handle(MDF_SRelocationTable)& RelocTable) const;




  DEFINE_STANDARD_RTTI(MNaming_NamedShapeStorageDriver)

protected:




private: 




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
