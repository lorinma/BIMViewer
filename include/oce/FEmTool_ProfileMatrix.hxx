// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _FEmTool_ProfileMatrix_HeaderFile
#define _FEmTool_ProfileMatrix_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_FEmTool_ProfileMatrix_HeaderFile
#include <Handle_FEmTool_ProfileMatrix.hxx>
#endif

#ifndef _TColStd_Array2OfInteger_HeaderFile
#include <TColStd_Array2OfInteger.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfReal_HeaderFile
#include <Handle_TColStd_HArray1OfReal.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _FEmTool_SparseMatrix_HeaderFile
#include <FEmTool_SparseMatrix.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class TColStd_HArray1OfReal;
class TColStd_HArray1OfInteger;
class StdFail_NotDone;
class Standard_NotImplemented;
class Standard_OutOfRange;
class TColStd_Array1OfInteger;
class math_Vector;


//! Symmetric Sparse ProfileMatrix useful  for 1D Finite <br>
//!          Element methods <br>
class FEmTool_ProfileMatrix : public FEmTool_SparseMatrix {

public:

  
  Standard_EXPORT   FEmTool_ProfileMatrix(const TColStd_Array1OfInteger& FirstIndexes);
  
  Standard_EXPORT     void Init(const Standard_Real Value) ;
  
  Standard_EXPORT     Standard_Real& ChangeValue(const Standard_Integer I,const Standard_Integer J) ;
  //! To make a Factorization of <me> <br>
  Standard_EXPORT     Standard_Boolean Decompose() ;
  //! Direct Solve of AX = B <br>
  Standard_EXPORT     void Solve(const math_Vector& B,math_Vector& X) const;
  //! Make Preparation to iterative solve <br>
  Standard_EXPORT     Standard_Boolean Prepare() ;
  //! Iterative solve  of AX = B <br>
  Standard_EXPORT     void Solve(const math_Vector& B,const math_Vector& Init,math_Vector& X,math_Vector& Residual,const Standard_Real Tolerance = 1.0e-8,const Standard_Integer NbIterations = 50) const;
  //! returns the product of a SparseMatrix by a vector. <br>
//!          An exception is raised if the dimensions are different <br>
  Standard_EXPORT     void Multiplied(const math_Vector& X,math_Vector& MX) const;
  //! returns the row range of a matrix. <br>
  Standard_EXPORT     Standard_Integer RowNumber() const;
  //! returns the column range of the matrix. <br>
  Standard_EXPORT     Standard_Integer ColNumber() const;
  
  Standard_EXPORT     Standard_Boolean IsInProfile(const Standard_Integer i,const Standard_Integer j) const;
  
  Standard_EXPORT     void OutM() const;
  
  Standard_EXPORT     void OutS() const;




  DEFINE_STANDARD_RTTI(FEmTool_ProfileMatrix)

protected:




private: 


TColStd_Array2OfInteger profile;
Handle_TColStd_HArray1OfReal ProfileMatrix;
Handle_TColStd_HArray1OfReal SMatrix;
Handle_TColStd_HArray1OfInteger NextCoeff;
Standard_Boolean IsDecomp;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
