#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
namespace Org::BouncyCastle::Asn1::X509 {
class X509Extensions;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509 {
class KeyUsage;
}
// Type: Org.BouncyCastle.Asn1.X509::KeyUsage
namespace Org::BouncyCastle::Asn1::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(369))
// CS Name: Org.BouncyCastle.Asn1.X509.KeyUsage
class CORDL_TYPE KeyUsage : public Org::BouncyCastle::Asn1::DerBitString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~KeyUsage() = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyUsage", modifiers: " const&", def_value: None }]
constexpr KeyUsage(KeyUsage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KeyUsage", modifiers: "&&", def_value: None }]
constexpr KeyUsage(KeyUsage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KeyUsage(void* ptr) noexcept : Org::BouncyCastle::Asn1::DerBitString(ptr) {
}


  constexpr KeyUsage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KeyUsage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KeyUsage& operator=(KeyUsage&& o) noexcept = default;
  constexpr KeyUsage& operator=(KeyUsage const& o) noexcept = default;
                


// Fields

/// @brief Field DigitalSignature offset 0
static constexpr int32_t  DigitalSignature{128};

/// @brief Field NonRepudiation offset 0
static constexpr int32_t  NonRepudiation{64};

/// @brief Field KeyEncipherment offset 0
static constexpr int32_t  KeyEncipherment{32};

/// @brief Field DataEncipherment offset 0
static constexpr int32_t  DataEncipherment{16};

/// @brief Field KeyAgreement offset 0
static constexpr int32_t  KeyAgreement{8};

/// @brief Field KeyCertSign offset 0
static constexpr int32_t  KeyCertSign{4};

/// @brief Field CrlSign offset 0
static constexpr int32_t  CrlSign{2};

/// @brief Field EncipherOnly offset 0
static constexpr int32_t  EncipherOnly{1};

/// @brief Field DecipherOnly offset 0
static constexpr int32_t  DecipherOnly{32768};


// Methods

/// @brief Method GetInstance addr 0x1108110 size 0x114 virtual false final false
static Org::BouncyCastle::Asn1::X509::KeyUsage GetInstance(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method FromExtensions addr 0x11082b8 size 0x74 virtual false final false
static Org::BouncyCastle::Asn1::X509::KeyUsage FromExtensions(Org::BouncyCastle::Asn1::X509::X509Extensions extensions) ;

static Org::BouncyCastle::Asn1::X509::KeyUsage New_ctor(int32_t usage) ;

/// @brief Method .ctor addr 0x110832c size 0x68 virtual false final false
 void _ctor(int32_t usage) ;

static Org::BouncyCastle::Asn1::X509::KeyUsage New_ctor(Org::BouncyCastle::Asn1::DerBitString usage) ;

/// @brief Method .ctor addr 0x1108224 size 0x94 virtual false final false
 void _ctor(Org::BouncyCastle::Asn1::DerBitString usage) ;

/// @brief Method ToString addr 0x1108394 size 0xc0 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::X509
NEED_NO_BOX(Org::BouncyCastle::Asn1::X509::KeyUsage);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::KeyUsage, "Org.BouncyCastle.Asn1.X509", "KeyUsage");
