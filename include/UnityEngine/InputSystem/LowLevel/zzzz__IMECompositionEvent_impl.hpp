#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::IMECompositionEvent.get_typeStatic
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Utilities::FourCC (UnityEngine::InputSystem::LowLevel::IMECompositionEvent::*)()>(&UnityEngine::InputSystem::LowLevel::IMECompositionEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x29573dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::LowLevel::IMECompositionEvent.Create
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::LowLevel::IMECompositionEvent (*)(int32_t, ::StringW, double_t)>(&UnityEngine::InputSystem::LowLevel::IMECompositionEvent::Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x29573fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo
constexpr  UnityEngine::InputSystem::LowLevel::IMECompositionEvent::operator UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo() const {
return UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo(::cordl_internals::Box(this).convert());
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositionString", ty: "UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::LowLevel::IMECompositionEvent::IMECompositionEvent(UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) noexcept : ::bs_hook::ValueTypeWrapper() {this->baseEvent = baseEvent;
this->compositionString = compositionString;
}
constexpr void UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__set_baseEvent(UnityEngine::InputSystem::LowLevel::InputEvent value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::InputEvent>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::InputEvent UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__get_baseEvent() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::InputEvent, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__set_compositionString(UnityEngine::InputSystem::LowLevel::IMECompositionString value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::LowLevel::IMECompositionString, 0x14>(this->__instance, std::forward<UnityEngine::InputSystem::LowLevel::IMECompositionString>(value));
}
constexpr UnityEngine::InputSystem::LowLevel::IMECompositionString UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__get_compositionString() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::LowLevel::IMECompositionString, 0x14>(this->__instance);
}
 UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::IMECompositionEvent::get_typeStatic()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(),
                            "get_typeStatic",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Utilities::FourCC, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::LowLevel::IMECompositionEvent UnityEngine::InputSystem::LowLevel::IMECompositionEvent::Create(int32_t deviceId, ::StringW compositionString, double_t time)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(),
                            "Create",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::LowLevel::IMECompositionEvent, false>(nullptr, ___internal_method, deviceId, compositionString, time);
}
