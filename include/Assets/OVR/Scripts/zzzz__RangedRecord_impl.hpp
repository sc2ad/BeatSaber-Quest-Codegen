#pragma once
#include "Assets/OVR/Scripts/zzzz__Record_impl.hpp"
namespace {
#include "Assets/OVR/Scripts/zzzz__RangedRecord_def.hpp"
//  Writing Method size for method: ::Assets::OVR::Scripts::RangedRecord._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Assets::OVR::Scripts::RangedRecord::*)(int32_t, ::StringW, ::StringW, float_t, float_t, float_t)>(&::Assets::OVR::Scripts::RangedRecord::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x266a938;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::RangedRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Assets::OVR::Scripts::RangedRecord::__set_value(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::Assets::OVR::Scripts::RangedRecord::__get_value() const {
return ::cordl_internals::getInstanceField<float_t, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Assets::OVR::Scripts::RangedRecord::__set_min(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::Assets::OVR::Scripts::RangedRecord::__get_min() const {
return ::cordl_internals::getInstanceField<float_t, 0x2c>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Assets::OVR::Scripts::RangedRecord::__set_max(float_t value)  {
::cordl_internals::setInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<float_t>(value));
}
constexpr float_t ::Assets::OVR::Scripts::RangedRecord::__get_max() const {
return ::cordl_internals::getInstanceField<float_t, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "order", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cat", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "msg", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "val", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minVal", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "maxVal", ty: "float_t", modifiers: "", def_value: None }]
 ::Assets::OVR::Scripts::RangedRecord::RangedRecord(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal)  : ::Assets::OVR::Scripts::Record(THROW_UNLESS(::il2cpp_utils::New<RangedRecord>(order, cat, msg, val, minVal, maxVal))) {}
 void ::Assets::OVR::Scripts::RangedRecord::_ctor(int32_t order, ::StringW cat, ::StringW msg, float_t val, float_t minVal, float_t maxVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Assets::OVR::Scripts::RangedRecord>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, order, cat, msg, val, minVal, maxVal);
}
} // end anonymous namespace
