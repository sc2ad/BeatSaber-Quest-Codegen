#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Gamepad_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/XInput/zzzz__XInputController_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType::____UnityEngine__InputSystem__XInput__XInputController__DeviceType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType::Gamepad{0};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::Unknown{0};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::Gamepad{1};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::Wheel{2};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::ArcadeStick{3};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::FlightStick{4};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::DancePad{5};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::Guitar{6};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::GuitarAlternate{7};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::DrumKit{8};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::GuitarBass{11};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType::ArcadePad{19};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::ForceFeedbackSupported{1};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::Wireless{2};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::VoiceSupported{4};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::PluginModulesSupported{8};
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags  ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags::NoNavigation{16};
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType", modifiers: "", def_value: Some("{}") }, CppParam { name: "subType", ty: "::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__Capabilities::____UnityEngine__InputSystem__XInput__XInputController__Capabilities(::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType type, ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType subType, ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags flags) noexcept : ::bs_hook::ValueTypeWrapper() {this->type = type;
this->subType = subType;
this->flags = flags;
}
constexpr void ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__Capabilities::__set_type(::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType>(value));
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__Capabilities::__get_type() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceType, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__Capabilities::__set_subType(::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType, 0x4>(this->__instance, std::forward<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType>(value));
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__Capabilities::__get_subType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType, 0x4>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__Capabilities::__set_flags(::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags, 0x8>(this->__instance, std::forward<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags>(value));
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__Capabilities::__get_flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags, 0x8>(this->__instance);
}
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_menu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2937090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_menu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_menu
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl)>(&::UnityEngine::InputSystem::XInput::XInputController::set_menu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2937098;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "set_menu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_view
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29370a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_view",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.set_view
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)(::UnityEngine::InputSystem::Controls::ButtonControl)>(&::UnityEngine::InputSystem::XInput::XInputController::set_view)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29370a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "set_view",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_subType
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_subType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x29370b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_subType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.get_flags
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::get_flags)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2937144;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.FinishSetup
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::FinishSetup)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2937168;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::UnityEngine::InputSystem::XInput::XInputController),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController.ParseCapabilities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::ParseCapabilities)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x29370d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "ParseCapabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::XInput::XInputController._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::XInput::XInputController::*)()>(&::UnityEngine::InputSystem::XInput::XInputController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2937188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::InputSystem::XInput::XInputController::__set__menu_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Controls::ButtonControl, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Controls::ButtonControl>(value));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl ::UnityEngine::InputSystem::XInput::XInputController::__get__menu_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Controls::ButtonControl, 0x1d8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XInput::XInputController::__set__view_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::Controls::ButtonControl, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::Controls::ButtonControl>(value));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl ::UnityEngine::InputSystem::XInput::XInputController::__get__view_k__BackingField() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::Controls::ButtonControl, 0x1e0>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XInput::XInputController::__set_m_HaveParsedCapabilities(bool value)  {
::cordl_internals::setInstanceField<bool, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<bool>(value));
}
constexpr bool ::UnityEngine::InputSystem::XInput::XInputController::__get_m_HaveParsedCapabilities() const {
return ::cordl_internals::getInstanceField<bool, 0x1e8>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XInput::XInputController::__set_m_SubType(::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType, 0x1ec>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType>(value));
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType ::UnityEngine::InputSystem::XInput::XInputController::__get_m_SubType() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType, 0x1ec>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::InputSystem::XInput::XInputController::__set_m_Flags(::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags>(value));
}
constexpr ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags ::UnityEngine::InputSystem::XInput::XInputController::__get_m_Flags() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags, 0x1f0>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::InputSystem::Controls::ButtonControl ::UnityEngine::InputSystem::XInput::XInputController::get_menu()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_menu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XInput::XInputController::set_menu(::UnityEngine::InputSystem::Controls::ButtonControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "set_menu",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::Controls::ButtonControl ::UnityEngine::InputSystem::XInput::XInputController::get_view()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_view",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XInput::XInputController::set_view(::UnityEngine::InputSystem::Controls::ButtonControl value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "set_view",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, value);
}
 ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType ::UnityEngine::InputSystem::XInput::XInputController::get_subType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_subType",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceSubType, false>(const_cast<void*>(instance), ___internal_method);
}
 ::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags ::UnityEngine::InputSystem::XInput::XInputController::get_flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "get_flags",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::XInput::____UnityEngine__InputSystem__XInput__XInputController__DeviceFlags, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XInput::XInputController::FinishSetup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "FinishSetup",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 void ::UnityEngine::InputSystem::XInput::XInputController::ParseCapabilities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            "ParseCapabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::UnityEngine::InputSystem::XInput::XInputController::XInputController()  : ::UnityEngine::InputSystem::Gamepad(THROW_UNLESS(::il2cpp_utils::New<XInputController>())) {}
 void ::UnityEngine::InputSystem::XInput::XInputController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::XInput::XInputController>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
