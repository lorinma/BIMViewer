// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF_HeaderFile
#define _TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF_HeaderFile
#include <Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopOpeBRepTool_C2DF_HeaderFile
#include <TopOpeBRepTool_C2DF.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepTool_C2DF;
class TopTools_OrientedShapeMapHasher;
class TopOpeBRepTool_DataMapOfOrientedShapeC2DF;
class TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF;



class TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF : public TCollection_MapNode {

public:

  
      TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF(const TopoDS_Shape& K,const TopOpeBRepTool_C2DF& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        TopOpeBRepTool_C2DF& Value() const;




  DEFINE_STANDARD_RTTI(TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF)

protected:




private: 


TopoDS_Shape myKey;
TopOpeBRepTool_C2DF myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem TopOpeBRepTool_C2DF
#define TheItem_hxx <TopOpeBRepTool_C2DF.hxx>
#define Hasher TopTools_OrientedShapeMapHasher
#define Hasher_hxx <TopTools_OrientedShapeMapHasher.hxx>
#define TCollection_DataMapNode TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF
#define TCollection_DataMapNode_hxx <TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF.hxx>
#define TCollection_DataMapIterator TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF
#define TCollection_DataMapIterator_hxx <TopOpeBRepTool_DataMapIteratorOfDataMapOfOrientedShapeC2DF.hxx>
#define Handle_TCollection_DataMapNode Handle_TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF
#define TCollection_DataMapNode_Type_() TopOpeBRepTool_DataMapNodeOfDataMapOfOrientedShapeC2DF_Type_()
#define TCollection_DataMap TopOpeBRepTool_DataMapOfOrientedShapeC2DF
#define TCollection_DataMap_hxx <TopOpeBRepTool_DataMapOfOrientedShapeC2DF.hxx>

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
