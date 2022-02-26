// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder
namespace UnityEngine::ProBuilder {
  // Skipping declaration: Status because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Forward declaring type: ActionResult
  class ActionResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ProBuilder::ActionResult);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ActionResult*, "UnityEngine.ProBuilder", "ActionResult");
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.ActionResult
  // [TokenAttribute] Offset: FFFFFFFF
  class ActionResult : public ::Il2CppObject {
    public:
    // Nested type: ::UnityEngine::ProBuilder::ActionResult::Status
    struct Status;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status
    // [TokenAttribute] Offset: FFFFFFFF
    struct Status/*, public ::System::Enum*/ {
      public:
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      public:
      // Creating value type constructor for type: Status
      constexpr Status(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator ::System::Enum
      operator ::System::Enum() noexcept {
        return *reinterpret_cast<::System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Success
      static constexpr const int Success = 0;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Success
      static ::UnityEngine::ProBuilder::ActionResult::Status _get_Success();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Success
      static void _set_Success(::UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Failure
      static constexpr const int Failure = 1;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Failure
      static ::UnityEngine::ProBuilder::ActionResult::Status _get_Failure();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Failure
      static void _set_Failure(::UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Canceled
      static constexpr const int Canceled = 2;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Canceled
      static ::UnityEngine::ProBuilder::ActionResult::Status _get_Canceled();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status Canceled
      static void _set_Canceled(::UnityEngine::ProBuilder::ActionResult::Status value);
      // static field const value: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status NoChange
      static constexpr const int NoChange = 3;
      // Get static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status NoChange
      static ::UnityEngine::ProBuilder::ActionResult::Status _get_NoChange();
      // Set static field: static public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status NoChange
      static void _set_NoChange(::UnityEngine::ProBuilder::ActionResult::Status value);
      // Get instance field reference: public System.Int32 value__
      int& dyn_value__();
    }; // UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status
    #pragma pack(pop)
    static check_size<sizeof(ActionResult::Status), 0 + sizeof(int)> __UnityEngine_ProBuilder_ActionResult_StatusSizeCheck;
    static_assert(sizeof(ActionResult::Status) == 0x4);
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status <status>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    ::UnityEngine::ProBuilder::ActionResult::Status status;
    // Field size check
    static_assert(sizeof(::UnityEngine::ProBuilder::ActionResult::Status) == 0x4);
    // Padding between fields: status and: notification
    char __padding0[0x4] = {};
    // private System.String <notification>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::StringW notification;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status <status>k__BackingField
    ::UnityEngine::ProBuilder::ActionResult::Status& dyn_$status$k__BackingField();
    // Get instance field reference: private System.String <notification>k__BackingField
    ::StringW& dyn_$notification$k__BackingField();
    // public UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status get_status()
    // Offset: 0x24FE664
    ::UnityEngine::ProBuilder::ActionResult::Status get_status();
    // private System.Void set_status(UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status value)
    // Offset: 0x24FE66C
    void set_status(::UnityEngine::ProBuilder::ActionResult::Status value);
    // public System.String get_notification()
    // Offset: 0x24FE674
    ::StringW get_notification();
    // private System.Void set_notification(System.String value)
    // Offset: 0x24FE67C
    void set_notification(::StringW value);
    // static public UnityEngine.ProBuilder.ActionResult get_Success()
    // Offset: 0x24FE780
    static ::UnityEngine::ProBuilder::ActionResult* get_Success();
    // static public UnityEngine.ProBuilder.ActionResult get_NoSelection()
    // Offset: 0x24FE7F0
    static ::UnityEngine::ProBuilder::ActionResult* get_NoSelection();
    // static public UnityEngine.ProBuilder.ActionResult get_UserCanceled()
    // Offset: 0x24FE864
    static ::UnityEngine::ProBuilder::ActionResult* get_UserCanceled();
    // public System.Void .ctor(UnityEngine.ProBuilder.ActionResult/UnityEngine.ProBuilder.Status status, System.String notification)
    // Offset: 0x24FE684
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ActionResult* New_ctor(::UnityEngine::ProBuilder::ActionResult::Status status, ::StringW notification) {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ProBuilder::ActionResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ActionResult*, creationType>(status, notification)));
    }
    // public System.Boolean ToBool()
    // Offset: 0x24FE6D4
    bool ToBool();
    // static public System.Boolean FromBool(System.Boolean success)
    // Offset: 0x24FE6E4
    static bool FromBool(bool success);
  }; // UnityEngine.ProBuilder.ActionResult
  #pragma pack(pop)
  static check_size<sizeof(ActionResult), 24 + sizeof(::StringW)> __UnityEngine_ProBuilder_ActionResultSizeCheck;
  static_assert(sizeof(ActionResult) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ActionResult::Status, "UnityEngine.ProBuilder", "ActionResult/Status");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::get_status
// Il2CppName: get_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult::Status (UnityEngine::ProBuilder::ActionResult::*)()>(&UnityEngine::ProBuilder::ActionResult::get_status)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "get_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::set_status
// Il2CppName: set_status
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ActionResult::*)(::UnityEngine::ProBuilder::ActionResult::Status)>(&UnityEngine::ProBuilder::ActionResult::set_status)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine.ProBuilder", "ActionResult/Status")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "set_status", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::get_notification
// Il2CppName: get_notification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::ProBuilder::ActionResult::*)()>(&UnityEngine::ProBuilder::ActionResult::get_notification)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "get_notification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::set_notification
// Il2CppName: set_notification
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ProBuilder::ActionResult::*)(::StringW)>(&UnityEngine::ProBuilder::ActionResult::set_notification)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "set_notification", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::get_Success
// Il2CppName: get_Success
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&UnityEngine::ProBuilder::ActionResult::get_Success)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "get_Success", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::get_NoSelection
// Il2CppName: get_NoSelection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&UnityEngine::ProBuilder::ActionResult::get_NoSelection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "get_NoSelection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::get_UserCanceled
// Il2CppName: get_UserCanceled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::ActionResult* (*)()>(&UnityEngine::ProBuilder::ActionResult::get_UserCanceled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "get_UserCanceled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::ToBool
// Il2CppName: ToBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::ProBuilder::ActionResult::*)()>(&UnityEngine::ProBuilder::ActionResult::ToBool)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "ToBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::ProBuilder::ActionResult::FromBool
// Il2CppName: FromBool
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool)>(&UnityEngine::ProBuilder::ActionResult::FromBool)> {
  static const MethodInfo* get() {
    static auto* success = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ProBuilder::ActionResult*), "FromBool", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{success});
  }
};
