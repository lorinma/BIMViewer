// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _SelectMgr_SequenceNodeOfSequenceOfFilter_HeaderFile
#define _SelectMgr_SequenceNodeOfSequenceOfFilter_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_SelectMgr_SequenceNodeOfSequenceOfFilter_HeaderFile
#include <Handle_SelectMgr_SequenceNodeOfSequenceOfFilter.hxx>
#endif

#ifndef _Handle_SelectMgr_Filter_HeaderFile
#include <Handle_SelectMgr_Filter.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class SelectMgr_Filter;
class SelectMgr_SequenceOfFilter;



class SelectMgr_SequenceNodeOfSequenceOfFilter : public TCollection_SeqNode {

public:

  
      SelectMgr_SequenceNodeOfSequenceOfFilter(const Handle(SelectMgr_Filter)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_SelectMgr_Filter& Value() const;




  DEFINE_STANDARD_RTTI(SelectMgr_SequenceNodeOfSequenceOfFilter)

protected:




private: 


Handle_SelectMgr_Filter myValue;


};

#define SeqItem Handle_SelectMgr_Filter
#define SeqItem_hxx <SelectMgr_Filter.hxx>
#define TCollection_SequenceNode SelectMgr_SequenceNodeOfSequenceOfFilter
#define TCollection_SequenceNode_hxx <SelectMgr_SequenceNodeOfSequenceOfFilter.hxx>
#define Handle_TCollection_SequenceNode Handle_SelectMgr_SequenceNodeOfSequenceOfFilter
#define TCollection_SequenceNode_Type_() SelectMgr_SequenceNodeOfSequenceOfFilter_Type_()
#define TCollection_Sequence SelectMgr_SequenceOfFilter
#define TCollection_Sequence_hxx <SelectMgr_SequenceOfFilter.hxx>

#include <TCollection_SequenceNode.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
