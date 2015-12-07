// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESData_IGESReaderData_HeaderFile
#define _IGESData_IGESReaderData_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IGESData_IGESReaderData_HeaderFile
#include <Handle_IGESData_IGESReaderData.hxx>
#endif

#ifndef _IGESData_IGESType_HeaderFile
#include <IGESData_IGESType.hxx>
#endif
#ifndef _Handle_TColStd_HSequenceOfHAsciiString_HeaderFile
#include <Handle_TColStd_HSequenceOfHAsciiString.hxx>
#endif
#ifndef _Handle_Interface_ParamSet_HeaderFile
#include <Handle_Interface_ParamSet.hxx>
#endif
#ifndef _IGESData_GlobalSection_HeaderFile
#include <IGESData_GlobalSection.hxx>
#endif
#ifndef _IGESData_Array1OfDirPart_HeaderFile
#include <IGESData_Array1OfDirPart.hxx>
#endif
#ifndef _IGESData_ReadStage_HeaderFile
#include <IGESData_ReadStage.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Interface_FileReaderData_HeaderFile
#include <Interface_FileReaderData.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Interface_ParamType_HeaderFile
#include <Interface_ParamType.hxx>
#endif
class TColStd_HSequenceOfHAsciiString;
class Interface_ParamSet;
class Interface_Check;
class IGESData_GlobalSection;
class IGESData_DirPart;
class IGESData_IGESType;


//! specific FileReaderData for IGES <br>
//!           contains header as GlobalSection, and for each Entity, its <br>
//!           directory part as DirPart, list of Parameters as ParamSet <br>
//!           Each Item has a DirPart, plus classically a ParamSet and the <br>
//!           correspondant recognized Entity (inherited from FileReaderData) <br>
//!           Parameters are accessed through specific objects, ParamReaders <br>
class IGESData_IGESReaderData : public Interface_FileReaderData {

public:

  //! creates IGESReaderData correctly dimensionned (for arrays) <br>
//!           <nbe> count of entities, that is, half nb of directory lines <br>
//!           <nbp> : count of parameters <br>
  Standard_EXPORT   IGESData_IGESReaderData(const Standard_Integer nbe,const Standard_Integer nbp);
  //! adds a start line to start section <br>
  Standard_EXPORT     void AddStartLine(const Standard_CString aval) ;
  //! Returns the Start Section in once <br>
  Standard_EXPORT     Handle_TColStd_HSequenceOfHAsciiString StartSection() const;
  //! adds a parameter to global section's parameter list <br>
  Standard_EXPORT     void AddGlobal(const Interface_ParamType atype,const Standard_CString aval) ;
  //! reads header (as GlobalSection) content from the ParamSet <br>
//!           after it has been filled by successive calls to AddGlobal <br>
  Standard_EXPORT     void SetGlobalSection() ;
  //! returns header as GlobalSection <br>
  Standard_EXPORT    const IGESData_GlobalSection& GlobalSection() const;
  //! fills a DirPart, designated by its rank (that is, (N+1)/2 if N <br>
//!           is its first number in section D) <br>
  Standard_EXPORT     void SetDirPart(const Standard_Integer num,const Standard_Integer i1,const Standard_Integer i2,const Standard_Integer i3,const Standard_Integer i4,const Standard_Integer i5,const Standard_Integer i6,const Standard_Integer i7,const Standard_Integer i8,const Standard_Integer i9,const Standard_Integer i10,const Standard_Integer i11,const Standard_Integer i12,const Standard_Integer i13,const Standard_Integer i14,const Standard_Integer i15,const Standard_Integer i16,const Standard_Integer i17,const Standard_CString res1,const Standard_CString res2,const Standard_CString label,const Standard_CString subs) ;
  //! returns DirPart identified by record no (half Dsect number) <br>
  Standard_EXPORT    const IGESData_DirPart& DirPart(const Standard_Integer num) const;
  //! returns values recorded in directory part n0 <num> <br>
  Standard_EXPORT     void DirValues(const Standard_Integer num,Standard_Integer& i1,Standard_Integer& i2,Standard_Integer& i3,Standard_Integer& i4,Standard_Integer& i5,Standard_Integer& i6,Standard_Integer& i7,Standard_Integer& i8,Standard_Integer& i9,Standard_Integer& i10,Standard_Integer& i11,Standard_Integer& i12,Standard_Integer& i13,Standard_Integer& i14,Standard_Integer& i15,Standard_Integer& i16,Standard_Integer& i17,Standard_CString& res1,Standard_CString& res2,Standard_CString& label,Standard_CString& subs) const;
  //! returns "type" and "form" info from a directory part <br>
  Standard_EXPORT     IGESData_IGESType DirType(const Standard_Integer num) const;
  //! Returns count of recorded Entities (i.e. size of Directory) <br>
  Standard_EXPORT   virtual  Standard_Integer NbEntities() const;
  //! determines next suitable record from num; that is num+1 except <br>
//!           for last one which gives 0 <br>
  Standard_EXPORT     Standard_Integer FindNextRecord(const Standard_Integer num) const;
  //! determines reference numbers in EntityNumber fields (called by <br>
//!           SetEntities from IGESReaderTool) <br>
//!           works on "Integer" type Parameters, because IGES does not <br>
//!           distinguish Integer and Entity Refs : every Integer which is <br>
//!           odd and less than twice NbRecords can be an Entity Ref ... <br>
//!           (Ref Number is then (N+1)/2 if N is the Integer Value) <br>
  Standard_EXPORT     void SetEntityNumbers() ;
  //! Returns the recorded Global Check <br>
  Standard_EXPORT     Handle_Interface_Check GlobalCheck() const;
  //! allows to set a default line weight, will be later applied at <br>
//!           load time, on Entities which have no specified line weight <br>
  Standard_EXPORT     void SetDefaultLineWeight(const Standard_Real defw) ;
  //! Returns the recorded Default Line Weight, if there is <br>
//!           (else, returns 0) <br>
  Standard_EXPORT     Standard_Real DefaultLineWeight() const;




  DEFINE_STANDARD_RTTI(IGESData_IGESReaderData)

protected:




private: 


IGESData_IGESType thectyp;
Handle_TColStd_HSequenceOfHAsciiString thestar;
Handle_Interface_ParamSet theparh;
IGESData_GlobalSection thehead;
IGESData_Array1OfDirPart thedirs;
IGESData_ReadStage thestep;
Standard_Real thedefw;
Handle_Interface_Check thechk;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
