#pragma once
#include "GlobalNamespace/zzzz__X509CertificateUtility_def.hpp"
#include "Org/BouncyCastle/OpenSsl/zzzz__IPasswordFinder_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__ISigner_def.hpp"
#include "Org/BouncyCastle/Crypto/Parameters/zzzz__RsaPrivateCrtKeyParameters_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "GlobalNamespace/zzzz__ICertificateEncryptionProvider_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Certificate2_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "Org/BouncyCastle/X509/zzzz__X509CertificateParser_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509ChainStatus_def.hpp"
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::*)(::ArrayW<uint8_t>)>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xdd01d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::*)(::StringW)>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xdd0290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder.GetPassword
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<char16_t> (GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::GetPassword)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd02cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get(),
                            "GetPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to Org::BouncyCastle::OpenSsl::IPasswordFinder
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::operator Org::BouncyCastle::OpenSsl::IPasswordFinder() const noexcept {
return Org::BouncyCastle::OpenSsl::IPasswordFinder(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::__set__password(::ArrayW<char16_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<char16_t>>(value));
}
constexpr ::ArrayW<char16_t> GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::__get__password() const {
return ::cordl_internals::getInstanceField<::ArrayW<char16_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "password", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::GlobalNamespace__X509CertificateUtility__PasswordFinder(::ArrayW<uint8_t> password)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__X509CertificateUtility__PasswordFinder>(password))) {}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::_ctor(::ArrayW<uint8_t> password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, password);
}
// Ctor Parameters [CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::GlobalNamespace__X509CertificateUtility__PasswordFinder(::StringW password)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__X509CertificateUtility__PasswordFinder>(password))) {}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::_ctor(::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, password);
}
 ::ArrayW<char16_t> GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder::GetPassword()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get(),
                            "GetPassword",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<char16_t>, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::*)(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters)>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xdd02d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider.Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdd03e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider.SignData
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::SignData)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xdd03e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider>::get(),
                            "SignData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to GlobalNamespace::ICertificateEncryptionProvider
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::operator GlobalNamespace::ICertificateEncryptionProvider() const noexcept {
return GlobalNamespace::ICertificateEncryptionProvider(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::__set__signer(Org::BouncyCastle::Crypto::ISigner value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::Crypto::ISigner>(value));
}
constexpr Org::BouncyCastle::Crypto::ISigner GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::__get__signer() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::Crypto::ISigner, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "privateKey", ty: "Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privateKey)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider>(privateKey))) {}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::_ctor(Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters privateKey)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<Org::BouncyCastle::Crypto::Parameters::RsaPrivateCrtKeyParameters>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, privateKey);
}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider>::get(),
                            "Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider::SignData(::ArrayW<uint8_t> data, int32_t offset, int32_t length)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider>::get(),
                            "SignData",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method, data, offset, length);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)(int32_t)>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xdd0578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.System_IDisposable_Dispose
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xdd05ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.MoveNext
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x540;
  constexpr static std::size_t addrs = 0xdd05c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.__m__Finally1
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__m__Finally1)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xdd0b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Security::Cryptography::X509Certificates::X509Certificate2 (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd0bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.System_Collections_IEnumerator_Reset
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdd0bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.System_Collections_IEnumerator_get_Current
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::bs_hook::Il2CppWrapperType (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd0c0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2> (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xdd0c14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9.System_Collections_IEnumerable_GetEnumerator
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::IEnumerator (GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xdd0cc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::operator System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>() const noexcept {
return System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerable
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::operator System::Collections::IEnumerable() const noexcept {
return System::Collections::IEnumerable(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2>
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::operator System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2>() const noexcept {
return System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2>(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::Collections::IEnumerator
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::operator System::Collections::IEnumerator() const noexcept {
return System::Collections::IEnumerator(::bs_hook::Il2CppWrapperType::instance);
}
/// @brief Convert operator to System::IDisposable
constexpr  GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::operator System::IDisposable() const noexcept {
return System::IDisposable(::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set___1__state(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get___1__state() const {
return ::cordl_internals::getInstanceField<int32_t, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set___2__current(System::Security::Cryptography::X509Certificates::X509Certificate2 value)  {
::cordl_internals::setInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Security::Cryptography::X509Certificates::X509Certificate2>(value));
}
constexpr System::Security::Cryptography::X509Certificates::X509Certificate2 GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get___2__current() const {
return ::cordl_internals::getInstanceField<System::Security::Cryptography::X509Certificates::X509Certificate2, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set___l__initialThreadId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get___l__initialThreadId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set_certificatePem(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get_certificatePem() const {
return ::cordl_internals::getInstanceField<::StringW, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set___3__certificatePem(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get___3__certificatePem() const {
return ::cordl_internals::getInstanceField<::StringW, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set_certificateChainPem(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get_certificateChainPem() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set___3__certificateChainPem(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get___3__certificateChainPem() const {
return ::cordl_internals::getInstanceField<::StringW, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set__x509CertificateParser_5__2(Org::BouncyCastle::X509::X509CertificateParser value)  {
::cordl_internals::setInstanceField<Org::BouncyCastle::X509::X509CertificateParser, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<Org::BouncyCastle::X509::X509CertificateParser>(value));
}
constexpr Org::BouncyCastle::X509::X509CertificateParser GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get__x509CertificateParser_5__2() const {
return ::cordl_internals::getInstanceField<Org::BouncyCastle::X509::X509CertificateParser, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__set___7__wrap2(System::Collections::IEnumerator value)  {
::cordl_internals::setInstanceField<System::Collections::IEnumerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::IEnumerator>(value));
}
constexpr System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__get___7__wrap2() const {
return ::cordl_internals::getInstanceField<System::Collections::IEnumerator, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
 GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9(int32_t __1__state)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>(__1__state))) {}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::_ctor(int32_t __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, __1__state);
}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.IDisposable.Dispose",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 bool GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "MoveNext",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "<>m__Finally1",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Security::Cryptography::X509Certificates::X509Certificate2 GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerator_System_Security_Cryptography_X509Certificates_X509Certificate2__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.Generic.IEnumerator<System.Security.Cryptography.X509Certificates.X509Certificate2>.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Security::Cryptography::X509Certificates::X509Certificate2, false>(const_cast<void*>(instance), ___internal_method);
}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.IEnumerator.Reset",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::bs_hook::Il2CppWrapperType GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.IEnumerator.get_Current",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::bs_hook::Il2CppWrapperType, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2> GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_Generic_IEnumerable_System_Security_Cryptography_X509Certificates_X509Certificate2__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.Generic.IEnumerable<System.Security.Cryptography.X509Certificates.X509Certificate2>.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerator_1<System::Security::Cryptography::X509Certificates::X509Certificate2>, false>(const_cast<void*>(instance), ___internal_method);
}
 System::Collections::IEnumerator GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility___GetCertificateList_d__9>::get(),
                            "System.Collections.IEnumerable.GetEnumerator",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::IEnumerator, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility____c._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::*)()>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdd0d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility____c._ValidateCertificateChainUnity_b__11_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::*)(System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::_ValidateCertificateChainUnity_b__11_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xdd0d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get(),
                            "<ValidateCertificateChainUnity>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::GlobalNamespace__X509CertificateUtility____c._ValidateCertificateChainDotNet_b__12_0
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::*)(System::Security::Cryptography::X509Certificates::X509ChainStatus)>(&GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::_ValidateCertificateChainDotNet_b__12_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xdd0d94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get(),
                            "<ValidateCertificateChainDotNet>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::__set___9(GlobalNamespace::GlobalNamespace__X509CertificateUtility____c value)  {
::cordl_internals::setStaticField<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get>(std::forward<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>(value));
}
 GlobalNamespace::GlobalNamespace__X509CertificateUtility____c GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::__get___9()  {
return ::cordl_internals::getStaticField<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::__set___9__11_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get>(std::forward<System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW>>(value));
}
 System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::__get___9__11_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW>, "<>9__11_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get>();
}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::__set___9__12_0(System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> value)  {
::cordl_internals::setStaticField<System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get>(std::forward<System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW>>(value));
}
 System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW> GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::__get___9__12_0()  {
return ::cordl_internals::getStaticField<System::Func_2<System::Security::Cryptography::X509Certificates::X509ChainStatus,::StringW>, "<>9__12_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get>();
}
// Ctor Parameters []
 GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::GlobalNamespace__X509CertificateUtility____c()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<GlobalNamespace__X509CertificateUtility____c>())) {}
 void GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::_ValidateCertificateChainUnity_b__11_0(System::Security::Cryptography::X509Certificates::X509ChainStatus s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get(),
                            "<ValidateCertificateChainUnity>b__11_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, s);
}
 ::StringW GlobalNamespace::GlobalNamespace__X509CertificateUtility____c::_ValidateCertificateChainDotNet_b__12_0(System::Security::Cryptography::X509Certificates::X509ChainStatus s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::GlobalNamespace__X509CertificateUtility____c>::get(),
                            "<ValidateCertificateChainDotNet>b__12_0",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509ChainStatus>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method, s);
}
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.GetRootCertificates
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> (*)()>(&GlobalNamespace::X509CertificateUtility::GetRootCertificates)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xdcdd38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetRootCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.GetRootCertificatesRaw
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&GlobalNamespace::X509CertificateUtility::GetRootCertificatesRaw)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xdcde74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetRootCertificatesRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.GetCertificateEncryptionProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::ICertificateEncryptionProvider (*)(::StringW, ::StringW)>(&GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xdcdeec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetCertificateEncryptionProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.GetRSACertificateEncryptionProvider
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider (*)(::StringW, GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder)>(&GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xdcdf90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetRSACertificateEncryptionProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.GetCertificateList
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2> (*)(::StringW, ::StringW)>(&GlobalNamespace::X509CertificateUtility::GetCertificateList)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xdcddfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetCertificateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.ValidateCertificateChain
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509Certificate2, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChain)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xdce198;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "ValidateCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.ValidateCertificateChainUnity
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509Certificate2, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity)> {
  constexpr static std::size_t size = 0xa44;
  constexpr static std::size_t addrs = 0xdce1fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "ValidateCertificateChainUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: GlobalNamespace::X509CertificateUtility.ValidateCertificateChainDotNet
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(System::Security::Cryptography::X509Certificates::X509Certificate2, ::ArrayW<::ArrayW<uint8_t>>)>(&GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0xdcec40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "ValidateCertificateChainDotNet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
    return ___internal_method;
  }
};
 void GlobalNamespace::X509CertificateUtility::__set_kBeatSaberDotComRootCertificate(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "kBeatSaberDotComRootCertificate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get>(std::forward<::StringW>(value));
}
 ::StringW GlobalNamespace::X509CertificateUtility::__get_kBeatSaberDotComRootCertificate()  {
return ::cordl_internals::getStaticField<::StringW, "kBeatSaberDotComRootCertificate", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get>();
}
 void GlobalNamespace::X509CertificateUtility::__set_kAwsRootCertificates(::StringW value)  {
::cordl_internals::setStaticField<::StringW, "kAwsRootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get>(std::forward<::StringW>(value));
}
 ::StringW GlobalNamespace::X509CertificateUtility::__get_kAwsRootCertificates()  {
return ::cordl_internals::getStaticField<::StringW, "kAwsRootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get>();
}
 void GlobalNamespace::X509CertificateUtility::__set__rootCertificates(::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> value)  {
::cordl_internals::setStaticField<::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2>, "_rootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get>(std::forward<::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2>>(value));
}
 ::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> GlobalNamespace::X509CertificateUtility::__get__rootCertificates()  {
return ::cordl_internals::getStaticField<::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2>, "_rootCertificates", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get>();
}
 ::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2> GlobalNamespace::X509CertificateUtility::GetRootCertificates()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetRootCertificates",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<System::Security::Cryptography::X509Certificates::X509Certificate2>, false>(nullptr, ___internal_method);
}
 ::StringW GlobalNamespace::X509CertificateUtility::GetRootCertificatesRaw()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetRootCertificatesRaw",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
/// @param password: ::StringW (default: csnull)
 GlobalNamespace::ICertificateEncryptionProvider GlobalNamespace::X509CertificateUtility::GetCertificateEncryptionProvider(::StringW privateKeyPem, ::StringW password)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetCertificateEncryptionProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::ICertificateEncryptionProvider, false>(nullptr, ___internal_method, privateKeyPem, password);
}
 GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider GlobalNamespace::X509CertificateUtility::GetRSACertificateEncryptionProvider(::StringW privateKeyPem, GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder passwordFinder)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetRSACertificateEncryptionProvider",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<GlobalNamespace::GlobalNamespace__X509CertificateUtility__PasswordFinder>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<GlobalNamespace::GlobalNamespace__X509CertificateUtility__RSACertificateEncryptionProvider, false>(nullptr, ___internal_method, privateKeyPem, passwordFinder);
}
/// @param certificateChainPem: ::StringW (default: csnull)
 System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2> GlobalNamespace::X509CertificateUtility::GetCertificateList(::StringW certificatePem, ::StringW certificateChainPem)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "GetCertificateList",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<System::Collections::Generic::IEnumerable_1<System::Security::Cryptography::X509Certificates::X509Certificate2>, false>(nullptr, ___internal_method, certificatePem, certificateChainPem);
}
 void GlobalNamespace::X509CertificateUtility::ValidateCertificateChain(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "ValidateCertificateChain",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certificate, certificateChain);
}
 void GlobalNamespace::X509CertificateUtility::ValidateCertificateChainUnity(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "ValidateCertificateChainUnity",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certificate, certificateChain);
}
 void GlobalNamespace::X509CertificateUtility::ValidateCertificateChainDotNet(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate, ::ArrayW<::ArrayW<uint8_t>> certificateChain)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<GlobalNamespace::X509CertificateUtility>::get(),
                            "ValidateCertificateChainDotNet",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Security::Cryptography::X509Certificates::X509Certificate2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::ArrayW<uint8_t>>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, certificate, certificateChain);
}
