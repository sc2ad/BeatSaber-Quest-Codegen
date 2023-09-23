#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryKeyboardLayoutCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.ReadLayoutName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::ReadLayoutName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2955358;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "ReadLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.WriteLayoutName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)(::StringW)>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::WriteLayoutName)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2955368;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "WriteLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x295538c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand (*)()>(&UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x29553bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameBuffer", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::QueryKeyboardLayoutCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer nameBuffer) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->nameBuffer = nameBuffer;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__set_nameBuffer(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer, 0x8>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::__get_nameBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryKeyboardLayoutCommand___nameBuffer_e__FixedBuffer, 0x8>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::ReadLayoutName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "ReadLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::WriteLayoutName(::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "WriteLayoutName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::QueryKeyboardLayoutCommand, false>(nullptr, ___internal_method);
}
