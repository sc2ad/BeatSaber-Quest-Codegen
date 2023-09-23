#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Globalization {
class CompareInfo;
}
namespace System::Numerics {
template<typename T>
struct Vector_1;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System {
class SpanHelpers;
}
// Type: System::SpanHelpers
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2471))
// CS Name: System.SpanHelpers
class CORDL_TYPE SpanHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SpanHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: " const&", def_value: None }]
constexpr SpanHelpers(SpanHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SpanHelpers", modifiers: "&&", def_value: None }]
constexpr SpanHelpers(SpanHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SpanHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SpanHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SpanHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SpanHelpers& operator=(SpanHelpers&& o) noexcept = default;
  constexpr SpanHelpers& operator=(SpanHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method IndexOfAny addr 0x245466c size 0x80 virtual false final false
static int32_t IndexOfAny(ByRef<uint8_t> searchSpace, int32_t searchSpaceLength, ByRef<uint8_t> value, int32_t valueLength) ;

/// @brief Method IndexOf addr 0x24546ec size 0x298 virtual false final false
static int32_t IndexOf(ByRef<uint8_t> searchSpace, uint8_t value, int32_t length) ;

/// @brief Method SequenceEqual addr 0x2454984 size 0x1c8 virtual false final false
static bool SequenceEqual(ByRef<uint8_t> first, ByRef<uint8_t> second, uint64_t length) ;

/// @brief Method SequenceCompareTo addr 0x2454b4c size 0x4d0 virtual false final false
static int32_t SequenceCompareTo(ByRef<char16_t> first, int32_t firstLength, ByRef<char16_t> second, int32_t secondLength) ;

/// @brief Method IndexOf addr 0x245501c size 0x73c virtual false final false
static int32_t IndexOf(ByRef<char16_t> searchSpace, char16_t value, int32_t length) ;

/// @brief Method LastIndexOf addr 0x2455758 size 0x6e4 virtual false final false
static int32_t LastIndexOf(ByRef<char16_t> searchSpace, char16_t value, int32_t length) ;

/// @brief Method LocateFirstFoundChar addr 0x2455e3c size 0x1c0 virtual false final false
static int32_t LocateFirstFoundChar(System::Numerics::Vector_1<uint16_t> match) ;

/// @brief Method LocateFirstFoundChar addr 0x2455ffc size 0x20 virtual false final false
static int32_t LocateFirstFoundChar(uint64_t match) ;

/// @brief Method LocateLastFoundChar addr 0x245601c size 0x1c0 virtual false final false
static int32_t LocateLastFoundChar(System::Numerics::Vector_1<uint16_t> match) ;

/// @brief Method LocateLastFoundChar addr 0x24561dc size 0x2c virtual false final false
static int32_t LocateLastFoundChar(uint64_t match) ;

/// @brief Method IndexOf addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOf(ByRef<T> searchSpace, T value, int32_t length) ;

/// @brief Method IndexOfAny addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static int32_t IndexOfAny(ByRef<T> searchSpace, int32_t searchSpaceLength, ByRef<T> value, int32_t valueLength) ;

/// @brief Method SequenceEqual addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool SequenceEqual(ByRef<T> first, ByRef<T> second, int32_t length) ;

/// @brief Method EndsWithCultureHelper addr 0x2456208 size 0x200 virtual false final false
static bool EndsWithCultureHelper(System::ReadOnlySpan_1<char16_t> span, System::ReadOnlySpan_1<char16_t> value, System::Globalization::CompareInfo compareInfo) ;

/// @brief Method EndsWithCultureIgnoreCaseHelper addr 0x2456408 size 0x120 virtual false final false
static bool EndsWithCultureIgnoreCaseHelper(System::ReadOnlySpan_1<char16_t> span, System::ReadOnlySpan_1<char16_t> value, System::Globalization::CompareInfo compareInfo) ;

/// @brief Method EndsWithOrdinalIgnoreCaseHelper addr 0x2456528 size 0xe0 virtual false final false
static bool EndsWithOrdinalIgnoreCaseHelper(System::ReadOnlySpan_1<char16_t> span, System::ReadOnlySpan_1<char16_t> value) ;

/// @brief Method ClearWithoutReferences addr 0x2456608 size 0x1e8 virtual false final false
static void ClearWithoutReferences(ByRef<uint8_t> b, uint64_t byteLength) ;

/// @brief Method ClearWithReferences addr 0x24567f0 size 0x150 virtual false final false
static void ClearWithReferences(ByRef<::cordl_internals::intptr_t> ip, uint64_t pointerSizeLength) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::SpanHelpers);
DEFINE_IL2CPP_ARG_TYPE(System::SpanHelpers, "System", "SpanHelpers");
