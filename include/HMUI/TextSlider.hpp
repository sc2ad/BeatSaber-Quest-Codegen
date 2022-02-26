// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.UI.Selectable
#include "UnityEngine/UI/Selectable.hpp"
// Including type: UnityEngine.EventSystems.IBeginDragHandler
#include "UnityEngine/EventSystems/IBeginDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IDragHandler
#include "UnityEngine/EventSystems/IDragHandler.hpp"
// Including type: UnityEngine.EventSystems.IInitializePotentialDragHandler
#include "UnityEngine/EventSystems/IInitializePotentialDragHandler.hpp"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Including type: UnityEngine.DrivenRectTransformTracker
#include "UnityEngine/DrivenRectTransformTracker.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Skipping declaration: Color because it is already included!
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: TextSlider
  class TextSlider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::TextSlider);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TextSlider*, "HMUI", "TextSlider");
// Type namespace: HMUI
namespace HMUI {
  // WARNING Size may be invalid!
  // Autogenerated type: HMUI.TextSlider
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 122AC0C
  class TextSlider : public ::UnityEngine::UI::Selectable/*, public ::UnityEngine::EventSystems::IBeginDragHandler, public ::UnityEngine::EventSystems::IDragHandler, public ::UnityEngine::EventSystems::IInitializePotentialDragHandler, public ::UnityEngine::UI::ICanvasElement*/ {
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
    // private TMPro.TextMeshProUGUI _valueText
    // Size: 0x8
    // Offset: 0xF8
    ::TMPro::TextMeshProUGUI* valueText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.RectTransform _handleRect
    // Size: 0x8
    // Offset: 0x100
    ::UnityEngine::RectTransform* handleRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // [SpaceAttribute] Offset: 0x122BDD0
    // private System.Boolean _enableDragging
    // Size: 0x1
    // Offset: 0x108
    bool enableDragging;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Single _handleSize
    // Size: 0x4
    // Offset: 0x10C
    float handleSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _valueSize
    // Size: 0x4
    // Offset: 0x110
    float valueSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _separatorSize
    // Size: 0x4
    // Offset: 0x114
    float separatorSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _numberOfSteps
    // Size: 0x4
    // Offset: 0x118
    int numberOfSteps;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [SpaceAttribute] Offset: 0x122BE48
    // [RangeAttribute] Offset: 0x122BE48
    // private System.Single _normalizedValue
    // Size: 0x4
    // Offset: 0x11C
    float normalizedValue;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Action`2<HMUI.TextSlider,System.Single> normalizedValueDidChangeEvent
    // Size: 0x8
    // Offset: 0x120
    ::System::Action_2<::HMUI::TextSlider*, float>* normalizedValueDidChangeEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::HMUI::TextSlider*, float>*) == 0x8);
    // private UnityEngine.RectTransform _containerRect
    // Size: 0x8
    // Offset: 0x128
    ::UnityEngine::RectTransform* containerRect;
    // Field size check
    static_assert(sizeof(::UnityEngine::RectTransform*) == 0x8);
    // private UnityEngine.UI.Graphic _handleGraphic
    // Size: 0x8
    // Offset: 0x130
    ::UnityEngine::UI::Graphic* handleGraphic;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Graphic*) == 0x8);
    // private UnityEngine.DrivenRectTransformTracker _tracker
    // Size: 0x1
    // Offset: 0x138
    ::UnityEngine::DrivenRectTransformTracker tracker;
    // Field size check
    static_assert(sizeof(::UnityEngine::DrivenRectTransformTracker) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IBeginDragHandler
    operator ::UnityEngine::EventSystems::IBeginDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IBeginDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IDragHandler
    operator ::UnityEngine::EventSystems::IDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler
    operator ::UnityEngine::EventSystems::IInitializePotentialDragHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IInitializePotentialDragHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::UI::ICanvasElement
    operator ::UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<::UnityEngine::UI::ICanvasElement*>(this);
    }
    // Get instance field reference: private TMPro.TextMeshProUGUI _valueText
    ::TMPro::TextMeshProUGUI*& dyn__valueText();
    // Get instance field reference: private UnityEngine.RectTransform _handleRect
    ::UnityEngine::RectTransform*& dyn__handleRect();
    // Get instance field reference: private System.Boolean _enableDragging
    bool& dyn__enableDragging();
    // Get instance field reference: private System.Single _handleSize
    float& dyn__handleSize();
    // Get instance field reference: private System.Single _valueSize
    float& dyn__valueSize();
    // Get instance field reference: private System.Single _separatorSize
    float& dyn__separatorSize();
    // Get instance field reference: private System.Int32 _numberOfSteps
    int& dyn__numberOfSteps();
    // Get instance field reference: private System.Single _normalizedValue
    float& dyn__normalizedValue();
    // Get instance field reference: private System.Action`2<HMUI.TextSlider,System.Single> normalizedValueDidChangeEvent
    ::System::Action_2<::HMUI::TextSlider*, float>*& dyn_normalizedValueDidChangeEvent();
    // Get instance field reference: private UnityEngine.RectTransform _containerRect
    ::UnityEngine::RectTransform*& dyn__containerRect();
    // Get instance field reference: private UnityEngine.UI.Graphic _handleGraphic
    ::UnityEngine::UI::Graphic*& dyn__handleGraphic();
    // Get instance field reference: private UnityEngine.DrivenRectTransformTracker _tracker
    ::UnityEngine::DrivenRectTransformTracker& dyn__tracker();
    // public System.Void set_valueTextColor(UnityEngine.Color value)
    // Offset: 0x16B498C
    void set_valueTextColor(::UnityEngine::Color value);
    // public UnityEngine.RectTransform get_handleRect()
    // Offset: 0x16B49B0
    ::UnityEngine::RectTransform* get_handleRect();
    // public System.Void set_handleRect(UnityEngine.RectTransform value)
    // Offset: 0x16B49B8
    void set_handleRect(::UnityEngine::RectTransform* value);
    // public System.Void set_handleColor(UnityEngine.Color value)
    // Offset: 0x16B4B90
    void set_handleColor(::UnityEngine::Color value);
    // public System.Single get_handleSize()
    // Offset: 0x16B4C64
    float get_handleSize();
    // public System.Void set_handleSize(System.Single value)
    // Offset: 0x16B4C6C
    void set_handleSize(float value);
    // public System.Single get_valueSize()
    // Offset: 0x16B4CF4
    float get_valueSize();
    // public System.Void set_valueSize(System.Single value)
    // Offset: 0x16B4CFC
    void set_valueSize(float value);
    // public System.Single get_separatorSize()
    // Offset: 0x16B4D84
    float get_separatorSize();
    // public System.Void set_separatorSize(System.Single value)
    // Offset: 0x16B4D8C
    void set_separatorSize(float value);
    // public System.Int32 get_numberOfSteps()
    // Offset: 0x16B4E14
    int get_numberOfSteps();
    // public System.Void set_numberOfSteps(System.Int32 value)
    // Offset: 0x16B4E1C
    void set_numberOfSteps(int value);
    // public System.Single get_normalizedValue()
    // Offset: 0x16A8678
    float get_normalizedValue();
    // public System.Void set_normalizedValue(System.Single value)
    // Offset: 0x16A863C
    void set_normalizedValue(float value);
    // private UnityEngine.Transform UnityEngine.UI.ICanvasElement.get_transform()
    // Offset: 0x16B5AF8
    ::UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // public System.Void add_normalizedValueDidChangeEvent(System.Action`2<HMUI.TextSlider,System.Single> value)
    // Offset: 0x16A8AB0
    void add_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::TextSlider*, float>* value);
    // public System.Void remove_normalizedValueDidChangeEvent(System.Action`2<HMUI.TextSlider,System.Single> value)
    // Offset: 0x16A8BF0
    void remove_normalizedValueDidChangeEvent(::System::Action_2<::HMUI::TextSlider*, float>* value);
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x16B4FA0
    void Rebuild(::UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x16B4FA4
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x16B4FA8
    void GraphicUpdateComplete();
    // private System.Void UpdateCachedReferences()
    // Offset: 0x16B4A48
    void UpdateCachedReferences();
    // protected System.Void SetNormalizedValue(System.Single input)
    // Offset: 0x16A8E94
    void SetNormalizedValue(float input);
    // private System.Void SetNormalizedValue(System.Single input, System.Boolean sendCallback)
    // Offset: 0x16B4EB4
    void SetNormalizedValue(float input, bool sendCallback);
    // protected System.Void UpdateVisuals()
    // Offset: 0x16B507C
    void UpdateVisuals();
    // private System.Void UpdateDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16B553C
    void UpdateDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Boolean MayDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16B583C
    bool MayDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnBeginDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16B58A4
    void OnBeginDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16B5948
    void OnDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnInitializePotentialDrag(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16B5AB8
    void OnInitializePotentialDrag(::UnityEngine::EventSystems::PointerEventData* eventData);
    // protected System.String TextForNormalizedValue(System.Single normalizedValue)
    // Offset: 0x16B5AD0
    ::StringW TextForNormalizedValue(float normalizedValue);
    // public System.Void .ctor()
    // Offset: 0x16A8DBC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TextSlider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::TextSlider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TextSlider*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x16B4FAC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnEnable()
    void OnEnable();
    // protected override System.Void OnDisable()
    // Offset: 0x16B4FF8
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnDisable()
    void OnDisable();
    // protected override System.Void OnRectTransformDimensionsChange()
    // Offset: 0x16B5028
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnRectTransformDimensionsChange()
    void OnRectTransformDimensionsChange();
    // public override System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x16B59FC
    // Implemented from: UnityEngine.UI.Selectable
    // Base method: System.Void Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);
  }; // HMUI.TextSlider
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::TextSlider::set_valueTextColor
// Il2CppName: set_valueTextColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::Color)>(&HMUI::TextSlider::set_valueTextColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_valueTextColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::get_handleRect
// Il2CppName: get_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::RectTransform* (HMUI::TextSlider::*)()>(&HMUI::TextSlider::get_handleRect)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "get_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::set_handleRect
// Il2CppName: set_handleRect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::RectTransform*)>(&HMUI::TextSlider::set_handleRect)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "RectTransform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_handleRect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::set_handleColor
// Il2CppName: set_handleColor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::Color)>(&HMUI::TextSlider::set_handleColor)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_handleColor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::get_handleSize
// Il2CppName: get_handleSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::TextSlider::*)()>(&HMUI::TextSlider::get_handleSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "get_handleSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::set_handleSize
// Il2CppName: set_handleSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(float)>(&HMUI::TextSlider::set_handleSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_handleSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::get_valueSize
// Il2CppName: get_valueSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::TextSlider::*)()>(&HMUI::TextSlider::get_valueSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "get_valueSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::set_valueSize
// Il2CppName: set_valueSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(float)>(&HMUI::TextSlider::set_valueSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_valueSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::get_separatorSize
// Il2CppName: get_separatorSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::TextSlider::*)()>(&HMUI::TextSlider::get_separatorSize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "get_separatorSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::set_separatorSize
// Il2CppName: set_separatorSize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(float)>(&HMUI::TextSlider::set_separatorSize)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_separatorSize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::get_numberOfSteps
// Il2CppName: get_numberOfSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::TextSlider::*)()>(&HMUI::TextSlider::get_numberOfSteps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "get_numberOfSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::set_numberOfSteps
// Il2CppName: set_numberOfSteps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(int)>(&HMUI::TextSlider::set_numberOfSteps)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_numberOfSteps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::get_normalizedValue
// Il2CppName: get_normalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (HMUI::TextSlider::*)()>(&HMUI::TextSlider::get_normalizedValue)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "get_normalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::set_normalizedValue
// Il2CppName: set_normalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(float)>(&HMUI::TextSlider::set_normalizedValue)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "set_normalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::UnityEngine_UI_ICanvasElement_get_transform
// Il2CppName: UnityEngine.UI.ICanvasElement.get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (HMUI::TextSlider::*)()>(&HMUI::TextSlider::UnityEngine_UI_ICanvasElement_get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "UnityEngine.UI.ICanvasElement.get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::add_normalizedValueDidChangeEvent
// Il2CppName: add_normalizedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::System::Action_2<::HMUI::TextSlider*, float>*)>(&HMUI::TextSlider::add_normalizedValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "TextSlider"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "add_normalizedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::remove_normalizedValueDidChangeEvent
// Il2CppName: remove_normalizedValueDidChangeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::System::Action_2<::HMUI::TextSlider*, float>*)>(&HMUI::TextSlider::remove_normalizedValueDidChangeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("HMUI", "TextSlider"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "remove_normalizedValueDidChangeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::Rebuild
// Il2CppName: Rebuild
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::UI::CanvasUpdate)>(&HMUI::TextSlider::Rebuild)> {
  static const MethodInfo* get() {
    static auto* executing = &::il2cpp_utils::GetClassFromName("UnityEngine.UI", "CanvasUpdate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "Rebuild", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{executing});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::LayoutComplete
// Il2CppName: LayoutComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)()>(&HMUI::TextSlider::LayoutComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "LayoutComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::GraphicUpdateComplete
// Il2CppName: GraphicUpdateComplete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)()>(&HMUI::TextSlider::GraphicUpdateComplete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "GraphicUpdateComplete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::UpdateCachedReferences
// Il2CppName: UpdateCachedReferences
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)()>(&HMUI::TextSlider::UpdateCachedReferences)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "UpdateCachedReferences", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::SetNormalizedValue
// Il2CppName: SetNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(float)>(&HMUI::TextSlider::SetNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "SetNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::SetNormalizedValue
// Il2CppName: SetNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(float, bool)>(&HMUI::TextSlider::SetNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    static auto* sendCallback = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "SetNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, sendCallback});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::UpdateVisuals
// Il2CppName: UpdateVisuals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)()>(&HMUI::TextSlider::UpdateVisuals)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "UpdateVisuals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::UpdateDrag
// Il2CppName: UpdateDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::TextSlider::UpdateDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "UpdateDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::MayDrag
// Il2CppName: MayDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::TextSlider::MayDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "MayDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::OnBeginDrag
// Il2CppName: OnBeginDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::TextSlider::OnBeginDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "OnBeginDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::OnDrag
// Il2CppName: OnDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::TextSlider::OnDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "OnDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::OnInitializePotentialDrag
// Il2CppName: OnInitializePotentialDrag
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::TextSlider::OnInitializePotentialDrag)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "OnInitializePotentialDrag", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::TextForNormalizedValue
// Il2CppName: TextForNormalizedValue
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (HMUI::TextSlider::*)(float)>(&HMUI::TextSlider::TextForNormalizedValue)> {
  static const MethodInfo* get() {
    static auto* normalizedValue = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "TextForNormalizedValue", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{normalizedValue});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::TextSlider::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)()>(&HMUI::TextSlider::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)()>(&HMUI::TextSlider::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::OnRectTransformDimensionsChange
// Il2CppName: OnRectTransformDimensionsChange
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)()>(&HMUI::TextSlider::OnRectTransformDimensionsChange)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "OnRectTransformDimensionsChange", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::TextSlider::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::TextSlider::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::TextSlider::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::TextSlider*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
