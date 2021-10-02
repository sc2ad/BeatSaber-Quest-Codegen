// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LeaderboardsModelLegacyWrapper
#include "GlobalNamespace/LeaderboardsModelLegacyWrapper.hpp"
// Including type: HMAsyncRequest
#include "GlobalNamespace/HMAsyncRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken
  // [TokenAttribute] Offset: FFFFFFFF
  class LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken : public GlobalNamespace::HMAsyncRequest {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Size: 0x8
    // Offset: 0x28
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    public:
    // Get instance field reference: private System.Threading.CancellationTokenSource _cancellationTokenSource
    System::Threading::CancellationTokenSource*& dyn__cancellationTokenSource();
    // public System.Threading.CancellationTokenSource get_cancellationTokenSource()
    // Offset: 0x114BA34
    System::Threading::CancellationTokenSource* get_cancellationTokenSource();
    // public System.Void .ctor()
    // Offset: 0x114AED8
    // Implemented from: HMAsyncRequest
    // Base method: System.Void HMAsyncRequest::.ctor()
    // Base method: System.Void HMAutoincrementedRequestId::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*, creationType>()));
    }
    // public override System.Void Cancel()
    // Offset: 0x114BA3C
    // Implemented from: HMAsyncRequest
    // Base method: System.Void HMAsyncRequest::Cancel()
    void Cancel();
  }; // LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken
  #pragma pack(pop)
  static check_size<sizeof(LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken), 40 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_LeaderboardsModelLegacyWrapper_HMAsyncRequestWithCancellationTokenSizeCheck;
  static_assert(sizeof(LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*, "", "LeaderboardsModelLegacyWrapper/HMAsyncRequestWithCancellationToken");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::get_cancellationTokenSource
// Il2CppName: get_cancellationTokenSource
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Threading::CancellationTokenSource* (GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::*)()>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::get_cancellationTokenSource)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*), "get_cancellationTokenSource", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::*)()>(&GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LeaderboardsModelLegacyWrapper::HMAsyncRequestWithCancellationToken*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
