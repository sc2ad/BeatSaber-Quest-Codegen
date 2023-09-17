#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509KeyUsage;
}
// Type: Org.BouncyCastle.X509::X509KeyUsage
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1867))
// CS Name: Org.BouncyCastle.X509.X509KeyUsage
class CORDL_TYPE X509KeyUsage : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509KeyUsage() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509KeyUsage", modifiers: " const&", def_value: None }]
constexpr X509KeyUsage(X509KeyUsage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509KeyUsage", modifiers: "&&", def_value: None }]
constexpr X509KeyUsage(X509KeyUsage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509KeyUsage(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::Asn1Encodable(ptr) {
}


  constexpr X509KeyUsage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509KeyUsage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509KeyUsage& operator=(X509KeyUsage&& o) noexcept = default;
  constexpr X509KeyUsage& operator=(X509KeyUsage const& o) noexcept = default;
                


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

 int32_t __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(int32_t value) ;

constexpr int32_t __get_usage() const;


// Methods

// Ctor Parameters [CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }]
explicit X509KeyUsage(int32_t usage) ;

/// @brief Method .ctor addr 0x10f4d10 size 0x28 virtual false final false
 void _ctor(int32_t usage) ;

/// @brief Method ToAsn1Object addr 0x10f4d38 size 0x68 virtual true final false
 ::Org::BouncyCastle::Asn1::Asn1Object ToAsn1Object() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::X509KeyUsage);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509KeyUsage, "Org.BouncyCastle.X509", "X509KeyUsage");
