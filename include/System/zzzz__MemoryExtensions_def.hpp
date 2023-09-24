#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
struct StringComparison;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System {
class MemoryExtensions;
}
// Type: System::MemoryExtensions
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2438))
// CS Name: System.MemoryExtensions
class CORDL_TYPE MemoryExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MemoryExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: " const&", def_value: None }]
constexpr MemoryExtensions(MemoryExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryExtensions", modifiers: "&&", def_value: None }]
constexpr MemoryExtensions(MemoryExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryExtensions& operator=(MemoryExtensions&& o) noexcept = default;
  constexpr MemoryExtensions& operator=(MemoryExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method EqualsOrdinal addr 0x2441d28 size 0x134 virtual false final false
static bool EqualsOrdinal(System::ReadOnlySpan_1<char16_t> span, System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method EqualsOrdinalIgnoreCase addr 0x2441e5c size 0xac virtual false final false
static bool EqualsOrdinalIgnoreCase(System::ReadOnlySpan_1<char16_t> span, System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method Contains addr 0x2441f08 size 0x78 virtual false final false
static bool Contains(System::ReadOnlySpan_1<char16_t> source, char16_t value) ;

/// @brief Method ToUpperInvariant addr 0x2441f80 size 0x158 virtual false final false
static int32_t ToUpperInvariant(System::ReadOnlySpan_1<char16_t> source, System::Span_1<char16_t> destination) ;

/// @brief Method EndsWith addr 0x24420d8 size 0x330 virtual false final false
static bool EndsWith(System::ReadOnlySpan_1<char16_t> span, System::ReadOnlySpan_1<char16_t> value, System::StringComparison comparisonType) ;

/// @brief Method AsSpan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Span_1<T> AsSpan(::ArrayW<T> array, int32_t start) ;

/// @brief Method AsSpan addr 0x2442408 size 0x58 virtual false final false
static System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text) ;

/// @brief Method AsSpan addr 0x2442460 size 0x8c virtual false final false
static System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start) ;

/// @brief Method AsSpan addr 0x24424ec size 0xa0 virtual false final false
static System::ReadOnlySpan_1<char16_t> AsSpan(::StringW text, int32_t start, int32_t length) ;

/// @brief Method Trim addr 0x24395e4 size 0x10 virtual false final false
static System::ReadOnlySpan_1<char16_t> Trim(System::ReadOnlySpan_1<char16_t> span) ;

/// @brief Method TrimStart addr 0x244258c size 0xf4 virtual false final false
static System::ReadOnlySpan_1<char16_t> TrimStart(System::ReadOnlySpan_1<char16_t> span) ;

/// @brief Method TrimEnd addr 0x2442680 size 0xf4 virtual false final false
static System::ReadOnlySpan_1<char16_t> TrimEnd(System::ReadOnlySpan_1<char16_t> span) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOf(System::ReadOnlySpan_1<T> span, T value) ;

/// @brief Method IndexOfAny addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOfAny(System::ReadOnlySpan_1<T> span, System::ReadOnlySpan_1<T> values) ;

/// @brief Method SequenceEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool SequenceEqual(System::ReadOnlySpan_1<T> span, System::ReadOnlySpan_1<T> other) ;

/// @brief Method StartsWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool StartsWith(System::ReadOnlySpan_1<T> span, System::ReadOnlySpan_1<T> value) ;

/// @brief Method EndsWith addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool EndsWith(System::ReadOnlySpan_1<T> span, System::ReadOnlySpan_1<T> value) ;

/// @brief Method AsSpan addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Span_1<T> AsSpan(::ArrayW<T> array, int32_t start, int32_t length) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void CopyTo(::ArrayW<T> source, System::Span_1<T> destination) ;

/// @brief Method IsTypeComparableAsBytes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool IsTypeComparableAsBytes(ByRef<uint64_t> size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MemoryExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::MemoryExtensions, "System", "MemoryExtensions");
