#pragma once
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValue_def.hpp"
//  Writing Method size for method: Oculus::Platform::Models::NetSyncVoipAttenuationValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::Models::NetSyncVoipAttenuationValue::*)(::cordl_internals::intptr_t)>(&Oculus::Platform::Models::NetSyncVoipAttenuationValue::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25a1890;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetSyncVoipAttenuationValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void Oculus::Platform::Models::NetSyncVoipAttenuationValue::__set_Decibels(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Oculus::Platform::Models::NetSyncVoipAttenuationValue::__get_Decibels() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void Oculus::Platform::Models::NetSyncVoipAttenuationValue::__set_Distance(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t Oculus::Platform::Models::NetSyncVoipAttenuationValue::__get_Distance() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
 Oculus::Platform::Models::NetSyncVoipAttenuationValue Oculus::Platform::Models::NetSyncVoipAttenuationValue::New_ctor(::cordl_internals::intptr_t o)  {
Oculus::Platform::Models::NetSyncVoipAttenuationValue o{THROW_UNLESS(::il2cpp_utils::New<Oculus::Platform::Models::NetSyncVoipAttenuationValue>(o))};
return o;
}
 void Oculus::Platform::Models::NetSyncVoipAttenuationValue::_ctor(::cordl_internals::intptr_t o)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<Oculus::Platform::Models::NetSyncVoipAttenuationValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::intptr_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, o);
}
