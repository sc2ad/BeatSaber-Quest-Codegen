#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallbackBuffer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Xml {
class CharEntityEncoderFallback;
}
// Forward declare root types
namespace System::Xml {
class CharEntityEncoderFallbackBuffer;
}
// Type: System.Xml::CharEntityEncoderFallbackBuffer
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2841))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11354))
// CS Name: System.Xml.CharEntityEncoderFallbackBuffer
class CORDL_TYPE CharEntityEncoderFallbackBuffer : public ::System::Text::EncoderFallbackBuffer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~CharEntityEncoderFallbackBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: " const&", def_value: None }]
constexpr CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallbackBuffer", modifiers: "&&", def_value: None }]
constexpr CharEntityEncoderFallbackBuffer(CharEntityEncoderFallbackBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CharEntityEncoderFallbackBuffer(void* ptr) noexcept : ::System::Text::EncoderFallbackBuffer(ptr) {
}


  constexpr CharEntityEncoderFallbackBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CharEntityEncoderFallbackBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CharEntityEncoderFallbackBuffer& operator=(CharEntityEncoderFallbackBuffer&& o) noexcept = default;
  constexpr CharEntityEncoderFallbackBuffer& operator=(CharEntityEncoderFallbackBuffer const& o) noexcept = default;
                


// Fields

 ::System::Xml::CharEntityEncoderFallback __declspec(property(get=__get_parent, put=__set_parent))  parent;

constexpr void __set_parent(::System::Xml::CharEntityEncoderFallback value) ;

constexpr ::System::Xml::CharEntityEncoderFallback __get_parent() const;

 ::StringW __declspec(property(get=__get_charEntity, put=__set_charEntity))  charEntity;

constexpr void __set_charEntity(::StringW value) ;

constexpr ::StringW __get_charEntity() const;

 int32_t __declspec(property(get=__get_charEntityIndex, put=__set_charEntityIndex))  charEntityIndex;

constexpr void __set_charEntityIndex(int32_t value) ;

constexpr int32_t __get_charEntityIndex() const;


// Properties

 int32_t __declspec(property(get=get_Remaining))  Remaining;


// Methods

// Ctor Parameters [CppParam { name: "parent", ty: "::System::Xml::CharEntityEncoderFallback", modifiers: "", def_value: None }]
explicit CharEntityEncoderFallbackBuffer(::System::Xml::CharEntityEncoderFallback parent) ;

/// @brief Method .ctor addr 0x26bc0d4 size 0x74 virtual false final false
 void _ctor(::System::Xml::CharEntityEncoderFallback parent) ;

/// @brief Method Fallback addr 0x26bc1cc size 0x1f0 virtual true final false
 bool Fallback(char16_t charUnknown, int32_t index) ;

/// @brief Method Fallback addr 0x26bc3bc size 0x280 virtual true final false
 bool Fallback(char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) ;

/// @brief Method GetNextChar addr 0x26bc64c size 0x58 virtual true final false
 char16_t GetNextChar() ;

/// @brief Method MovePrevious addr 0x26bc6a4 size 0x20 virtual true final false
 bool MovePrevious() ;

/// @brief Method get_Remaining addr 0x26bc6c4 size 0x34 virtual true final false
 int32_t get_Remaining() ;

/// @brief Method Reset addr 0x26bc6f8 size 0xc virtual true final false
 void Reset() ;

/// @brief Method SurrogateCharToUtf32 addr 0x26bc63c size 0x10 virtual false final false
 int32_t SurrogateCharToUtf32(char16_t highSurrogate, char16_t lowSurrogate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::CharEntityEncoderFallbackBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::CharEntityEncoderFallbackBuffer, "System.Xml", "CharEntityEncoderFallbackBuffer");
