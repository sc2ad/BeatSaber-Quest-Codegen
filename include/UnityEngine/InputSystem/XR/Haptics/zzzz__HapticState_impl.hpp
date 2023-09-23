#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/XR/Haptics/zzzz__HapticState_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::HapticState._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Haptics::HapticState::*)(uint32_t, uint32_t)>(&UnityEngine::InputSystem::XR::Haptics::HapticState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2936e54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::HapticState.get_samplesQueued
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::XR::Haptics::HapticState::*)()>(&UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2936e5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "get_samplesQueued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::HapticState.set_samplesQueued
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Haptics::HapticState::*)(uint32_t)>(&UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesQueued)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2936e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "set_samplesQueued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::HapticState.get_samplesAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (UnityEngine::InputSystem::XR::Haptics::HapticState::*)()>(&UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2936e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "get_samplesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::XR::Haptics::HapticState.set_samplesAvailable
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::InputSystem::XR::Haptics::HapticState::*)(uint32_t)>(&UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2936e74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "set_samplesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_samplesQueued_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_samplesAvailable_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::XR::Haptics::HapticState::HapticState(uint32_t _samplesQueued_k__BackingField, uint32_t _samplesAvailable_k__BackingField) noexcept : ::bs_hook::ValueTypeWrapper() {this->_samplesQueued_k__BackingField = _samplesQueued_k__BackingField;
this->_samplesAvailable_k__BackingField = _samplesAvailable_k__BackingField;
}
constexpr void UnityEngine::InputSystem::XR::Haptics::HapticState::__set__samplesQueued_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x0>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::XR::Haptics::HapticState::__get__samplesQueued_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x0>(this->__instance);
}
constexpr void UnityEngine::InputSystem::XR::Haptics::HapticState::__set__samplesAvailable_k__BackingField(uint32_t value)  {
::cordl_internals::setInstanceField<uint32_t, 0x4>(this->__instance, std::forward<uint32_t>(value));
}
constexpr uint32_t UnityEngine::InputSystem::XR::Haptics::HapticState::__get__samplesAvailable_k__BackingField() const {
return ::cordl_internals::getInstanceField<uint32_t, 0x4>(this->__instance);
}
 void UnityEngine::InputSystem::XR::Haptics::HapticState::_ctor(uint32_t samplesQueued, uint32_t samplesAvailable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, samplesQueued, samplesAvailable);
}
 uint32_t UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesQueued()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "get_samplesQueued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesQueued(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "set_samplesQueued",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
 uint32_t UnityEngine::InputSystem::XR::Haptics::HapticState::get_samplesAvailable()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "get_samplesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<uint32_t, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 void UnityEngine::InputSystem::XR::Haptics::HapticState::set_samplesAvailable(uint32_t value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::XR::Haptics::HapticState>::get(),
                            "set_samplesAvailable",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, value);
}
