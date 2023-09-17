#pragma once
namespace {
#include "Mono/Security/X509/zzzz__X509Crl_def.hpp"
#include "Mono/Security/X509/zzzz__X509ExtensionCollection_def.hpp"
#include "System/Security/Cryptography/zzzz__AsymmetricAlgorithm_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "Mono/Security/X509/zzzz__X509Certificate_def.hpp"
#include "System/Security/Cryptography/zzzz__RSA_def.hpp"
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "Mono/Security/zzzz__ASN1_def.hpp"
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::*)(::Mono::Security::ASN1)>(&::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x228ba2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry.get_SerialNumber
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::*)()>(&::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::get_SerialNumber)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x228c0b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry.get_RevocationDate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::*)()>(&::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::get_RevocationDate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228c654;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            "get_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry.get_Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection (::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::*)()>(&::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228c65c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::__set_sn(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::__get_sn() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::__set_revocationDate(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::__get_revocationDate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::__set_extensions(::Mono::Security::X509::X509ExtensionCollection value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509ExtensionCollection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::X509::X509ExtensionCollection>(value));
}
constexpr ::Mono::Security::X509::X509ExtensionCollection ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::__get_extensions() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "entry", ty: "::Mono::Security::ASN1", modifiers: "", def_value: None }]
 ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::____Mono__Security__X509__X509Crl__X509CrlEntry(::Mono::Security::ASN1 entry)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<____Mono__Security__X509__X509Crl__X509CrlEntry>(entry))) {}
 void ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::_ctor(::Mono::Security::ASN1 entry)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::ASN1>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, entry);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::get_SerialNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            "get_SerialNumber",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::DateTime ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::get_RevocationDate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            "get_RevocationDate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 ::Mono::Security::X509::X509ExtensionCollection ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection, false>(const_cast<void*>(instance), ___internal_method);
}
//  Writing Method size for method: ::Mono::Security::X509::X509Crl._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x228b284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Parse
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::Parse)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x228b37c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Extensions
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::X509ExtensionCollection (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Extensions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228bc40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_Hash
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_Hash)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x228bc48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_IssuerName
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_IssuerName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228be5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_IssuerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.get_NextUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (::Mono::Security::X509::X509Crl::*)()>(&::Mono::Security::X509::X509Crl::get_NextUpdate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x228be64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_NextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.Compare
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::Compare)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x228be6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry (::Mono::Security::X509::X509Crl::*)(::Mono::Security::X509::X509Certificate)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x228bee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.GetCrlEntry
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry (::Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&::Mono::Security::X509::X509Crl::GetCrlEntry)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x228bf68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::DSA)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x228c128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::RSA)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x228c3f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::Security::X509::X509Crl.VerifySignature
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Mono::Security::X509::X509Crl::*)(::System::Security::Cryptography::AsymmetricAlgorithm)>(&::Mono::Security::X509::X509Crl::VerifySignature)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x228c4c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void ::Mono::Security::X509::X509Crl::__set_issuer(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Security::X509::X509Crl::__get_issuer() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_version(uint8_t value)  {
::cordl_internals::setInstanceField<uint8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<uint8_t>(value));
}
constexpr uint8_t ::Mono::Security::X509::X509Crl::__get_version() const {
return ::cordl_internals::getInstanceField<uint8_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_thisUpdate(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::Mono::Security::X509::X509Crl::__get_thisUpdate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_nextUpdate(::System::DateTime value)  {
::cordl_internals::setInstanceField<::System::DateTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::DateTime>(value));
}
constexpr ::System::DateTime ::Mono::Security::X509::X509Crl::__get_nextUpdate() const {
return ::cordl_internals::getInstanceField<::System::DateTime, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_entries(::System::Collections::ArrayList value)  {
::cordl_internals::setInstanceField<::System::Collections::ArrayList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::System::Collections::ArrayList>(value));
}
constexpr ::System::Collections::ArrayList ::Mono::Security::X509::X509Crl::__get_entries() const {
return ::cordl_internals::getInstanceField<::System::Collections::ArrayList, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_signatureOID(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::Mono::Security::X509::X509Crl::__get_signatureOID() const {
return ::cordl_internals::getInstanceField<::StringW, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_signature(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::X509::X509Crl::__get_signature() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x40>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_extensions(::Mono::Security::X509::X509ExtensionCollection value)  {
::cordl_internals::setInstanceField<::Mono::Security::X509::X509ExtensionCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::Mono::Security::X509::X509ExtensionCollection>(value));
}
constexpr ::Mono::Security::X509::X509ExtensionCollection ::Mono::Security::X509::X509Crl::__get_extensions() const {
return ::cordl_internals::getInstanceField<::Mono::Security::X509::X509ExtensionCollection, 0x48>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_encoded(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::X509::X509Crl::__get_encoded() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x50>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::Mono::Security::X509::X509Crl::__set_hash_value(::ArrayW<uint8_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<uint8_t>>(value));
}
constexpr ::ArrayW<uint8_t> ::Mono::Security::X509::X509Crl::__get_hash_value() const {
return ::cordl_internals::getInstanceField<::ArrayW<uint8_t>, 0x58>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "crl", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
 ::Mono::Security::X509::X509Crl::X509Crl(::ArrayW<uint8_t> crl)  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<X509Crl>(crl))) {}
 void ::Mono::Security::X509::X509Crl::_ctor(::ArrayW<uint8_t> crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, crl);
}
 void ::Mono::Security::X509::X509Crl::Parse(::ArrayW<uint8_t> crl)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "Parse",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, crl);
}
 ::Mono::Security::X509::X509ExtensionCollection ::Mono::Security::X509::X509Crl::get_Extensions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_Extensions",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::X509ExtensionCollection, false>(const_cast<void*>(instance), ___internal_method);
}
 ::ArrayW<uint8_t> ::Mono::Security::X509::X509Crl::get_Hash()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_Hash",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t>, false>(const_cast<void*>(instance), ___internal_method);
}
 ::StringW ::Mono::Security::X509::X509Crl::get_IssuerName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_IssuerName",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(const_cast<void*>(instance), ___internal_method);
}
 ::System::DateTime ::Mono::Security::X509::X509Crl::get_NextUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "get_NextUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime, false>(const_cast<void*>(instance), ___internal_method);
}
 bool ::Mono::Security::X509::X509Crl::Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "Compare",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, array1, array2);
}
 ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry ::Mono::Security::X509::X509Crl::GetCrlEntry(::Mono::Security::X509::X509Certificate x509)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::Security::X509::X509Certificate>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry, false>(const_cast<void*>(instance), ___internal_method, x509);
}
 ::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry ::Mono::Security::X509::X509Crl::GetCrlEntry(::ArrayW<uint8_t> serialNumber)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "GetCrlEntry",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::Mono::Security::X509::____Mono__Security__X509__X509Crl__X509CrlEntry, false>(const_cast<void*>(instance), ___internal_method, serialNumber);
}
 bool ::Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::DSA dsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::DSA>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, dsa);
}
 bool ::Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::RSA rsa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::RSA>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, rsa);
}
 bool ::Mono::Security::X509::X509Crl::VerifySignature(::System::Security::Cryptography::AsymmetricAlgorithm aa)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::Security::X509::X509Crl>::get(),
                            "VerifySignature",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Cryptography::AsymmetricAlgorithm>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<bool, false>(const_cast<void*>(instance), ___internal_method, aa);
}
} // end anonymous namespace
