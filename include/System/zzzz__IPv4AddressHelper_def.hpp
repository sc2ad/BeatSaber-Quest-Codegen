#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class IPv4AddressHelper;
}
// Type: System::IPv4AddressHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7712))
// CS Name: System.IPv4AddressHelper
class CORDL_TYPE IPv4AddressHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPv4AddressHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPv4AddressHelper", modifiers: " const&", def_value: None }]
constexpr IPv4AddressHelper(IPv4AddressHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPv4AddressHelper", modifiers: "&&", def_value: None }]
constexpr IPv4AddressHelper(IPv4AddressHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPv4AddressHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPv4AddressHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPv4AddressHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPv4AddressHelper& operator=(IPv4AddressHelper&& o) noexcept = default;
  constexpr IPv4AddressHelper& operator=(IPv4AddressHelper const& o) noexcept = default;
                


// Methods

/// @brief Method ParseHostNumber addr 0x2699544 size 0x30 virtual false final false
static int32_t ParseHostNumber(System::ReadOnlySpan_1<char16_t> str, int32_t start, int32_t end) ;

/// @brief Method IsValid addr 0x2699600 size 0x30 virtual false final false
static bool IsValid(void* name, int32_t start, ByRef<int32_t> end, bool allowIPv6, bool notImplicitFile, bool unknownScheme) ;

/// @brief Method ParseCanonical addr 0x2699574 size 0x8c virtual false final false
static bool ParseCanonical(System::ReadOnlySpan_1<char16_t> name, void* numbers, int32_t start, int32_t end) ;

/// @brief Method IsValidCanonical addr 0x2699630 size 0x140 virtual false final false
static bool IsValidCanonical(void* name, int32_t start, ByRef<int32_t> end, bool allowIPv6, bool notImplicitFile) ;

/// @brief Method ParseNonCanonical addr 0x2699770 size 0x2f4 virtual false final false
static int64_t ParseNonCanonical(void* name, int32_t start, ByRef<int32_t> end, bool notImplicitFile) ;

/// @brief Method ParseCanonicalName addr 0x2699a64 size 0x228 virtual false final false
static ::StringW ParseCanonicalName(::StringW str, int32_t start, int32_t end, ByRef<bool> isLoopback) ;

/// @brief Method Parse addr 0x2699c8c size 0x106c virtual false final false
static bool Parse(::StringW name, void* numbers, int32_t start, int32_t end) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IPv4AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(System::IPv4AddressHelper, "System", "IPv4AddressHelper");
