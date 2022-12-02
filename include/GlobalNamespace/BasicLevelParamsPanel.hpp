// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BasicLevelParamsPanel
  class BasicLevelParamsPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BasicLevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BasicLevelParamsPanel*, "", "BasicLevelParamsPanel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: BasicLevelParamsPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class BasicLevelParamsPanel : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _durationText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* durationText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _bpmText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* bpmText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _durationText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__durationText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _bpmText
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__bpmText();
    // public System.Void set_duration(System.Single value)
    // Offset: 0x13A0B2C
    void set_duration(float value);
    // public System.Void set_bpm(System.Single value)
    // Offset: 0x13A0B64
    void set_bpm(float value);
    // public System.Void .ctor()
    // Offset: 0x13A0BA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicLevelParamsPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BasicLevelParamsPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicLevelParamsPanel*, creationType>()));
    }
  }; // BasicLevelParamsPanel
  #pragma pack(pop)
  static check_size<sizeof(BasicLevelParamsPanel), 32 + sizeof(::TMPro::TextMeshProUGUI*)> __GlobalNamespace_BasicLevelParamsPanelSizeCheck;
  static_assert(sizeof(BasicLevelParamsPanel) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BasicLevelParamsPanel::set_duration
// Il2CppName: set_duration
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicLevelParamsPanel::*)(float)>(&GlobalNamespace::BasicLevelParamsPanel::set_duration)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicLevelParamsPanel*), "set_duration", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicLevelParamsPanel::set_bpm
// Il2CppName: set_bpm
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BasicLevelParamsPanel::*)(float)>(&GlobalNamespace::BasicLevelParamsPanel::set_bpm)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BasicLevelParamsPanel*), "set_bpm", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BasicLevelParamsPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
