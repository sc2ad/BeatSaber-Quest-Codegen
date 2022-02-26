// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.LambdaExpression
#include "System/Linq/Expressions/LambdaExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
  // Forward declaring type: ParameterExpression
  class ParameterExpression;
  // Forward declaring type: ExpressionVisitor
  class ExpressionVisitor;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Expression`1<TDelegate>
  template<typename TDelegate>
  class Expression_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Linq::Expressions::Expression_1, "System.Linq.Expressions", "Expression`1");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Linq.Expressions.Expression`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TDelegate>
  class Expression_1 : public ::System::Linq::Expressions::LambdaExpression {
    public:
    // public TDelegate Compile()
    // Offset: 0xFFFFFFFF
    TDelegate Compile() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Expression_1::Compile");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Compile", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<TDelegate, false>(this, ___internal__method);
    }
    // public TDelegate Compile(System.Boolean preferInterpretation)
    // Offset: 0xFFFFFFFF
    TDelegate Compile(bool preferInterpretation) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Expression_1::Compile");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Compile", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(preferInterpretation)})));
      return ::il2cpp_utils::RunMethodRethrow<TDelegate, false>(this, ___internal__method, preferInterpretation);
    }
    // System.Linq.Expressions.Expression`1<TDelegate> Rewrite(System.Linq.Expressions.Expression body, System.Linq.Expressions.ParameterExpression[] parameters)
    // Offset: 0xFFFFFFFF
    ::System::Linq::Expressions::Expression_1<TDelegate>* Rewrite(::System::Linq::Expressions::Expression* body, ::ArrayW<::System::Linq::Expressions::ParameterExpression*> parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Expression_1::Rewrite");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Rewrite", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(body), ::il2cpp_utils::ExtractType(parameters)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Linq::Expressions::Expression_1<TDelegate>*, false>(this, ___internal__method, body, parameters);
    }
    // override System.Type get_TypeCore()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.LambdaExpression
    // Base method: System.Type LambdaExpression::get_TypeCore()
    ::System::Type* get_TypeCore() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Expression_1::get_TypeCore");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_TypeCore", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method);
    }
    // override System.Type get_PublicType()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.LambdaExpression
    // Base method: System.Type LambdaExpression::get_PublicType()
    ::System::Type* get_PublicType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Expression_1::get_PublicType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_PublicType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method);
    }
    // System.Void .ctor(System.Linq.Expressions.Expression body)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.LambdaExpression
    // Base method: System.Void LambdaExpression::.ctor(System.Linq.Expressions.Expression body)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Expression_1<TDelegate>* New_ctor(::System::Linq::Expressions::Expression* body) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Expression_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Expression_1<TDelegate>*, creationType>(body)));
    }
    // protected internal override System.Linq.Expressions.Expression Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Linq.Expressions.Expression
    // Base method: System.Linq.Expressions.Expression Expression::Accept(System.Linq.Expressions.ExpressionVisitor visitor)
    ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor* visitor) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Expression_1::Accept");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Accept", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(visitor)})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal__method, visitor);
    }
  }; // System.Linq.Expressions.Expression`1
  // Could not write size check! Type: System.Linq.Expressions.Expression`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
