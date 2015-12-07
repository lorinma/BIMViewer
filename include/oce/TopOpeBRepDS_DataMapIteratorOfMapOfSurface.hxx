// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepDS_DataMapIteratorOfMapOfSurface_HeaderFile
#define _TopOpeBRepDS_DataMapIteratorOfMapOfSurface_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_DataMapNodeOfMapOfSurface_HeaderFile
#include <Handle_TopOpeBRepDS_DataMapNodeOfMapOfSurface.hxx>
#endif
class Standard_NoSuchObject;
class TopOpeBRepDS_SurfaceData;
class TColStd_MapIntegerHasher;
class TopOpeBRepDS_MapOfSurface;
class TopOpeBRepDS_DataMapNodeOfMapOfSurface;



class TopOpeBRepDS_DataMapIteratorOfMapOfSurface  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfMapOfSurface();
  
  Standard_EXPORT   TopOpeBRepDS_DataMapIteratorOfMapOfSurface(const TopOpeBRepDS_MapOfSurface& aMap);
  
  Standard_EXPORT     void Initialize(const TopOpeBRepDS_MapOfSurface& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const TopOpeBRepDS_SurfaceData& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
