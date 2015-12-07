// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Plate_SequenceNodeOfSequenceOfPinpointConstraint_HeaderFile
#define _Plate_SequenceNodeOfSequenceOfPinpointConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Plate_SequenceNodeOfSequenceOfPinpointConstraint_HeaderFile
#include <Handle_Plate_SequenceNodeOfSequenceOfPinpointConstraint.hxx>
#endif

#ifndef _Plate_PinpointConstraint_HeaderFile
#include <Plate_PinpointConstraint.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class Plate_PinpointConstraint;
class Plate_SequenceOfPinpointConstraint;



class Plate_SequenceNodeOfSequenceOfPinpointConstraint : public TCollection_SeqNode {

public:

  
      Plate_SequenceNodeOfSequenceOfPinpointConstraint(const Plate_PinpointConstraint& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        Plate_PinpointConstraint& Value() const;




  DEFINE_STANDARD_RTTI(Plate_SequenceNodeOfSequenceOfPinpointConstraint)

protected:




private: 


Plate_PinpointConstraint myValue;


};

#define SeqItem Plate_PinpointConstraint
#define SeqItem_hxx <Plate_PinpointConstraint.hxx>
#define TCollection_SequenceNode Plate_SequenceNodeOfSequenceOfPinpointConstraint
#define TCollection_SequenceNode_hxx <Plate_SequenceNodeOfSequenceOfPinpointConstraint.hxx>
#define Handle_TCollection_SequenceNode Handle_Plate_SequenceNodeOfSequenceOfPinpointConstraint
#define TCollection_SequenceNode_Type_() Plate_SequenceNodeOfSequenceOfPinpointConstraint_Type_()
#define TCollection_Sequence Plate_SequenceOfPinpointConstraint
#define TCollection_Sequence_hxx <Plate_SequenceOfPinpointConstraint.hxx>

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
