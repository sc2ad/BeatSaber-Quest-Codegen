#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorCapabilities_def.hpp"
#include "UnityEngine/InputSystem/Android/LowLevel/zzzz__AndroidSensorType_def.hpp"
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.ToJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::*)()>(&UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToJson)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x29542a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.FromJson
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities (*)(::StringW)>(&UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::FromJson)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2954304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities.ToString
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::*)()>(&UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x29543a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "sensorType", ty: "UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType", modifiers: "", def_value: Some("{}") }]
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::AndroidSensorCapabilities(UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType sensorType) noexcept : ::bs_hook::ValueTypeWrapper() {this->sensorType = sensorType;
}
constexpr void UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::__set_sensorType(UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType value)  {
::cordl_internals::setInstanceField<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, 0x0>(this->__instance, std::forward<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType>(value));
}
constexpr UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::__get_sensorType() const {
return ::cordl_internals::getInstanceField<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorType, 0x0>(this->__instance);
}
 ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToJson()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "ToJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::FromJson(::StringW json)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "FromJson",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities, false>(nullptr, ___internal_method, json);
}
 ::StringW UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities::ToString()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::InputSystem::Android::LowLevel::AndroidSensorCapabilities>::get(),
                            "ToString",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
