// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PS4PublisherSKUSettingsSO
  class PS4PublisherSKUSettingsSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PS4ActivePublisherSKUSettingsSO
  class PS4ActivePublisherSKUSettingsSO;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4ActivePublisherSKUSettingsSO*, "", "PS4ActivePublisherSKUSettingsSO");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: PS4ActivePublisherSKUSettingsSO
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4ActivePublisherSKUSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
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
    // [NullAllowed] Offset: 0x124DE74
    // public PS4PublisherSKUSettingsSO activePublisherSKUSettings
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PS4PublisherSKUSettingsSO* activePublisherSKUSettings;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PS4PublisherSKUSettingsSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: public PS4PublisherSKUSettingsSO activePublisherSKUSettings
    ::GlobalNamespace::PS4PublisherSKUSettingsSO*& dyn_activePublisherSKUSettings();
    // public System.Void .ctor()
    // Offset: 0x12E9D80
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4ActivePublisherSKUSettingsSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PS4ActivePublisherSKUSettingsSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4ActivePublisherSKUSettingsSO*, creationType>()));
    }
  }; // PS4ActivePublisherSKUSettingsSO
  #pragma pack(pop)
  static check_size<sizeof(PS4ActivePublisherSKUSettingsSO), 24 + sizeof(::GlobalNamespace::PS4PublisherSKUSettingsSO*)> __GlobalNamespace_PS4ActivePublisherSKUSettingsSOSizeCheck;
  static_assert(sizeof(PS4ActivePublisherSKUSettingsSO) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4ActivePublisherSKUSettingsSO::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
