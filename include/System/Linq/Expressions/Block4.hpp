// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.BlockExpression
#include "System/Linq/Expressions/BlockExpression.hpp"
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
}
// Forward declaring namespace: System::Collections::ObjectModel
namespace System::Collections::ObjectModel {
  // Forward declaring type: ReadOnlyCollection`1<T>
  template<typename T>
  class ReadOnlyCollection_1;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: Block4
  class Block4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Block4);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Block4*, "System.Linq.Expressions", "Block4");
// Type namespace: System.Linq.Expressions
namespace System::Linq::Expressions {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Block4
  // [TokenAttribute] Offset: FFFFFFFF
  class Block4 : public ::System::Linq::Expressions::BlockExpression {
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
    // private System.Object _arg0
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* arg0;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg1
    // Size: 0x8
    // Offset: 0x18
    ::System::Linq::Expressions::Expression* arg1;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg2
    // Size: 0x8
    // Offset: 0x20
    ::System::Linq::Expressions::Expression* arg2;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    // private readonly System.Linq.Expressions.Expression _arg3
    // Size: 0x8
    // Offset: 0x28
    ::System::Linq::Expressions::Expression* arg3;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Expression*) == 0x8);
    public:
    // Get instance field reference: private System.Object _arg0
    ::Il2CppObject*& dyn__arg0();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg1
    ::System::Linq::Expressions::Expression*& dyn__arg1();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg2
    ::System::Linq::Expressions::Expression*& dyn__arg2();
    // Get instance field reference: private readonly System.Linq.Expressions.Expression _arg3
    ::System::Linq::Expressions::Expression*& dyn__arg3();
    // System.Void .ctor(System.Linq.Expressions.Expression arg0, System.Linq.Expressions.Expression arg1, System.Linq.Expressions.Expression arg2, System.Linq.Expressions.Expression arg3)
    // Offset: 0x15F916C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Block4* New_ctor(::System::Linq::Expressions::Expression* arg0, ::System::Linq::Expressions::Expression* arg1, ::System::Linq::Expressions::Expression* arg2, ::System::Linq::Expressions::Expression* arg3) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Block4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Block4*, creationType>(arg0, arg1, arg2, arg3)));
    }
    // override System.Int32 get_ExpressionCount()
    // Offset: 0x15F926C
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Int32 BlockExpression::get_ExpressionCount()
    int get_ExpressionCount();
    // override System.Linq.Expressions.Expression GetExpression(System.Int32 index)
    // Offset: 0x15F91B4
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Linq.Expressions.Expression BlockExpression::GetExpression(System.Int32 index)
    ::System::Linq::Expressions::Expression* GetExpression(int index);
    // override System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> GetOrMakeExpressions()
    // Offset: 0x15F9274
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> BlockExpression::GetOrMakeExpressions()
    ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* GetOrMakeExpressions();
    // override System.Linq.Expressions.BlockExpression Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> variables, System.Linq.Expressions.Expression[] args)
    // Offset: 0x15F927C
    // Implemented from: System.Linq.Expressions.BlockExpression
    // Base method: System.Linq.Expressions.BlockExpression BlockExpression::Rewrite(System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression> variables, System.Linq.Expressions.Expression[] args)
    ::System::Linq::Expressions::BlockExpression* Rewrite(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>* variables, ::ArrayW<::System::Linq::Expressions::Expression*> args);
  }; // System.Linq.Expressions.Block4
  #pragma pack(pop)
  static check_size<sizeof(Block4), 40 + sizeof(::System::Linq::Expressions::Expression*)> __System_Linq_Expressions_Block4SizeCheck;
  static_assert(sizeof(Block4) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Block4::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Block4::get_ExpressionCount
// Il2CppName: get_ExpressionCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Linq::Expressions::Block4::*)()>(&System::Linq::Expressions::Block4::get_ExpressionCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block4*), "get_ExpressionCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Block4::GetExpression
// Il2CppName: GetExpression
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (System::Linq::Expressions::Block4::*)(int)>(&System::Linq::Expressions::Block4::GetExpression)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block4*), "GetExpression", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Block4::GetOrMakeExpressions
// Il2CppName: GetOrMakeExpressions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>* (System::Linq::Expressions::Block4::*)()>(&System::Linq::Expressions::Block4::GetOrMakeExpressions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block4*), "GetOrMakeExpressions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Block4::Rewrite
// Il2CppName: Rewrite
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::BlockExpression* (System::Linq::Expressions::Block4::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*, ::ArrayW<::System::Linq::Expressions::Expression*>)>(&System::Linq::Expressions::Block4::Rewrite)> {
  static const MethodInfo* get() {
    static auto* variables = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.ObjectModel", "ReadOnlyCollection`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "ParameterExpression")})->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "Expression"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Block4*), "Rewrite", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{variables, args});
  }
};
