#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Text {
class DecoderExceptionFallbackBuffer;
}
// Type: System.Text::DecoderExceptionFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2827))
// CS Name: System.Text.DecoderExceptionFallbackBuffer
class CORDL_TYPE DecoderExceptionFallbackBuffer : public System::Text::DecoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DecoderExceptionFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr DecoderExceptionFallbackBuffer(DecoderExceptionFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr DecoderExceptionFallbackBuffer(DecoderExceptionFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderExceptionFallbackBuffer(void* ptr) noexcept : System::Text::DecoderFallbackBuffer(ptr) {
}


  constexpr DecoderExceptionFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderExceptionFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderExceptionFallbackBuffer& operator=(DecoderExceptionFallbackBuffer&& o) noexcept = default;
  constexpr DecoderExceptionFallbackBuffer& operator=(DecoderExceptionFallbackBuffer const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

/// @brief Method Fallback addr 0x24c2bb8 size 0x8 virtual true final false
 bool Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

/// @brief Method GetNextChar addr 0x24c2d94 size 0x8 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method get_Remaining addr 0x24c2d9c size 0x8 virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Throw addr 0x24c2bc0 size 0x1d4 virtual false final false
 void Throw(::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

// Ctor Parameters []
explicit DecoderExceptionFallbackBuffer() ;

/// @brief Method .ctor addr 0x24c2b44 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::DecoderExceptionFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderExceptionFallbackBuffer, "System.Text", "DecoderExceptionFallbackBuffer");
