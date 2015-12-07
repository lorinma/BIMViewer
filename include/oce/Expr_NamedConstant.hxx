// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Expr_NamedConstant_HeaderFile
#define _Expr_NamedConstant_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_Expr_NamedConstant_HeaderFile
#include <Handle_Expr_NamedConstant.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Expr_NamedExpression_HeaderFile
#include <Expr_NamedExpression.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Expr_GeneralExpression_HeaderFile
#include <Handle_Expr_GeneralExpression.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Expr_NamedUnknown_HeaderFile
#include <Handle_Expr_NamedUnknown.hxx>
#endif
class Standard_OutOfRange;
class TCollection_AsciiString;
class Expr_GeneralExpression;
class Expr_NamedUnknown;
class Expr_Array1OfNamedUnknown;
class TColStd_Array1OfReal;


//! Describes any numeric constant known by a special name <br>
//!          (as PI, e,...). <br>
class Expr_NamedConstant : public Expr_NamedExpression {

public:

  //! Creates a constant value of name <name> and value <value>. <br>
  Standard_EXPORT   Expr_NamedConstant(const TCollection_AsciiString& name,const Standard_Real value);
  
        Standard_Real GetValue() const;
  //! returns the number of sub-expressions contained <br>
//!          in <me> (always returns zero) <br>
  Standard_EXPORT     Standard_Integer NbSubExpressions() const;
  //! returns the <I>-th sub-expression of <me> <br>
//!          raises OutOfRange <br>
  Standard_EXPORT    const Handle_Expr_GeneralExpression& SubExpression(const Standard_Integer I) const;
  //! returns a GeneralExpression after replacement of <br>
//!          NamedUnknowns by an associated expression and after <br>
//!          values computation. <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression Simplified() const;
  //! Returns a GeneralExpression after a simplification <br>
//!          of the arguments of <me>. <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression ShallowSimplified() const;
  //! Returns a copy of <me> having the same unknowns and functions. <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression Copy() const;
  //! Tests if <me> contains NamedUnknown. <br>
//!          (returns always False) <br>
  Standard_EXPORT     Standard_Boolean ContainsUnknowns() const;
  //! Tests if <exp> is contained in <me>. <br>
  Standard_EXPORT     Standard_Boolean Contains(const Handle(Expr_GeneralExpression)& exp) const;
  
  Standard_EXPORT     Standard_Boolean IsLinear() const;
  //! Returns the derivative on <X> unknown of <me> <br>
  Standard_EXPORT     Handle_Expr_GeneralExpression Derivative(const Handle(Expr_NamedUnknown)& X) const;
  //! Returns the <N>-th derivative on <X> unknown of <me>. <br>
//!          Raises OutOfRange if <N> <= 0 <br>
  Standard_EXPORT   virtual  Handle_Expr_GeneralExpression NDerivative(const Handle(Expr_NamedUnknown)& X,const Standard_Integer N) const;
  //! Replaces all occurences of <var> with <with> in <me> <br>
  Standard_EXPORT     void Replace(const Handle(Expr_NamedUnknown)& var,const Handle(Expr_GeneralExpression)& with) ;
  //! Returns the value of <me> (as a Real) by <br>
//!          replacement of <vars> by <vals>. <br>
  Standard_EXPORT     Standard_Real Evaluate(const Expr_Array1OfNamedUnknown& vars,const TColStd_Array1OfReal& vals) const;




  DEFINE_STANDARD_RTTI(Expr_NamedConstant)

protected:




private: 


Standard_Real myValue;


};


#include <Expr_NamedConstant.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
