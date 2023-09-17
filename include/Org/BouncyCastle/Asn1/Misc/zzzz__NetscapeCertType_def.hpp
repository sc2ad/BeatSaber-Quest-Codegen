#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Org/BouncyCastle/Asn1/zzzz__DerBitString_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Asn1 {
class DerBitString;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Misc {
class NetscapeCertType;
}
// Type: Org.BouncyCastle.Asn1.Misc::NetscapeCertType
namespace Org::BouncyCastle::Asn1::Misc {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(34))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(198))
// CS Name: Org.BouncyCastle.Asn1.Misc.NetscapeCertType
class CORDL_TYPE NetscapeCertType : public ::Org::BouncyCastle::Asn1::DerBitString {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~NetscapeCertType() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetscapeCertType", modifiers: " const&", def_value: None }]
constexpr NetscapeCertType(NetscapeCertType const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetscapeCertType", modifiers: "&&", def_value: None }]
constexpr NetscapeCertType(NetscapeCertType&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetscapeCertType(void* ptr) noexcept : ::Org::BouncyCastle::Asn1::DerBitString(ptr) {
}


  constexpr NetscapeCertType& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetscapeCertType& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetscapeCertType& operator=(NetscapeCertType&& o) noexcept = default;
  constexpr NetscapeCertType& operator=(NetscapeCertType const& o) noexcept = default;
                


// Fields

/// @brief Field SslClient offset 0
static constexpr int32_t  SslClient{128};

/// @brief Field SslServer offset 0
static constexpr int32_t  SslServer{64};

/// @brief Field Smime offset 0
static constexpr int32_t  Smime{32};

/// @brief Field ObjectSigning offset 0
static constexpr int32_t  ObjectSigning{16};

/// @brief Field Reserved offset 0
static constexpr int32_t  Reserved{8};

/// @brief Field SslCA offset 0
static constexpr int32_t  SslCA{4};

/// @brief Field SmimeCA offset 0
static constexpr int32_t  SmimeCA{2};

/// @brief Field ObjectSigningCA offset 0
static constexpr int32_t  ObjectSigningCA{1};


// Methods

// Ctor Parameters [CppParam { name: "usage", ty: "int32_t", modifiers: "", def_value: None }]
explicit NetscapeCertType(int32_t usage) ;

/// @brief Method .ctor addr 0xeeee08 size 0x68 virtual false final false
 void _ctor(int32_t usage) ;

// Ctor Parameters [CppParam { name: "usage", ty: "::Org::BouncyCastle::Asn1::DerBitString", modifiers: "", def_value: None }]
explicit NetscapeCertType(::Org::BouncyCastle::Asn1::DerBitString usage) ;

/// @brief Method .ctor addr 0xeeee70 size 0x94 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::DerBitString usage) ;

/// @brief Method ToString addr 0xeeef04 size 0xa8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Asn1::Misc
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Misc::NetscapeCertType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Misc::NetscapeCertType, "Org.BouncyCastle.Asn1.Misc", "NetscapeCertType");
