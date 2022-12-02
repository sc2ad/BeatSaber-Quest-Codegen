// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
#include "UnityEngine/ResourceManagement/ResourceProviders/ResourceProviderBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ResourceManagement::ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: ProvideHandle
  struct ProvideHandle;
}
// Completed forward declares
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Forward declaring type: AtlasSpriteProvider
  class AtlasSpriteProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*, "UnityEngine.ResourceManagement.ResourceProviders", "AtlasSpriteProvider");
// Type namespace: UnityEngine.ResourceManagement.ResourceProviders
namespace UnityEngine::ResourceManagement::ResourceProviders {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
  // [TokenAttribute] Offset: FFFFFFFF
  // [DisplayNameAttribute] Offset: 1100EAC
  class AtlasSpriteProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
    public:
    // public System.Void .ctor()
    // Offset: 0x1F740F0
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AtlasSpriteProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AtlasSpriteProvider*, creationType>()));
    }
    // public override System.Void Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    // Offset: 0x1F73CCC
    // Implemented from: UnityEngine.ResourceManagement.ResourceProviders.ResourceProviderBase
    // Base method: System.Void ResourceProviderBase::Provide(UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle providerInterface)
    void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle providerInterface);
  }; // UnityEngine.ResourceManagement.ResourceProviders.AtlasSpriteProvider
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Provide
// Il2CppName: Provide
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::*)(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider::Provide)> {
  static const MethodInfo* get() {
    static auto* providerInterface = &::il2cpp_utils::GetClassFromName("UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::ResourceManagement::ResourceProviders::AtlasSpriteProvider*), "Provide", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{providerInterface});
  }
};
