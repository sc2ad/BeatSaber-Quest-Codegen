#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Xml {
class CharEntityEncoderFallbackBuffer;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Xml {
class CharEntityEncoderFallback;
}
// Type: System.Xml::CharEntityEncoderFallback
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2840))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11353))
// CS Name: System.Xml.CharEntityEncoderFallback
class CORDL_TYPE CharEntityEncoderFallback : public System::Text::EncoderFallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~CharEntityEncoderFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: " const&", def_value: None }]
constexpr CharEntityEncoderFallback(CharEntityEncoderFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CharEntityEncoderFallback", modifiers: "&&", def_value: None }]
constexpr CharEntityEncoderFallback(CharEntityEncoderFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CharEntityEncoderFallback(void* ptr) noexcept : System::Text::EncoderFallback(ptr) {
}


  constexpr CharEntityEncoderFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CharEntityEncoderFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CharEntityEncoderFallback& operator=(CharEntityEncoderFallback&& o) noexcept = default;
  constexpr CharEntityEncoderFallback& operator=(CharEntityEncoderFallback const& o) noexcept = default;
                


// Fields

 System::Xml::CharEntityEncoderFallbackBuffer __declspec(property(get=__get_fallbackBuffer, put=__set_fallbackBuffer))  fallbackBuffer;

constexpr void __set_fallbackBuffer(System::Xml::CharEntityEncoderFallbackBuffer value) ;

constexpr System::Xml::CharEntityEncoderFallbackBuffer __get_fallbackBuffer() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_textContentMarks, put=__set_textContentMarks))  textContentMarks;

constexpr void __set_textContentMarks(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_textContentMarks() const;

 int32_t __declspec(property(get=__get_endMarkPos, put=__set_endMarkPos))  endMarkPos;

constexpr void __set_endMarkPos(int32_t value) ;

constexpr int32_t __get_endMarkPos() const;

 int32_t __declspec(property(get=__get_curMarkPos, put=__set_curMarkPos))  curMarkPos;

constexpr void __set_curMarkPos(int32_t value) ;

constexpr int32_t __get_curMarkPos() const;

 int32_t __declspec(property(get=__get_startOffset, put=__set_startOffset))  startOffset;

constexpr void __set_startOffset(int32_t value) ;

constexpr int32_t __get_startOffset() const;


// Properties

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;

 int32_t __declspec(property(put=set_StartOffset))  StartOffset;


// Methods

static System::Xml::CharEntityEncoderFallback New_ctor() ;

/// @brief Method .ctor addr 0x26bc060 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateFallbackBuffer addr 0x26bc068 size 0x6c virtual true final false
 System::Text::EncoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x26bc148 size 0x8 virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method set_StartOffset addr 0x26bc150 size 0x8 virtual false final false
 void set_StartOffset(int32_t value) ;

/// @brief Method Reset addr 0x26bc158 size 0xc virtual false final false
 void Reset(::ArrayW<int32_t> textContentMarks, int32_t endMarkPos) ;

/// @brief Method CanReplaceAt addr 0x26bc164 size 0x68 virtual false final false
 bool CanReplaceAt(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::CharEntityEncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::CharEntityEncoderFallback, "System.Xml", "CharEntityEncoderFallback");
