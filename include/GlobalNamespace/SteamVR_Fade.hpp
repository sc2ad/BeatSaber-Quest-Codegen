// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Material
  class Material;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SteamVR_Fade
  class SteamVR_Fade;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SteamVR_Fade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamVR_Fade*, "", "SteamVR_Fade");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: SteamVR_Fade
  // [TokenAttribute] Offset: FFFFFFFF
  class SteamVR_Fade : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private UnityEngine.Color currentColor
    // Size: 0x10
    // Offset: 0x18
    ::UnityEngine::Color currentColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color targetColor
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color targetColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private UnityEngine.Color deltaColor
    // Size: 0x10
    // Offset: 0x38
    ::UnityEngine::Color deltaColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Boolean fadeOverlay
    // Size: 0x1
    // Offset: 0x48
    bool fadeOverlay;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private UnityEngine.Material fadeMaterial
    static ::UnityEngine::Material* _get_fadeMaterial();
    // Set static field: static private UnityEngine.Material fadeMaterial
    static void _set_fadeMaterial(::UnityEngine::Material* value);
    // Get static field: static private System.Int32 fadeMaterialColorID
    static int _get_fadeMaterialColorID();
    // Set static field: static private System.Int32 fadeMaterialColorID
    static void _set_fadeMaterialColorID(int value);
    // Get instance field reference: private UnityEngine.Color currentColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_currentColor();
    // Get instance field reference: private UnityEngine.Color targetColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_targetColor();
    // Get instance field reference: private UnityEngine.Color deltaColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_deltaColor();
    // Get instance field reference: private System.Boolean fadeOverlay
    [[deprecated("Use field access instead!")]] bool& dyn_fadeOverlay();
    // public System.Void .ctor()
    // Offset: 0x18BAAD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SteamVR_Fade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SteamVR_Fade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SteamVR_Fade*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x18BAB80
    static void _cctor();
    // static public System.Void Start(UnityEngine.Color newColor, System.Single duration, System.Boolean fadeOverlay)
    // Offset: 0x18BA338
    static void Start(::UnityEngine::Color newColor, float duration, bool fadeOverlay);
    // static public System.Void View(UnityEngine.Color newColor, System.Single duration)
    // Offset: 0x18BA3FC
    static void View(::UnityEngine::Color newColor, float duration);
    // public System.Void OnStartFade(UnityEngine.Color newColor, System.Single duration, System.Boolean fadeOverlay)
    // Offset: 0x18BA4C4
    void OnStartFade(::UnityEngine::Color newColor, float duration, bool fadeOverlay);
    // private System.Void OnEnable()
    // Offset: 0x18BA52C
    void OnEnable();
    // private System.Void OnDisable()
    // Offset: 0x18BA6EC
    void OnDisable();
    // private System.Void OnPostRender()
    // Offset: 0x18BA7B0
    void OnPostRender();
  }; // SteamVR_Fade
  #pragma pack(pop)
  static check_size<sizeof(SteamVR_Fade), 72 + sizeof(bool)> __GlobalNamespace_SteamVR_FadeSizeCheck;
  static_assert(sizeof(SteamVR_Fade) == 0x49);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::SteamVR_Fade::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Fade*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Color, float, bool)>(&GlobalNamespace::SteamVR_Fade::Start)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeOverlay = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Fade*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor, duration, fadeOverlay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::View
// Il2CppName: View
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Color, float)>(&GlobalNamespace::SteamVR_Fade::View)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Fade*), "View", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor, duration});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::OnStartFade
// Il2CppName: OnStartFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Fade::*)(::UnityEngine::Color, float, bool)>(&GlobalNamespace::SteamVR_Fade::OnStartFade)> {
  static const MethodInfo* get() {
    static auto* newColor = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* fadeOverlay = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Fade*), "OnStartFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{newColor, duration, fadeOverlay});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Fade::*)()>(&GlobalNamespace::SteamVR_Fade::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Fade*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Fade::*)()>(&GlobalNamespace::SteamVR_Fade::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Fade*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SteamVR_Fade::OnPostRender
// Il2CppName: OnPostRender
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SteamVR_Fade::*)()>(&GlobalNamespace::SteamVR_Fade::OnPostRender)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SteamVR_Fade*), "OnPostRender", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
