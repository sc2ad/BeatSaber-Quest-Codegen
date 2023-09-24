#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Text {
class EncoderExceptionFallbackBuffer;
}
// Type: System.Text::EncoderExceptionFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2841))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2838))
// CS Name: System.Text.EncoderExceptionFallbackBuffer
class CORDL_TYPE EncoderExceptionFallbackBuffer : public System::Text::EncoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EncoderExceptionFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr EncoderExceptionFallbackBuffer(EncoderExceptionFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr EncoderExceptionFallbackBuffer(EncoderExceptionFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderExceptionFallbackBuffer(void* ptr) noexcept : System::Text::EncoderFallbackBuffer(ptr) {
}


  constexpr EncoderExceptionFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderExceptionFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderExceptionFallbackBuffer& operator=(EncoderExceptionFallbackBuffer&& o) noexcept = default;
  constexpr EncoderExceptionFallbackBuffer& operator=(EncoderExceptionFallbackBuffer const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

static System::Text::EncoderExceptionFallbackBuffer New_ctor() ;

/// @brief Method .ctor addr 0x24c558c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method Fallback addr 0x24c5600 size 0xb4 virtual true final false
 bool Fallback(char16_t charUnknown, int32_t index) ;

/// @brief Method Fallback addr 0x24c56e4 size 0x260 virtual true final false
 bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) ;

/// @brief Method GetNextChar addr 0x24c5b3c size 0x8 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method MovePrevious addr 0x24c5b44 size 0x8 virtual true final false
 bool MovePrevious() ;

/// @brief Method get_Remaining addr 0x24c5b4c size 0x8 virtual true final false
 int32_t get_Remaining() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderExceptionFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderExceptionFallbackBuffer, "System.Text", "EncoderExceptionFallbackBuffer");
