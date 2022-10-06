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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsModelSO
  class MainSettingsModelSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MainSettingsBestGraphicsValues
  class MainSettingsBestGraphicsValues;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MainSettingsBestGraphicsValues);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsBestGraphicsValues*, "", "MainSettingsBestGraphicsValues");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MainSettingsBestGraphicsValues
  // [TokenAttribute] Offset: FFFFFFFF
  class MainSettingsBestGraphicsValues : public ::Il2CppObject {
    public:
    // public System.Void .ctor()
    // Offset: 0x15848B0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MainSettingsBestGraphicsValues* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MainSettingsBestGraphicsValues::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MainSettingsBestGraphicsValues*, creationType>()));
    }
    // static public System.Void ApplyValues(MainSettingsModelSO mainSettingsModel)
    // Offset: 0x158476C
    static void ApplyValues(::GlobalNamespace::MainSettingsModelSO* mainSettingsModel);
  }; // MainSettingsBestGraphicsValues
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsBestGraphicsValues::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::MainSettingsBestGraphicsValues::ApplyValues
// Il2CppName: ApplyValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::MainSettingsModelSO*)>(&GlobalNamespace::MainSettingsBestGraphicsValues::ApplyValues)> {
  static const MethodInfo* get() {
    static auto* mainSettingsModel = &::il2cpp_utils::GetClassFromName("", "MainSettingsModelSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MainSettingsBestGraphicsValues*), "ApplyValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{mainSettingsModel});
  }
};
