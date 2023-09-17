#pragma once
#include "System/zzzz__Enum_impl.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
namespace {
#include "UnityEngine/zzzz__ReflectionProbe_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent::____UnityEngine__ReflectionProbe__ReflectionProbeEvent(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent  ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent::ReflectionProbeAdded{0};
constexpr ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent  ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent::ReflectionProbeRemoved{1};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallReflectionProbeEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::ReflectionProbe, ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent)>(&::UnityEngine::ReflectionProbe::CallReflectionProbeEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b4f6a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get(),
                            "CallReflectionProbeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ReflectionProbe.CallSetDefaultReflection
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Texture)>(&::UnityEngine::ReflectionProbe::CallSetDefaultReflection)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2b4f720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get(),
                            "CallSetDefaultReflection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get()}
                        )));
    return ___internal_method;
  }
};
 void ::UnityEngine::ReflectionProbe::__set_reflectionProbeChanged(::System::Action_2<::UnityEngine::ReflectionProbe,::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent> value)  {
::cordl_internals::setStaticField<::System::Action_2<::UnityEngine::ReflectionProbe,::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent>, "reflectionProbeChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get>(std::forward<::System::Action_2<::UnityEngine::ReflectionProbe,::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent>>(value));
}
 ::System::Action_2<::UnityEngine::ReflectionProbe,::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent> ::UnityEngine::ReflectionProbe::__get_reflectionProbeChanged()  {
return ::cordl_internals::getStaticField<::System::Action_2<::UnityEngine::ReflectionProbe,::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent>, "reflectionProbeChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get>();
}
 void ::UnityEngine::ReflectionProbe::__set_defaultReflectionTexture(::System::Action_1<::UnityEngine::Texture> value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::Texture>, "defaultReflectionTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get>(std::forward<::System::Action_1<::UnityEngine::Texture>>(value));
}
 ::System::Action_1<::UnityEngine::Texture> ::UnityEngine::ReflectionProbe::__get_defaultReflectionTexture()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::Texture>, "defaultReflectionTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get>();
}
 void ::UnityEngine::ReflectionProbe::CallReflectionProbeEvent(::UnityEngine::ReflectionProbe probe, ::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent probeEvent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get(),
                            "CallReflectionProbeEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ReflectionProbe>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::____UnityEngine__ReflectionProbe__ReflectionProbeEvent>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, probe, probeEvent);
}
 void ::UnityEngine::ReflectionProbe::CallSetDefaultReflection(::UnityEngine::Texture defaultReflectionCubemap)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ReflectionProbe>::get(),
                            "CallSetDefaultReflection",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, defaultReflectionCubemap);
}
} // end anonymous namespace
