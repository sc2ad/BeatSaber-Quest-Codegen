#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRInteractionFeature_def.hpp"
#include "UnityEngine/XR/OpenXR/Input/zzzz__OpenXRInput_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionReference_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "System/zzzz__Guid_def.hpp"
// Ctor Parameters [CppParam { name: "guid", ty: "System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulong1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ulong2", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid(System::Guid guid, uint64_t ulong1, uint64_t ulong2) noexcept : ::bs_hook::ValueTypeWrapper() {this->guid = guid;
this->ulong1 = ulong1;
this->ulong2 = ulong2;
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid::__set_guid(System::Guid value)  {
::cordl_internals::setInstanceField<System::Guid, 0x0>(this->__instance, std::forward<System::Guid>(value));
}
constexpr System::Guid UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid::__get_guid() const {
return ::cordl_internals::getInstanceField<System::Guid, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid::__set_ulong1(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid::__get_ulong1() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid::__set_ulong2(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x8>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid::__get_ulong2() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "actionId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("csnull") }]
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding(uint64_t actionId, ::StringW path) noexcept : ::bs_hook::ValueTypeWrapper() {this->actionId = actionId;
this->path = path;
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding::__set_actionId(uint64_t value)  {
::cordl_internals::setInstanceField<uint64_t, 0x0>(this->__instance, std::forward<uint64_t>(value));
}
constexpr uint64_t UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding::__get_actionId() const {
return ::cordl_internals::getInstanceField<uint64_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding::__set_path(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x8>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding::__get_path() const {
return ::cordl_internals::getInstanceField<::StringW, 0x8>(this->__instance);
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags  UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags::UserPath{1};
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags  UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags::InteractionProfile{2};
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags  UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags::Component{4};
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags  UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags::All{7};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2aef910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::*)()>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2aef940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand (*)()>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::Create)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2aef3fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, uint32_t deviceId) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->deviceId = deviceId;
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::__set_deviceId(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x8>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::__get_deviceId() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x8>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__GetInternalDeviceIdCommand, false>(nullptr, ___internal_method);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::*)()>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2aef9d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c._AttachActionSets_b__9_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::*)(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature)>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2aef9dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c._AttachActionSets_b__9_1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::*)(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig)>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2aef9f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c._AttachActionSets_b__9_2
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::*)(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding)>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2aefa08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c._AttachActionSets_b__9_3
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<::StringW> (UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::*)(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding)>(&UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2aefa28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>::get()}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__set___9(UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c value)  {
::cordl_internals::setStaticField<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>(std::forward<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>(value));
}
 UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__get___9()  {
return ::cordl_internals::getStaticField<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>();
}
 void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__set___9__9_0(System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool>, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>(std::forward<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool>>(value));
}
 System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool> UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__get___9__9_0()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature,bool>, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>();
}
 void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__set___9__9_1(System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW>, "<>9__9_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>(std::forward<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW>>(value));
}
 System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW> UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__get___9__9_1()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig,::StringW>, "<>9__9_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>();
}
 void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__set___9__9_2(System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool>, "<>9__9_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>(std::forward<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool>>(value));
}
 System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool> UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__get___9__9_2()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,bool>, "<>9__9_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>();
}
 void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__set___9__9_3(System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,System::Collections::Generic::IEnumerable_1<::StringW>> value)  {
::cordl_internals::setStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,System::Collections::Generic::IEnumerable_1<::StringW>>, "<>9__9_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>(std::forward<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,System::Collections::Generic::IEnumerable_1<::StringW>>>(value));
}
 System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,System::Collections::Generic::IEnumerable_1<::StringW>> UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::__get___9__9_3()  {
return ::cordl_internals::getStaticField<System::Func_2<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding,System::Collections::Generic::IEnumerable_1<::StringW>>, "<>9__9_3", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get>();
}
 UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::New_ctor()  {
UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c o{THROW_UNLESS(::il2cpp_utils::New<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>())};
return o;
}
 void UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_0(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature f)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, f);
}
 ::StringW UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_1(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig d)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__DeviceConfig>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, d);
}
 bool UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_2(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_2",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, b);
}
 System::Collections::Generic::IEnumerable_1<::StringW> UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c::_AttachActionSets_b__9_3(UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding b)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput____c>::get(),
                            "<AttachActionSets>b__9_3",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionBinding>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<::StringW>, false>(const_cast<void*>(instance), ___internal_method, b);
}
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.RegisterLayouts
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterLayouts)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2ae6df4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "RegisterLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.ValidateActionMapConfig
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature, UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::ValidateActionMapConfig)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x2aeda24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "ValidateActionMapConfig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.AttachActionSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::AttachActionSets)> {
  constexpr static std::size_t size = 0x1568;
  constexpr static std::size_t addrs = 0x2ae85ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "AttachActionSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.SanitizeCharForOpenXRPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeCharForOpenXRPath)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2aee53c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SanitizeCharForOpenXRPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.SanitizeStringForOpenXRPath
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeStringForOpenXRPath)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2aedee0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SanitizeStringForOpenXRPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandleName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(UnityEngine::InputSystem::InputControl)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandleName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2aee638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetActionHandleName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputActionReference, float_t, float_t, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2aee710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputActionReference, float_t, float_t, float_t, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2aee790;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputAction, float_t, float_t, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2aee90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.SendHapticImpulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputAction, float_t, float_t, float_t, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2aee830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputActionReference, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2aeed48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(UnityEngine::InputSystem::InputAction, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2aeee10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.TryGetInputSourceName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputAction, int32_t, ByRef<::StringW>, UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::TryGetInputSourceName)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2aeef28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "TryGetInputSourceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionIsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(UnityEngine::InputSystem::InputAction)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x2aef104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetActionIsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.GetActionHandle
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(UnityEngine::InputSystem::InputAction, UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x2aee98c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetActionHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.GetDeviceId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(UnityEngine::InputSystem::InputDevice)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2aeebf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.UserPathToDeviceName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::UserPathToDeviceName)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2aedbf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "UserPathToDeviceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SendHapticImpulse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, uint64_t, float_t, float_t, float_t)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2aeec9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_StopHaptics
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, uint64_t)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHaptics)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2aeeea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetActionId
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint32_t, ::StringW)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionId)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2aef35c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_GetActionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_TryGetInputSourceNamePtr
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, uint64_t, uint32_t, uint32_t, ByRef<::cordl_internals::intptr_t>)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceNamePtr)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2aef44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_TryGetInputSourceNamePtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_TryGetInputSourceName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, uint64_t, uint32_t, uint32_t, ByRef<::StringW>)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceName)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2aef00c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_TryGetInputSourceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_GetActionIsActive
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t, ::StringW)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIsActive)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2aef2b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_GetActionIsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_RegisterDeviceDefinition
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, ::StringW, uint32_t, ::StringW, ::StringW, ::StringW)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_RegisterDeviceDefinition)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2aeddcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_RegisterDeviceDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_CreateActionSet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW, ::StringW, UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateActionSet)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2aee094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_CreateActionSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_CreateAction
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t, ::StringW, ::StringW, uint32_t, UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid, ::ArrayW<::StringW>, uint32_t, ::ArrayW<::StringW>, uint32_t)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateAction)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x2aee158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_CreateAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_SuggestBindings
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ArrayW<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding>, uint32_t)>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SuggestBindings)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x2aee38c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_SuggestBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::XR::OpenXR::Input::OpenXRInput.Internal_AttachActionSets
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_AttachActionSets)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2aee4d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_AttachActionSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::__set_ExpectedControlTypeToActionType(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType>, "ExpectedControlTypeToActionType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType> UnityEngine::XR::OpenXR::Input::OpenXRInput::__get_ExpectedControlTypeToActionType()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionType>, "ExpectedControlTypeToActionType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get>();
}
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::__set_kVirtualControlMap(System::Collections::Generic::Dictionary_2<::StringW,::StringW> value)  {
::cordl_internals::setStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "kVirtualControlMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get>(std::forward<System::Collections::Generic::Dictionary_2<::StringW,::StringW>>(value));
}
 System::Collections::Generic::Dictionary_2<::StringW,::StringW> UnityEngine::XR::OpenXR::Input::OpenXRInput::__get_kVirtualControlMap()  {
return ::cordl_internals::getStaticField<System::Collections::Generic::Dictionary_2<::StringW,::StringW>, "kVirtualControlMap", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get>();
}
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::RegisterLayouts()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "RegisterLayouts",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::ValidateActionMapConfig(UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature interactionFeature, UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig actionMapConfig)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "ValidateActionMapConfig",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::OpenXRInteractionFeature>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Features::UnityEngine__XR__OpenXR__Features__OpenXRInteractionFeature__ActionMapConfig>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactionFeature, actionMapConfig);
}
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::AttachActionSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "AttachActionSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
 char16_t UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeCharForOpenXRPath(char16_t c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SanitizeCharForOpenXRPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
 ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::SanitizeStringForOpenXRPath(::StringW input)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SanitizeStringForOpenXRPath",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, input);
}
 ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandleName(UnityEngine::InputSystem::InputControl control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetActionHandleName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputControl>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, control);
}
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(UnityEngine::InputSystem::InputActionReference actionRef, float_t amplitude, float_t duration, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionRef, amplitude, duration, inputDevice);
}
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(UnityEngine::InputSystem::InputActionReference actionRef, float_t amplitude, float_t frequency, float_t duration, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionRef, amplitude, frequency, duration, inputDevice);
}
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(UnityEngine::InputSystem::InputAction action, float_t amplitude, float_t duration, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, amplitude, duration, inputDevice);
}
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::SendHapticImpulse(UnityEngine::InputSystem::InputAction action, float_t amplitude, float_t frequency, float_t duration, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, action, amplitude, frequency, duration, inputDevice);
}
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics(UnityEngine::InputSystem::InputActionReference actionRef, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputActionReference>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, actionRef, inputDevice);
}
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::StopHaptics(UnityEngine::InputSystem::InputAction inputAction, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputAction, inputDevice);
}
/// @param flags: UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags (default: 7)
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::TryGetInputSourceName(UnityEngine::InputSystem::InputAction inputAction, int32_t index, ByRef<::StringW> name, UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags flags, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "TryGetInputSourceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__InputSourceNameFlags>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inputAction, index, name, flags, inputDevice);
}
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionIsActive(UnityEngine::InputSystem::InputAction inputAction)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetActionIsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, inputAction);
}
/// @param inputDevice: UnityEngine::InputSystem::InputDevice (default: csnull)
 uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetActionHandle(UnityEngine::InputSystem::InputAction inputAction, UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetActionHandle",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputAction>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, inputAction, inputDevice);
}
 uint32_t UnityEngine::XR::OpenXR::Input::OpenXRInput::GetDeviceId(UnityEngine::InputSystem::InputDevice inputDevice)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "GetDeviceId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::InputDevice>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, inputDevice);
}
 ::StringW UnityEngine::XR::OpenXR::Input::OpenXRInput::UserPathToDeviceName(::StringW userPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "UserPathToDeviceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, userPath);
}
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SendHapticImpulse(uint32_t deviceId, uint64_t actionId, float_t amplitude, float_t frequency, float_t duration)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_SendHapticImpulse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceId, actionId, amplitude, frequency, duration);
}
 void UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_StopHaptics(uint32_t deviceId, uint64_t actionId)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_StopHaptics",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceId, actionId);
}
 uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionId(uint32_t deviceId, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_GetActionId",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, deviceId, name);
}
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceNamePtr(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<::cordl_internals::intptr_t> outName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_TryGetInputSourceNamePtr",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::cordl_internals::intptr_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId, actionId, index, flags, outName);
}
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_TryGetInputSourceName(uint32_t deviceId, uint64_t actionId, uint32_t index, uint32_t flags, ByRef<::StringW> outName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_TryGetInputSourceName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId, actionId, index, flags, outName);
}
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_GetActionIsActive(uint32_t deviceId, ::StringW name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_GetActionIsActive",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId, name);
}
 uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_RegisterDeviceDefinition(::StringW userPath, ::StringW interactionProfile, uint32_t characteristics, ::StringW name, ::StringW manufacturer, ::StringW serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_RegisterDeviceDefinition",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, userPath, interactionProfile, characteristics, name, manufacturer, serialNumber);
}
 uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateActionSet(::StringW name, ::StringW localizedName, UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid guid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_CreateActionSet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, name, localizedName, guid);
}
 uint64_t UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_CreateAction(uint64_t actionSetId, ::StringW name, ::StringW localizedName, uint32_t actionType, UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid guid, ::ArrayW<::StringW> userPaths, uint32_t userPathCount, ::ArrayW<::StringW> usages, uint32_t usageCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_CreateAction",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedGuid>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, actionSetId, name, localizedName, actionType, guid, userPaths, userPathCount, usages, usageCount);
}
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_SuggestBindings(::StringW interactionProfile, ::ArrayW<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding> serializedBindings, uint32_t serializedBindingCount)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_SuggestBindings",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<UnityEngine::XR::OpenXR::Input::UnityEngine__XR__OpenXR__Input__OpenXRInput__SerializedBinding>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, interactionProfile, serializedBindings, serializedBindingCount);
}
 bool UnityEngine::XR::OpenXR::Input::OpenXRInput::Internal_AttachActionSets()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::XR::OpenXR::Input::OpenXRInput>::get(),
                            "Internal_AttachActionSets",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
