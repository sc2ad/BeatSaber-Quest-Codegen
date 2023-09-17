#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace System {
class IPv6AddressHelper;
}
// Type: System::IPv6AddressHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7713))
// CS Name: System.IPv6AddressHelper
class CORDL_TYPE IPv6AddressHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPv6AddressHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPv6AddressHelper", modifiers: " const&", def_value: None }]
constexpr IPv6AddressHelper(IPv6AddressHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPv6AddressHelper", modifiers: "&&", def_value: None }]
constexpr IPv6AddressHelper(IPv6AddressHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPv6AddressHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPv6AddressHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPv6AddressHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPv6AddressHelper& operator=(IPv6AddressHelper&& o) noexcept = default;
  constexpr IPv6AddressHelper& operator=(IPv6AddressHelper const& o) noexcept = default;
                


// Methods

/// @brief Method FindCompressionRange addr 0x27b38a4 size 0xe0 virtual false final false
static ::System::ValueTuple_2<int32_t,int32_t> FindCompressionRange(::System::ReadOnlySpan_1<uint16_t> numbers) ;

/// @brief Method ShouldHaveIpv4Embedded addr 0x27b3984 size 0xd0 virtual false final false
static bool ShouldHaveIpv4Embedded(::System::ReadOnlySpan_1<uint16_t> numbers) ;

/// @brief Method IsValidStrict addr 0x27b3a54 size 0x344 virtual false final false
static bool IsValidStrict(void* name, int32_t start, ByRef<int32_t> end) ;

/// @brief Method Parse addr 0x27b3d98 size 0x50c virtual false final false
static void Parse(::System::ReadOnlySpan_1<char16_t> address, void* numbers, int32_t start, ByRef<::StringW> scopeId) ;

/// @brief Method ParseCanonicalName addr 0x27b42a4 size 0x63c virtual false final false
static ::StringW ParseCanonicalName(::StringW str, int32_t start, ByRef<bool> isLoopback, ByRef<::StringW> scopeId) ;

/// @brief Method IsLoopback addr 0x27b48e0 size 0xe0 virtual false final false
static bool IsLoopback(::System::ReadOnlySpan_1<uint16_t> numbers) ;

/// @brief Method InternalIsValid addr 0x27b49c0 size 0x2dc virtual false final false
static bool InternalIsValid(void* name, int32_t start, ByRef<int32_t> end, bool validateStrictAddress) ;

/// @brief Method IsValid addr 0x27b4c9c size 0x8 virtual false final false
static bool IsValid(void* name, int32_t start, ByRef<int32_t> end) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::IPv6AddressHelper);
DEFINE_IL2CPP_ARG_TYPE(::System::IPv6AddressHelper, "System", "IPv6AddressHelper");
