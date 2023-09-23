#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerUpHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISelectHandler_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IDeselectHandler_def.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Animator_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerDownHandler_def.hpp"
#include "UnityEngine/UI/zzzz__AnimationTriggers_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IMoveHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__AxisEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerEnterHandler_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerExitHandler_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__Transition::UnityEngine__UI__Selectable__Transition(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__Selectable__Transition::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__Selectable__Transition::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__Transition  UnityEngine::UI::UnityEngine__UI__Selectable__Transition::None{0};
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__Transition  UnityEngine::UI::UnityEngine__UI__Selectable__Transition::ColorTint{1};
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__Transition  UnityEngine::UI::UnityEngine__UI__Selectable__Transition::SpriteSwap{2};
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__Transition  UnityEngine::UI::UnityEngine__UI__Selectable__Transition::Animation{3};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::UnityEngine__UI__Selectable__SelectionState(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState  UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::Normal{0};
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState  UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::Highlighted{1};
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState  UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::Pressed{2};
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState  UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::Selected{3};
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState  UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState::Disabled{4};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_allSelectablesArray
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<UnityEngine::UI::Selectable> (*)()>(&UnityEngine::UI::Selectable::get_allSelectablesArray)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2c0d608;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_allSelectablesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_allSelectableCount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&UnityEngine::UI::Selectable::get_allSelectableCount)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2c0d6a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_allSelectableCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_allSelectables
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::List_1<UnityEngine::UI::Selectable> (*)()>(&UnityEngine::UI::Selectable::get_allSelectables)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c0d6fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_allSelectables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.AllSelectablesNoAlloc
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::ArrayW<UnityEngine::UI::Selectable>)>(&UnityEngine::UI::Selectable::AllSelectablesNoAlloc)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2c0d7a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "AllSelectablesNoAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::UI::Selectable>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_navigation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Navigation (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_navigation)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2c0d85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_navigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_navigation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::Navigation)>(&UnityEngine::UI::Selectable::set_navigation)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c0d870;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_navigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Navigation>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_transition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__Selectable__Transition (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_transition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0d95c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_transition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_transition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::UnityEngine__UI__Selectable__Transition)>(&UnityEngine::UI::Selectable::set_transition)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c0d964;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_transition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Selectable__Transition>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_colors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::ColorBlock (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_colors)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c0d9d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_colors
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::ColorBlock)>(&UnityEngine::UI::Selectable::set_colors)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c0d9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::ColorBlock>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_spriteState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::SpriteState (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_spriteState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c0da80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_spriteState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_spriteState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::SpriteState)>(&UnityEngine::UI::Selectable::set_spriteState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c0da90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_spriteState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::SpriteState>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_animationTriggers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::AnimationTriggers (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_animationTriggers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0db0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_animationTriggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_animationTriggers
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::AnimationTriggers)>(&UnityEngine::UI::Selectable::set_animationTriggers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c0db14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_animationTriggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::AnimationTriggers>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_targetGraphic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Graphic (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_targetGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0db88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_targetGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_targetGraphic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::Graphic)>(&UnityEngine::UI::Selectable::set_targetGraphic)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2c0db90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_targetGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_interactable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_interactable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0dc04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_interactable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_interactable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(bool)>(&UnityEngine::UI::Selectable::set_interactable)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2c0dc0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_interactable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_isPointerInside
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_isPointerInside)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0dd7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_isPointerInside",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_isPointerInside
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(bool)>(&UnityEngine::UI::Selectable::set_isPointerInside)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c0dd84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_isPointerInside",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_isPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_isPointerDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0dd90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_isPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_isPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(bool)>(&UnityEngine::UI::Selectable::set_isPointerDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c0dd98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_isPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_hasSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_hasSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0dda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_hasSelection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(bool)>(&UnityEngine::UI::Selectable::set_hasSelection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c0ddac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::_ctor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2c07f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_image
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Image (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_image)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c0ddb8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_image",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.set_image
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::Image)>(&UnityEngine::UI::Selectable::set_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0de34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_image",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Image>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_animator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Animator (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_animator)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2c0de3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_animator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.Awake
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::Awake)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c0de84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnCanvasGroupChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::OnCanvasGroupChanged)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2c0df10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.IsInteractable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::IsInteractable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2c0e0d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnDidApplyAnimationProperties
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c0e0f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::OnEnable)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2c0836c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnTransformParentChanged
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c0e144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnSetProperty
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::OnSetProperty)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2c0d8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnSetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::OnDisable)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2c08634;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnApplicationFocus
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(bool)>(&UnityEngine::UI::Selectable::OnApplicationFocus)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c0e16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.get_currentSelectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::get_currentSelectionState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c0e0f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_currentSelectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.InstantClearState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::InstantClearState)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c0e214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.DoStateTransition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState, bool)>(&UnityEngine::UI::Selectable::DoStateTransition)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2c0e59c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.FindSelectable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Selectable::*)(UnityEngine::Vector3)>(&UnityEngine::UI::Selectable::FindSelectable)> {
  constexpr static std::size_t size = 0x4ac;
  constexpr static std::size_t addrs = 0x2c0e730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "FindSelectable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.GetPointOnRectEdge
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::Vector3 (*)(UnityEngine::RectTransform, UnityEngine::Vector2)>(&UnityEngine::UI::Selectable::GetPointOnRectEdge)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2c0ebdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "GetPointOnRectEdge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.Navigate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::AxisEventData, UnityEngine::UI::Selectable)>(&UnityEngine::UI::Selectable::Navigate)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2c0ed80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "Navigate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::AxisEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.FindSelectableOnLeft
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::FindSelectableOnLeft)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c0939c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.FindSelectableOnRight
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::FindSelectableOnRight)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c09498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.FindSelectableOnUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::FindSelectableOnUp)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c09594;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.FindSelectableOnDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Selectable (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::FindSelectableOnDown)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2c09690;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnMove
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::AxisEventData)>(&UnityEngine::UI::Selectable::OnMove)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c092ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.StartColorTween
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::Color, bool)>(&UnityEngine::UI::Selectable::StartColorTween)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2c0e284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "StartColorTween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.DoSpriteSwap
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::Sprite)>(&UnityEngine::UI::Selectable::DoSpriteSwap)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2c0e36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "DoSpriteSwap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.TriggerAnimation
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(::StringW)>(&UnityEngine::UI::Selectable::TriggerAnimation)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x2c0e414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "TriggerAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.IsHighlighted
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::IsHighlighted)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c0ee38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "IsHighlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.IsPressed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::IsPressed)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2c0e1c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "IsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.EvaluateAndTransitionToSelectionState
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::EvaluateAndTransitionToSelectionState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2c0ee94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "EvaluateAndTransitionToSelectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnPointerDown
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::Selectable::OnPointerDown)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c08dc4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnPointerUp
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::Selectable::OnPointerUp)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2c09000;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnPointerEnter
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::Selectable::OnPointerEnter)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c0ef2c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnPointerExit
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::PointerEventData)>(&UnityEngine::UI::Selectable::OnPointerExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0ef38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnSelect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UI::Selectable::OnSelect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c0ef40;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.OnDeselect
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)(UnityEngine::EventSystems::BaseEventData)>(&UnityEngine::UI::Selectable::OnDeselect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c0ef4c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::UI::Selectable.Select
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::UI::Selectable::*)()>(&UnityEngine::UI::Selectable::Select)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c0ef54;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::UI::Selectable),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::EventSystems::IMoveHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::IMoveHandler() const noexcept {
return UnityEngine::EventSystems::IMoveHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IEventSystemHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::IEventSystemHandler() const noexcept {
return UnityEngine::EventSystems::IEventSystemHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerDownHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::IPointerDownHandler() const noexcept {
return UnityEngine::EventSystems::IPointerDownHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerUpHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::IPointerUpHandler() const noexcept {
return UnityEngine::EventSystems::IPointerUpHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerEnterHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::IPointerEnterHandler() const noexcept {
return UnityEngine::EventSystems::IPointerEnterHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IPointerExitHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::IPointerExitHandler() const noexcept {
return UnityEngine::EventSystems::IPointerExitHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::ISelectHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::ISelectHandler() const noexcept {
return UnityEngine::EventSystems::ISelectHandler(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to UnityEngine::EventSystems::IDeselectHandler
constexpr  UnityEngine::UI::Selectable::operator UnityEngine::EventSystems::IDeselectHandler() const noexcept {
return UnityEngine::EventSystems::IDeselectHandler(::bs_hook::Il2CppWrapperType::instance);
}
 void UnityEngine::UI::Selectable::__set_s_Selectables(::ArrayW<UnityEngine::UI::Selectable> value)  {
::cordl_internals::setStaticField<::ArrayW<UnityEngine::UI::Selectable>, "s_Selectables", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get>(std::forward<::ArrayW<UnityEngine::UI::Selectable>>(value));
}
 ::ArrayW<UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::__get_s_Selectables()  {
return ::cordl_internals::getStaticField<::ArrayW<UnityEngine::UI::Selectable>, "s_Selectables", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get>();
}
 void UnityEngine::UI::Selectable::__set_s_SelectableCount(int32_t value)  {
::cordl_internals::setStaticField<int32_t, "s_SelectableCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get>(std::forward<int32_t>(value));
}
 int32_t UnityEngine::UI::Selectable::__get_s_SelectableCount()  {
return ::cordl_internals::getStaticField<int32_t, "s_SelectableCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get>();
}
constexpr void UnityEngine::UI::Selectable::__set_m_EnableCalled(bool value)  {
::cordl_internals::setInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::Selectable::__get_m_EnableCalled() const {
return ::cordl_internals::getInstanceField<bool, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_Navigation(UnityEngine::UI::Navigation value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Navigation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Navigation>(value));
}
constexpr UnityEngine::UI::Navigation UnityEngine::UI::Selectable::__get_m_Navigation() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Navigation, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_Transition(UnityEngine::UI::UnityEngine__UI__Selectable__Transition value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::UnityEngine__UI__Selectable__Transition, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::UnityEngine__UI__Selectable__Transition>(value));
}
constexpr UnityEngine::UI::UnityEngine__UI__Selectable__Transition UnityEngine::UI::Selectable::__get_m_Transition() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::UnityEngine__UI__Selectable__Transition, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_Colors(UnityEngine::UI::ColorBlock value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::ColorBlock, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::ColorBlock>(value));
}
constexpr UnityEngine::UI::ColorBlock UnityEngine::UI::Selectable::__get_m_Colors() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::ColorBlock, 0x4c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_SpriteState(UnityEngine::UI::SpriteState value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::SpriteState, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::SpriteState>(value));
}
constexpr UnityEngine::UI::SpriteState UnityEngine::UI::Selectable::__get_m_SpriteState() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::SpriteState, 0xa8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_AnimationTriggers(UnityEngine::UI::AnimationTriggers value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::AnimationTriggers, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::AnimationTriggers>(value));
}
constexpr UnityEngine::UI::AnimationTriggers UnityEngine::UI::Selectable::__get_m_AnimationTriggers() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::AnimationTriggers, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_Interactable(bool value)  {
::cordl_internals::setInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::Selectable::__get_m_Interactable() const {
return ::cordl_internals::getInstanceField<bool, 0xd0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_TargetGraphic(UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Graphic, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Graphic>(value));
}
constexpr UnityEngine::UI::Graphic UnityEngine::UI::Selectable::__get_m_TargetGraphic() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Graphic, 0xd8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_GroupsAllowInteraction(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::Selectable::__get_m_GroupsAllowInteraction() const {
return ::cordl_internals::getInstanceField<bool, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_CurrentIndex(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::UI::Selectable::__get_m_CurrentIndex() const {
return ::cordl_internals::getInstanceField<int32_t, 0xe4>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set__isPointerInside_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::Selectable::__get__isPointerInside_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set__isPointerDown_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xe9>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::Selectable::__get__isPointerDown_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xe9>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set__hasSelection_k__BackingField(bool value)  {
::cordl_internals::setInstanceField<bool, 0xea>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::UI::Selectable::__get__hasSelection_k__BackingField() const {
return ::cordl_internals::getInstanceField<bool, 0xea>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::UI::Selectable::__set_m_CanvasGroupCache(System::Collections::Generic::List_1<UnityEngine::CanvasGroup> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::CanvasGroup>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::CanvasGroup>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::CanvasGroup> UnityEngine::UI::Selectable::__get_m_CanvasGroupCache() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::CanvasGroup>, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::ArrayW<UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::get_allSelectablesArray()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_allSelectablesArray",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<UnityEngine::UI::Selectable>, false>(nullptr, ___internal_method);
}
 int32_t UnityEngine::UI::Selectable::get_allSelectableCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_allSelectableCount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
 System::Collections::Generic::List_1<UnityEngine::UI::Selectable> UnityEngine::UI::Selectable::get_allSelectables()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_allSelectables",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::List_1<UnityEngine::UI::Selectable>, false>(nullptr, ___internal_method);
}
 int32_t UnityEngine::UI::Selectable::AllSelectablesNoAlloc(::ArrayW<UnityEngine::UI::Selectable> selectables)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "AllSelectablesNoAlloc",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::UI::Selectable>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, selectables);
}
 UnityEngine::UI::Navigation UnityEngine::UI::Selectable::get_navigation()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_navigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Navigation, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_navigation(UnityEngine::UI::Navigation value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_navigation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Navigation>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::UnityEngine__UI__Selectable__Transition UnityEngine::UI::Selectable::get_transition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_transition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__Selectable__Transition, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_transition(UnityEngine::UI::UnityEngine__UI__Selectable__Transition value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_transition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Selectable__Transition>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::ColorBlock UnityEngine::UI::Selectable::get_colors()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::ColorBlock, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_colors(UnityEngine::UI::ColorBlock value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_colors",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::ColorBlock>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::SpriteState UnityEngine::UI::Selectable::get_spriteState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_spriteState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::SpriteState, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_spriteState(UnityEngine::UI::SpriteState value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_spriteState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::SpriteState>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::AnimationTriggers UnityEngine::UI::Selectable::get_animationTriggers()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_animationTriggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::AnimationTriggers, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_animationTriggers(UnityEngine::UI::AnimationTriggers value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_animationTriggers",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::AnimationTriggers>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::Graphic UnityEngine::UI::Selectable::get_targetGraphic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_targetGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Graphic, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_targetGraphic(UnityEngine::UI::Graphic value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_targetGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::Selectable::get_interactable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_interactable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_interactable(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_interactable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::Selectable::get_isPointerInside()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_isPointerInside",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_isPointerInside(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_isPointerInside",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::Selectable::get_isPointerDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_isPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_isPointerDown(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_isPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 bool UnityEngine::UI::Selectable::get_hasSelection()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_hasSelection(bool value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_hasSelection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
// Ctor Parameters []
 UnityEngine::UI::Selectable::Selectable()  : UnityEngine::EventSystems::UIBehaviour(THROW_UNLESS(::il2cpp_utils::New<Selectable>())) {}
 void UnityEngine::UI::Selectable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UI::Image UnityEngine::UI::Selectable::get_image()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_image",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Image, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::set_image(UnityEngine::UI::Image value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "set_image",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Image>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::Animator UnityEngine::UI::Selectable::get_animator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_animator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Animator, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "Awake",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnCanvasGroupChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnCanvasGroupChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::Selectable::IsInteractable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "IsInteractable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnDidApplyAnimationProperties()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnDidApplyAnimationProperties",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnTransformParentChanged()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnTransformParentChanged",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnSetProperty()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnSetProperty",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnApplicationFocus(bool hasFocus)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnApplicationFocus",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, hasFocus);
}
 UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState UnityEngine::UI::Selectable::get_currentSelectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "get_currentSelectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::InstantClearState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "InstantClearState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::DoStateTransition(UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState state, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "DoStateTransition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::UnityEngine__UI__Selectable__SelectionState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, state, instant);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Selectable::FindSelectable(UnityEngine::Vector3 dir)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "FindSelectable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector3>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(instance), ___internal_method, dir);
}
 UnityEngine::Vector3 UnityEngine::UI::Selectable::GetPointOnRectEdge(UnityEngine::RectTransform rect, UnityEngine::Vector2 dir)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "GetPointOnRectEdge",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Vector2>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::Vector3, false>(nullptr, ___internal_method, rect, dir);
}
 void UnityEngine::UI::Selectable::Navigate(UnityEngine::EventSystems::AxisEventData eventData, UnityEngine::UI::Selectable sel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "Navigate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::AxisEventData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Selectable>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData, sel);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Selectable::FindSelectableOnLeft()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "FindSelectableOnLeft",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Selectable::FindSelectableOnRight()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "FindSelectableOnRight",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Selectable::FindSelectableOnUp()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "FindSelectableOnUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::UI::Selectable UnityEngine::UI::Selectable::FindSelectableOnDown()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "FindSelectableOnDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Selectable, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnMove(UnityEngine::EventSystems::AxisEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnMove",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::AxisEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::Selectable::StartColorTween(UnityEngine::Color targetColor, bool instant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "StartColorTween",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Color>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, targetColor, instant);
}
 void UnityEngine::UI::Selectable::DoSpriteSwap(UnityEngine::Sprite newSprite)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "DoSpriteSwap",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::Sprite>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, newSprite);
}
 void UnityEngine::UI::Selectable::TriggerAnimation(::StringW triggername)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "TriggerAnimation",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, triggername);
}
 bool UnityEngine::UI::Selectable::IsHighlighted()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "IsHighlighted",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::UI::Selectable::IsPressed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "IsPressed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::EvaluateAndTransitionToSelectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "EvaluateAndTransitionToSelectionState",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::UI::Selectable::OnPointerDown(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnPointerDown",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::Selectable::OnPointerUp(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnPointerUp",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::Selectable::OnPointerEnter(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnPointerEnter",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::Selectable::OnPointerExit(UnityEngine::EventSystems::PointerEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnPointerExit",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::PointerEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::Selectable::OnSelect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnSelect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::Selectable::OnDeselect(UnityEngine::EventSystems::BaseEventData eventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "OnDeselect",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::EventSystems::BaseEventData>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, eventData);
}
 void UnityEngine::UI::Selectable::Select()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::UI::Selectable>::get(),
                            "Select",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
