#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::X509 {
class X509Certificate;
}
namespace Org::BouncyCastle::Asn1::X509 {
class CertificatePair;
}
// Forward declare root types
namespace Org::BouncyCastle::X509 {
class X509CertificatePair;
}
// Type: Org.BouncyCastle.X509::X509CertificatePair
namespace Org::BouncyCastle::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1861))
// CS Name: Org.BouncyCastle.X509.X509CertificatePair
class CORDL_TYPE X509CertificatePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~X509CertificatePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificatePair", modifiers: " const&", def_value: None }]
constexpr X509CertificatePair(X509CertificatePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificatePair", modifiers: "&&", def_value: None }]
constexpr X509CertificatePair(X509CertificatePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificatePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertificatePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificatePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificatePair& operator=(X509CertificatePair&& o) noexcept = default;
  constexpr X509CertificatePair& operator=(X509CertificatePair const& o) noexcept = default;
                


// Fields

 ::Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_forward, put=__set_forward))  forward;

constexpr void __set_forward(::Org::BouncyCastle::X509::X509Certificate value) ;

constexpr ::Org::BouncyCastle::X509::X509Certificate __get_forward() const;

 ::Org::BouncyCastle::X509::X509Certificate __declspec(property(get=__get_reverse, put=__set_reverse))  reverse;

constexpr void __set_reverse(::Org::BouncyCastle::X509::X509Certificate value) ;

constexpr ::Org::BouncyCastle::X509::X509Certificate __get_reverse() const;


// Properties

 ::Org::BouncyCastle::X509::X509Certificate __declspec(property(get=get_Forward))  Forward;

 ::Org::BouncyCastle::X509::X509Certificate __declspec(property(get=get_Reverse))  Reverse;


// Methods

// Ctor Parameters [CppParam { name: "forward", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }, CppParam { name: "reverse", ty: "::Org::BouncyCastle::X509::X509Certificate", modifiers: "", def_value: None }]
explicit X509CertificatePair(::Org::BouncyCastle::X509::X509Certificate forward, ::Org::BouncyCastle::X509::X509Certificate reverse) ;

/// @brief Method .ctor addr 0x10efb58 size 0x2c virtual false final false
 void _ctor(::Org::BouncyCastle::X509::X509Certificate forward, ::Org::BouncyCastle::X509::X509Certificate reverse) ;

// Ctor Parameters [CppParam { name: "pair", ty: "::Org::BouncyCastle::Asn1::X509::CertificatePair", modifiers: "", def_value: None }]
explicit X509CertificatePair(::Org::BouncyCastle::Asn1::X509::CertificatePair pair) ;

/// @brief Method .ctor addr 0x10efb84 size 0xa8 virtual false final false
 void _ctor(::Org::BouncyCastle::Asn1::X509::CertificatePair pair) ;

/// @brief Method GetEncoded addr 0x10efc2c size 0x270 virtual false final false
 ::ArrayW<uint8_t> GetEncoded() ;

/// @brief Method get_Forward addr 0x10efe9c size 0x8 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate get_Forward() ;

/// @brief Method get_Reverse addr 0x10efea4 size 0x8 virtual false final false
 ::Org::BouncyCastle::X509::X509Certificate get_Reverse() ;

/// @brief Method Equals addr 0x10efeac size 0xc0 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x10eff6c size 0x50 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::X509
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::X509::X509CertificatePair);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::X509::X509CertificatePair, "Org.BouncyCastle.X509", "X509CertificatePair");
