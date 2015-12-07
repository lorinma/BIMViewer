// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon_HeaderFile
#define _BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon_HeaderFile
#include <Handle_BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon.hxx>
#endif

#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _BRepMesh_PairOfPolygon_HeaderFile
#include <BRepMesh_PairOfPolygon.hxx>
#endif
#ifndef _TCollection_MapNode_HeaderFile
#include <TCollection_MapNode.hxx>
#endif
#ifndef _TCollection_MapNodePtr_HeaderFile
#include <TCollection_MapNodePtr.hxx>
#endif
class TopoDS_Shape;
class BRepMesh_PairOfPolygon;
class TopTools_ShapeMapHasher;
class BRepMesh_DataMapOfShapePairOfPolygon;
class BRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon;



class BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon : public TCollection_MapNode {

public:

  
      BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon(const TopoDS_Shape& K,const BRepMesh_PairOfPolygon& I,const TCollection_MapNodePtr& n);
  
        TopoDS_Shape& Key() const;
  
        BRepMesh_PairOfPolygon& Value() const;




  DEFINE_STANDARD_RTTI(BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon)

protected:




private: 


TopoDS_Shape myKey;
BRepMesh_PairOfPolygon myValue;


};

#define TheKey TopoDS_Shape
#define TheKey_hxx <TopoDS_Shape.hxx>
#define TheItem BRepMesh_PairOfPolygon
#define TheItem_hxx <BRepMesh_PairOfPolygon.hxx>
#define Hasher TopTools_ShapeMapHasher
#define Hasher_hxx <TopTools_ShapeMapHasher.hxx>
#define TCollection_DataMapNode BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon
#define TCollection_DataMapNode_hxx <BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon.hxx>
#define TCollection_DataMapIterator BRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon
#define TCollection_DataMapIterator_hxx <BRepMesh_DataMapIteratorOfDataMapOfShapePairOfPolygon.hxx>
#define Handle_TCollection_DataMapNode Handle_BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon
#define TCollection_DataMapNode_Type_() BRepMesh_DataMapNodeOfDataMapOfShapePairOfPolygon_Type_()
#define TCollection_DataMap BRepMesh_DataMapOfShapePairOfPolygon
#define TCollection_DataMap_hxx <BRepMesh_DataMapOfShapePairOfPolygon.hxx>

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
