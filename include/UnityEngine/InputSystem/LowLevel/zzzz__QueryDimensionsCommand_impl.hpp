#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "UnityEngine/InputSystem/LowLevel/zzzz__QueryDimensionsCommand_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputDeviceCommandInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommand_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (*)()>(&::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::get_Type)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x29551f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::*)()>(&::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::get_typeStatic)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2955224;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand (*)()>(&::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::Create)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2955254;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo
constexpr  ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::operator ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo() const {
return ::UnityEngine::InputSystem::LowLevel::IInputDeviceCommandInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseCommand", ty: "::UnityEngine::InputSystem::LowLevel::InputDeviceCommand", modifiers: "", def_value: Some("{}") }, CppParam { name: "outDimensions", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::QueryDimensionsCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand baseCommand, ::UnityEngine::Vector2 outDimensions) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseCommand = baseCommand;
this->outDimensions = outDimensions;
}
constexpr void ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::__set_baseCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand value)  {
::cordl_internals::setInstanceField<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance, std::forward<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand>(value));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputDeviceCommand ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::__get_baseCommand() const {
return ::cordl_internals::getInstanceField<::UnityEngine::InputSystem::LowLevel::InputDeviceCommand, 0x0>(this->__instance);
}
constexpr void ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::__set_outDimensions(::UnityEngine::Vector2 value)  {
::cordl_internals::setInstanceField<::UnityEngine::Vector2, 0x8>(this->__instance, std::forward<::UnityEngine::Vector2>(value));
}
constexpr ::UnityEngine::Vector2 ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::__get_outDimensions() const {
return ::cordl_internals::getInstanceField<::UnityEngine::Vector2, 0x8>(this->__instance);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(nullptr, ___internal_method);
}
 ::UnityEngine::InputSystem::Utilities::FourCC ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand ::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand::Create()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::QueryDimensionsCommand, false>(nullptr, ___internal_method);
}
} // end anonymous namespace
