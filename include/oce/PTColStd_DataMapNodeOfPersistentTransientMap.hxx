// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PTColStd_DataMapNodeOfPersistentTransientMap_HeaderFile
#define _PTColStd_DataMapNodeOfPersistentTransientMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_PTColStd_DataMapNodeOfPersistentTransientMap_HeaderFile
#include <Handle_PTColStd_DataMapNodeOfPersistentTransientMap.hxx>
#endif

#ifndef _Handle_Standard_Persistent_HeaderFile
#include <Handle_Standard_Persistent.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class Standard_Persistent;
class Standard_Transient;
class PTColStd_MapPersistentHasher;
class PTColStd_PersistentTransientMap;
class PTColStd_DataMapIteratorOfPersistentTransientMap;



class PTColStd_DataMapNodeOfPersistentTransientMap : public TCollection_MapNode {

public:

  
      PTColStd_DataMapNodeOfPersistentTransientMap(const Handle(Standard_Persistent)& K,const Handle(Standard_Transient)& I,const TCollection_MapNodePtr& n);
  
        Handle_Standard_Persistent& Key() const;
  
        Handle_Standard_Transient& Value() const;




  DEFINE_STANDARD_RTTI(PTColStd_DataMapNodeOfPersistentTransientMap)

protected:




private: 


Handle_Standard_Persistent myKey;
Handle_Standard_Transient myValue;


};

#define TheKey Handle_Standard_Persistent
#define TheKey_hxx <Standard_Persistent.hxx>
#define TheItem Handle_Standard_Transient
#define TheItem_hxx <Standard_Transient.hxx>
#define Hasher PTColStd_MapPersistentHasher
#define Hasher_hxx <PTColStd_MapPersistentHasher.hxx>
#define TCollection_DataMapNode PTColStd_DataMapNodeOfPersistentTransientMap
#define TCollection_DataMapNode_hxx <PTColStd_DataMapNodeOfPersistentTransientMap.hxx>
#define TCollection_DataMapIterator PTColStd_DataMapIteratorOfPersistentTransientMap
#define TCollection_DataMapIterator_hxx <PTColStd_DataMapIteratorOfPersistentTransientMap.hxx>
#define Handle_TCollection_DataMapNode Handle_PTColStd_DataMapNodeOfPersistentTransientMap
#define TCollection_DataMapNode_Type_() PTColStd_DataMapNodeOfPersistentTransientMap_Type_()
#define TCollection_DataMap PTColStd_PersistentTransientMap
#define TCollection_DataMap_hxx <PTColStd_PersistentTransientMap.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
