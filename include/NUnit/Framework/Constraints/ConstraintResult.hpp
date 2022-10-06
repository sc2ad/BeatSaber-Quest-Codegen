// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Constraints.ConstraintStatus
#include "NUnit/Framework/Constraints/ConstraintStatus.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: IConstraint
  class IConstraint;
  // Forward declaring type: MessageWriter
  class MessageWriter;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Forward declaring type: ConstraintResult
  class ConstraintResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Constraints::ConstraintResult);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Constraints::ConstraintResult*, "NUnit.Framework.Constraints", "ConstraintResult");
// Type namespace: NUnit.Framework.Constraints
namespace NUnit::Framework::Constraints {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Constraints.ConstraintResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ConstraintResult : public ::Il2CppObject {
    public:
    public:
    // private NUnit.Framework.Constraints.IConstraint _constraint
    // Size: 0x8
    // Offset: 0x10
    ::NUnit::Framework::Constraints::IConstraint* constraint;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Constraints::IConstraint*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x10F3538
    // private System.Object <ActualValue>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* ActualValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // [DebuggerBrowsableAttribute] Offset: 0x10F3574
    // private NUnit.Framework.Constraints.ConstraintStatus <Status>k__BackingField
    // Size: 0x4
    // Offset: 0x20
    ::NUnit::Framework::Constraints::ConstraintStatus Status;
    // Field size check
    static_assert(sizeof(::NUnit::Framework::Constraints::ConstraintStatus) == 0x4);
    public:
    // Get instance field reference: private NUnit.Framework.Constraints.IConstraint _constraint
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Constraints::IConstraint*& dyn__constraint();
    // Get instance field reference: private System.Object <ActualValue>k__BackingField
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_$ActualValue$k__BackingField();
    // Get instance field reference: private NUnit.Framework.Constraints.ConstraintStatus <Status>k__BackingField
    [[deprecated("Use field access instead!")]] ::NUnit::Framework::Constraints::ConstraintStatus& dyn_$Status$k__BackingField();
    // public System.Object get_ActualValue()
    // Offset: 0x1CE02EC
    ::Il2CppObject* get_ActualValue();
    // private System.Void set_ActualValue(System.Object value)
    // Offset: 0x1CE02F4
    void set_ActualValue(::Il2CppObject* value);
    // public NUnit.Framework.Constraints.ConstraintStatus get_Status()
    // Offset: 0x1CE02FC
    ::NUnit::Framework::Constraints::ConstraintStatus get_Status();
    // public System.Void set_Status(NUnit.Framework.Constraints.ConstraintStatus value)
    // Offset: 0x1CE0304
    void set_Status(::NUnit::Framework::Constraints::ConstraintStatus value);
    // public System.Boolean get_IsSuccess()
    // Offset: 0x1CE030C
    bool get_IsSuccess();
    // public System.String get_Description()
    // Offset: 0x1CE031C
    ::StringW get_Description();
    // public System.Void .ctor(NUnit.Framework.Constraints.IConstraint constraint, System.Object actualValue)
    // Offset: 0x1CE0260
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintResult* New_ctor(::NUnit::Framework::Constraints::IConstraint* constraint, ::Il2CppObject* actualValue) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::ConstraintResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintResult*, creationType>(constraint, actualValue)));
    }
    // public System.Void .ctor(NUnit.Framework.Constraints.IConstraint constraint, System.Object actualValue, System.Boolean isSuccess)
    // Offset: 0x1CE0298
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConstraintResult* New_ctor(::NUnit::Framework::Constraints::IConstraint* constraint, ::Il2CppObject* actualValue, bool isSuccess) {
      static auto ___internal__logger = ::Logger::get().WithContext("::NUnit::Framework::Constraints::ConstraintResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConstraintResult*, creationType>(constraint, actualValue, isSuccess)));
    }
    // public System.Void WriteMessageTo(NUnit.Framework.Constraints.MessageWriter writer)
    // Offset: 0x1CE03CC
    void WriteMessageTo(::NUnit::Framework::Constraints::MessageWriter* writer);
    // public System.Void WriteActualValueTo(NUnit.Framework.Constraints.MessageWriter writer)
    // Offset: 0x1CE03F8
    void WriteActualValueTo(::NUnit::Framework::Constraints::MessageWriter* writer);
  }; // NUnit.Framework.Constraints.ConstraintResult
  #pragma pack(pop)
  static check_size<sizeof(ConstraintResult), 32 + sizeof(::NUnit::Framework::Constraints::ConstraintStatus)> __NUnit_Framework_Constraints_ConstraintResultSizeCheck;
  static_assert(sizeof(ConstraintResult) == 0x24);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::get_ActualValue
// Il2CppName: get_ActualValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (NUnit::Framework::Constraints::ConstraintResult::*)()>(&NUnit::Framework::Constraints::ConstraintResult::get_ActualValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "get_ActualValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::set_ActualValue
// Il2CppName: set_ActualValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::ConstraintResult::*)(::Il2CppObject*)>(&NUnit::Framework::Constraints::ConstraintResult::set_ActualValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "set_ActualValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::get_Status
// Il2CppName: get_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::NUnit::Framework::Constraints::ConstraintStatus (NUnit::Framework::Constraints::ConstraintResult::*)()>(&NUnit::Framework::Constraints::ConstraintResult::get_Status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "get_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::set_Status
// Il2CppName: set_Status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::ConstraintResult::*)(::NUnit::Framework::Constraints::ConstraintStatus)>(&NUnit::Framework::Constraints::ConstraintResult::set_Status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "ConstraintStatus")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "set_Status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::get_IsSuccess
// Il2CppName: get_IsSuccess
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Constraints::ConstraintResult::*)()>(&NUnit::Framework::Constraints::ConstraintResult::get_IsSuccess)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "get_IsSuccess", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::get_Description
// Il2CppName: get_Description
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (NUnit::Framework::Constraints::ConstraintResult::*)()>(&NUnit::Framework::Constraints::ConstraintResult::get_Description)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "get_Description", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::WriteMessageTo
// Il2CppName: WriteMessageTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::ConstraintResult::*)(::NUnit::Framework::Constraints::MessageWriter*)>(&NUnit::Framework::Constraints::ConstraintResult::WriteMessageTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "WriteMessageTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Constraints::ConstraintResult::WriteActualValueTo
// Il2CppName: WriteActualValueTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (NUnit::Framework::Constraints::ConstraintResult::*)(::NUnit::Framework::Constraints::MessageWriter*)>(&NUnit::Framework::Constraints::ConstraintResult::WriteActualValueTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("NUnit.Framework.Constraints", "MessageWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Constraints::ConstraintResult*), "WriteActualValueTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
