// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BinMPrsStd_HeaderFile
#define _BinMPrsStd_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_BinMDF_ADriverTable_HeaderFile
#include <Handle_BinMDF_ADriverTable.hxx>
#endif
#ifndef _Handle_CDM_MessageDriver_HeaderFile
#include <Handle_CDM_MessageDriver.hxx>
#endif
class BinMDF_ADriverTable;
class CDM_MessageDriver;
class BinMPrsStd_AISPresentationDriver;
class BinMPrsStd_PositionDriver;



class BinMPrsStd  {
public:

  DEFINE_STANDARD_ALLOC

  //! Adds the attribute storage-retrieval driver to <theDriverTable>. <br>
  Standard_EXPORT   static  void AddDrivers(const Handle(BinMDF_ADriverTable)& theDriverTable,const Handle(CDM_MessageDriver)& theMessageDriver) ;





protected:





private:




friend class BinMPrsStd_AISPresentationDriver;
friend class BinMPrsStd_PositionDriver;

};





// other Inline functions and methods (like "C++: function call" methods)


#endif
