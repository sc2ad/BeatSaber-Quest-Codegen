#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "SFB/zzzz__ExtensionFilter_def.hpp"
//  Writing Method size for method: ::SFB::ExtensionFilter._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::SFB::ExtensionFilter::*)(::StringW, ::ArrayW<::StringW>)>(&::SFB::ExtensionFilter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d56a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::ExtensionFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "_extensions", ty: "::ArrayW<::StringW>", modifiers: "", def_value: Some("csnull") }]
constexpr ::SFB::ExtensionFilter::ExtensionFilter(::StringW _name, ::ArrayW<::StringW> _extensions) noexcept : ::bs_hook::ValueTypeWrapper() {this->_name = _name;
this->_extensions = _extensions;
}
constexpr void ::SFB::ExtensionFilter::__set__name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::SFB::ExtensionFilter::__get__name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::SFB::ExtensionFilter::__set__extensions(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> ::SFB::ExtensionFilter::__get__extensions() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x8>(this->__instance);
}
 void ::SFB::ExtensionFilter::_ctor(::StringW filterName, ::ArrayW<::StringW> filterExtensions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::SFB::ExtensionFilter>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, filterName, filterExtensions);
}
} // end anonymous namespace
