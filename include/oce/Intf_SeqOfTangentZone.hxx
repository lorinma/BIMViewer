// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Intf_SeqOfTangentZone_HeaderFile
#define _Intf_SeqOfTangentZone_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Intf_SequenceNodeOfSeqOfTangentZone_HeaderFile
#include <Handle_Intf_SequenceNodeOfSeqOfTangentZone.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Intf_TangentZone;
class Intf_SequenceNodeOfSeqOfTangentZone;



class Intf_SeqOfTangentZone  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Intf_SeqOfTangentZone();
  
  Standard_EXPORT     void Clear() ;
~Intf_SeqOfTangentZone()
{
  Clear();
}
  
  Standard_EXPORT    const Intf_SeqOfTangentZone& Assign(const Intf_SeqOfTangentZone& Other) ;
   const Intf_SeqOfTangentZone& operator =(const Intf_SeqOfTangentZone& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Intf_TangentZone& T) ;
  
        void Append(Intf_SeqOfTangentZone& S) ;
  
  Standard_EXPORT     void Prepend(const Intf_TangentZone& T) ;
  
        void Prepend(Intf_SeqOfTangentZone& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Intf_TangentZone& T) ;
  
        void InsertBefore(const Standard_Integer Index,Intf_SeqOfTangentZone& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Intf_TangentZone& T) ;
  
        void InsertAfter(const Standard_Integer Index,Intf_SeqOfTangentZone& S) ;
  
  Standard_EXPORT    const Intf_TangentZone& First() const;
  
  Standard_EXPORT    const Intf_TangentZone& Last() const;
  
        void Split(const Standard_Integer Index,Intf_SeqOfTangentZone& Sub) ;
  
  Standard_EXPORT    const Intf_TangentZone& Value(const Standard_Integer Index) const;
   const Intf_TangentZone& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Intf_TangentZone& I) ;
  
  Standard_EXPORT     Intf_TangentZone& ChangeValue(const Standard_Integer Index) ;
    Intf_TangentZone& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Intf_SeqOfTangentZone(const Intf_SeqOfTangentZone& Other);




};

#define SeqItem Intf_TangentZone
#define SeqItem_hxx <Intf_TangentZone.hxx>
#define TCollection_SequenceNode Intf_SequenceNodeOfSeqOfTangentZone
#define TCollection_SequenceNode_hxx <Intf_SequenceNodeOfSeqOfTangentZone.hxx>
#define Handle_TCollection_SequenceNode Handle_Intf_SequenceNodeOfSeqOfTangentZone
#define TCollection_SequenceNode_Type_() Intf_SequenceNodeOfSeqOfTangentZone_Type_()
#define TCollection_Sequence Intf_SeqOfTangentZone
#define TCollection_Sequence_hxx <Intf_SeqOfTangentZone.hxx>

#include <TCollection_Sequence.lxx>

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
