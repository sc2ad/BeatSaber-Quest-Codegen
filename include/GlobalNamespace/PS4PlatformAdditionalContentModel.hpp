// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: AdditionalContentModel
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PS4PlatformAdditionalContentModel
  class PS4PlatformAdditionalContentModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PS4PlatformAdditionalContentModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4PlatformAdditionalContentModel*, "", "PS4PlatformAdditionalContentModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PS4PlatformAdditionalContentModel
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4PlatformAdditionalContentModel : public ::GlobalNamespace::AdditionalContentModel {
    public:
    // public System.Void .ctor()
    // Offset: 0x12EB5C0
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4PlatformAdditionalContentModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PS4PlatformAdditionalContentModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4PlatformAdditionalContentModel*, creationType>()));
    }
    // protected override System.Void InvalidateDataInternal()
    // Offset: 0x12EB3A0
    // Implemented from: AdditionalContentModel
    // Base method: System.Void AdditionalContentModel::InvalidateDataInternal()
    void InvalidateDataInternal();
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0x12EB3A4
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetLevelEntitlementStatusInternalAsync(System.String levelId, System.Threading.CancellationToken token)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetLevelEntitlementStatusInternalAsync(::StringW levelId, ::System::Threading::CancellationToken token);
    // protected override System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> GetPackEntitlementStatusInternalAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x12EB410
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> AdditionalContentModel::GetPackEntitlementStatusInternalAsync(System.String levelPackId, System.Threading.CancellationToken token)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* GetPackEntitlementStatusInternalAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x12EB47C
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/IsPackBetterBuyThanLevelResult> AdditionalContentModel::IsPackBetterBuyThanLevelAsync(System.String levelPackId, System.Threading.CancellationToken token)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* IsPackBetterBuyThanLevelAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0x12EB4E8
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelProductStoreAsync(System.String levelId, System.Threading.CancellationToken token)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelProductStoreAsync(::StringW levelId, ::System::Threading::CancellationToken token);
    // public override System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    // Offset: 0x12EB554
    // Implemented from: AdditionalContentModel
    // Base method: System.Threading.Tasks.Task`1<AdditionalContentModel/OpenProductStoreResult> AdditionalContentModel::OpenLevelPackProductStoreAsync(System.String levelPackId, System.Threading.CancellationToken token)
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* OpenLevelPackProductStoreAsync(::StringW levelPackId, ::System::Threading::CancellationToken token);
  }; // PS4PlatformAdditionalContentModel
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::InvalidateDataInternal
// Il2CppName: InvalidateDataInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4PlatformAdditionalContentModel::*)()>(&GlobalNamespace::PS4PlatformAdditionalContentModel::InvalidateDataInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PlatformAdditionalContentModel*), "InvalidateDataInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync
// Il2CppName: GetLevelEntitlementStatusInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* (GlobalNamespace::PS4PlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::PS4PlatformAdditionalContentModel::GetLevelEntitlementStatusInternalAsync)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PlatformAdditionalContentModel*), "GetLevelEntitlementStatusInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, token});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync
// Il2CppName: GetPackEntitlementStatusInternalAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::EntitlementStatus>* (GlobalNamespace::PS4PlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::PS4PlatformAdditionalContentModel::GetPackEntitlementStatusInternalAsync)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PlatformAdditionalContentModel*), "GetPackEntitlementStatusInternalAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId, token});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync
// Il2CppName: IsPackBetterBuyThanLevelAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::IsPackBetterBuyThanLevelResult>* (GlobalNamespace::PS4PlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::PS4PlatformAdditionalContentModel::IsPackBetterBuyThanLevelAsync)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PlatformAdditionalContentModel*), "IsPackBetterBuyThanLevelAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId, token});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::OpenLevelProductStoreAsync
// Il2CppName: OpenLevelProductStoreAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* (GlobalNamespace::PS4PlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::PS4PlatformAdditionalContentModel::OpenLevelProductStoreAsync)> {
  static const MethodInfo* get() {
    static auto* levelId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PlatformAdditionalContentModel*), "OpenLevelProductStoreAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelId, token});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4PlatformAdditionalContentModel::OpenLevelPackProductStoreAsync
// Il2CppName: OpenLevelPackProductStoreAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::AdditionalContentModel::OpenProductStoreResult>* (GlobalNamespace::PS4PlatformAdditionalContentModel::*)(::StringW, ::System::Threading::CancellationToken)>(&GlobalNamespace::PS4PlatformAdditionalContentModel::OpenLevelPackProductStoreAsync)> {
  static const MethodInfo* get() {
    static auto* levelPackId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* token = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4PlatformAdditionalContentModel*), "OpenLevelPackProductStoreAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{levelPackId, token});
  }
};
