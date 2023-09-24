#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class EncoderReplacementFallback;
}
// Forward declare root types
namespace System::Text {
class EncoderReplacementFallbackBuffer;
}
// Type: System.Text::EncoderReplacementFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2841))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2844))
// CS Name: System.Text.EncoderReplacementFallbackBuffer
class CORDL_TYPE EncoderReplacementFallbackBuffer : public System::Text::EncoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EncoderReplacementFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr EncoderReplacementFallbackBuffer(EncoderReplacementFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderReplacementFallbackBuffer(void* ptr) noexcept : System::Text::EncoderFallbackBuffer(ptr) {
}


  constexpr EncoderReplacementFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderReplacementFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderReplacementFallbackBuffer& operator=(EncoderReplacementFallbackBuffer&& o) noexcept = default;
  constexpr EncoderReplacementFallbackBuffer& operator=(EncoderReplacementFallbackBuffer const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__strDefault, put=__set__strDefault))  _strDefault;

constexpr void __set__strDefault(::StringW value) ;

constexpr ::StringW __get__strDefault() const;

 int32_t __declspec(property(get=__get__fallbackCount, put=__set__fallbackCount))  _fallbackCount;

constexpr void __set__fallbackCount(int32_t value) ;

constexpr int32_t __get__fallbackCount() const;

 int32_t __declspec(property(get=__get__fallbackIndex, put=__set__fallbackIndex))  _fallbackIndex;

constexpr void __set__fallbackIndex(int32_t value) ;

constexpr int32_t __get__fallbackIndex() const;


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

static System::Text::EncoderReplacementFallbackBuffer New_ctor(System::Text::EncoderReplacementFallback fallback) ;

/// @brief Method .ctor addr 0x22c9b64 size 0x48 virtual false final false
 void _ctor(System::Text::EncoderReplacementFallback fallback) ;

/// @brief Method Fallback addr 0x22c9c68 size 0x150 virtual true final false
 bool Fallback(char16_t charUnknown, int32_t index) ;

/// @brief Method Fallback addr 0x22c9db8 size 0x228 virtual true final false
 bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) ;

/// @brief Method GetNextChar addr 0x22c9fe0 size 0x50 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method MovePrevious addr 0x22ca030 size 0x30 virtual true final false
 bool MovePrevious() ;

/// @brief Method get_Remaining addr 0x22ca060 size 0xc virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x22ca06c size 0x14 virtual true final false
 void Reset() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderReplacementFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderReplacementFallbackBuffer, "System.Text", "EncoderReplacementFallbackBuffer");
