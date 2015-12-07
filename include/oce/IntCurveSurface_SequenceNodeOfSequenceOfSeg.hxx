// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntCurveSurface_SequenceNodeOfSequenceOfSeg_HeaderFile
#define _IntCurveSurface_SequenceNodeOfSequenceOfSeg_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_IntCurveSurface_SequenceNodeOfSequenceOfSeg_HeaderFile
#include <Handle_IntCurveSurface_SequenceNodeOfSequenceOfSeg.hxx>
#endif

#ifndef _IntCurveSurface_IntersectionSegment_HeaderFile
#include <IntCurveSurface_IntersectionSegment.hxx>
#endif
#ifndef _TCollection_SeqNode_HeaderFile
#include <TCollection_SeqNode.hxx>
#endif
#ifndef _TCollection_SeqNodePtr_HeaderFile
#include <TCollection_SeqNodePtr.hxx>
#endif
class IntCurveSurface_IntersectionSegment;
class IntCurveSurface_SequenceOfSeg;



class IntCurveSurface_SequenceNodeOfSequenceOfSeg : public TCollection_SeqNode {

public:

  
      IntCurveSurface_SequenceNodeOfSequenceOfSeg(const IntCurveSurface_IntersectionSegment& I,const TCollection_SeqNodePtr& n,const TCollection_SeqNodePtr& p);
  
        IntCurveSurface_IntersectionSegment& Value() const;




  DEFINE_STANDARD_RTTI(IntCurveSurface_SequenceNodeOfSequenceOfSeg)

protected:




private: 


IntCurveSurface_IntersectionSegment myValue;


};

#define SeqItem IntCurveSurface_IntersectionSegment
#define SeqItem_hxx <IntCurveSurface_IntersectionSegment.hxx>
#define TCollection_SequenceNode IntCurveSurface_SequenceNodeOfSequenceOfSeg
#define TCollection_SequenceNode_hxx <IntCurveSurface_SequenceNodeOfSequenceOfSeg.hxx>
#define Handle_TCollection_SequenceNode Handle_IntCurveSurface_SequenceNodeOfSequenceOfSeg
#define TCollection_SequenceNode_Type_() IntCurveSurface_SequenceNodeOfSequenceOfSeg_Type_()
#define TCollection_Sequence IntCurveSurface_SequenceOfSeg
#define TCollection_Sequence_hxx <IntCurveSurface_SequenceOfSeg.hxx>

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
