// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.ICanvasRaycastFilter
#include "UnityEngine/ICanvasRaycastFilter.hpp"
// Including type: UnityEngine.UI.IMaterialModifier
#include "UnityEngine/UI/IMaterialModifier.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Material
  class Material;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Forward declaring type: Mask
  class Mask;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::UI::Mask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Mask*, "UnityEngine.UI", "Mask");
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.UI.Mask
  // [TokenAttribute] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: 10BE1F8
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10BE1F8
  // [DisallowMultipleComponent] Offset: FFFFFFFF
  class Mask : public ::UnityEngine::EventSystems::UIBehaviour/*, public ::UnityEngine::ICanvasRaycastFilter, public ::UnityEngine::UI::IMaterialModifier*/ {
    public:
    public:
    // private UnityEngine.RectTransform m_RectTransform
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::RectTransform* m_RectTransform;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private System.Boolean m_ShowMaskGraphic
    // Size: 0x1
    // Offset: 0x20
    bool m_ShowMaskGraphic;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_ShowMaskGraphic and: m_Graphic
    char __padding1[0x7] = {};
    // private UnityEngine.UI.Graphic m_Graphic
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Graphic* m_Graphic;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Graphic*) == 0x8);
    // private UnityEngine.Material m_MaskMaterial
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::Material* m_MaskMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    // private UnityEngine.Material m_UnmaskMaterial
    // Size: 0x8
    // Offset: 0x38
    ::UnityEngine::Material* m_UnmaskMaterial;
    // Field size check
    static_assert(sizeof(::UnityEngine::Material*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::ICanvasRaycastFilter
    operator ::UnityEngine::ICanvasRaycastFilter() noexcept {
      return *reinterpret_cast<::UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Creating interface conversion operator: i_ICanvasRaycastFilter
    inline ::UnityEngine::ICanvasRaycastFilter* i_ICanvasRaycastFilter() noexcept {
      return reinterpret_cast<::UnityEngine::ICanvasRaycastFilter*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UI::IMaterialModifier
    operator ::UnityEngine::UI::IMaterialModifier() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::IMaterialModifier*>(this);
    }
    // Creating interface conversion operator: i_IMaterialModifier
    inline ::UnityEngine::UI::IMaterialModifier* i_IMaterialModifier() noexcept {
      return reinterpret_cast<::UnityEngine::UI::IMaterialModifier*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.RectTransform m_RectTransform
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_m_RectTransform();
    // Get instance field reference: private System.Boolean m_ShowMaskGraphic
    [[deprecated("Use field access instead!")]] bool& dyn_m_ShowMaskGraphic();
    // Get instance field reference: private UnityEngine.UI.Graphic m_Graphic
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Graphic*& dyn_m_Graphic();
    // Get instance field reference: private UnityEngine.Material m_MaskMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_MaskMaterial();
    // Get instance field reference: private UnityEngine.Material m_UnmaskMaterial
    [[deprecated("Use field access instead!")]] ::UnityEngine::Material*& dyn_m_UnmaskMaterial();
    // public UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x1F3B720
    ::UnityEngine::RectTransform* get_rectTransform();
    // public System.Boolean get_showMaskGraphic()
    // Offset: 0x1F3B780
    bool get_showMaskGraphic();
    // public System.Void set_showMaskGraphic(System.Boolean value)
    // Offset: 0x1F3B788
    void set_showMaskGraphic(bool value);
    // public UnityEngine.UI.Graphic get_graphic()
    // Offset: 0x1F3B860
    ::UnityEngine::UI::Graphic* get_graphic();
    // public System.Boolean MaskEnabled()
    // Offset: 0x1F3B8D0
    bool MaskEnabled();
    // public System.Void OnSiblingGraphicEnabledDisabled()
    // Offset: 0x1F3B970
    void OnSiblingGraphicEnabledDisabled();
    // public System.Boolean IsRaycastLocationValid(UnityEngine.Vector2 sp, UnityEngine.Camera eventCamera)
    // Offset: 0x1F3BF08
    bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera* eventCamera);
    // public UnityEngine.Material GetModifiedMaterial(UnityEngine.Material baseMaterial)
    // Offset: 0x1F3BFD0
    ::UnityEngine::Material* GetModifiedMaterial(::UnityEngine::Material* baseMaterial);
    // protected System.Void .ctor()
    // Offset: 0x1F3B8C0
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Mask* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::UI::Mask::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Mask*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1F3B974
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x1F3BD44
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
  }; // UnityEngine.UI.Mask
  #pragma pack(pop)
  static check_size<sizeof(Mask), 56 + sizeof(::UnityEngine::Material*)> __UnityEngine_UI_MaskSizeCheck;
  static_assert(sizeof(Mask) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::UI::Mask::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (UnityEngine::UI::Mask::*)()>(&UnityEngine::UI::Mask::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::get_showMaskGraphic
// Il2CppName: get_showMaskGraphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Mask::*)()>(&UnityEngine::UI::Mask::get_showMaskGraphic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "get_showMaskGraphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::set_showMaskGraphic
// Il2CppName: set_showMaskGraphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Mask::*)(bool)>(&UnityEngine::UI::Mask::set_showMaskGraphic)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "set_showMaskGraphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::get_graphic
// Il2CppName: get_graphic
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Graphic* (UnityEngine::UI::Mask::*)()>(&UnityEngine::UI::Mask::get_graphic)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "get_graphic", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::MaskEnabled
// Il2CppName: MaskEnabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Mask::*)()>(&UnityEngine::UI::Mask::MaskEnabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "MaskEnabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::OnSiblingGraphicEnabledDisabled
// Il2CppName: OnSiblingGraphicEnabledDisabled
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Mask::*)()>(&UnityEngine::UI::Mask::OnSiblingGraphicEnabledDisabled)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "OnSiblingGraphicEnabledDisabled", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::IsRaycastLocationValid
// Il2CppName: IsRaycastLocationValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Mask::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(&UnityEngine::UI::Mask::IsRaycastLocationValid)> {
  static const MethodInfo* get() {
    static auto* sp = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector2")->byval_arg;
    static auto* eventCamera = &::il2cpp_utils::GetClassFromName("UnityEngine", "Camera")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "IsRaycastLocationValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{sp, eventCamera});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::GetModifiedMaterial
// Il2CppName: GetModifiedMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (UnityEngine::UI::Mask::*)(::UnityEngine::Material*)>(&UnityEngine::UI::Mask::GetModifiedMaterial)> {
  static const MethodInfo* get() {
    static auto* baseMaterial = &::il2cpp_utils::GetClassFromName("UnityEngine", "Material")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "GetModifiedMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{baseMaterial});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: UnityEngine::UI::Mask::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Mask::*)()>(&UnityEngine::UI::Mask::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::UI::Mask::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Mask::*)()>(&UnityEngine::UI::Mask::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::UI::Mask*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
