#pragma once
#include "System/zzzz__ValueType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Keyframe_def.hpp"
//  Writing Method size for method: HoudiniEngineUnity::HAPI_Keyframe._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HoudiniEngineUnity::HAPI_Keyframe::*)(float_t, float_t, float_t, float_t)>(&HoudiniEngineUnity::HAPI_Keyframe::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x201f620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Keyframe>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "time", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "value", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "inTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "outTangent", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr HoudiniEngineUnity::HAPI_Keyframe::HAPI_Keyframe(float_t time, float_t value, float_t inTangent, float_t outTangent) noexcept : ::bs_hook::ValueTypeWrapper() {this->time = time;
this->value = value;
this->inTangent = inTangent;
this->outTangent = outTangent;
}
constexpr void HoudiniEngineUnity::HAPI_Keyframe::__set_time(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x0>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_Keyframe::__get_time() const {
return ::cordl_internals::getInstanceField<float_t, 0x0>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Keyframe::__set_value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x4>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_Keyframe::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x4>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Keyframe::__set_inTangent(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x8>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_Keyframe::__get_inTangent() const {
return ::cordl_internals::getInstanceField<float_t, 0x8>(this->__instance);
}
constexpr void HoudiniEngineUnity::HAPI_Keyframe::__set_outTangent(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0xc>(this->__instance, std::forward<float_t>(value));
}
constexpr float_t HoudiniEngineUnity::HAPI_Keyframe::__get_outTangent() const {
return ::cordl_internals::getInstanceField<float_t, 0xc>(this->__instance);
}
 void HoudiniEngineUnity::HAPI_Keyframe::_ctor(float_t t, float_t v, float_t in_tangent, float_t out_tangent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<HoudiniEngineUnity::HAPI_Keyframe>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, t, v, in_tangent, out_tangent);
}
