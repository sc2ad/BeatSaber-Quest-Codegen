#pragma once
namespace {
#include "Org/BouncyCastle/Cmp/zzzz__ProtectedPkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiHeader_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiMessage_def.hpp"
#include "Org/BouncyCastle/Crmf/zzzz__PKMacBuilder_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509Certificate_def.hpp"
#include "Org/BouncyCastle/Cmp/zzzz__GeneralPkiMessage_def.hpp"
#include "Org/BouncyCastle/Asn1/Cmp/zzzz__PkiBody_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IVerifierFactory_def.hpp"
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Cmp::GeneralPkiMessage)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x114bf58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cmp::GeneralPkiMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Asn1::Cmp::PkiMessage)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x114bff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiMessage>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_Header
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiHeader (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Header)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x114c090;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "get_Header",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_Body
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiBody (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Body)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x114c0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "get_Body",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.ToAsn1Message
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Cmp::PkiMessage (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ToAsn1Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x114c0d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "ToAsn1Message",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.get_HasPasswordBasedMacProtected
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_HasPasswordBasedMacProtected)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x114c0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "get_HasPasswordBasedMacProtected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.GetCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Org::BouncyCastle::X509::X509Certificate> (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)()>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::GetCertificates)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x114c180;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crypto::IVerifierFactory)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x114c2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactory>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Process
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crypto::IStreamCalculator)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Process)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x114c468;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCalculator>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Org::BouncyCastle::Cmp::ProtectedPkiMessage.Verify
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Org::BouncyCastle::Cmp::ProtectedPkiMessage::*)(::Org::BouncyCastle::Crmf::PKMacBuilder, ::ArrayW<char16_t>)>(&::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x114c740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::__set_pkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage value)  {
::cordl_internals::setInstanceField<::Org::BouncyCastle::Asn1::Cmp::PkiMessage, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Org::BouncyCastle::Asn1::Cmp::PkiMessage>(value));
}
constexpr ::Org::BouncyCastle::Asn1::Cmp::PkiMessage ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::__get_pkiMessage() const {
return ::cordl_internals::getInstanceField<::Org::BouncyCastle::Asn1::Cmp::PkiMessage, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "pkiMessage", ty: "::Org::BouncyCastle::Cmp::GeneralPkiMessage", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ProtectedPkiMessage(::Org::BouncyCastle::Cmp::GeneralPkiMessage pkiMessage)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ProtectedPkiMessage>(pkiMessage))) {}
 void ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor(::Org::BouncyCastle::Cmp::GeneralPkiMessage pkiMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Cmp::GeneralPkiMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pkiMessage);
}
// Ctor Parameters [CppParam { name: "pkiMessage", ty: "::Org::BouncyCastle::Asn1::Cmp::PkiMessage", modifiers: "", def_value: None }]
 ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ProtectedPkiMessage(::Org::BouncyCastle::Asn1::Cmp::PkiMessage pkiMessage)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<ProtectedPkiMessage>(pkiMessage))) {}
 void ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::_ctor(::Org::BouncyCastle::Asn1::Cmp::PkiMessage pkiMessage)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Asn1::Cmp::PkiMessage>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, pkiMessage);
}
 ::Org::BouncyCastle::Asn1::Cmp::PkiHeader ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Header()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "get_Header",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiHeader, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::Cmp::PkiBody ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_Body()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "get_Body",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiBody, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Org::BouncyCastle::Asn1::Cmp::PkiMessage ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::ToAsn1Message()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "ToAsn1Message",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Org::BouncyCastle::Asn1::Cmp::PkiMessage, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::get_HasPasswordBasedMacProtected()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "get_HasPasswordBasedMacProtected",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<::Org::BouncyCastle::X509::X509Certificate> ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::GetCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "GetCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::Org::BouncyCastle::X509::X509Certificate>, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify(::Org::BouncyCastle::Crypto::IVerifierFactory verifierFactory)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IVerifierFactory>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, verifierFactory);
}
 ::bs_hook::Il2CppWrapperType ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Process(::Org::BouncyCastle::Crypto::IStreamCalculator streamCalculator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "Process",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crypto::IStreamCalculator>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method, streamCalculator);
}
 bool ::Org::BouncyCastle::Cmp::ProtectedPkiMessage::Verify(::Org::BouncyCastle::Crmf::PKMacBuilder pkMacBuilder, ::ArrayW<char16_t> password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Org::BouncyCastle::Cmp::ProtectedPkiMessage>::get(),
                            "Verify",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Org::BouncyCastle::Crmf::PKMacBuilder>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<char16_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, pkMacBuilder, password);
}
} // end anonymous namespace
