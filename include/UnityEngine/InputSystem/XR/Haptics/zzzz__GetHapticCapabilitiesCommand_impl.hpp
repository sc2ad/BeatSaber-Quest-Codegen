#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__GetHapticCapabilitiesCommand_def.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticCapabilities_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2936f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::*)()>(&UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2936fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.get_capabilities
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::XR::Haptics::HapticCapabilities (UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::*)()>(&UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_capabilities)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2936c3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "get_capabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand (*)()>(&UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::Create)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2936be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "numChannels", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "frequencyHz", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBufferSize", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::GetHapticCapabilitiesCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t numChannels, uint32_t frequencyHz, uint32_t maxBufferSize) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->numChannels = numChannels;
this->frequencyHz = frequencyHz;
this->maxBufferSize = maxBufferSize;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__set_numChannels(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__get_numChannels() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__set_frequencyHz(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0xc>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__get_frequencyHz() const {
return ::cordl_internals::getInstanceField<uint32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__set_maxBufferSize(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x10>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::__get_maxBufferSize() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x10>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::XR::Haptics::HapticCapabilities UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::get_capabilities()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "get_capabilities",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::XR::Haptics::HapticCapabilities, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::XR::Haptics::GetHapticCapabilitiesCommand, false>(nullptr, ___internal_method);
}
