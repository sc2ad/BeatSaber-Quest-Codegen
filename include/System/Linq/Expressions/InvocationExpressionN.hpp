// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.InvocationExpression
#include "System/Linq/Expressions/InvocationExpression.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Skipping declaration: Expression because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: InvocationExpressionN
  class InvocationExpressionN;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::InvocationExpressionN);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::InvocationExpressionN*, "System.Linq.Expressions", "InvocationExpressionN");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.InvocationExpressionN
  // [TokenAttribute] Offset: FFFFFFFF
  class InvocationExpressionN : public ::System::Linq::Expressions::InvocationExpression {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> _arguments
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*
    constexpr operator ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*() const noexcept {
      return arguments;
    }
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> _arguments
    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& dyn__arguments();
    // public System.Void .ctor(System.Linq.Expressions.Expression lambda, System.Collections.Generic.IReadOnlyList`1<System.Linq.Expressions.Expression> arguments, System.Type returnType)
    // Offset: 0x1F075E0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvocationExpressionN* New_ctor(::System::Linq::Expressions::Expression* lambda, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* arguments, ::System::Type* returnType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::InvocationExpressionN::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvocationExpressionN*, creationType>(lambda, arguments, returnType)));
    }
    // public override System.Int32 get_ArgumentCount()
    // Offset: 0x1F076CC
    // Implemented from: System.Linq.Expressions.InvocationExpression
    // Base method: System.Int32 InvocationExpression::get_ArgumentCount()
    int get_ArgumentCount();
    // public override System.Linq.Expressions.Expression GetArgument(System.Int32 index)
    // Offset: 0x1F0760C
    // Implemented from: System.Linq.Expressions.InvocationExpression
    // Base method: System.Linq.Expressions.Expression InvocationExpression::GetArgument(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetArgument(int index);
    // override System.Linq.Expressions.InvocationExpression Rewrite(System.Linq.Expressions.Expression lambda, System.Linq.Expressions.Expression[] arguments)
    // Offset: 0x1F0777C
    // Implemented from: System.Linq.Expressions.InvocationExpression
    // Base method: System.Linq.Expressions.InvocationExpression InvocationExpression::Rewrite(System.Linq.Expressions.Expression lambda, System.Linq.Expressions.Expression[] arguments)
    ::System::Linq::Expressions::InvocationExpression* Rewrite(::System::Linq::Expressions::Expression* lambda, ::ArrayW<::System::Linq::Expressions::Expression*> arguments);
  }; // System.Linq.Expressions.InvocationExpressionN
  #pragma pack(pop)
  static check_size<sizeof(InvocationExpressionN), 32 + sizeof(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*)> __System_Linq_Expressions_InvocationExpressionNSizeCheck;
  static_assert(sizeof(InvocationExpressionN) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpressionN::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpressionN::get_ArgumentCount
// Il2CppName: get_ArgumentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::InvocationExpressionN::*)()>(&System::Linq::Expressions::InvocationExpressionN::get_ArgumentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InvocationExpressionN*), "get_ArgumentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpressionN::GetArgument
// Il2CppName: GetArgument
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::InvocationExpressionN::*)(int)>(&System::Linq::Expressions::InvocationExpressionN::GetArgument)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InvocationExpressionN*), "GetArgument", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::InvocationExpressionN::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::InvocationExpression* (System::Linq::Expressions::InvocationExpressionN::*)(::System::Linq::Expressions::Expression*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(&System::Linq::Expressions::InvocationExpressionN::Rewrite)> {
  static const MethodInfo* get() {
    static auto* lambda = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::InvocationExpressionN*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lambda, arguments});
  }
};
