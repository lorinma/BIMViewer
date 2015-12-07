// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_MapOfAsciiString_HeaderFile
#define _Draw_MapOfAsciiString_HeaderFile

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
#ifndef _Handle_Draw_IndexedMapNodeOfMapOfAsciiString_HeaderFile
#include <Handle_Draw_IndexedMapNodeOfMapOfAsciiString.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_DomainError;
class Standard_OutOfRange;
class TCollection_AsciiString;
class Draw_IndexedMapNodeOfMapOfAsciiString;



class Draw_MapOfAsciiString  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Draw_MapOfAsciiString(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     Draw_MapOfAsciiString& Assign(const Draw_MapOfAsciiString& Other) ;
    Draw_MapOfAsciiString& operator =(const Draw_MapOfAsciiString& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~Draw_MapOfAsciiString()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Integer Add(const TCollection_AsciiString& K) ;
  
  Standard_EXPORT     void Substitute(const Standard_Integer I,const TCollection_AsciiString& K) ;
  
  Standard_EXPORT     void RemoveLast() ;
  
  Standard_EXPORT     Standard_Boolean Contains(const TCollection_AsciiString& K) const;
  
  Standard_EXPORT    const TCollection_AsciiString& FindKey(const Standard_Integer I) const;
   const TCollection_AsciiString& operator ()(const Standard_Integer I) const
{
  return FindKey(I);
}
  
  Standard_EXPORT     Standard_Integer FindIndex(const TCollection_AsciiString& K) const;





protected:





private:

  
  Standard_EXPORT   Draw_MapOfAsciiString(const Draw_MapOfAsciiString& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif