// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutSelfController
#include "UnityEngine/UI/ILayoutSelfController.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
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
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: LayoutWidthLimiter
  class LayoutWidthLimiter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LayoutWidthLimiter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LayoutWidthLimiter*, "", "LayoutWidthLimiter");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: LayoutWidthLimiter
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  // [RequireComponent] Offset: 110C79C
  class LayoutWidthLimiter : public ::UnityEngine::EventSystems::UIBehaviour/*, public ::UnityEngine::UI::ILayoutSelfController*/ {
    public:
    public:
    // private System.Boolean _limitWidth
    // Size: 0x1
    // Offset: 0x18
    bool limitWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [DrawIfAttribute] Offset: 0x110D350
    // private System.Single _maxWidth
    // Size: 0x4
    // Offset: 0x1C
    float maxWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.RectTransform m_Rect
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::RectTransform* m_Rect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker m_Tracker
    // Size: 0x1
    // Offset: 0x28
    ::UnityEngine::DrivenRectTransformTracker m_Tracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::DrivenRectTransformTracker) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::UI::ILayoutSelfController
    operator ::UnityEngine::UI::ILayoutSelfController() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ILayoutSelfController*>(this);
    }
    // Creating interface conversion operator: i_ILayoutSelfController
    inline ::UnityEngine::UI::ILayoutSelfController* i_ILayoutSelfController() noexcept {
      return reinterpret_cast<::UnityEngine::UI::ILayoutSelfController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _limitWidth
    [[deprecated("Use field access instead!")]] bool& dyn__limitWidth();
    // Get instance field reference: private System.Single _maxWidth
    [[deprecated("Use field access instead!")]] float& dyn__maxWidth();
    // Get instance field reference: private UnityEngine.RectTransform m_Rect
    [[deprecated("Use field access instead!")]] ::UnityEngine::RectTransform*& dyn_m_Rect();
    // Get instance field reference: private UnityEngine.DrivenRectTransformTracker m_Tracker
    [[deprecated("Use field access instead!")]] ::UnityEngine::DrivenRectTransformTracker& dyn_m_Tracker();
    // public System.Boolean get_limitWidth()
    // Offset: 0x2AF0FF8
    bool get_limitWidth();
    // public System.Void set_limitWidth(System.Boolean value)
    // Offset: 0x2AF1000
    void set_limitWidth(bool value);
    // public System.Single get_maxWidth()
    // Offset: 0x2AF10A4
    float get_maxWidth();
    // public System.Void set_maxWidth(System.Single value)
    // Offset: 0x2AF10AC
    void set_maxWidth(float value);
    // private UnityEngine.RectTransform get_rectTransform()
    // Offset: 0x2AF10B4
    ::UnityEngine::RectTransform* get_rectTransform();
    // public System.Void .ctor()
    // Offset: 0x2AF12F0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LayoutWidthLimiter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LayoutWidthLimiter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LayoutWidthLimiter*, creationType>()));
    }
    // public System.Void SetLayoutHorizontal()
    // Offset: 0x2AF1208
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0x2AF12EC
    void SetLayoutVertical();
    // private System.Void SetDirty()
    // Offset: 0x2AF100C
    void SetDirty();
    // protected override System.Void OnEnable()
    // Offset: 0x2AF114C
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x2AF1174
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x2AF1204
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
  }; // LayoutWidthLimiter
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::get_limitWidth
// Il2CppName: get_limitWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::get_limitWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "get_limitWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::set_limitWidth
// Il2CppName: set_limitWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)(bool)>(&GlobalNamespace::LayoutWidthLimiter::set_limitWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "set_limitWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::get_maxWidth
// Il2CppName: get_maxWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::get_maxWidth)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "get_maxWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::set_maxWidth
// Il2CppName: set_maxWidth
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)(float)>(&GlobalNamespace::LayoutWidthLimiter::set_maxWidth)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "set_maxWidth", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::get_rectTransform
// Il2CppName: get_rectTransform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::get_rectTransform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "get_rectTransform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::SetLayoutHorizontal
// Il2CppName: SetLayoutHorizontal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::SetLayoutHorizontal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "SetLayoutHorizontal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::SetLayoutVertical
// Il2CppName: SetLayoutVertical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::SetLayoutVertical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "SetLayoutVertical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::SetDirty
// Il2CppName: SetDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::SetDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "SetDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LayoutWidthLimiter::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LayoutWidthLimiter::*)()>(&GlobalNamespace::LayoutWidthLimiter::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LayoutWidthLimiter*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};