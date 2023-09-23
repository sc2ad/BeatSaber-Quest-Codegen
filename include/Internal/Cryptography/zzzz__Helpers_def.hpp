#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Internal::Cryptography {
class Helpers;
}
// Type: Internal.Cryptography::Helpers
namespace Internal::Cryptography {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2309))
// CS Name: Internal.Cryptography.Helpers
class CORDL_TYPE Helpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Helpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "Helpers", modifiers: " const&", def_value: None }]
constexpr Helpers(Helpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Helpers", modifiers: "&&", def_value: None }]
constexpr Helpers(Helpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Helpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Helpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Helpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Helpers& operator=(Helpers&& o) noexcept = default;
  constexpr Helpers& operator=(Helpers const& o) noexcept = default;
                


// Methods

/// @brief Method CloneByteArray addr 0x22bf284 size 0x78 virtual false final false
static ::ArrayW<uint8_t> CloneByteArray(::ArrayW<uint8_t> src) ;

/// @brief Method ToHexArrayUpper addr 0x22bf2fc size 0xec virtual false final false
static ::ArrayW<char16_t> ToHexArrayUpper(::ArrayW<uint8_t> bytes) ;

/// @brief Method ToHexStringUpper addr 0x22bf404 size 0x10 virtual false final false
static ::StringW ToHexStringUpper(::ArrayW<uint8_t> bytes) ;

/// @brief Method NibbleToHex addr 0x22bf3e8 size 0x1c virtual false final false
static char16_t NibbleToHex(uint8_t b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Cryptography
NEED_NO_BOX(Internal::Cryptography::Helpers);
DEFINE_IL2CPP_ARG_TYPE(Internal::Cryptography::Helpers, "Internal.Cryptography", "Helpers");
