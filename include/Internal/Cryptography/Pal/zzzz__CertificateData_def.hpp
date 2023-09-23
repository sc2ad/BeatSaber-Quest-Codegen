#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X500DistinguishedName;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography {
class DerSequenceReader;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
struct DateTime;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
namespace Internal::Cryptography::Pal {
struct GeneralNameType;
}
// Forward declare root types
namespace Internal::Cryptography::Pal {
class Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21;
}
namespace Internal::Cryptography::Pal {
struct CertificateData;
}
namespace Internal::Cryptography::Pal {
struct Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier;
}
// Type: ::AlgorithmIdentifier
namespace Internal::Cryptography::Pal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7707))
// CS Name: Internal.Cryptography.Pal.CertificateData::AlgorithmIdentifier
struct CORDL_TYPE Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "AlgorithmId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "Parameters", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier(::StringW AlgorithmId, ::ArrayW<uint8_t> Parameters) noexcept;


                    constexpr Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier(Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier const&) = default;
                    constexpr Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier(Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier&&) = default;
                    constexpr Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier& operator=(Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier& operator=(Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_AlgorithmId, put=__set_AlgorithmId))  AlgorithmId;

constexpr void __set_AlgorithmId(::StringW value) ;

constexpr ::StringW __get_AlgorithmId() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Parameters, put=__set_Parameters))  Parameters;

constexpr void __set_Parameters(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Parameters() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Internal::Cryptography::Pal
// Type: ::<ReadReverseRdns>d__21
namespace Internal::Cryptography::Pal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7708))
// CS Name: Internal.Cryptography.Pal.CertificateData::<ReadReverseRdns>d__21
class CORDL_TYPE Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>
constexpr operator  System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>
constexpr operator  System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>>() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21() = default;

// Ctor Parameters [CppParam { name: "", ty: "Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21", modifiers: " const&", def_value: None }]
constexpr Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21(Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21", modifiers: "&&", def_value: None }]
constexpr Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21(Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21& operator=(Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21&& o) noexcept = default;
  constexpr Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21& operator=(Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> value) ;

constexpr System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(System::Security::Cryptography::X509Certificates::X500DistinguishedName value) ;

constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedName __get_name() const;

 System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=__get___3__name, put=__set___3__name))  __3__name;

constexpr void __set___3__name(System::Security::Cryptography::X509Certificates::X500DistinguishedName value) ;

constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedName __get___3__name() const;

 System::Collections::Generic::Stack_1<System::Security::Cryptography::DerSequenceReader> __declspec(property(get=__get__rdnReaders_5__2, put=__set__rdnReaders_5__2))  _rdnReaders_5__2;

constexpr void __set__rdnReaders_5__2(System::Collections::Generic::Stack_1<System::Security::Cryptography::DerSequenceReader> value) ;

constexpr System::Collections::Generic::Stack_1<System::Security::Cryptography::DerSequenceReader> __get__rdnReaders_5__2() const;

 System::Security::Cryptography::DerSequenceReader __declspec(property(get=__get__rdnReader_5__3, put=__set__rdnReader_5__3))  _rdnReader_5__3;

constexpr void __set__rdnReader_5__3(System::Security::Cryptography::DerSequenceReader value) ;

constexpr System::Security::Cryptography::DerSequenceReader __get__rdnReader_5__3() const;


// Properties

 System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_String___get_Current))  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_String___Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2698ae4 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2698b18 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2698b1c size 0x294 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.String>>.get_Current addr 0x2698db0 size 0xc virtual true final true
 System::Collections::Generic::KeyValuePair_2<::StringW,::StringW> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_String___get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2698dbc size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2698dfc size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<System.String,System.String>>.GetEnumerator addr 0x2698e58 size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>> System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_System_String,System_String___GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2698efc size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Cryptography::Pal
// Type: Internal.Cryptography.Pal::CertificateData
namespace Internal::Cryptography::Pal {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7709))
// CS Name: Internal.Cryptography.Pal.CertificateData
struct CORDL_TYPE CertificateData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _ReadReverseRdns_d__21 = Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21;

using AlgorithmIdentifier = Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier;

// Ctor Parameters [CppParam { name: "RawData", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "SubjectPublicKeyInfo", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SerialNumber", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "TbsSignature", ty: "Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "Issuer", ty: "System::Security::Cryptography::X509Certificates::X500DistinguishedName", modifiers: "", def_value: None }, CppParam { name: "NotBefore", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "NotAfter", ty: "System::DateTime", modifiers: "", def_value: None }, CppParam { name: "Subject", ty: "System::Security::Cryptography::X509Certificates::X500DistinguishedName", modifiers: "", def_value: None }, CppParam { name: "PublicKeyAlgorithm", ty: "Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "PublicKey", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "IssuerUniqueId", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "SubjectUniqueId", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "Extensions", ty: "System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509Extension>", modifiers: "", def_value: None }, CppParam { name: "SignatureAlgorithm", ty: "Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "SignatureValue", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
constexpr CertificateData(::ArrayW<uint8_t> RawData, ::ArrayW<uint8_t> SubjectPublicKeyInfo, int32_t Version, ::ArrayW<uint8_t> SerialNumber, Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier TbsSignature, System::Security::Cryptography::X509Certificates::X500DistinguishedName Issuer, System::DateTime NotBefore, System::DateTime NotAfter, System::Security::Cryptography::X509Certificates::X500DistinguishedName Subject, Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier PublicKeyAlgorithm, ::ArrayW<uint8_t> PublicKey, ::ArrayW<uint8_t> IssuerUniqueId, ::ArrayW<uint8_t> SubjectUniqueId, System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509Extension> Extensions, Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier SignatureAlgorithm, ::ArrayW<uint8_t> SignatureValue) noexcept;


                    constexpr CertificateData(CertificateData const&) = default;
                    constexpr CertificateData(CertificateData&&) = default;
                    constexpr CertificateData& operator=(CertificateData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CertificateData& operator=(CertificateData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x98};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CertificateData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_RawData, put=__set_RawData))  RawData;

