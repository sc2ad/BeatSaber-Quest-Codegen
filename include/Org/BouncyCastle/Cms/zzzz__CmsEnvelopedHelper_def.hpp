#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Cms {
class CmsSecureReadable;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace System::Collections {
class IList;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Cms {
class RecipientInformationStore;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Set;
}
namespace Org::BouncyCastle::Asn1::Cms {
class RecipientInfo;
}
namespace Org::BouncyCastle::Asn1::X509 {
class AlgorithmIdentifier;
}
namespace Org::BouncyCastle::Cms {
class CmsReadable;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class KeyParameter;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsEnvelopedHelper;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable;
}
namespace Org::BouncyCastle::Cms {
class ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable;
}
// Type: ::CmsAuthenticatedSecureReadable
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(638))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedHelper::CmsAuthenticatedSecureReadable
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsSecureReadable
constexpr operator  ::Org::BouncyCastle::Cms::CmsSecureReadable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable& operator=(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable& operator=(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algorithm() const;

 ::Org::BouncyCastle::Crypto::IMac __declspec(property(get=__get_mac, put=__set_mac))  mac;

constexpr void __set_mac(::Org::BouncyCastle::Crypto::IMac value) ;

constexpr ::Org::BouncyCastle::Crypto::IMac __get_mac() const;

 ::Org::BouncyCastle::Cms::CmsReadable __declspec(property(get=__get_readable, put=__set_readable))  readable;

constexpr void __set_readable(::Org::BouncyCastle::Cms::CmsReadable value) ;

constexpr ::Org::BouncyCastle::Cms::CmsReadable __get_readable() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_CryptoObject))  CryptoObject;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "readable", ty: "::Org::BouncyCastle::Cms::CmsReadable", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, ::Org::BouncyCastle::Cms::CmsReadable readable) ;

/// @brief Method .ctor addr 0x1158e28 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, ::Org::BouncyCastle::Cms::CmsReadable readable) ;

/// @brief Method get_Algorithm addr 0x1158e58 size 0x8 virtual true final true
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Algorithm() ;

/// @brief Method get_CryptoObject addr 0x1158e60 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_CryptoObject() ;

/// @brief Method GetReadable addr 0x1158e68 size 0x430 virtual true final true
 ::Org::BouncyCastle::Cms::CmsReadable GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter sKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: ::CmsEnvelopedSecureReadable
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(639))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedHelper::CmsEnvelopedSecureReadable
class CORDL_TYPE ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Org::BouncyCastle::Cms::CmsSecureReadable
constexpr operator  ::Org::BouncyCastle::Cms::CmsSecureReadable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable", modifiers: " const&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable", modifiers: "&&", def_value: None }]
constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable& operator=(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable&& o) noexcept = default;
  constexpr ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable& operator=(____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=__get_algorithm, put=__set_algorithm))  algorithm;

constexpr void __set_algorithm(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __get_algorithm() const;

 ::Org::BouncyCastle::Crypto::IBufferedCipher __declspec(property(get=__get_cipher, put=__set_cipher))  cipher;

constexpr void __set_cipher(::Org::BouncyCastle::Crypto::IBufferedCipher value) ;

constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher __get_cipher() const;

 ::Org::BouncyCastle::Cms::CmsReadable __declspec(property(get=__get_readable, put=__set_readable))  readable;

constexpr void __set_readable(::Org::BouncyCastle::Cms::CmsReadable value) ;

constexpr ::Org::BouncyCastle::Cms::CmsReadable __get_readable() const;


// Properties

 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier __declspec(property(get=get_Algorithm))  Algorithm;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_CryptoObject))  CryptoObject;


// Methods

// Ctor Parameters [CppParam { name: "algorithm", ty: "::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier", modifiers: "", def_value: None }, CppParam { name: "readable", ty: "::Org::BouncyCastle::Cms::CmsReadable", modifiers: "", def_value: None }]
explicit ____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, ::Org::BouncyCastle::Cms::CmsReadable readable) ;

/// @brief Method .ctor addr 0x11592c4 size 0x30 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier algorithm, ::Org::BouncyCastle::Cms::CmsReadable readable) ;

/// @brief Method get_Algorithm addr 0x11592f4 size 0x8 virtual true final true
 ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier get_Algorithm() ;

