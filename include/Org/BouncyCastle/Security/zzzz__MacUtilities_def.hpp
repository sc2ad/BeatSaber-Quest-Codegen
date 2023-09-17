#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace System::Collections {
class IDictionary;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
class MacUtilities;
}
// Type: Org.BouncyCastle.Security::MacUtilities
namespace Org::BouncyCastle::Security {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1751))
// CS Name: Org.BouncyCastle.Security.MacUtilities
class CORDL_TYPE MacUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MacUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacUtilities", modifiers: " const&", def_value: None }]
constexpr MacUtilities(MacUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacUtilities", modifiers: "&&", def_value: None }]
constexpr MacUtilities(MacUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MacUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacUtilities& operator=(MacUtilities&& o) noexcept = default;
  constexpr MacUtilities& operator=(MacUtilities const& o) noexcept = default;
                


// Fields

static ::System::Collections::IDictionary __declspec(property(get=__get_algorithms, put=__set_algorithms))  algorithms;

static void __set_algorithms(::System::Collections::IDictionary value) ;

static ::System::Collections::IDictionary __get_algorithms() ;


// Methods

// Ctor Parameters []
explicit MacUtilities() ;

/// @brief Method .ctor addr 0x10a2d08 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetMac addr 0x10a4920 size 0x60 virtual false final false
static ::Org::BouncyCastle::Crypto::IMac GetMac(::Org::BouncyCastle::Asn1::DerObjectIdentifier id) ;

/// @brief Method GetMac addr 0x10a4980 size 0xb88 virtual false final false
static ::Org::BouncyCastle::Crypto::IMac GetMac(::StringW algorithm) ;

/// @brief Method GetAlgorithmName addr 0x10a5508 size 0x108 virtual false final false
static ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier oid) ;

/// @brief Method CalculateMac addr 0x10a5610 size 0x158 virtual false final false
static ::ArrayW<uint8_t> CalculateMac(::StringW algorithm, ::Org::BouncyCastle::Crypto::ICipherParameters cp, ::ArrayW<uint8_t> input) ;

/// @brief Method DoFinal addr 0x10a5768 size 0x134 virtual false final false
static ::ArrayW<uint8_t> DoFinal(::Org::BouncyCastle::Crypto::IMac mac) ;

/// @brief Method DoFinal addr 0x10a589c size 0xec virtual false final false
static ::ArrayW<uint8_t> DoFinal(::Org::BouncyCastle::Crypto::IMac mac, ::ArrayW<uint8_t> input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Security
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Security::MacUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::MacUtilities, "Org.BouncyCastle.Security", "MacUtilities");
