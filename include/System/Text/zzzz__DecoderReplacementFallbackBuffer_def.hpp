#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class DecoderReplacementFallback;
}
// Forward declare root types
namespace System::Text {
class DecoderReplacementFallbackBuffer;
}
// Type: System.Text::DecoderReplacementFallbackBuffer
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2830))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2833))
// CS Name: System.Text.DecoderReplacementFallbackBuffer
class CORDL_TYPE DecoderReplacementFallbackBuffer : public System::Text::DecoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DecoderReplacementFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr DecoderReplacementFallbackBuffer(DecoderReplacementFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr DecoderReplacementFallbackBuffer(DecoderReplacementFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderReplacementFallbackBuffer(void* ptr) noexcept : System::Text::DecoderFallbackBuffer(ptr) {
}


  constexpr DecoderReplacementFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderReplacementFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderReplacementFallbackBuffer& operator=(DecoderReplacementFallbackBuffer&& o) noexcept = default;
  constexpr DecoderReplacementFallbackBuffer& operator=(DecoderReplacementFallbackBuffer const& o) noexcept = default;
                


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

static System::Text::DecoderReplacementFallbackBuffer New_ctor(System::Text::DecoderReplacementFallback fallback) ;

/// @brief Method .ctor addr 0x24c430c size 0x3c virtual false final false
 void _ctor(System::Text::DecoderReplacementFallback fallback) ;

/// @brief Method Fallback addr 0x24c4404 size 0x44 virtual true final false
 bool Fallback(::ArrayW<uint8_t> bytesUnknown, int32_t index) ;

/// @brief Method GetNextChar addr 0x24c4448 size 0x50 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method get_Remaining addr 0x24c4498 size 0xc virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x24c44a4 size 0x10 virtual true final false
 void Reset() ;

/// @brief Method InternalFallback addr 0x24c44b4 size 0x1c virtual true final false
 int32_t InternalFallback(::ArrayW<uint8_t> bytes, void* pBytes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::DecoderReplacementFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderReplacementFallbackBuffer, "System.Text", "DecoderReplacementFallbackBuffer");
