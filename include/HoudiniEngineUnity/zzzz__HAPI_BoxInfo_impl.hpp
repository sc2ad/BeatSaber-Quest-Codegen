#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "HoudiniEngineUnity/zzzz__HAPI_BoxInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HAPI_BoxInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HAPI_BoxInfo::*)(bool)>(&::HoudiniEngineUnity::HAPI_BoxInfo::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x201f62c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "center", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "size", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }, CppParam { name: "rotation", ty: "::ArrayW<float_t>", modifiers: "", def_value: Some("csnull") }]
constexpr ::HoudiniEngineUnity::HAPI_BoxInfo::HAPI_BoxInfo(::ArrayW<float_t> center, ::ArrayW<float_t> size, ::ArrayW<float_t> rotation) noexcept : ::bs_hook::ValueTypeWrapper() {this->center = center;
this->size = size;
this->rotation = rotation;
}
constexpr void ::HoudiniEngineUnity::HAPI_BoxInfo::__set_center(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x0>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::HoudiniEngineUnity::HAPI_BoxInfo::__get_center() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x0>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_BoxInfo::__set_size(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x8>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::HoudiniEngineUnity::HAPI_BoxInfo::__get_size() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x8>(this->__instance);
}
constexpr void ::HoudiniEngineUnity::HAPI_BoxInfo::__set_rotation(::ArrayW<float_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<float_t>, 0x10>(this->__instance, std::forward<::ArrayW<float_t>>(value));
}
constexpr ::ArrayW<float_t> ::HoudiniEngineUnity::HAPI_BoxInfo::__get_rotation() const {
return ::cordl_internals::getInstanceField<::ArrayW<float_t>, 0x10>(this->__instance);
}
 void ::HoudiniEngineUnity::HAPI_BoxInfo::_ctor(bool initialize_fields)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HAPI_BoxInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, initialize_fields);
}
} // end anonymous namespace
