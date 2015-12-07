// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopCnx_EdgeFaceTransition_HeaderFile
#define _TopCnx_EdgeFaceTransition_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopTrans_CurveTransition_HeaderFile
#include <TopTrans_CurveTransition.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
class gp_Dir;


//! TheEdgeFaceTransition is an algorithm to   compute <br>
//!          the  cumulated  transition for interferences on an <br>
//!          edge. <br>
class TopCnx_EdgeFaceTransition  {
public:

  DEFINE_STANDARD_ALLOC

  //! Creates an empty algorithm. <br>
  Standard_EXPORT   TopCnx_EdgeFaceTransition();
  //! Initialize  the     algorithm    with the    local <br>
//!          description of the edge. <br>
  Standard_EXPORT     void Reset(const gp_Dir& Tgt,const gp_Dir& Norm,const Standard_Real Curv) ;
  //! Initialize the algorithm with a linear Edge. <br>
  Standard_EXPORT     void Reset(const gp_Dir& Tgt) ;
  //! Add a curve  element to the  boundary.  Or  is the <br>
//!          orientation of   the interference on  the boundary <br>
//!          curve. Tr is  the transition  of the interference. <br>
//!          BTr     is   the    boundary  transition    of the <br>
//!          interference. <br>
  Standard_EXPORT     void AddInterference(const Standard_Real Tole,const gp_Dir& Tang,const gp_Dir& Norm,const Standard_Real Curv,const TopAbs_Orientation Or,const TopAbs_Orientation Tr,const TopAbs_Orientation BTr) ;
  //! Returns the current cumulated transition. <br>
  Standard_EXPORT     TopAbs_Orientation Transition() const;
  //! Returns the current cumulated BoundaryTransition. <br>
  Standard_EXPORT     TopAbs_Orientation BoundaryTransition() const;





protected:





private:



TopTrans_CurveTransition myCurveTransition;
Standard_Integer nbBoundForward;
Standard_Integer nbBoundReversed;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
