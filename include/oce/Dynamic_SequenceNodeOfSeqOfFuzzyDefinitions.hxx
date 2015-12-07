// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions_HeaderFile
#define _Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions_HeaderFile
#include <Handle_Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions.hxx>
#endif

#ifndef _Handle_Dynamic_FuzzyDefinition_HeaderFile
#include <Handle_Dynamic_FuzzyDefinition.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Dynamic_FuzzyDefinition;
class Dynamic_SeqOfFuzzyDefinitions;



class Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions : public TCollection_SeqNode {

public:

  
      Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions(const Handle(Dynamic_FuzzyDefinition)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_Dynamic_FuzzyDefinition& Value() const;




  DEFINE_STANDARD_RTTI(Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions)

protected:




private: 


Handle_Dynamic_FuzzyDefinition myValue;


};

#define SeqItem Handle_Dynamic_FuzzyDefinition
#define SeqItem_hxx <Dynamic_FuzzyDefinition.hxx>
#define TCollection_SequenceNode Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions
#define TCollection_SequenceNode_hxx <Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions.hxx>
#define Handle_TCollection_SequenceNode Handle_Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions
#define TCollection_SequenceNode_Type_() Dynamic_SequenceNodeOfSeqOfFuzzyDefinitions_Type_()
#define TCollection_Sequence Dynamic_SeqOfFuzzyDefinitions
#define TCollection_Sequence_hxx <Dynamic_SeqOfFuzzyDefinitions.hxx>

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
