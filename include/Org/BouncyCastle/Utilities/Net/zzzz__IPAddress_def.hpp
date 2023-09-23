#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Net {
class IPAddress;
}
// Type: Org.BouncyCastle.Utilities.Net::IPAddress
namespace Org::BouncyCastle::Utilities::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1816))
// CS Name: Org.BouncyCastle.Utilities.Net.IPAddress
class CORDL_TYPE IPAddress : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPAddress() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: " const&", def_value: None }]
constexpr IPAddress(IPAddress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "&&", def_value: None }]
constexpr IPAddress(IPAddress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPAddress(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPAddress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPAddress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPAddress& operator=(IPAddress&& o) noexcept = default;
  constexpr IPAddress& operator=(IPAddress const& o) noexcept = default;
                


// Methods

/// @brief Method IsValid addr 0x10d43bc size 0x28 virtual false final false
static bool IsValid(::StringW address) ;

/// @brief Method IsValidWithNetMask addr 0x10d452c size 0x28 virtual false final false
static bool IsValidWithNetMask(::StringW address) ;

/// @brief Method IsValidIPv4 addr 0x10d43e4 size 0xa4 virtual false final false
static bool IsValidIPv4(::StringW address) ;

/// @brief Method unsafeIsValidIPv4 addr 0x10d4694 size 0xf8 virtual false final false
static bool unsafeIsValidIPv4(::StringW address) ;

/// @brief Method IsValidIPv4WithNetmask addr 0x10d4554 size 0xa0 virtual false final false
static bool IsValidIPv4WithNetmask(::StringW address) ;

/// @brief Method IsValidIPv6WithNetmask addr 0x10d45f4 size 0xa0 virtual false final false
static bool IsValidIPv6WithNetmask(::StringW address) ;

/// @brief Method IsMaskValue addr 0x10d478c size 0x2c virtual false final false
static bool IsMaskValue(::StringW component, int32_t size) ;

/// @brief Method IsValidIPv6 addr 0x10d4488 size 0xa4 virtual false final false
static bool IsValidIPv6(::StringW address) ;

/// @brief Method unsafeIsValidIPv6 addr 0x10d47b8 size 0x1a8 virtual false final false
static bool unsafeIsValidIPv6(::StringW address) ;

// Ctor Parameters []
explicit IPAddress() ;

/// @brief Method .ctor addr 0x10d4960 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities::Net
NEED_NO_BOX(Org::BouncyCastle::Utilities::Net::IPAddress);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Utilities::Net::IPAddress, "Org.BouncyCastle.Utilities.Net", "IPAddress");
