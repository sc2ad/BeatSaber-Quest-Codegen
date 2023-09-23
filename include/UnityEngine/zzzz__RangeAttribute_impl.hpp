#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__RangeAttribute_def.hpp"
//  Writing Method size for method: UnityEngine::RangeAttribute._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::RangeAttribute::*)(float_t, float_t)>(&UnityEngine::RangeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b54ea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RangeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::RangeAttribute::__set_min(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::RangeAttribute::__get_min() const {
return ::cordl_internals::getInstanceField<float_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::RangeAttribute::__set_max(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t UnityEngine::RangeAttribute::__get_max() const {
return ::cordl_internals::getInstanceField<float_t, 0x14>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "min", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "max", ty: "float_t", modifiers: "", def_value: None }]
 UnityEngine::RangeAttribute::RangeAttribute(float_t min, float_t max)  : UnityEngine::PropertyAttribute(THROW_UNLESS(::il2cpp_utils::New<RangeAttribute>(min, max))) {}
 void UnityEngine::RangeAttribute::_ctor(float_t min, float_t max)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::RangeAttribute>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, min, max);
}
