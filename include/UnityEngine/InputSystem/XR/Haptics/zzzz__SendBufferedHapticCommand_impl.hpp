#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__SendBufferedHapticCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2936fd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::*)()>(&UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2937000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand (*)(::ArrayW<uint8_t>)>(&UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2936cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "channel", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "bufferSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "buffer", ty: "UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::SendBufferedHapticCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, int32_t channel, int32_t bufferSize, UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer buffer) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->channel = channel;
this->bufferSize = bufferSize;
this->buffer = buffer;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__set_channel(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x8>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__get_channel() const {
return ::cordl_internals::getInstanceField<int32_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__set_bufferSize(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0xc>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__get_bufferSize() const {
return ::cordl_internals::getInstanceField<int32_t, 0xc>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__set_buffer(UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::__get_buffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::XR::Haptics::UnityEngine__InputSystem__XR__Haptics__SendBufferedHapticCommand___buffer_e__FixedBuffer, 0x10>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand::Create(::ArrayW<uint8_t> rumbleBuffer)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::XR::Haptics::SendBufferedHapticCommand, false>(nullptr, ___internal_method, rumbleBuffer);
}
