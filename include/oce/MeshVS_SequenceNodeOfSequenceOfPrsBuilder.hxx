// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_SequenceNodeOfSequenceOfPrsBuilder_HeaderFile
#define _MeshVS_SequenceNodeOfSequenceOfPrsBuilder_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder_HeaderFile
#include <Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder.hxx>
#endif

#ifndef _Handle_MeshVS_PrsBuilder_HeaderFile
#include <Handle_MeshVS_PrsBuilder.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class MeshVS_PrsBuilder;
class MeshVS_SequenceOfPrsBuilder;



class MeshVS_SequenceNodeOfSequenceOfPrsBuilder : public TCollection_SeqNode {

public:

  
      MeshVS_SequenceNodeOfSequenceOfPrsBuilder(const Handle(MeshVS_PrsBuilder)& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Handle_MeshVS_PrsBuilder& Value() const;




  DEFINE_STANDARD_RTTI(MeshVS_SequenceNodeOfSequenceOfPrsBuilder)

protected:




private: 


Handle_MeshVS_PrsBuilder myValue;


};

#define SeqItem Handle_MeshVS_PrsBuilder
#define SeqItem_hxx <MeshVS_PrsBuilder.hxx>
#define TCollection_SequenceNode MeshVS_SequenceNodeOfSequenceOfPrsBuilder
#define TCollection_SequenceNode_hxx <MeshVS_SequenceNodeOfSequenceOfPrsBuilder.hxx>
#define Handle_TCollection_SequenceNode Handle_MeshVS_SequenceNodeOfSequenceOfPrsBuilder
#define TCollection_SequenceNode_Type_() MeshVS_SequenceNodeOfSequenceOfPrsBuilder_Type_()
#define TCollection_Sequence MeshVS_SequenceOfPrsBuilder
#define TCollection_Sequence_hxx <MeshVS_SequenceOfPrsBuilder.hxx>

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
