#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryPairedUserAccountCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryPairedUserAccountCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result(int64_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result::__set_value__(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x0>(this->__instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result::__get_value__() const {
return ::cordl_internals::getInstanceField<int64_t, 0x0>(this->__instance);
}
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result  UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result::DevicePairedToUserAccount{2};
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result  UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result::UserAccountSelectionInProgress{4};
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result  UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result::UserAccountSelectionComplete{8};
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result  UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand__Result::UserAccountSelectionCanceled{16};
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer(uint8_t FixedElementField) noexcept : ::bs_hook::ValueTypeWrapper() {this->FixedElementField = FixedElementField;
}
constexpr void UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer::__set_FixedElementField(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x0>(this->__instance, std::forward<uint8_t>(value));
}
constexpr uint8_t UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer::__get_FixedElementField() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x0>(this->__instance);
}
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29554e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_id)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2955514;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.set_id
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)(::StringW)>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_id)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2955524;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "set_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2955638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.set_name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)(::StringW)>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_name)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2955648;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x295575c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand (*)()>(&UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Create)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x295578c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "handle", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "nameBuffer", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }, CppParam { name: "idBuffer", ty: "UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::QueryPairedUserAccountCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint64_t handle, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer nameBuffer, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer idBuffer) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->handle = handle;
this->nameBuffer = nameBuffer;
this->idBuffer = idBuffer;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__set_handle(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__get_handle() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__set_nameBuffer(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer, 0x10>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__get_nameBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___nameBuffer_e__FixedBuffer, 0x10>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__set_idBuffer(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer, 0x210>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::__get_idBuffer() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__QueryPairedUserAccountCommand___idBuffer_e__FixedBuffer, 0x210>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 ::StringW UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_id()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_id(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "set_id",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 ::StringW UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::set_name(::StringW value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "set_name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::QueryPairedUserAccountCommand, false>(nullptr, ___internal_method);
}
