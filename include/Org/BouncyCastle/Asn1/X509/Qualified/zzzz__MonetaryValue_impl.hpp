#pragma once
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_impl.hpp"
namespace {
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__MonetaryValue_def.hpp"
#include "Org/BouncyCastle/Math/zzzz__BigInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Sequence_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerInteger_def.hpp"
#include "Org/BouncyCastle/Asn1/X509/Qualified/zzzz__Iso4217CurrencyCode_def.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.GetInstance
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue (*)(::bs_hook::Il2CppWrapperType)>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::GetInstance)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0xff3f3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)(::Org::BouncyCastle::Asn1::Asn1Sequence)>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xff40a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, int32_t, int32_t)>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xff41e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.get_Currency
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Currency)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xff4290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "get_Currency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.get_Amount
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Amount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xff4298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "get_Amount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.get_Exponent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Exponent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xff42b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "get_Exponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue.ToAsn1Object
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object (::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::*)()>(&::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::ToAsn1Object)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xff42d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                classof(::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__set_currency(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode>(value));
}
constexpr ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__get_currency() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__set_amount(::Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__get_amount() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__set_exponent(::Org::BouncyCastle::Asn1::DerInteger value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::DerInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::DerInteger>(value));
}
constexpr ::Org::BouncyCastle::Asn1::DerInteger ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::__get_exponent() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::DerInteger, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::GetInstance(::bs_hook::Il2CppWrapperType obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "GetInstance",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::bs_hook::Il2CppWrapperType>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue, false>(nullptr, ___internal_method, obj);
}
// Ctor Parameters [CppParam { name: "seq", ty: "::Org::BouncyCastle::Asn1::Asn1Sequence", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::MonetaryValue(::Org::BouncyCastle::Asn1::Asn1Sequence seq)  : ::Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<MonetaryValue>(seq))) {}
 void ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence seq)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Asn1Sequence>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, seq);
}
// Ctor Parameters [CppParam { name: "currency", ty: "::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode", modifiers: "", def_value: None }, CppParam { name: "amount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "exponent", ty: "int32_t", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::MonetaryValue(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode currency, int32_t amount, int32_t exponent)  : ::Org::BouncyCastle::Asn1::Asn1Encodable(THROW_UNLESS(::il2cpp_utils::New<MonetaryValue>(currency, amount, exponent))) {}
 void ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::_ctor(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode currency, int32_t amount, int32_t exponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, currency, amount, exponent);
}
 ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Currency()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "get_Currency",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Amount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "get_Amount",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Math::BigInteger ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::get_Exponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "get_Exponent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Math::BigInteger, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::Asn1Object ::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue::ToAsn1Object()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Asn1::X509::Qualified::MonetaryValue>::get(),
                            "ToAsn1Object",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Asn1Object, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
