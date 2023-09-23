#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Text {
class DecoderFallback;
}
// Forward declare root types
namespace System::Text {
class Decoder;
}
// Type: System.Text::Decoder
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2823))
// CS Name: System.Text.Decoder
class CORDL_TYPE Decoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Decoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: " const&", def_value: None }]
constexpr Decoder(Decoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Decoder", modifiers: "&&", def_value: None }]
constexpr Decoder(Decoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Decoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Decoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Decoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Decoder& operator=(Decoder&& o) noexcept = default;
  constexpr Decoder& operator=(Decoder const& o) noexcept = default;
                


// Fields

 System::Text::DecoderFallback __declspec(property(get=__get__fallback, put=__set__fallback))  _fallback;

constexpr void __set__fallback(System::Text::DecoderFallback value) ;

constexpr System::Text::DecoderFallback __get__fallback() const;

 System::Text::DecoderFallbackBuffer __declspec(property(get=__get__fallbackBuffer, put=__set__fallbackBuffer))  _fallbackBuffer;

constexpr void __set__fallbackBuffer(System::Text::DecoderFallbackBuffer value) ;

constexpr System::Text::DecoderFallbackBuffer __get__fallbackBuffer() const;


// Properties

 System::Text::DecoderFallback __declspec(property(get=get_Fallback))  Fallback;

 System::Text::DecoderFallbackBuffer __declspec(property(get=get_FallbackBuffer))  FallbackBuffer;

 bool __declspec(property(get=get_InternalHasFallbackBuffer))  InternalHasFallbackBuffer;


// Methods

// Ctor Parameters []
explicit Decoder() ;

/// @brief Method .ctor addr 0x24c1b3c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Fallback addr 0x24c1b44 size 0x8 virtual false final false
 System::Text::DecoderFallback get_Fallback() ;

/// @brief Method get_FallbackBuffer addr 0x24c143c size 0x3c virtual false final false
 System::Text::DecoderFallbackBuffer get_FallbackBuffer() ;

/// @brief Method get_InternalHasFallbackBuffer addr 0x24c1b4c size 0x10 virtual false final false
 bool get_InternalHasFallbackBuffer() ;

/// @brief Method Reset addr 0x24c1b5c size 0x108 virtual true final false
 void Reset() ;

/// @brief Method GetCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x24c1c64 size 0xc virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush) ;

/// @brief Method GetCharCount addr 0x24c1c70 size 0x164 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, bool flush) ;

/// @brief Method GetChars addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x24c1dd4 size 0xc virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, bool flush) ;

/// @brief Method GetChars addr 0x24c1de0 size 0x218 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, bool flush) ;

/// @brief Method GetChars addr 0x24c1ff8 size 0xa8 virtual true final false
 int32_t GetChars(System::ReadOnlySpan_1<uint8_t> bytes, System::Span_1<char16_t> chars, bool flush) ;

/// @brief Method Convert addr 0x24c20a0 size 0x2f8 virtual true final false
 void Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed) ;

/// @brief Method Convert addr 0x24c2398 size 0x22c virtual true final false
 void Convert(void* bytes, int32_t byteCount, void* chars, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::Decoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::Decoder, "System.Text", "Decoder");
