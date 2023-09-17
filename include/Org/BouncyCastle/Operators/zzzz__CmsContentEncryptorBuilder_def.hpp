#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Cms {
class EnvelopedDataHelper;
}
namespace Org::BouncyCastle::Crypto {
class ICipherBuilderWithKey;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Operators {
class CmsContentEncryptorBuilder;
}
// Type: Org.BouncyCastle.Operators::CmsContentEncryptorBuilder
namespace Org::BouncyCastle::Operators {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(997))
// CS Name: Org.BouncyCastle.Operators.CmsContentEncryptorBuilder
class CORDL_TYPE CmsContentEncryptorBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CmsContentEncryptorBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: " const&", def_value: None }]
constexpr CmsContentEncryptorBuilder(CmsContentEncryptorBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CmsContentEncryptorBuilder", modifiers: "&&", def_value: None }]
constexpr CmsContentEncryptorBuilder(CmsContentEncryptorBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CmsContentEncryptorBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CmsContentEncryptorBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CmsContentEncryptorBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CmsContentEncryptorBuilder& operator=(CmsContentEncryptorBuilder&& o) noexcept = default;
  constexpr CmsContentEncryptorBuilder& operator=(CmsContentEncryptorBuilder const& o) noexcept = default;
                


// Fields

static ::System::Collections::IDictionary __declspec(property(get=__get_KeySizes, put=__set_KeySizes))  KeySizes;

static void __set_KeySizes(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_KeySizes() ;

 ::Org::BouncyCastle::Asn1::DerObjectIdentifier __declspec(property(get=__get_encryptionOID, put=__set_encryptionOID))  encryptionOID;

constexpr void __set_encryptionOID(::Org::BouncyCastle::Asn1::DerObjectIdentifier value) ;

constexpr ::Org::BouncyCastle::Asn1::DerObjectIdentifier __get_encryptionOID() const;

 int32_t __declspec(property(get=__get_keySize, put=__set_keySize))  keySize;

constexpr void __set_keySize(int32_t value) ;

constexpr int32_t __get_keySize() const;

 ::Org::BouncyCastle::Cms::EnvelopedDataHelper __declspec(property(get=__get_helper, put=__set_helper))  helper;

constexpr void __set_helper(::Org::BouncyCastle::Cms::EnvelopedDataHelper value) ;

constexpr ::Org::BouncyCastle::Cms::EnvelopedDataHelper __get_helper() const;


// Methods

/// @brief Method GetKeySize addr 0xea04e4 size 0x1a4 virtual false final false
static int32_t GetKeySize(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

// Ctor Parameters [CppParam { name: "encryptionOID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }]
explicit CmsContentEncryptorBuilder(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID) ;

/// @brief Method .ctor addr 0xea0688 size 0x70 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID) ;

// Ctor Parameters [CppParam { name: "encryptionOID", ty: "::Org::BouncyCastle::Asn1::DerObjectIdentifier", modifiers: "", def_value: None }, CppParam { name: "keySize", ty: "int32_t", modifiers: "", def_value: None }]
explicit CmsContentEncryptorBuilder(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize) ;

/// @brief Method .ctor addr 0xea06f8 size 0x84 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerObjectIdentifier encryptionOID, int32_t keySize) ;

/// @brief Method Build addr 0xea077c size 0x68 virtual false final false
 ::Org::BouncyCastle::Crypto::ICipherBuilderWithKey Build() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Operators
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Operators::CmsContentEncryptorBuilder, "Org.BouncyCastle.Operators", "CmsContentEncryptorBuilder");
