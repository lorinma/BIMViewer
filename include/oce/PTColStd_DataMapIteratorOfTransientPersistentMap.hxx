// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DataMapIteratorOfTransientPersistentMap_HeaderFile
#define _PTColStd_DataMapIteratorOfTransientPersistentMap_HeaderFile

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
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Handle_PTColStd_DataMapNodeOfTransientPersistentMap_HeaderFile
#include <Handle_PTColStd_DataMapNodeOfTransientPersistentMap.hxx>
#endif
class Standard_NoSuchObject;
class Standard_Transient;
class Standard_Persistent;
class TColStd_MapTransientHasher;
class PTColStd_TransientPersistentMap;
class PTColStd_DataMapNodeOfTransientPersistentMap;



class PTColStd_DataMapIteratorOfTransientPersistentMap  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   PTColStd_DataMapIteratorOfTransientPersistentMap();
  
  Standard_EXPORT   PTColStd_DataMapIteratorOfTransientPersistentMap(const PTColStd_TransientPersistentMap& aMap);
  
  Standard_EXPORT     void Initialize(const PTColStd_TransientPersistentMap& aMap) ;
  
  Standard_EXPORT    const Handle_Standard_Transient& Key() const;
  
  Standard_EXPORT    const Handle_Standard_Persistent& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
