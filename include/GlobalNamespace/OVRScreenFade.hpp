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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
  // Forward declaring type: MeshFilter
  class MeshFilter;
  // Forward declaring type: Material
  class Material;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRScreenFade
  class OVRScreenFade;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRScreenFade);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRScreenFade*, "", "OVRScreenFade");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x59
  #pragma pack(push, 1)
  // Autogenerated type: OVRScreenFade
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRScreenFade : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::OVRScreenFade::$Fade$d__25
    class $Fade$d__25;
    public:
    // [TooltipAttribute] Offset: 0x10C9B9C
    // public System.Single fadeTime
    // Size: 0x4
    // Offset: 0x18
    float fadeTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [TooltipAttribute] Offset: 0x10C9BD4
    // public UnityEngine.Color fadeColor
    // Size: 0x10
    // Offset: 0x1C
    ::UnityEngine::Color fadeColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // public System.Boolean fadeOnStart
    // Size: 0x1
    // Offset: 0x2C
    bool fadeOnStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fadeOnStart and: renderQueue
    char __padding2[0x3] = {};
    // public System.Int32 renderQueue
    // Size: 0x4
    // Offset: 0x30
    int renderQueue;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single explicitFadeAlpha
    // Size: 0x4
    // Offset: 0x34
    float explicitFadeAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single animatedFadeAlpha
    // Size: 0x4
    // Offset: 0x38
    float animatedFadeAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single uiFadeAlpha
    // Size: 0x4
    // Offset: 0x3C
    float uiFadeAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.MeshRenderer fadeRenderer
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::MeshRenderer* fadeRenderer;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    // private UnityEngine.MeshFilter fadeMesh
    // Size: 0x8
    // Offset: 0x48
    ::UnityEngine::MeshFilter* fadeMesh;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshFilter*) == 0x8);
    // private UnityEngine.Material fadeMaterial
    // Size: 0x8
    // Offset: 0x50
    ::UnityEngine::Material* fadeMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private System.Boolean isFading
    // Size: 0x1
    // Offset: 0x58
    bool isFading;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get static field: static private OVRScreenFade <instance>k__BackingField
    static ::GlobalNamespace::OVRScreenFade* _get_$instance$k__BackingField();
    // Set static field: static private OVRScreenFade <instance>k__BackingField
    static void _set_$instance$k__BackingField(::GlobalNamespace::OVRScreenFade* value);
    // Get instance field reference: public System.Single fadeTime
    [[deprecated("Use field access instead!")]] float& dyn_fadeTime();
    // Get instance field reference: public UnityEngine.Color fadeColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn_fadeColor();
    // Get instance field reference: public System.Boolean fadeOnStart
    [[deprecated("Use field access instead!")]] bool& dyn_fadeOnStart();
    // Get instance field reference: public System.Int32 renderQueue
    [[deprecated("Use field access instead!")]] int& dyn_renderQueue();
    // Get instance field reference: private System.Single explicitFadeAlpha
    [[deprecated("Use field access instead!")]] float& dyn_explicitFadeAlpha();
    // Get instance field reference: private System.Single animatedFadeAlpha
    [[deprecated("Use field access instead!")]] float& dyn_animatedFadeAlpha();
    // Get instance field reference: private System.Single uiFadeAlpha
    [[deprecated("Use field access instead!")]] float& dyn_uiFadeAlpha();
    // Get instance field reference: private UnityEngine.MeshRenderer fadeRenderer
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshRenderer*& dyn_fadeRenderer();
    // Get instance field reference: private UnityEngine.MeshFilter fadeMesh
    [[deprecated("Use field access instead!")]] ::UnityEngine::MeshFilter*& dyn_fadeMesh();
    // Get instance field reference: private UnityEngine.Material fadeMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_fadeMaterial();
    // Get instance field reference: private System.Boolean isFading
    [[deprecated("Use field access instead!")]] bool& dyn_isFading();
    // static public OVRScreenFade get_instance()
    // Offset: 0x1B7C770
    static ::GlobalNamespace::OVRScreenFade* get_instance();
    // static private System.Void set_instance(OVRScreenFade value)
    // Offset: 0x1B7C7C0
    static void set_instance(::GlobalNamespace::OVRScreenFade* value);
    // public System.Single get_currentAlpha()
    // Offset: 0x1B7C814
    float get_currentAlpha();
    // public System.Void .ctor()
    // Offset: 0x1B7D2B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRScreenFade* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRScreenFade::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRScreenFade*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x1B7C8D8
    void Start();
    // public System.Void FadeIn()
    // Offset: 0x1B7CE14
    void FadeIn();
    // public System.Void FadeOut()
    // Offset: 0x1B7CECC
    void FadeOut();
    // private System.Void OnLevelFinishedLoading(System.Int32 level)
    // Offset: 0x1B7CF00
    void OnLevelFinishedLoading(int level);
    // private System.Void OnEnable()
    // Offset: 0x1B7CF34
    void OnEnable();
    // private System.Void OnDestroy()
    // Offset: 0x1B7CF4C
    void OnDestroy();
    // public System.Void SetUIFade(System.Single level)
    // Offset: 0x1B7D0E8
    void SetUIFade(float level);
    // public System.Void SetExplicitFade(System.Single level)
    // Offset: 0x1B7D280
    void SetExplicitFade(float level);
    // private System.Collections.IEnumerator Fade(System.Single startAlpha, System.Single endAlpha)
    // Offset: 0x1B7CE48
    ::System::Collections::IEnumerator* Fade(float startAlpha, float endAlpha);
    // private System.Void SetMaterialAlpha()
    // Offset: 0x1B7D168
    void SetMaterialAlpha();
  }; // OVRScreenFade
  #pragma pack(pop)
  static check_size<sizeof(OVRScreenFade), 88 + sizeof(bool)> __GlobalNamespace_OVRScreenFadeSizeCheck;
  static_assert(sizeof(OVRScreenFade) == 0x59);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::get_instance
