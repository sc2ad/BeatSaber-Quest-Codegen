#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace System::Text {
class EncoderNLS;
}
// Forward declare root types
namespace System::Text {
class EncoderFallbackBuffer;
}
// Type: System.Text::EncoderFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2841))
// CS Name: System.Text.EncoderFallbackBuffer
class CORDL_TYPE EncoderFallbackBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EncoderFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr EncoderFallbackBuffer(EncoderFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr EncoderFallbackBuffer(EncoderFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderFallbackBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncoderFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderFallbackBuffer& operator=(EncoderFallbackBuffer&& o) noexcept = default;
  constexpr EncoderFallbackBuffer& operator=(EncoderFallbackBuffer const& o) noexcept = default;
                


// Fields

 void* __declspec(property(get=__get_charStart, put=__set_charStart))  charStart;

constexpr void __set_charStart(void* value) ;

constexpr void* __get_charStart() const;

 void* __declspec(property(get=__get_charEnd, put=__set_charEnd))  charEnd;

constexpr void __set_charEnd(void* value) ;

constexpr void* __get_charEnd() const;

 System::Text::EncoderNLS __declspec(property(get=__get_encoder, put=__set_encoder))  encoder;

constexpr void __set_encoder(System::Text::EncoderNLS value) ;

constexpr System::Text::EncoderNLS __get_encoder() const;

 bool __declspec(property(get=__get_setEncoder, put=__set_setEncoder))  setEncoder;

constexpr void __set_setEncoder(bool value) ;

constexpr bool __get_setEncoder() const;

 bool __declspec(property(get=__get_bUsedEncoder, put=__set_bUsedEncoder))  bUsedEncoder;

constexpr void __set_bUsedEncoder(bool value) ;

constexpr bool __get_bUsedEncoder() const;

 bool __declspec(property(get=__get_bFallingBack, put=__set_bFallingBack))  bFallingBack;

constexpr void __set_bFallingBack(bool value) ;

constexpr bool __get_bFallingBack() const;

 int32_t __declspec(property(get=__get_iRecursionCount, put=__set_iRecursionCount))  iRecursionCount;

constexpr void __set_iRecursionCount(int32_t value) ;

constexpr int32_t __get_iRecursionCount() const;


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

/// @brief Method Fallback addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Fallback(char16_t charUnknown, int32_t index) ;

/// @brief Method Fallback addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) ;

/// @brief Method GetNextChar addr 0x0 size 0xffffffffffffffff virtual true final false
 char16_t GetNextChar() ;

/// @brief Method MovePrevious addr 0x0 size 0xffffffffffffffff virtual true final false
 bool MovePrevious() ;

/// @brief Method get_Remaining addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x24c5c58 size 0x28 virtual true final false
 void Reset() ;

/// @brief Method InternalReset addr 0x24c5c80 size 0x18 virtual false final false
 void InternalReset() ;

/// @brief Method InternalInitialize addr 0x24c0e70 size 0x1c virtual false final false
 void InternalInitialize(void* charStart, void* charEnd, System::Text::EncoderNLS encoder, bool setEncoder) ;

/// @brief Method InternalGetNextChar addr 0x24c0e8c size 0x34 virtual false final false
 char16_t InternalGetNextChar() ;

/// @brief Method InternalFallback addr 0x24c5c98 size 0x1a8 virtual true final false
 bool InternalFallback(char16_t ch, ByRef<void*> chars) ;

/// @brief Method ThrowLastCharRecursive addr 0x24c5e40 size 0x90 virtual false final false
 void ThrowLastCharRecursive(int32_t charRecursive) ;

static System::Text::EncoderFallbackBuffer New_ctor() ;

/// @brief Method .ctor addr 0x24c51b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallbackBuffer, "System.Text", "EncoderFallbackBuffer");
