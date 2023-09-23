#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace Org::BouncyCastle::Pkcs {
class Pkcs12Utilities;
}
// Type: Org.BouncyCastle.Pkcs::Pkcs12Utilities
namespace Org::BouncyCastle::Pkcs {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1702))
// CS Name: Org.BouncyCastle.Pkcs.Pkcs12Utilities
class CORDL_TYPE Pkcs12Utilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Pkcs12Utilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Utilities", modifiers: " const&", def_value: None }]
constexpr Pkcs12Utilities(Pkcs12Utilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Pkcs12Utilities", modifiers: "&&", def_value: None }]
constexpr Pkcs12Utilities(Pkcs12Utilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Pkcs12Utilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Pkcs12Utilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Pkcs12Utilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Pkcs12Utilities& operator=(Pkcs12Utilities&& o) noexcept = default;
  constexpr Pkcs12Utilities& operator=(Pkcs12Utilities const& o) noexcept = default;
                


// Methods

/// @brief Method ConvertToDefiniteLength addr 0x105a11c size 0x9c virtual false final false
static ::ArrayW<uint8_t> ConvertToDefiniteLength(::ArrayW<uint8_t> berPkcs12File) ;

/// @brief Method ConvertToDefiniteLength addr 0x105a1b8 size 0x46c virtual false final false
static ::ArrayW<uint8_t> ConvertToDefiniteLength(::ArrayW<uint8_t> berPkcs12File, ::ArrayW<char16_t> passwd) ;

// Ctor Parameters []
explicit Pkcs12Utilities() ;

/// @brief Method .ctor addr 0x105a624 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Pkcs
NEED_NO_BOX(Org::BouncyCastle::Pkcs::Pkcs12Utilities);
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Pkcs::Pkcs12Utilities, "Org.BouncyCastle.Pkcs", "Pkcs12Utilities");
