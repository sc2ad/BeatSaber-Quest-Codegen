// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Linq.Expressions.Interpreter.LabelScopeKind
#include "System/Linq/Expressions/Interpreter/LabelScopeKind.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Linq::Expressions::Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: HybridReferenceDictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class HybridReferenceDictionary_2;
  // Forward declaring type: LabelInfo
  class LabelInfo;
}
// Forward declaring namespace: System::Linq::Expressions
namespace System::Linq::Expressions {
  // Forward declaring type: LabelTarget
  class LabelTarget;
}
// Completed forward declares
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Forward declaring type: LabelScopeInfo
  class LabelScopeInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::LabelScopeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::LabelScopeInfo*, "System.Linq.Expressions.Interpreter", "LabelScopeInfo");
// Type namespace: System.Linq.Expressions.Interpreter
namespace System::Linq::Expressions::Interpreter {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Linq.Expressions.Interpreter.LabelScopeInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class LabelScopeInfo : public ::Il2CppObject {
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
    // private System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo> _labels
    // Size: 0x8
    // Offset: 0x10
    ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>* labels;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>*) == 0x8);
    // readonly System.Linq.Expressions.Interpreter.LabelScopeKind Kind
    // Size: 0x4
    // Offset: 0x18
    ::System::Linq::Expressions::Interpreter::LabelScopeKind Kind;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::LabelScopeKind) == 0x4);
    // Padding between fields: Kind and: Parent
    char __padding1[0x4] = {};
    // readonly System.Linq.Expressions.Interpreter.LabelScopeInfo Parent
    // Size: 0x8
    // Offset: 0x20
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo* Parent;
    // Field size check
    static_assert(sizeof(::System::Linq::Expressions::Interpreter::LabelScopeInfo*) == 0x8);
    public:
    // Get instance field reference: private System.Linq.Expressions.Interpreter.HybridReferenceDictionary`2<System.Linq.Expressions.LabelTarget,System.Linq.Expressions.Interpreter.LabelInfo> _labels
    ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*>*& dyn__labels();
    // Get instance field reference: readonly System.Linq.Expressions.Interpreter.LabelScopeKind Kind
    ::System::Linq::Expressions::Interpreter::LabelScopeKind& dyn_Kind();
    // Get instance field reference: readonly System.Linq.Expressions.Interpreter.LabelScopeInfo Parent
    ::System::Linq::Expressions::Interpreter::LabelScopeInfo*& dyn_Parent();
    // System.Boolean get_CanJumpInto()
    // Offset: 0x1C00038
    bool get_CanJumpInto();
    // System.Void .ctor(System.Linq.Expressions.Interpreter.LabelScopeInfo parent, System.Linq.Expressions.Interpreter.LabelScopeKind kind)
    // Offset: 0x1C00154
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LabelScopeInfo* New_ctor(::System::Linq::Expressions::Interpreter::LabelScopeInfo* parent, ::System::Linq::Expressions::Interpreter::LabelScopeKind kind) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Linq::Expressions::Interpreter::LabelScopeInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LabelScopeInfo*, creationType>(parent, kind)));
    }
    // System.Boolean ContainsTarget(System.Linq.Expressions.LabelTarget target)
    // Offset: 0x1BFFB34
    bool ContainsTarget(::System::Linq::Expressions::LabelTarget* target);
    // System.Boolean TryGetLabelInfo(System.Linq.Expressions.LabelTarget target, out System.Linq.Expressions.Interpreter.LabelInfo info)
    // Offset: 0x1C00190
    bool TryGetLabelInfo(::System::Linq::Expressions::LabelTarget* target, ByRef<::System::Linq::Expressions::Interpreter::LabelInfo*> info);
    // System.Void AddLabelInfo(System.Linq.Expressions.LabelTarget target, System.Linq.Expressions.Interpreter.LabelInfo info)
    // Offset: 0x1BFFCBC
    void AddLabelInfo(::System::Linq::Expressions::LabelTarget* target, ::System::Linq::Expressions::Interpreter::LabelInfo* info);
  }; // System.Linq.Expressions.Interpreter.LabelScopeInfo
  #pragma pack(pop)
  static check_size<sizeof(LabelScopeInfo), 32 + sizeof(::System::Linq::Expressions::Interpreter::LabelScopeInfo*)> __System_Linq_Expressions_Interpreter_LabelScopeInfoSizeCheck;
  static_assert(sizeof(LabelScopeInfo) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelScopeInfo::get_CanJumpInto
// Il2CppName: get_CanJumpInto
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::LabelScopeInfo::*)()>(&System::Linq::Expressions::Interpreter::LabelScopeInfo::get_CanJumpInto)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelScopeInfo*), "get_CanJumpInto", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelScopeInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelScopeInfo::ContainsTarget
// Il2CppName: ContainsTarget
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(::System::Linq::Expressions::LabelTarget*)>(&System::Linq::Expressions::Interpreter::LabelScopeInfo::ContainsTarget)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LabelTarget")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelScopeInfo*), "ContainsTarget", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelScopeInfo::TryGetLabelInfo
// Il2CppName: TryGetLabelInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(::System::Linq::Expressions::LabelTarget*, ByRef<::System::Linq::Expressions::Interpreter::LabelInfo*>)>(&System::Linq::Expressions::Interpreter::LabelScopeInfo::TryGetLabelInfo)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LabelTarget")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelScopeInfo*), "TryGetLabelInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, info});
  }
};
// Writing MetadataGetter for method: System::Linq::Expressions::Interpreter::LabelScopeInfo::AddLabelInfo
// Il2CppName: AddLabelInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Linq::Expressions::Interpreter::LabelScopeInfo::*)(::System::Linq::Expressions::LabelTarget*, ::System::Linq::Expressions::Interpreter::LabelInfo*)>(&System::Linq::Expressions::Interpreter::LabelScopeInfo::AddLabelInfo)> {
  static const MethodInfo* get() {
    static auto* target = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions", "LabelTarget")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Linq.Expressions.Interpreter", "LabelInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Linq::Expressions::Interpreter::LabelScopeInfo*), "AddLabelInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{target, info});
  }
};
