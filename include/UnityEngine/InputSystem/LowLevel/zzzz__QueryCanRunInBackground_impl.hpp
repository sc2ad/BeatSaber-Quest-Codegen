#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryCanRunInBackground_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (*)()>(&UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955158;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::*)()>(&UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955188;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground (*)()>(&UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x29551b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::operator UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "canRunInBackground", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::QueryCanRunInBackground(UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, bool canRunInBackground) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->canRunInBackground = canRunInBackground;
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::__set_baseCommand(UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputDeviceCommand UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::__set_canRunInBackground(bool value)  {
::cordl_internals::setInstanceField<bool, 0x8>(this->__instance, std::forward<bool>(value));
}
constexpr bool UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::__get_canRunInBackground() const {
return ::cordl_internals::getInstanceField<bool, 0x8>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::QueryCanRunInBackground, false>(nullptr, ___internal_method);
}
