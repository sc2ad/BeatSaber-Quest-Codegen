#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__TextEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TextEvent.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::TextEvent::*)()>(&UnityEngine::InputSystem::LowLevel::TextEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x295de24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TextEvent.From
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&UnityEngine::InputSystem::LowLevel::TextEvent::From)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x295de44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TextEvent.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::TextEvent (*)(int32_t, char16_t, double_t)>(&UnityEngine::InputSystem::LowLevel::TextEvent::Create)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x295df70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::TextEvent.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::TextEvent (*)(int32_t, int32_t, double_t)>(&UnityEngine::InputSystem::LowLevel::TextEvent::Create)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x295e010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::TextEvent::operator UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "character", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::TextEvent::TextEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, int32_t character) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseEvent = baseEvent;
this->character = character;
}
constexpr void UnityEngine::InputSystem::LowLevel::TextEvent::__set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEvent>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEvent UnityEngine::InputSystem::LowLevel::TextEvent::__get_baseEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::TextEvent::__set_character(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x14>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t UnityEngine::InputSystem::LowLevel::TextEvent::__get_character() const {
return ::cordl_internals::getInstanceField<int32_t, 0x14>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::TextEvent::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void* UnityEngine::InputSystem::LowLevel::TextEvent::From(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "From",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<UnityEngine::InputSystem::LowLevel::InputEventPtr>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, eventPtr);
}
/// @param time: double_t (default: -1)
 UnityEngine::InputSystem::LowLevel::TextEvent UnityEngine::InputSystem::LowLevel::TextEvent::Create(int32_t deviceId, char16_t character, double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::TextEvent, false>(nullptr, ___internal_method, deviceId, character, time);
}
/// @param time: double_t (default: -1)
 UnityEngine::InputSystem::LowLevel::TextEvent UnityEngine::InputSystem::LowLevel::TextEvent::Create(int32_t deviceId, int32_t character, double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::TextEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::TextEvent, false>(nullptr, ___internal_method, deviceId, character, time);
}
