// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IMultiplayerStatusModel
#include "GlobalNamespace/IMultiplayerStatusModel.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: INetworkConfig
  class INetworkConfig;
  // Forward declaring type: MultiplayerStatusData
  class MultiplayerStatusData;
}
// Forward declaring namespace: System::Net::Http
namespace System::Net::Http {
  // Forward declaring type: HttpClient
  class HttpClient;
}
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
  // Forward declaring type: MultiplayerStatusModel
  class MultiplayerStatusModel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerStatusModel*, "", "MultiplayerStatusModel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerStatusModel
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerStatusModel : public ::Il2CppObject/*, public ::GlobalNamespace::IMultiplayerStatusModel*/ {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerStatusModel::MultiplayerStatusDataFB
    class MultiplayerStatusDataFB;
    // Nested type: ::GlobalNamespace::MultiplayerStatusModel::$GetMultiplayerStatusAsyncInternal$d__9
    struct $GetMultiplayerStatusAsyncInternal$d__9;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // [InjectAttribute] Offset: 0x124D214
    // private readonly INetworkConfig _networkConfig
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::INetworkConfig* networkConfig;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::INetworkConfig*) == 0x8);
    // private System.Net.Http.HttpClient _client
    // Size: 0x8
    // Offset: 0x18
    ::System::Net::Http::HttpClient* client;
    // Field size check
    static_assert(sizeof(::System::Net::Http::HttpClient*) == 0x8);
    // private System.Threading.Tasks.Task`1<MultiplayerStatusData> _request
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* request;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IMultiplayerStatusModel
    operator ::GlobalNamespace::IMultiplayerStatusModel() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IMultiplayerStatusModel*>(this);
    }
    // static field const value: static private System.Int32 kRequestTimeoutSeconds
    static constexpr const int kRequestTimeoutSeconds = 60;
    // Get static field: static private System.Int32 kRequestTimeoutSeconds
    static int _get_kRequestTimeoutSeconds();
    // Set static field: static private System.Int32 kRequestTimeoutSeconds
    static void _set_kRequestTimeoutSeconds(int value);
    // Get instance field reference: private readonly INetworkConfig _networkConfig
    ::GlobalNamespace::INetworkConfig*& dyn__networkConfig();
    // Get instance field reference: private System.Net.Http.HttpClient _client
    ::System::Net::Http::HttpClient*& dyn__client();
    // Get instance field reference: private System.Threading.Tasks.Task`1<MultiplayerStatusData> _request
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*& dyn__request();
    // private System.Void Init()
    // Offset: 0x13ACBD0
    void Init();
    // public System.Threading.Tasks.Task`1<MultiplayerStatusData> GetMultiplayerStatusAsync(System.Threading.CancellationToken cancellationToken)
    // Offset: 0x13ACC18
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken);
    // private System.Boolean IsAvailabilityTaskValid()
    // Offset: 0x13ACC94
    bool IsAvailabilityTaskValid();
    // private System.Void StartRequest()
    // Offset: 0x13ACBF4
    void StartRequest();
    // private System.Threading.Tasks.Task`1<MultiplayerStatusData> GetMultiplayerStatusAsyncInternal()
    // Offset: 0x13ACCFC
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* GetMultiplayerStatusAsyncInternal();
    // public System.Void .ctor()
    // Offset: 0x13ACE1C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerStatusModel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerStatusModel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerStatusModel*, creationType>()));
    }
  }; // MultiplayerStatusModel
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerStatusModel), 32 + sizeof(::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*)> __GlobalNamespace_MultiplayerStatusModelSizeCheck;
  static_assert(sizeof(MultiplayerStatusModel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusModel::Init
// Il2CppName: Init
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerStatusModel::*)()>(&GlobalNamespace::MultiplayerStatusModel::Init)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusModel*), "Init", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsync
// Il2CppName: GetMultiplayerStatusAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (GlobalNamespace::MultiplayerStatusModel::*)(::System::Threading::CancellationToken)>(&GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsync)> {
  static const MethodInfo* get() {
    static auto* cancellationToken = &::il2cpp_utils::GetClassFromName("System.Threading", "CancellationToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusModel*), "GetMultiplayerStatusAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{cancellationToken});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusModel::IsAvailabilityTaskValid
// Il2CppName: IsAvailabilityTaskValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MultiplayerStatusModel::*)()>(&GlobalNamespace::MultiplayerStatusModel::IsAvailabilityTaskValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusModel*), "IsAvailabilityTaskValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusModel::StartRequest
// Il2CppName: StartRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerStatusModel::*)()>(&GlobalNamespace::MultiplayerStatusModel::StartRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusModel*), "StartRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsyncInternal
// Il2CppName: GetMultiplayerStatusAsyncInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (GlobalNamespace::MultiplayerStatusModel::*)()>(&GlobalNamespace::MultiplayerStatusModel::GetMultiplayerStatusAsyncInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerStatusModel*), "GetMultiplayerStatusAsyncInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerStatusModel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
