#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
#include "System/zzzz__Enum_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/IsisMtt/Ocsp/zzzz__RequestedCertificate_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__IAsn1Choice_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/zzzz__X509CertificateStructure_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1TaggedObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice(int32_t value__) noexcept : ::bs_hook::EnumTypeWrapper() {this->value__ = value__;
}
constexpr void ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice::__set_value__(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x0>(this->__instance, std::forward<int32_t>(value));
}
constexpr int32_t ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice::__get_value__() const {
return ::cordl_internals::getInstanceField<int32_t, 0x0>(this->__instance);
}
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice  ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice::Certificate{-1};
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice  ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice::PublicKeyCertificate{0};
constexpr ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice  ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice::AttributeCertificate{1};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate (*)(::bs_hook::Il2CppWrapperType)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xee7fb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject, bool)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xee82f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xee81cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xee81a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice, ::ArrayW<uint8_t>)>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xee8364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.get_Type
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::get_Type)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xee8410;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.GetCertificateBytes
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetCertificateBytes)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xee8430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "GetCertificateBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object (::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::*)()>(&::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::ToAsn1Object)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xee8534;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
/// @brief Convert operator to ::Org::BouncyCastle::Asn1::IAsn1Choice
constexpr  ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::operator ::Org::BouncyCastle::Asn1::IAsn1Choice() const noexcept {
return ::Org::BouncyCastle::Asn1::IAsn1Choice(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__set_cert(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::X509CertificateStructure ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_cert() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__set_publicKeyCert(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_publicKeyCert() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__set_attributeCert(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::__get_attributeCert() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, false>(nullptr, ___internal_method, obj);
}
 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject obj, bool isExplicit)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate, false>(nullptr, ___internal_method, obj, isExplicit);
}
// Ctor Parameters [CppParam { name: "tagged", ty: "::Org::BouncyCastle::Asn1::Asn1TaggedObject", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::RequestedCertificate(::Org::BouncyCastle::Asn1::Asn1TaggedObject tagged)  : ::Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<RequestedCertificate>(tagged))) {}
 void ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::Asn1TaggedObject tagged)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1TaggedObject>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, tagged);
}
// Ctor Parameters [CppParam { name: "certificate", ty: "::Org::BouncyCastle::Asn1::X509::X509CertificateStructure", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::RequestedCertificate(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure certificate)  : ::Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<RequestedCertificate>(certificate))) {}
 void ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::X509::X509CertificateStructure certificate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::X509CertificateStructure>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, certificate);
}
// Ctor Parameters [CppParam { name: "type", ty: "::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice", modifiers: "", def_value: None }, CppParam { name: "certificateOctets", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::RequestedCertificate(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice type, ::ArrayW<uint8_t> certificateOctets)  : ::Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<RequestedCertificate>(type, certificateOctets))) {}
 void ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::_ctor(::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice type, ::ArrayW<uint8_t> certificateOctets)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, type, certificateOctets);
}
 ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::get_Type()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "get_Type",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::____Org__BouncyCastle__Asn1__IsisMtt__Ocsp__RequestedCertificate__Choice, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::GetCertificateBytes()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "GetCertificateBytes",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::Asn1Object ::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::IsisMtt::Ocsp::RequestedCertificate>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
