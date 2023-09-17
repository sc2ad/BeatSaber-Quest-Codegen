#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Strings;
}
// Type: Org.BouncyCastle.Utilities::Strings
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1837))
// CS Name: Org.BouncyCastle.Utilities.Strings
class CORDL_TYPE Strings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Strings() = default;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: " const&", def_value: None }]
constexpr Strings(Strings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
constexpr Strings(Strings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Strings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Strings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Strings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Strings& operator=(Strings&& o) noexcept = default;
  constexpr Strings& operator=(Strings const& o) noexcept = default;
                


// Methods

/// @brief Method ToUpperCase addr 0x10e353c size 0x7c virtual false final false
static ::StringW ToUpperCase(::StringW original) ;

/// @brief Method IsOneOf addr 0x10e35b8 size 0x80 virtual false final false
static bool IsOneOf(::StringW s, ::ArrayW<::StringW> candidates) ;

/// @brief Method FromByteArray addr 0x10e3638 size 0xf0 virtual false final false
static ::StringW FromByteArray(::ArrayW<uint8_t> bs) ;

/// @brief Method ToByteArray addr 0x10e3728 size 0xe8 virtual false final false
static ::ArrayW<uint8_t> ToByteArray(::ArrayW<char16_t> cs) ;

/// @brief Method ToByteArray addr 0x10e3810 size 0xec virtual false final false
static ::ArrayW<uint8_t> ToByteArray(::StringW s) ;

/// @brief Method FromAsciiByteArray addr 0x10e38fc size 0x3c virtual false final false
static ::StringW FromAsciiByteArray(::ArrayW<uint8_t> bytes) ;

/// @brief Method ToAsciiByteArray addr 0x10e3938 size 0x30 virtual false final false
static ::ArrayW<uint8_t> ToAsciiByteArray(::ArrayW<char16_t> cs) ;

/// @brief Method ToAsciiByteArray addr 0x10e3968 size 0x30 virtual false final false
static ::ArrayW<uint8_t> ToAsciiByteArray(::StringW s) ;

/// @brief Method FromUtf8ByteArray addr 0x10e3998 size 0x3c virtual false final false
static ::StringW FromUtf8ByteArray(::ArrayW<uint8_t> bytes) ;

/// @brief Method ToUtf8ByteArray addr 0x10e39d4 size 0x30 virtual false final false
static ::ArrayW<uint8_t> ToUtf8ByteArray(::ArrayW<char16_t> cs) ;

/// @brief Method ToUtf8ByteArray addr 0x10e3a04 size 0x30 virtual false final false
static ::ArrayW<uint8_t> ToUtf8ByteArray(::StringW s) ;

// Ctor Parameters []
explicit Strings() ;

/// @brief Method .ctor addr 0x10e3a34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Org::BouncyCastle::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Strings);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Strings, "Org.BouncyCastle.Utilities", "Strings");
