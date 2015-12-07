// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT_DataMapNodeOfDataMapOfIntegerBisector_HeaderFile
#define _MAT_DataMapNodeOfDataMapOfIntegerBisector_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_MAT_DataMapNodeOfDataMapOfIntegerBisector_HeaderFile
#include <Handle_MAT_DataMapNodeOfDataMapOfIntegerBisector.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_MAT_Bisector_HeaderFile
#include <Handle_MAT_Bisector.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class MAT_Bisector;
class TColStd_MapIntegerHasher;
class MAT_DataMapOfIntegerBisector;
class MAT_DataMapIteratorOfDataMapOfIntegerBisector;



class MAT_DataMapNodeOfDataMapOfIntegerBisector : public TCollection_MapNode {

public:

  
      MAT_DataMapNodeOfDataMapOfIntegerBisector(const Standard_Integer& K,const Handle(MAT_Bisector)& I,const TCollection_MapNodePtr& n);
  
        Standard_Integer& Key() const;
  
        Handle_MAT_Bisector& Value() const;




  DEFINE_STANDARD_RTTI(MAT_DataMapNodeOfDataMapOfIntegerBisector)

protected:




private: 


Standard_Integer myKey;
Handle_MAT_Bisector myValue;


};

#define TheKey Standard_Integer
#define TheKey_hxx <Standard_Integer.hxx>
#define TheItem Handle_MAT_Bisector
#define TheItem_hxx <MAT_Bisector.hxx>
#define Hasher TColStd_MapIntegerHasher
#define Hasher_hxx <TColStd_MapIntegerHasher.hxx>
#define TCollection_DataMapNode MAT_DataMapNodeOfDataMapOfIntegerBisector
#define TCollection_DataMapNode_hxx <MAT_DataMapNodeOfDataMapOfIntegerBisector.hxx>
#define TCollection_DataMapIterator MAT_DataMapIteratorOfDataMapOfIntegerBisector
#define TCollection_DataMapIterator_hxx <MAT_DataMapIteratorOfDataMapOfIntegerBisector.hxx>
#define Handle_TCollection_DataMapNode Handle_MAT_DataMapNodeOfDataMapOfIntegerBisector
#define TCollection_DataMapNode_Type_() MAT_DataMapNodeOfDataMapOfIntegerBisector_Type_()
#define TCollection_DataMap MAT_DataMapOfIntegerBisector
#define TCollection_DataMap_hxx <MAT_DataMapOfIntegerBisector.hxx>

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
