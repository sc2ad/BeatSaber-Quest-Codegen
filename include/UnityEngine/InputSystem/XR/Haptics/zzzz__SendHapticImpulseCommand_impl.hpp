#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendHapticImpulseCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2937030;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::*)()>(&UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2937060;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand (*)(int32_t, float_t, float_t)>(&UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::Create)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2933374;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "amplitude", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::SendHapticImpulseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, float_t amplitude, float_t duration) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->channel = channel;
this->amplitude = amplitude;
this->duration = duration;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_channel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_channel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_amplitude(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_amplitude() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__set_duration(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::__get_duration() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand::Create(int32_t motorChannel, float_t motorAmplitude, float_t motorDuration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::XR::Haptics::SendHapticImpulseCommand, false>(nullptr, ___internal_method, motorChannel, motorAmplitude, motorDuration);
}
