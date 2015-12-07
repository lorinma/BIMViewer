// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPConstruct_DataMapOfPointTransient_HeaderFile
#define _STEPConstruct_DataMapOfPointTransient_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_STEPConstruct_DataMapNodeOfDataMapOfPointTransient_HeaderFile
#include <Handle_STEPConstruct_DataMapNodeOfDataMapOfPointTransient.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class gp_Pnt;
class Standard_Transient;
class STEPConstruct_PointHasher;
class STEPConstruct_DataMapNodeOfDataMapOfPointTransient;
class STEPConstruct_DataMapIteratorOfDataMapOfPointTransient;



class STEPConstruct_DataMapOfPointTransient  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   STEPConstruct_DataMapOfPointTransient(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     STEPConstruct_DataMapOfPointTransient& Assign(const STEPConstruct_DataMapOfPointTransient& Other) ;
    STEPConstruct_DataMapOfPointTransient& operator =(const STEPConstruct_DataMapOfPointTransient& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~STEPConstruct_DataMapOfPointTransient()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const gp_Pnt& K,const Handle(Standard_Transient)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const gp_Pnt& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const gp_Pnt& K) ;
  
  Standard_EXPORT    const Handle_Standard_Transient& Find(const gp_Pnt& K) const;
   const Handle_Standard_Transient& operator()(const gp_Pnt& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_Standard_Transient& ChangeFind(const gp_Pnt& K) ;
    Handle_Standard_Transient& operator()(const gp_Pnt& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const gp_Pnt& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const gp_Pnt& K) ;





protected:





private:

  
  Standard_EXPORT   STEPConstruct_DataMapOfPointTransient(const STEPConstruct_DataMapOfPointTransient& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
