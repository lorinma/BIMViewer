// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_ListNodeOfListOfByte_HeaderFile
#define _TDataStd_ListNodeOfListOfByte_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TDataStd_ListNodeOfListOfByte_HeaderFile
#include <Handle_TDataStd_ListNodeOfListOfByte.hxx>
#endif

#ifndef _Standard_Byte_HeaderFile
#include <Standard_Byte.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TDataStd_ListOfByte;
class TDataStd_ListIteratorOfListOfByte;



class TDataStd_ListNodeOfListOfByte : public TCollection_MapNode {

public:

  
      TDataStd_ListNodeOfListOfByte(const Standard_Byte& I,const TCollection_MapNodePtr& n);
  
        Standard_Byte& Value() const;




  DEFINE_STANDARD_RTTI(TDataStd_ListNodeOfListOfByte)

protected:




private: 


Standard_Byte myValue;


};

#define Item Standard_Byte
#define Item_hxx <Standard_Byte.hxx>
#define TCollection_ListNode TDataStd_ListNodeOfListOfByte
#define TCollection_ListNode_hxx <TDataStd_ListNodeOfListOfByte.hxx>
#define TCollection_ListIterator TDataStd_ListIteratorOfListOfByte
#define TCollection_ListIterator_hxx <TDataStd_ListIteratorOfListOfByte.hxx>
#define Handle_TCollection_ListNode Handle_TDataStd_ListNodeOfListOfByte
#define TCollection_ListNode_Type_() TDataStd_ListNodeOfListOfByte_Type_()
#define TCollection_List TDataStd_ListOfByte
#define TCollection_List_hxx <TDataStd_ListOfByte.hxx>

#include <TCollection_ListNode.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
