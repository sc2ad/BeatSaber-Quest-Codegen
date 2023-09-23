#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Text {
class EncoderNLS;
}
// Type: System.Text::EncoderNLS
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2834))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2842))
// CS Name: System.Text.EncoderNLS
class CORDL_TYPE EncoderNLS : public System::Text::Encoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~EncoderNLS() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderNLS", modifiers: " const&", def_value: None }]
constexpr EncoderNLS(EncoderNLS const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderNLS", modifiers: "&&", def_value: None }]
constexpr EncoderNLS(EncoderNLS&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderNLS(void* ptr) noexcept : System::Text::Encoder(ptr) {
}


  constexpr EncoderNLS& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderNLS& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderNLS& operator=(EncoderNLS&& o) noexcept = default;
  constexpr EncoderNLS& operator=(EncoderNLS const& o) noexcept = default;
                


// Fields

 char16_t __declspec(property(get=__get__charLeftOver, put=__set__charLeftOver))  _charLeftOver;

constexpr void __set__charLeftOver(char16_t value) ;

constexpr char16_t __get__charLeftOver() const;

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;

 bool __declspec(property(get=__get__mustFlush, put=__set__mustFlush))  _mustFlush;

constexpr void __set__mustFlush(bool value) ;

constexpr bool __get__mustFlush() const;

 bool __declspec(property(get=__get__throwOnOverflow, put=__set__throwOnOverflow))  _throwOnOverflow;

constexpr void __set__throwOnOverflow(bool value) ;

constexpr bool __get__throwOnOverflow() const;

 int32_t __declspec(property(get=__get__charsUsed, put=__set__charsUsed))  _charsUsed;

constexpr void __set__charsUsed(int32_t value) ;

constexpr int32_t __get__charsUsed() const;


// Properties

 System::Text::Encoding __declspec(property(get=get_Encoding))  Encoding;

 bool __declspec(property(get=get_MustFlush))  MustFlush;

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "System::Text::Encoding", modifiers: "", def_value: None }]
explicit EncoderNLS(System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x24c1a28 size 0x44 virtual false final false
 void _ctor(System::Text::Encoding encoding) ;

/// @brief Method Reset addr 0x24c5ed0 size 0x20 virtual true final false
 void Reset() ;

/// @brief Method GetByteCount addr 0x24c5ef0 size 0x1d8 virtual true final false
 int32_t GetByteCount(::ArrayW<char16_t> chars, int32_t index, int32_t count, bool flush) ;

/// @brief Method GetByteCount addr 0x24c60c8 size 0xf8 virtual true final false
 int32_t GetByteCount(void* chars, int32_t count, bool flush) ;

/// @brief Method GetBytes addr 0x24c61c0 size 0x298 virtual true final false
 int32_t GetBytes(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, bool flush) ;

/// @brief Method GetBytes addr 0x24c6458 size 0x120 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, bool flush) ;

/// @brief Method Convert addr 0x24c6578 size 0x2cc virtual true final false
 void Convert(::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, ::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, bool flush, ByRef<int32_t> charsUsed, ByRef<int32_t> bytesUsed, ByRef<bool> completed) ;

/// @brief Method Convert addr 0x24c6844 size 0x1a8 virtual true final false
 void Convert(void* chars, int32_t charCount, void* bytes, int32_t byteCount, bool flush, ByRef<int32_t> charsUsed, ByRef<int32_t> bytesUsed, ByRef<bool> completed) ;

/// @brief Method get_Encoding addr 0x24c69ec size 0x8 virtual false final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method get_MustFlush addr 0x24c69f4 size 0x8 virtual false final false
 bool get_MustFlush() ;

/// @brief Method get_HasState addr 0x24c69fc size 0x10 virtual true final false
 bool get_HasState() ;

/// @brief Method ClearMustFlush addr 0x24c6a0c size 0x8 virtual false final false
 void ClearMustFlush() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderNLS);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderNLS, "System.Text", "EncoderNLS");
