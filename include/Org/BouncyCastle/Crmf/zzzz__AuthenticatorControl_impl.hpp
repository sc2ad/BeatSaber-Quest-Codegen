#pragma once
namespace {
#include "Org/BouncyCastle/Crmf/zzzz__AuthenticatorControl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerObjectIdentifier_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerUtf8String_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__IControl_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)(::Org::BouncyCastle::Asn1::DerUtf8String)>(&::Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x1182bd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtf8String>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)(::StringW)>(&::Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x1182bf8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)()>(&::Org::BouncyCastle::Crmf::AuthenticatorControl::get_Type)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1182c74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Crmf::AuthenticatorControl.get_Value
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Encodable (::Org::BouncyCastle::Crmf::AuthenticatorControl::*)()>(&::Org::BouncyCastle::Crmf::AuthenticatorControl::get_Value)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1182ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Crmf::IControl
constexpr  ::Org::BouncyCastle::Crmf::AuthenticatorControl::operator ::Org::BouncyCastle::Crmf::IControl() const noexcept {
return ::Org::BouncyCastle::Crmf::IControl(::bs_hook::Il2CppWrapperType::instance);
}
 void ::Org::BouncyCastle::Crmf::AuthenticatorControl::__set_type(::Org::BouncyCastle::Asn1::DerObjectIdentifier value)  {
::cordl_internals::setStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, "type", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get>(std::forward<::Org::BouncyCastle::Asn1::DerObjectIdentifier>(value));
}
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::Crmf::AuthenticatorControl::__get_type()  {
return ::cordl_internals::getStaticField<::Org::BouncyCastle::Asn1::DerObjectIdentifier, "type", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get>();
}
constexpr void ::Org::BouncyCastle::Crmf::AuthenticatorControl::__set_token(::Org::BouncyCastle::Asn1::DerUtf8String value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerUtf8String, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::DerUtf8String>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerUtf8String ::Org::BouncyCastle::Crmf::AuthenticatorControl::__get_token() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerUtf8String, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "token", ty: "::Org::BouncyCastle::Asn1::DerUtf8String", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crmf::AuthenticatorControl::AuthenticatorControl(::Org::BouncyCastle::Asn1::DerUtf8String token)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AuthenticatorControl>(token))) {}
 void ::Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor(::Org::BouncyCastle::Asn1::DerUtf8String token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::DerUtf8String>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token);
}
// Ctor Parameters [CppParam { name: "token", ty: "::StringW", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Crmf::AuthenticatorControl::AuthenticatorControl(::StringW token)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<AuthenticatorControl>(token))) {}
 void ::Org::BouncyCastle::Crmf::AuthenticatorControl::_ctor(::StringW token)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, token);
}
 ::Org::BouncyCastle::Asn1::DerObjectIdentifier ::Org::BouncyCastle::Crmf::AuthenticatorControl::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::DerObjectIdentifier, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::Asn1Encodable ::Org::BouncyCastle::Crmf::AuthenticatorControl::get_Value()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Crmf::AuthenticatorControl>::get(),
                            "get_Value",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Encodable, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
