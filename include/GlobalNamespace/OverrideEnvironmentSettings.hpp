// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EnvironmentTypeSO
  class EnvironmentTypeSO;
  // Forward declaring type: EnvironmentInfoSO
  class EnvironmentInfoSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OverrideEnvironmentSettings
  class OverrideEnvironmentSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OverrideEnvironmentSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OverrideEnvironmentSettings*, "", "OverrideEnvironmentSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: OverrideEnvironmentSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class OverrideEnvironmentSettings : public ::Il2CppObject {
    public:
    public:
    // public System.Boolean overrideEnvironments
    // Size: 0x1
    // Offset: 0x10
    bool overrideEnvironments;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideEnvironments and: data
    char __padding0[0x7] = {};
    // private readonly System.Collections.Generic.Dictionary`2<EnvironmentTypeSO,EnvironmentInfoSO> _data
    // Size: 0x8
    // Offset: 0x18
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*>* data;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*>*) == 0x8);
    public:
    // Get instance field reference: public System.Boolean overrideEnvironments
    [[deprecated("Use field access instead!")]] bool& dyn_overrideEnvironments();
    // Get instance field reference: private readonly System.Collections.Generic.Dictionary`2<EnvironmentTypeSO,EnvironmentInfoSO> _data
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*>*& dyn__data();
    // public System.Void .ctor()
    // Offset: 0x137BFC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OverrideEnvironmentSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OverrideEnvironmentSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OverrideEnvironmentSettings*, creationType>()));
    }
    // public System.Void SetEnvironmentInfoForType(EnvironmentTypeSO environmentType, EnvironmentInfoSO environmentInfo)
    // Offset: 0x137BED8
    void SetEnvironmentInfoForType(::GlobalNamespace::EnvironmentTypeSO* environmentType, ::GlobalNamespace::EnvironmentInfoSO* environmentInfo);
    // public EnvironmentInfoSO GetOverrideEnvironmentInfoForType(EnvironmentTypeSO environmentType)
    // Offset: 0x137BF48
    ::GlobalNamespace::EnvironmentInfoSO* GetOverrideEnvironmentInfoForType(::GlobalNamespace::EnvironmentTypeSO* environmentType);
  }; // OverrideEnvironmentSettings
  #pragma pack(pop)
  static check_size<sizeof(OverrideEnvironmentSettings), 24 + sizeof(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*>*)> __GlobalNamespace_OverrideEnvironmentSettingsSizeCheck;
  static_assert(sizeof(OverrideEnvironmentSettings) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OverrideEnvironmentSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType
// Il2CppName: SetEnvironmentInfoForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OverrideEnvironmentSettings::*)(::GlobalNamespace::EnvironmentTypeSO*, ::GlobalNamespace::EnvironmentInfoSO*)>(&GlobalNamespace::OverrideEnvironmentSettings::SetEnvironmentInfoForType)> {
  static const MethodInfo* get() {
    static auto* environmentType = &::il2cpp_utils::GetClassFromName("", "EnvironmentTypeSO")->byval_arg;
    static auto* environmentInfo = &::il2cpp_utils::GetClassFromName("", "EnvironmentInfoSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OverrideEnvironmentSettings*), "SetEnvironmentInfoForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentType, environmentInfo});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType
// Il2CppName: GetOverrideEnvironmentInfoForType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentInfoSO* (GlobalNamespace::OverrideEnvironmentSettings::*)(::GlobalNamespace::EnvironmentTypeSO*)>(&GlobalNamespace::OverrideEnvironmentSettings::GetOverrideEnvironmentInfoForType)> {
  static const MethodInfo* get() {
    static auto* environmentType = &::il2cpp_utils::GetClassFromName("", "EnvironmentTypeSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OverrideEnvironmentSettings*), "GetOverrideEnvironmentInfoForType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{environmentType});
  }
};
