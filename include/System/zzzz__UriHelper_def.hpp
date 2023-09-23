#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
struct UnescapeMode;
}
namespace System {
class UriParser;
}
// Forward declare root types
namespace System {
class UriHelper;
}
// Type: System::UriHelper
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7734))
// CS Name: System.UriHelper
class CORDL_TYPE UriHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UriHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "UriHelper", modifiers: " const&", def_value: None }]
constexpr UriHelper(UriHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UriHelper", modifiers: "&&", def_value: None }]
constexpr UriHelper(UriHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UriHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UriHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UriHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UriHelper& operator=(UriHelper&& o) noexcept = default;
  constexpr UriHelper& operator=(UriHelper const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_HexUpperChars, put=__set_HexUpperChars))  HexUpperChars;

static void __set_HexUpperChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_HexUpperChars() ;


// Methods

/// @brief Method TestForSubPath addr 0x27b803c size 0x204 virtual false final false
static bool TestForSubPath(void* pMe, uint16_t meLength, void* pShe, uint16_t sheLength, bool ignoreCase) ;

/// @brief Method EscapeString addr 0x27b8240 size 0x53c virtual false final false
static ::ArrayW<char16_t> EscapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t> dest, ByRef<int32_t> destPos, bool isUriString, char16_t force1, char16_t force2, char16_t rsvd) ;

/// @brief Method EnsureDestinationSize addr 0x27b877c size 0x12c virtual false final false
static ::ArrayW<char16_t> EnsureDestinationSize(void* pStr, ::ArrayW<char16_t> dest, int32_t currentInputPos, int16_t charsToAdd, int16_t minReallocateChars, ByRef<int32_t> destPos, int32_t prevInputPos) ;

/// @brief Method UnescapeString addr 0x27b8a90 size 0xe0 virtual false final false
static ::ArrayW<char16_t> UnescapeString(::StringW input, int32_t start, int32_t end, ::ArrayW<char16_t> dest, ByRef<int32_t> destPosition, char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, System::UnescapeMode unescapeMode, System::UriParser syntax, bool isQuery) ;

/// @brief Method UnescapeString addr 0x27b8b70 size 0x914 virtual false final false
static ::ArrayW<char16_t> UnescapeString(void* pStr, int32_t start, int32_t end, ::ArrayW<char16_t> dest, ByRef<int32_t> destPosition, char16_t rsvd1, char16_t rsvd2, char16_t rsvd3, System::UnescapeMode unescapeMode, System::UriParser syntax, bool isQuery) ;

/// @brief Method MatchUTF8Sequence addr 0x27b7a24 size 0x4e8 virtual false final false
static void MatchUTF8Sequence(void* pDest, ::ArrayW<char16_t> dest, ByRef<int32_t> destOffset, ::ArrayW<char16_t> unescapedChars, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteCount, bool isQuery, bool iriParsing) ;

/// @brief Method EscapeAsciiChar addr 0x27b7f0c size 0x108 virtual false final false
static void EscapeAsciiChar(char16_t ch, ::ArrayW<char16_t> to, ByRef<int32_t> pos) ;

/// @brief Method EscapedAscii addr 0x27b78d8 size 0xc0 virtual false final false
static char16_t EscapedAscii(char16_t digit, char16_t next) ;

/// @brief Method IsNotSafeForUnescape addr 0x27b7998 size 0x8c virtual false final false
static bool IsNotSafeForUnescape(char16_t ch) ;

/// @brief Method IsReservedUnreservedOrHash addr 0x27b8988 size 0x108 virtual false final false
static bool IsReservedUnreservedOrHash(char16_t c) ;

/// @brief Method IsUnreserved addr 0x27b88a8 size 0xe0 virtual false final false
static bool IsUnreserved(char16_t c) ;

/// @brief Method Is3986Unreserved addr 0x27b94e4 size 0x9c virtual false final false
static bool Is3986Unreserved(char16_t c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::UriHelper);
DEFINE_IL2CPP_ARG_TYPE(System::UriHelper, "System", "UriHelper");
