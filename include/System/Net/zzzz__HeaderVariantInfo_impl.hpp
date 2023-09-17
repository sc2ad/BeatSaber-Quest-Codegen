#pragma once
#include "System/zzzz__ValueType_impl.hpp"
namespace {
#include "System/Net/zzzz__HeaderVariantInfo_def.hpp"
#include "System/Net/zzzz__CookieVariant_def.hpp"
//  Writing Method size for method: ::System::Net::HeaderVariantInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::HeaderVariantInfo::*)(::StringW, ::System::Net::CookieVariant)>(&::System::Net::HeaderVariantInfo::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x281d758;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieVariant>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderVariantInfo.get_Name
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Net::HeaderVariantInfo::*)()>(&::System::Net::HeaderVariantInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281d764;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::HeaderVariantInfo.get_Variant
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::CookieVariant (::System::Net::HeaderVariantInfo::*)()>(&::System::Net::HeaderVariantInfo::get_Variant)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x281d76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(),
                            "get_Variant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
// Ctor Parameters [CppParam { name: "m_name", ty: "::StringW", modifiers: "", def_value: Some("csnull") }, CppParam { name: "m_variant", ty: "::System::Net::CookieVariant", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::HeaderVariantInfo::HeaderVariantInfo(::StringW m_name, ::System::Net::CookieVariant m_variant) noexcept : ::bs_hook::ValueTypeWrapper() {this->m_name = m_name;
this->m_variant = m_variant;
}
constexpr void ::System::Net::HeaderVariantInfo::__set_m_name(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x0>(this->__instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::System::Net::HeaderVariantInfo::__get_m_name() const {
return ::cordl_internals::getInstanceField<::StringW, 0x0>(this->__instance);
}
constexpr void ::System::Net::HeaderVariantInfo::__set_m_variant(::System::Net::CookieVariant value)  {
::cordl_internals::setInstanceField<::System::Net::CookieVariant, 0x8>(this->__instance, std::forward<::System::Net::CookieVariant>(value));
}
constexpr ::System::Net::CookieVariant ::System::Net::HeaderVariantInfo::__get_m_variant() const {
return ::cordl_internals::getInstanceField<::System::Net::CookieVariant, 0x8>(this->__instance);
}
 void ::System::Net::HeaderVariantInfo::_ctor(::StringW name, ::System::Net::CookieVariant variant)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::CookieVariant>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method, name, variant);
}
 ::StringW ::System::Net::HeaderVariantInfo::get_Name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(),
                            "get_Name",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
 ::System::Net::CookieVariant ::System::Net::HeaderVariantInfo::get_Variant()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::HeaderVariantInfo>::get(),
                            "get_Variant",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Net::CookieVariant, false>(const_cast<void*>(reinterpret_cast<const void*>(__instance.data())), ___internal_method);
}
} // end anonymous namespace
