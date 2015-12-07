// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapOfColorMapOfInteger_HeaderFile
#define _MeshVS_DataMapOfColorMapOfInteger_HeaderFile

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
#ifndef _Handle_MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger_HeaderFile
#include <Handle_MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger.hxx>
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
class Quantity_Color;
class TColStd_MapOfInteger;
class MeshVS_ColorHasher;
class MeshVS_DataMapNodeOfDataMapOfColorMapOfInteger;
class MeshVS_DataMapIteratorOfDataMapOfColorMapOfInteger;



class MeshVS_DataMapOfColorMapOfInteger  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   MeshVS_DataMapOfColorMapOfInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     MeshVS_DataMapOfColorMapOfInteger& Assign(const MeshVS_DataMapOfColorMapOfInteger& Other) ;
    MeshVS_DataMapOfColorMapOfInteger& operator =(const MeshVS_DataMapOfColorMapOfInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~MeshVS_DataMapOfColorMapOfInteger()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const Quantity_Color& K,const TColStd_MapOfInteger& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const Quantity_Color& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const Quantity_Color& K) ;
  
  Standard_EXPORT    const TColStd_MapOfInteger& Find(const Quantity_Color& K) const;
   const TColStd_MapOfInteger& operator()(const Quantity_Color& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     TColStd_MapOfInteger& ChangeFind(const Quantity_Color& K) ;
    TColStd_MapOfInteger& operator()(const Quantity_Color& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const Quantity_Color& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const Quantity_Color& K) ;





protected:





private:

  
  Standard_EXPORT   MeshVS_DataMapOfColorMapOfInteger(const MeshVS_DataMapOfColorMapOfInteger& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