/// @brief Method get_CryptoObject addr 0x11592fc size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType get_CryptoObject() ;

/// @brief Method GetReadable addr 0x1159304 size 0x63c virtual true final true
 ::Org::BouncyCastle::Cms::CmsReadable GetReadable(::Org::BouncyCastle::Crypto::Parameters::KeyParameter sKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
// Type: Org.BouncyCastle.Cms::CmsEnvelopedHelper
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(640))
// CS Name: Org.BouncyCastle.Cms.CmsEnvelopedHelper
class CORDL_TYPE CmsEnvelopedHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CmsEnvelopedSecureReadable = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable;

using CmsAuthenticatedSecureReadable = ::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CmsEnvelopedHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedHelper", modifiers: " const&", def_value: None }]
constexpr CmsEnvelopedHelper(CmsEnvelopedHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsEnvelopedHelper", modifiers: "&&", def_value: None }]
constexpr CmsEnvelopedHelper(CmsEnvelopedHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsEnvelopedHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsEnvelopedHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsEnvelopedHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsEnvelopedHelper& operator=(CmsEnvelopedHelper&& o) noexcept = default;
  constexpr CmsEnvelopedHelper& operator=(CmsEnvelopedHelper const& o) noexcept = default;
                


// Fields

static ::Org::BouncyCastle::Cms::CmsEnvelopedHelper __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(::Org::BouncyCastle::Cms::CmsEnvelopedHelper value) ;

static ::Org::BouncyCastle::Cms::CmsEnvelopedHelper __get_Instance() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_KeySizes, put=__set_KeySizes))  KeySizes;

static void __set_KeySizes(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_KeySizes() ;

static ::System::Collections::IDictionary __declspec(property(get=__get_BaseCipherNames, put=__set_BaseCipherNames))  BaseCipherNames;

static void __set_BaseCipherNames(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_BaseCipherNames() ;


// Methods

/// @brief Method GetAsymmetricEncryptionAlgName addr 0x1157460 size 0x98 virtual false final false
 ::StringW GetAsymmetricEncryptionAlgName(::StringW encryptionAlgOid) ;

/// @brief Method CreateAsymmetricCipher addr 0x11574f8 size 0x118 virtual false final false
 ::Org::BouncyCastle::Crypto::IBufferedCipher CreateAsymmetricCipher(::StringW encryptionOid) ;

/// @brief Method CreateWrapper addr 0x1157610 size 0x104 virtual false final false
 ::Org::BouncyCastle::Crypto::IWrapper CreateWrapper(::StringW encryptionOid) ;

/// @brief Method GetRfc3211WrapperName addr 0x1157714 size 0x1d8 virtual false final false
 ::StringW GetRfc3211WrapperName(::StringW oid) ;

/// @brief Method GetKeySize addr 0x11578ec size 0x208 virtual false final false
 int32_t GetKeySize(::StringW oid) ;

/// @brief Method BuildRecipientInformationStore addr 0x1157af4 size 0x134 virtual false final false
static ::Org::BouncyCastle::Cms::RecipientInformationStore BuildRecipientInformationStore(::Org::BouncyCastle::Asn1::Asn1Set recipientInfos, ::Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

/// @brief Method ReadRecipientInfo addr 0x1157c28 size 0x37c virtual false final false
static void ReadRecipientInfo(::System::Collections::IList infos, ::Org::BouncyCastle::Asn1::Cms::RecipientInfo info, ::Org::BouncyCastle::Cms::CmsSecureReadable secureReadable) ;

// Ctor Parameters []
explicit CmsEnvelopedHelper() ;

/// @brief Method .ctor addr 0x1157458 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Cms
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsEnvelopedHelper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsEnvelopedHelper, "Org.BouncyCastle.Cms", "CmsEnvelopedHelper");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsAuthenticatedSecureReadable, "Org.BouncyCastle.Cms", "CmsEnvelopedHelper/CmsAuthenticatedSecureReadable");
NEED_NO_BOX(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::____Org__BouncyCastle__Cms__CmsEnvelopedHelper__CmsEnvelopedSecureReadable, "Org.BouncyCastle.Cms", "CmsEnvelopedHelper/CmsEnvelopedSecureReadable");
