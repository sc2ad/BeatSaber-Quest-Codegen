#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DualMotorRumbleCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::*)()>(&UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955eb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand (*)(float_t, float_t)>(&UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2954818;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "lowFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "highFrequencyMotorSpeed", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::DualMotorRumbleCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, float_t lowFrequencyMotorSpeed, float_t highFrequencyMotorSpeed) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->lowFrequencyMotorSpeed = lowFrequencyMotorSpeed;
this->highFrequencyMotorSpeed = highFrequencyMotorSpeed;
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__set_lowFrequencyMotorSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_lowFrequencyMotorSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__set_highFrequencyMotorSpeed(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::__get_highFrequencyMotorSpeed() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand::Create(float_t lowFrequency, float_t highFrequency)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::DualMotorRumbleCommand, false>(nullptr, ___internal_method, lowFrequency, highFrequency);
}
