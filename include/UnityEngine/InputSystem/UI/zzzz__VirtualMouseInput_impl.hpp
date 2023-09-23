#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__VirtualMouseInput_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Mouse_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode  UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode::SoftwareCursor{0};
constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode  UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode::HardwareCursorIfAvailable{1};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::RectTransform (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943c44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorTransform
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::RectTransform)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943c4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943c54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(float_t)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943c64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorMode
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorMode)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2943c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_cursorGraphic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::UI::Graphic (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943f7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_cursorGraphic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::UI::Graphic)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorGraphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943f84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_scrollSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_scrollSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_scrollSpeed
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(float_t)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943fe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_scrollSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_virtualMouse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Mouse (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_virtualMouse)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2943ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_virtualMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_stickAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionProperty (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_stickAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2943ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_stickAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_stickAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_stickAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x294400c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_stickAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_leftButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionProperty (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_leftButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944164;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_leftButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_leftButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_leftButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2944178;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_leftButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_rightButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionProperty (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_rightButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944278;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_rightButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_rightButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_rightButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x294428c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_rightButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_middleButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionProperty (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_middleButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x294431c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_middleButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_middleButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_middleButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2944330;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_middleButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_forwardButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionProperty (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_forwardButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x29443c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_forwardButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_forwardButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_forwardButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x29443d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_forwardButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_backButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionProperty (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_backButtonAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944464;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_backButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_backButtonAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_backButtonAction)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2944478;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_backButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.get_scrollWheelAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::InputActionProperty (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollWheelAction)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2944508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_scrollWheelAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.set_scrollWheelAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollWheelAction)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x294451c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_scrollWheelAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.OnEnable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::OnEnable)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x294454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.OnDisable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::OnDisable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2944958;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.TryFindCanvas
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::TryFindCanvas)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2943f8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "TryFindCanvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.TryEnableHardwareCursor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::TryEnableHardwareCursor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2943d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "TryEnableHardwareCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.UpdateMotion
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::UpdateMotion)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x2944b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "UpdateMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.OnButtonActionTriggered
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::OnButtonActionTriggered)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x2944f4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnButtonActionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.SetActionCallback
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputActionProperty, System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>, bool)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::SetActionCallback)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2944208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "SetActionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.SetAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<UnityEngine::InputSystem::InputActionProperty>, UnityEngine::InputSystem::InputActionProperty)>(&UnityEngine::InputSystem::UI::VirtualMouseInput::SetAction)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x294403c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "SetAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputActionProperty>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput.OnAfterInputUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::OnAfterInputUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2945140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnAfterInputUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::UI::VirtualMouseInput._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::UI::VirtualMouseInput::*)()>(&UnityEngine::InputSystem::UI::VirtualMouseInput::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2945144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorMode(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode>(value));
}
constexpr UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorMode() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorGraphic(UnityEngine::UI::Graphic value)  {
::cordl_internals::setInstanceField<UnityEngine::UI::Graphic, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::UI::Graphic>(value));
}
constexpr UnityEngine::UI::Graphic UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorGraphic() const {
return ::cordl_internals::getInstanceField<UnityEngine::UI::Graphic, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorTransform(UnityEngine::RectTransform value)  {
::cordl_internals::setInstanceField<UnityEngine::RectTransform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::RectTransform>(value));
}
constexpr UnityEngine::RectTransform UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorTransform() const {
return ::cordl_internals::getInstanceField<UnityEngine::RectTransform, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_CursorSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_CursorSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ScrollSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ScrollSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x34>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_StickAction(UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_StickAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_LeftButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LeftButtonAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_MiddleButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x68>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_MiddleButtonAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x68>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_RightButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x80>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_RightButtonAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x80>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ForwardButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x98>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ForwardButtonAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionProperty, 0x98>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_BackButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionProperty, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_BackButtonAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionProperty, 0xb0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ScrollWheelAction(UnityEngine::InputSystem::InputActionProperty value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::InputActionProperty, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::InputActionProperty>(value));
}
constexpr UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ScrollWheelAction() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::InputActionProperty, 0xc8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_Canvas(UnityEngine::Canvas value)  {
::cordl_internals::setInstanceField<UnityEngine::Canvas, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Canvas>(value));
}
constexpr UnityEngine::Canvas UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_Canvas() const {
return ::cordl_internals::getInstanceField<UnityEngine::Canvas, 0xe0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_VirtualMouse(UnityEngine::InputSystem::Mouse value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Mouse, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Mouse>(value));
}
constexpr UnityEngine::InputSystem::Mouse UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_VirtualMouse() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Mouse, 0xe8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_SystemMouse(UnityEngine::InputSystem::Mouse value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Mouse, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::InputSystem::Mouse>(value));
}
constexpr UnityEngine::InputSystem::Mouse UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_SystemMouse() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Mouse, 0xf0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_AfterInputUpdateDelegate(System::Action value)  {
::cordl_internals::setInstanceField<System::Action, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action>(value));
}
constexpr System::Action UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_AfterInputUpdateDelegate() const {
return ::cordl_internals::getInstanceField<System::Action, 0xf8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_ButtonActionTriggeredDelegate(System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>(value));
}
constexpr System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_ButtonActionTriggeredDelegate() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>, 0x100>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_LastTime(double_t value)  {
::cordl_internals::setInstanceField<double_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<double_t>(value));
}
constexpr double_t UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LastTime() const {
return ::cordl_internals::getInstanceField<double_t, 0x108>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::InputSystem::UI::VirtualMouseInput::__set_m_LastStickValue(UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<UnityEngine::Vector2, 0x110>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<UnityEngine::Vector2>(value));
}
constexpr UnityEngine::Vector2 UnityEngine::InputSystem::UI::VirtualMouseInput::__get_m_LastStickValue() const {
return ::cordl_internals::getInstanceField<UnityEngine::Vector2, 0x110>(this->::bs_hook::Il2CppWrapperType::instance);
}
 UnityEngine::RectTransform UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::RectTransform, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorTransform(UnityEngine::RectTransform value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorTransform",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::RectTransform>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorSpeed(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorMode(UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorMode",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UI::UnityEngine__InputSystem__UI__VirtualMouseInput__CursorMode>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::UI::Graphic UnityEngine::InputSystem::UI::VirtualMouseInput::get_cursorGraphic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_cursorGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::UI::Graphic, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_cursorGraphic(UnityEngine::UI::Graphic value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_cursorGraphic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::UI::Graphic>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 float_t UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollSpeed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_scrollSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollSpeed(float_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_scrollSpeed",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::Mouse UnityEngine::InputSystem::UI::VirtualMouseInput::get_virtualMouse()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_virtualMouse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Mouse, false>(const_cast<void*>(instance), ___internal_method);
}
 UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_stickAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_stickAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_stickAction(UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_stickAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_leftButtonAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_leftButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_leftButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_leftButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_rightButtonAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_rightButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_rightButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_rightButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_middleButtonAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_middleButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_middleButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_middleButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_forwardButtonAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_forwardButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_forwardButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_forwardButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_backButtonAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_backButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_backButtonAction(UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_backButtonAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 UnityEngine::InputSystem::InputActionProperty UnityEngine::InputSystem::UI::VirtualMouseInput::get_scrollWheelAction()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "get_scrollWheelAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::InputActionProperty, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::set_scrollWheelAction(UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "set_scrollWheelAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnEnable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnDisable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::TryFindCanvas()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "TryFindCanvas",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::TryEnableHardwareCursor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "TryEnableHardwareCursor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::UpdateMotion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "UpdateMotion",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::OnButtonActionTriggered(UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext context)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnButtonActionTriggered",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, context);
}
/// @param install: bool (default: true)
 void UnityEngine::InputSystem::UI::VirtualMouseInput::SetActionCallback(UnityEngine::InputSystem::InputActionProperty field, System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext> callback, bool install)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "SetActionCallback",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputAction__CallbackContext>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, field, callback, install);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::SetAction(ByRef<UnityEngine::InputSystem::InputActionProperty> field, UnityEngine::InputSystem::InputActionProperty value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "SetAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<UnityEngine::InputSystem::InputActionProperty>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionProperty>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, field, value);
}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::OnAfterInputUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            "OnAfterInputUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 UnityEngine::InputSystem::UI::VirtualMouseInput::VirtualMouseInput()  : UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<VirtualMouseInput>())) {}
 void UnityEngine::InputSystem::UI::VirtualMouseInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::UI::VirtualMouseInput>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
