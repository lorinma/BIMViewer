// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDSToStep_MakeBrepWithVoids_HeaderFile
#define _TopoDSToStep_MakeBrepWithVoids_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepShape_BrepWithVoids_HeaderFile
#include <Handle_StepShape_BrepWithVoids.hxx>
#endif
#ifndef _TopoDSToStep_Root_HeaderFile
#include <TopoDSToStep_Root.hxx>
#endif
#ifndef _Handle_Transfer_FinderProcess_HeaderFile
#include <Handle_Transfer_FinderProcess.hxx>
#endif
class StepShape_BrepWithVoids;
class StdFail_NotDone;
class TopoDS_Solid;
class Transfer_FinderProcess;


//! This class implements the mapping between classes <br>
//!          Solid from TopoDS and BrepWithVoids from <br>
//!          StepShape. All the topology and geometry comprised <br>
//!          into the shell or the solid are taken into account and <br>
//!          translated. <br>
class TopoDSToStep_MakeBrepWithVoids  : public TopoDSToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopoDSToStep_MakeBrepWithVoids(const TopoDS_Solid& S,const Handle(Transfer_FinderProcess)& FP);
  
  Standard_EXPORT    const Handle_StepShape_BrepWithVoids& Value() const;





protected:





private:



Handle_StepShape_BrepWithVoids theBrepWithVoids;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif