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
// Forward declare root types
namespace System {
class ParseNumbers;
}
// Type: System::ParseNumbers
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2458))
// CS Name: System.ParseNumbers
class CORDL_TYPE ParseNumbers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ParseNumbers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: " const&", def_value: None }]
constexpr ParseNumbers(ParseNumbers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ParseNumbers", modifiers: "&&", def_value: None }]
constexpr ParseNumbers(ParseNumbers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ParseNumbers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ParseNumbers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ParseNumbers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ParseNumbers& operator=(ParseNumbers&& o) noexcept = default;
  constexpr ParseNumbers& operator=(ParseNumbers const& o) noexcept = default;
                


// Methods

/// @brief Method StringToLong addr 0x2450074 size 0x18 virtual false final false
static int64_t StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags) ;

/// @brief Method StringToLong addr 0x245008c size 0x370 virtual false final false
static int64_t StringToLong(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ByRef<int32_t> currPos) ;

/// @brief Method StringToInt addr 0x24506b0 size 0x18 virtual false final false
static int32_t StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags) ;

/// @brief Method StringToInt addr 0x24506c8 size 0x3cc virtual false final false
static int32_t StringToInt(::System::ReadOnlySpan_1<char16_t> s, int32_t radix, int32_t flags, ByRef<int32_t> currPos) ;

/// @brief Method IntToString addr 0x2450cb8 size 0x380 virtual false final false
static ::StringW IntToString(int32_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags) ;

/// @brief Method LongToString addr 0x2451038 size 0x3fc virtual false final false
static ::StringW LongToString(int64_t n, int32_t radix, int32_t width, char16_t paddingChar, int32_t flags) ;

/// @brief Method EatWhiteSpace addr 0x24503fc size 0xc4 virtual false final false
static void EatWhiteSpace(::System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> i) ;

/// @brief Method GrabLongs addr 0x24504c0 size 0x1f0 virtual false final false
static int64_t GrabLongs(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> i, bool isUnsigned) ;

/// @brief Method GrabInts addr 0x2450a94 size 0x224 virtual false final false
static int32_t GrabInts(int32_t radix, ::System::ReadOnlySpan_1<char16_t> s, ByRef<int32_t> i, bool isUnsigned) ;

/// @brief Method ThrowOverflowInt32Exception addr 0x24514cc size 0x4c virtual false final false
static void ThrowOverflowInt32Exception() ;

/// @brief Method ThrowOverflowInt64Exception addr 0x2451434 size 0x4c virtual false final false
static void ThrowOverflowInt64Exception() ;

/// @brief Method ThrowOverflowUInt32Exception addr 0x2451518 size 0x4c virtual false final false
static void ThrowOverflowUInt32Exception() ;

/// @brief Method ThrowOverflowUInt64Exception addr 0x2451480 size 0x4c virtual false final false
static void ThrowOverflowUInt64Exception() ;

/// @brief Method IsDigit addr 0x2451564 size 0x54 virtual false final false
static bool IsDigit(char16_t c, int32_t radix, ByRef<int32_t> result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::ParseNumbers);
DEFINE_IL2CPP_ARG_TYPE(::System::ParseNumbers, "System", "ParseNumbers");
