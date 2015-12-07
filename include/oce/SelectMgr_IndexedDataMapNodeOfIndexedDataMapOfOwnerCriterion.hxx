// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion_HeaderFile
#define _SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion_HeaderFile
#include <Handle_SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion.hxx>
#endif

#ifndef _Handle_SelectBasics_EntityOwner_HeaderFile
#include <Handle_SelectBasics_EntityOwner.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _SelectMgr_SortCriterion_HeaderFile
#include <SelectMgr_SortCriterion.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
class SelectBasics_EntityOwner;
class SelectMgr_SortCriterion;
class TColStd_MapTransientHasher;
class SelectMgr_IndexedDataMapOfOwnerCriterion;



class SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion : public TCollection_MapNode {

public:

  
      SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion(const Handle(SelectBasics_EntityOwner)& K1,const Standard_Integer K2,const SelectMgr_SortCriterion& I,const TCollection_MapNodePtr& n1,const TCollection_MapNodePtr& n2);
  
        Handle_SelectBasics_EntityOwner& Key1() const;
  
        Standard_Integer& Key2() const;
  
        TCollection_MapNodePtr& Next2() const;
  
        SelectMgr_SortCriterion& Value() const;




  DEFINE_STANDARD_RTTI(SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion)

protected:




private: 


Handle_SelectBasics_EntityOwner myKey1;
Standard_Integer myKey2;
SelectMgr_SortCriterion myValue;
TCollection_MapNodePtr myNext2;


};

#define TheKey Handle_SelectBasics_EntityOwner
#define TheKey_hxx <SelectBasics_EntityOwner.hxx>
#define TheItem SelectMgr_SortCriterion
#define TheItem_hxx <SelectMgr_SortCriterion.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_IndexedDataMapNode SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion
#define TCollection_IndexedDataMapNode_hxx <SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion.hxx>
#define Handle_TCollection_IndexedDataMapNode Handle_SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion
#define TCollection_IndexedDataMapNode_Type_() SelectMgr_IndexedDataMapNodeOfIndexedDataMapOfOwnerCriterion_Type_()
#define TCollection_IndexedDataMap SelectMgr_IndexedDataMapOfOwnerCriterion
#define TCollection_IndexedDataMap_hxx <SelectMgr_IndexedDataMapOfOwnerCriterion.hxx>

#include <TCollection_IndexedDataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_hxx
#undef Handle_TCollection_IndexedDataMapNode
#undef TCollection_IndexedDataMapNode_Type_
#undef TCollection_IndexedDataMap
#undef TCollection_IndexedDataMap_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
