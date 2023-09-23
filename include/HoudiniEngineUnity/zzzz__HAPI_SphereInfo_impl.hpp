#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SphereInfo_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HAPI_SphereInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_SphereInfo::*)(bool)>(&HoudiniEngineUnity::HAPI_SphereInfo::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x201f69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_SphereInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_SphereInfo::HAPI_SphereInfo(::ArrayW<float_t> center, float_t radius) noexcept : ::bs_hook::ValueTypeWrapper() {this->center = center;
this->radius = radius;
}
constexpr void HoudiniEngineUnity::HAPI_SphereInfo::__set_center(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x0>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> HoudiniEngineUnity::HAPI_SphereInfo::__get_center() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_SphereInfo::__set_radius(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_SphereInfo::__get_radius() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
 void HoudiniEngineUnity::HAPI_SphereInfo::_ctor(bool initialize_fields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_SphereInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initialize_fields);
}
