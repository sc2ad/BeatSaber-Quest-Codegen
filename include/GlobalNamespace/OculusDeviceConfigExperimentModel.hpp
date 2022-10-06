// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IExperimentModel
#include "GlobalNamespace/IExperimentModel.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IExperimentData
  class IExperimentData;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: String
  class String;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OculusDeviceConfigExperimentModel
  class OculusDeviceConfigExperimentModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusDeviceConfigExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusDeviceConfigExperimentModel*, "", "OculusDeviceConfigExperimentModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OculusDeviceConfigExperimentModel
  // [TokenAttribute] Offset: FFFFFFFF
  class OculusDeviceConfigExperimentModel : public ::Il2CppObject/*, public ::GlobalNamespace::IExperimentModel*/ {
    public:
    // Nested type: ::GlobalNamespace::OculusDeviceConfigExperimentModel::$Initialize$d__6
    struct $Initialize$d__6;
    // Nested type: ::GlobalNamespace::OculusDeviceConfigExperimentModel::$GetBooleanAsync$d__7
    struct $GetBooleanAsync$d__7;
    public:
    // private readonly System.Threading.Tasks.Task _initializationTask
    // Size: 0x8
    // Offset: 0x10
    ::System::Threading::Tasks::Task* initializationTask;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IExperimentModel
    operator ::GlobalNamespace::IExperimentModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IExperimentModel*>(this);
    }
    // Creating interface conversion operator: i_IExperimentModel
    inline ::GlobalNamespace::IExperimentModel* i_IExperimentModel() noexcept {
      return reinterpret_cast<::GlobalNamespace::IExperimentModel*>(this);
    }
    // Creating conversion operator: operator ::System::Threading::Tasks::Task*
    constexpr operator ::System::Threading::Tasks::Task*() const noexcept {
      return initializationTask;
    }
    // static field const value: static private System.Int32 kInitTimeoutMs
    static constexpr const int kInitTimeoutMs = 5000;
    // Get static field: static private System.Int32 kInitTimeoutMs
    static int _get_kInitTimeoutMs();
    // Set static field: static private System.Int32 kInitTimeoutMs
    static void _set_kInitTimeoutMs(int value);
    // static field const value: static private System.String kIsEmployeeKey
    static constexpr const char* kIsEmployeeKey = "deviceconfig_main_shared:is_employee";
    // Get static field: static private System.String kIsEmployeeKey
    static ::StringW _get_kIsEmployeeKey();
    // Set static field: static private System.String kIsEmployeeKey
    static void _set_kIsEmployeeKey(::StringW value);
    // Get instance field reference: private readonly System.Threading.Tasks.Task _initializationTask
    [[deprecated("Use field access instead!")]] ::System::Threading::Tasks::Task*& dyn__initializationTask();
    // public System.Void .ctor()
    // Offset: 0x159B414
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusDeviceConfigExperimentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusDeviceConfigExperimentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusDeviceConfigExperimentModel*, creationType>()));
    }
    // public System.Threading.Tasks.Task`1<System.Boolean> IsEmployee()
    // Offset: 0x159B528
    ::System::Threading::Tasks::Task_1<bool>* IsEmployee();
    // public System.Threading.Tasks.Task`1<System.Boolean> IsInTest(IExperimentData data)
    // Offset: 0x159B69C
    ::System::Threading::Tasks::Task_1<bool>* IsInTest(::GlobalNamespace::IExperimentData* data);
    // private System.Threading.Tasks.Task Initialize()
    // Offset: 0x159B440
    ::System::Threading::Tasks::Task* Initialize();
    // private System.Threading.Tasks.Task`1<System.Boolean> GetBooleanAsync(System.String key)
    // Offset: 0x159B578
    ::System::Threading::Tasks::Task_1<bool>* GetBooleanAsync(::StringW key);
  }; // OculusDeviceConfigExperimentModel
  #pragma pack(pop)
  static check_size<sizeof(OculusDeviceConfigExperimentModel), 16 + sizeof(::System::Threading::Tasks::Task*)> __GlobalNamespace_OculusDeviceConfigExperimentModelSizeCheck;
  static_assert(sizeof(OculusDeviceConfigExperimentModel) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfigExperimentModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfigExperimentModel::IsEmployee
// Il2CppName: IsEmployee
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::OculusDeviceConfigExperimentModel::*)()>(&GlobalNamespace::OculusDeviceConfigExperimentModel::IsEmployee)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfigExperimentModel*), "IsEmployee", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfigExperimentModel::IsInTest
// Il2CppName: IsInTest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::OculusDeviceConfigExperimentModel::*)(::GlobalNamespace::IExperimentData*)>(&GlobalNamespace::OculusDeviceConfigExperimentModel::IsInTest)> {
  static const MethodInfo* get() {
    static auto* data = &::il2cpp_utils::GetClassFromName("", "IExperimentData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfigExperimentModel*), "IsInTest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfigExperimentModel::Initialize
// Il2CppName: Initialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (GlobalNamespace::OculusDeviceConfigExperimentModel::*)()>(&GlobalNamespace::OculusDeviceConfigExperimentModel::Initialize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfigExperimentModel*), "Initialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusDeviceConfigExperimentModel::GetBooleanAsync
// Il2CppName: GetBooleanAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (GlobalNamespace::OculusDeviceConfigExperimentModel::*)(::StringW)>(&GlobalNamespace::OculusDeviceConfigExperimentModel::GetBooleanAsync)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusDeviceConfigExperimentModel*), "GetBooleanAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key});
  }
};