constexpr void __set_RawData(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_RawData() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_SubjectPublicKeyInfo, put=__set_SubjectPublicKeyInfo))  SubjectPublicKeyInfo;

constexpr void __set_SubjectPublicKeyInfo(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_SubjectPublicKeyInfo() const;

 int32_t __declspec(property(get=__get_Version, put=__set_Version))  Version;

constexpr void __set_Version(int32_t value) ;

constexpr int32_t __get_Version() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_SerialNumber, put=__set_SerialNumber))  SerialNumber;

constexpr void __set_SerialNumber(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_SerialNumber() const;

 Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier __declspec(property(get=__get_TbsSignature, put=__set_TbsSignature))  TbsSignature;

constexpr void __set_TbsSignature(Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier value) ;

constexpr Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier __get_TbsSignature() const;

 System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=__get_Issuer, put=__set_Issuer))  Issuer;

constexpr void __set_Issuer(System::Security::Cryptography::X509Certificates::X500DistinguishedName value) ;

constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedName __get_Issuer() const;

 System::DateTime __declspec(property(get=__get_NotBefore, put=__set_NotBefore))  NotBefore;

constexpr void __set_NotBefore(System::DateTime value) ;

constexpr System::DateTime __get_NotBefore() const;

 System::DateTime __declspec(property(get=__get_NotAfter, put=__set_NotAfter))  NotAfter;

constexpr void __set_NotAfter(System::DateTime value) ;

constexpr System::DateTime __get_NotAfter() const;

 System::Security::Cryptography::X509Certificates::X500DistinguishedName __declspec(property(get=__get_Subject, put=__set_Subject))  Subject;

constexpr void __set_Subject(System::Security::Cryptography::X509Certificates::X500DistinguishedName value) ;

constexpr System::Security::Cryptography::X509Certificates::X500DistinguishedName __get_Subject() const;

 Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier __declspec(property(get=__get_PublicKeyAlgorithm, put=__set_PublicKeyAlgorithm))  PublicKeyAlgorithm;

constexpr void __set_PublicKeyAlgorithm(Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier value) ;

constexpr Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier __get_PublicKeyAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_PublicKey, put=__set_PublicKey))  PublicKey;

constexpr void __set_PublicKey(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_PublicKey() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_IssuerUniqueId, put=__set_IssuerUniqueId))  IssuerUniqueId;

constexpr void __set_IssuerUniqueId(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_IssuerUniqueId() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_SubjectUniqueId, put=__set_SubjectUniqueId))  SubjectUniqueId;

constexpr void __set_SubjectUniqueId(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_SubjectUniqueId() const;

 System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509Extension> __declspec(property(get=__get_Extensions, put=__set_Extensions))  Extensions;

constexpr void __set_Extensions(System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509Extension> value) ;

constexpr System::Collections::Generic::List_1<System::Security::Cryptography::X509Certificates::X509Extension> __get_Extensions() const;

 Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier __declspec(property(get=__get_SignatureAlgorithm, put=__set_SignatureAlgorithm))  SignatureAlgorithm;

constexpr void __set_SignatureAlgorithm(Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier value) ;

constexpr Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier __get_SignatureAlgorithm() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_SignatureValue, put=__set_SignatureValue))  SignatureValue;

constexpr void __set_SignatureValue(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_SignatureValue() const;


// Methods

/// @brief Method .ctor addr 0x26976f4 size 0x718 virtual false final false
 void _ctor(::ArrayW<uint8_t> rawData) ;

/// @brief Method GetNameInfo addr 0x2697e0c size 0x640 virtual false final false
 ::StringW GetNameInfo(System::Security::Cryptography::X509Certificates::X509NameType nameType, bool forIssuer) ;

/// @brief Method GetSimpleNameInfo addr 0x269844c size 0x45c virtual false final false
static ::StringW GetSimpleNameInfo(System::Security::Cryptography::X509Certificates::X500DistinguishedName name) ;

/// @brief Method FindAltNameMatch addr 0x26988a8 size 0x1c4 virtual false final false
static ::StringW FindAltNameMatch(::ArrayW<uint8_t> extensionBytes, Internal::Cryptography::Pal::GeneralNameType matchType, ::StringW otherOid) ;

/// @brief Method ReadReverseRdns addr 0x2698a6c size 0x78 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::StringW,::StringW>> ReadReverseRdns(System::Security::Cryptography::X509Certificates::X500DistinguishedName name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Internal::Cryptography::Pal
NEED_NO_BOX(Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21);
DEFINE_IL2CPP_ARG_TYPE(Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData___ReadReverseRdns_d__21, "Internal.Cryptography.Pal", "CertificateData/<ReadReverseRdns>d__21");
DEFINE_IL2CPP_ARG_TYPE(Internal::Cryptography::Pal::CertificateData, "Internal.Cryptography.Pal", "CertificateData");
DEFINE_IL2CPP_ARG_TYPE(Internal::Cryptography::Pal::Internal__Cryptography__Pal__CertificateData__AlgorithmIdentifier, "Internal.Cryptography.Pal", "CertificateData/AlgorithmIdentifier");
