// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
#include "UnityEngine/ResourceManagement/ResourceProviders/TextDataProvider.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
#include "UnityEngine/ResourceManagement/ResourceProviders/ProvideHandle.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequestAsyncOperation
  class UnityWebRequestAsyncOperation;
}
// Forward declaring namespace: UnityEngine::ResourceManagement
namespace UnityEngine::ResourceManagement {
  // Forward declaring type: WebRequestQueueOperation
  class WebRequestQueueOperation;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x42
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp
  class TextDataProvider::InternalOp : public ::Il2CppObject {
    public:
    // private UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider m_Provider
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* m_Provider;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequestAsyncOperation m_RequestOperation
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Networking::UnityWebRequestAsyncOperation* m_RequestOperation;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequestAsyncOperation*) == 0x8);
    // private UnityEngine.ResourceManagement.WebRequestQueueOperation m_RequestQueueOperation
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::ResourceManagement::WebRequestQueueOperation* m_RequestQueueOperation;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::WebRequestQueueOperation*) == 0x8);
    // private UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle m_PI
    // Size: 0x18
    // Offset: 0x28
    UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_PI;
    // Field size check
    static_assert(sizeof(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle) == 0x18);
    // private System.Boolean m_IgnoreFailures
    // Size: 0x1
    // Offset: 0x40
    bool m_IgnoreFailures;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean m_Complete
    // Size: 0x1
    // Offset: 0x41
    bool m_Complete;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InternalOp
    InternalOp(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* m_Provider_ = {}, UnityEngine::Networking::UnityWebRequestAsyncOperation* m_RequestOperation_ = {}, UnityEngine::ResourceManagement::WebRequestQueueOperation* m_RequestQueueOperation_ = {}, UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle m_PI_ = {}, bool m_IgnoreFailures_ = {}, bool m_Complete_ = {}) noexcept : m_Provider{m_Provider_}, m_RequestOperation{m_RequestOperation_}, m_RequestQueueOperation{m_RequestQueueOperation_}, m_PI{m_PI_}, m_IgnoreFailures{m_IgnoreFailures_}, m_Complete{m_Complete_} {}
    // private System.Single GetPercentComplete()
    // Offset: 0x19CD9DC
    float GetPercentComplete();
    // public System.Void Start(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle provideHandle, UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider rawProvider, System.Boolean ignoreFailures)
    // Offset: 0x19CD444
    void Start(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle, UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider* rawProvider, bool ignoreFailures);
    // private System.Boolean WaitForCompletionHandler()
    // Offset: 0x19CDCC4
    bool WaitForCompletionHandler();
    // private System.Void RequestOperation_completed(UnityEngine.AsyncOperation op)
    // Offset: 0x19CDB20
    void RequestOperation_completed(UnityEngine::AsyncOperation* op);
    // private System.Object ConvertText(System.String text)
    // Offset: 0x19CD9F4
    ::Il2CppObject* ConvertText(::Il2CppString* text);
    // private System.Void <Start>b__7_0(UnityEngine.Networking.UnityWebRequestAsyncOperation asyncOperation)
    // Offset: 0x19CDD44
    void $Start$b__7_0(UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation);
    // public System.Void .ctor()
    // Offset: 0x19CD43C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextDataProvider::InternalOp* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextDataProvider::InternalOp*, creationType>()));
    }
  }; // UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider/InternalOp
  #pragma pack(pop)
  static check_size<sizeof(TextDataProvider::InternalOp), 65 + sizeof(bool)> __UnityEngine_ResourceManagement_ResourceProviders_TextDataProvider_InternalOpSizeCheck;
  static_assert(sizeof(TextDataProvider::InternalOp) == 0x42);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp*, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider/InternalOp");
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::GetPercentComplete
// Il2CppName: GetPercentComplete
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::WaitForCompletionHandler
// Il2CppName: WaitForCompletionHandler
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::RequestOperation_completed
// Il2CppName: RequestOperation_completed
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::ConvertText
// Il2CppName: ConvertText
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::$Start$b__7_0
// Il2CppName: <Start>b__7_0
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider::InternalOp::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!