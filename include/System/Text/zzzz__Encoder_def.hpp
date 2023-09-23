#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Text {
class EncoderFallback;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class Encoder;
}
// Type: System.Text::Encoder
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2834))
// CS Name: System.Text.Encoder
class CORDL_TYPE Encoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Encoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: " const&", def_value: None }]
constexpr Encoder(Encoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Encoder", modifiers: "&&", def_value: None }]
constexpr Encoder(Encoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Encoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Encoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Encoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Encoder& operator=(Encoder&& o) noexcept = default;
  constexpr Encoder& operator=(Encoder const& o) noexcept = default;
                


// Fields

 System::Text::EncoderFallback __declspec(property(get=__get__fallback, put=__set__fallback))  _fallback;

constexpr void __set__fallback(System::Text::EncoderFallback value) ;

constexpr System::Text::EncoderFallback __get__fallback() const;

 System::Text::EncoderFallbackBuffer __declspec(property(get=__get__fallbackBuffer, put=__set__fallbackBuffer))  _fallbackBuffer;

constexpr void __set__fallbackBuffer(System::Text::EncoderFallbackBuffer value) ;

constexpr System::Text::EncoderFallbackBuffer __get__fallbackBuffer() const;


// Properties

 System::Text::EncoderFallback __declspec(property(get=get_Fallback))  Fallback;

 System::Text::EncoderFallbackBuffer __declspec(property(get=get_FallbackBuffer))  FallbackBuffer;

 bool __declspec(property(get=get_InternalHasFallbackBuffer))  InternalHasFallbackBuffer;


// Methods

// Ctor Parameters []
explicit Encoder() ;

/// @brief Method .ctor addr 0x24c44d0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_Fallback addr 0x24c44d8 size 0x8 virtual false final false
 System::Text::EncoderFallback get_Fallback() ;

/// @brief Method get_FallbackBuffer addr 0x24c0e34 size 0x3c virtual false final false
 System::Text::EncoderFallbackBuffer get_FallbackBuffer() ;

/// @brief Method get_InternalHasFallbackBuffer addr 0x24c0e24 size 0x10 virtual false final false
 bool get_InternalHasFallbackBuffer() ;

/// @brief Method Reset addr 0x24c44e0 size 0xe4 virtual true final false
 void Reset() ;

/// @brief Method GetByteCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count, bool flush) ;

/// @brief Method GetByteCount addr 0x24c45c4 size 0x16c virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, bool flush) ;

/// @brief Method GetBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, bool flush) ;

/// @brief Method GetBytes addr 0x24c4730 size 0x218 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, bool flush) ;

/// @brief Method Convert addr 0x24c4948 size 0x2f8 virtual true final false
 void Convert(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, bool flush, ByRef<int32_t> charsUsed, ByRef<int32_t> bytesUsed, ByRef<bool> completed) ;

/// @brief Method Convert addr 0x24c4c40 size 0x22c virtual true final false
 void Convert(void* chars, int32_t charCount, void* bytes, int32_t byteCount, bool flush, ByRef<int32_t> charsUsed, ByRef<int32_t> bytesUsed, ByRef<bool> completed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::Encoder);
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoder, "System.Text", "Encoder");