// Il2CppName: get_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRScreenFade* (*)()>(&GlobalNamespace::OVRScreenFade::get_instance)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "get_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::set_instance
// Il2CppName: set_instance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRScreenFade*)>(&GlobalNamespace::OVRScreenFade::set_instance)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "OVRScreenFade")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "set_instance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::get_currentAlpha
// Il2CppName: get_currentAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRScreenFade::*)()>(&GlobalNamespace::OVRScreenFade::get_currentAlpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "get_currentAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)()>(&GlobalNamespace::OVRScreenFade::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::FadeIn
// Il2CppName: FadeIn
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)()>(&GlobalNamespace::OVRScreenFade::FadeIn)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "FadeIn", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::FadeOut
// Il2CppName: FadeOut
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)()>(&GlobalNamespace::OVRScreenFade::FadeOut)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "FadeOut", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::OnLevelFinishedLoading
// Il2CppName: OnLevelFinishedLoading
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)(int)>(&GlobalNamespace::OVRScreenFade::OnLevelFinishedLoading)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "OnLevelFinishedLoading", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)()>(&GlobalNamespace::OVRScreenFade::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::OnDestroy
// Il2CppName: OnDestroy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)()>(&GlobalNamespace::OVRScreenFade::OnDestroy)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "OnDestroy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::SetUIFade
// Il2CppName: SetUIFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)(float)>(&GlobalNamespace::OVRScreenFade::SetUIFade)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "SetUIFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::SetExplicitFade
// Il2CppName: SetExplicitFade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)(float)>(&GlobalNamespace::OVRScreenFade::SetExplicitFade)> {
  static const MethodInfo* get() {
    static auto* level = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "SetExplicitFade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{level});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::Fade
// Il2CppName: Fade
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::OVRScreenFade::*)(float, float)>(&GlobalNamespace::OVRScreenFade::Fade)> {
  static const MethodInfo* get() {
    static auto* startAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* endAlpha = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "Fade", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{startAlpha, endAlpha});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRScreenFade::SetMaterialAlpha
// Il2CppName: SetMaterialAlpha
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRScreenFade::*)()>(&GlobalNamespace::OVRScreenFade::SetMaterialAlpha)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRScreenFade*), "SetMaterialAlpha", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
