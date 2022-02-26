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
  // Forward declaring type: LevelParamsPanel
  class LevelParamsPanel;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LevelParamsPanel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelParamsPanel*, "", "LevelParamsPanel");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LevelParamsPanel
  // [TokenAttribute] Offset: FFFFFFFF
  class LevelParamsPanel : public ::UnityEngine::MonoBehaviour {
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
    // private TMPro.TextMeshProUGUI _notesPerSecondText
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* notesPerSecondText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _notesCountText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* notesCountText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _obstaclesCountText
    // Size: 0x8
    // Offset: 0x28
    ::TMPro::TextMeshProUGUI* obstaclesCountText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI _bombsCountText
    // Size: 0x8
    // Offset: 0x30
    ::TMPro::TextMeshProUGUI* bombsCountText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _notesPerSecondText
    ::TMPro::TextMeshProUGUI*& dyn__notesPerSecondText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _notesCountText
    ::TMPro::TextMeshProUGUI*& dyn__notesCountText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _obstaclesCountText
    ::TMPro::TextMeshProUGUI*& dyn__obstaclesCountText();
    // Get instance field reference: private TMPro.TextMeshProUGUI _bombsCountText
    ::TMPro::TextMeshProUGUI*& dyn__bombsCountText();
    // public System.Void set_notesPerSecond(System.Single value)
    // Offset: 0x1477E9C
    void set_notesPerSecond(float value);
    // public System.Void set_notesCount(System.Int32 value)
    // Offset: 0x1477F1C
    void set_notesCount(int value);
    // public System.Void set_obstaclesCount(System.Int32 value)
    // Offset: 0x1477F60
    void set_obstaclesCount(int value);
    // public System.Void set_bombsCount(System.Int32 value)
    // Offset: 0x1477FA4
    void set_bombsCount(int value);
    // public System.Void .ctor()
    // Offset: 0x1477FE8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelParamsPanel* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LevelParamsPanel::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelParamsPanel*, creationType>()));
    }
  }; // LevelParamsPanel
  #pragma pack(pop)
  static check_size<sizeof(LevelParamsPanel), 48 + sizeof(::TMPro::TextMeshProUGUI*)> __GlobalNamespace_LevelParamsPanelSizeCheck;
  static_assert(sizeof(LevelParamsPanel) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelParamsPanel::set_notesPerSecond
// Il2CppName: set_notesPerSecond
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelParamsPanel::*)(float)>(&GlobalNamespace::LevelParamsPanel::set_notesPerSecond)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelParamsPanel*), "set_notesPerSecond", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelParamsPanel::set_notesCount
// Il2CppName: set_notesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelParamsPanel::*)(int)>(&GlobalNamespace::LevelParamsPanel::set_notesCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelParamsPanel*), "set_notesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelParamsPanel::set_obstaclesCount
// Il2CppName: set_obstaclesCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelParamsPanel::*)(int)>(&GlobalNamespace::LevelParamsPanel::set_obstaclesCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelParamsPanel*), "set_obstaclesCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelParamsPanel::set_bombsCount
// Il2CppName: set_bombsCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelParamsPanel::*)(int)>(&GlobalNamespace::LevelParamsPanel::set_bombsCount)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelParamsPanel*), "set_bombsCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelParamsPanel::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
