#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Text {
class DecoderNLS;
}
// Type: System.Text::DecoderNLS
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2823))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2831))
// CS Name: System.Text.DecoderNLS
class CORDL_TYPE DecoderNLS : public System::Text::Decoder {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DecoderNLS() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderNLS", modifiers: " const&", def_value: None }]
constexpr DecoderNLS(DecoderNLS const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderNLS", modifiers: "&&", def_value: None }]
constexpr DecoderNLS(DecoderNLS&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderNLS(void* ptr) noexcept : System::Text::Decoder(ptr) {
}


  constexpr DecoderNLS& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderNLS& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderNLS& operator=(DecoderNLS&& o) noexcept = default;
  constexpr DecoderNLS& operator=(DecoderNLS const& o) noexcept = default;
                


// Fields

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;

 bool __declspec(property(get=__get__mustFlush, put=__set__mustFlush))  _mustFlush;

constexpr void __set__mustFlush(bool value) ;

constexpr bool __get__mustFlush() const;

 bool __declspec(property(get=__get__throwOnOverflow, put=__set__throwOnOverflow))  _throwOnOverflow;

constexpr void __set__throwOnOverflow(bool value) ;

constexpr bool __get__throwOnOverflow() const;

 int32_t __declspec(property(get=__get__bytesUsed, put=__set__bytesUsed))  _bytesUsed;

constexpr void __set__bytesUsed(int32_t value) ;

constexpr int32_t __get__bytesUsed() const;


// Properties

 bool __declspec(property(get=get_MustFlush))  MustFlush;

 bool __declspec(property(get=get_HasState))  HasState;


// Methods

static System::Text::DecoderNLS New_ctor(System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x24c1984 size 0x44 virtual false final false
 void _ctor(System::Text::Encoding encoding) ;

/// @brief Method Reset addr 0x24c3448 size 0x18 virtual true final false
 void Reset() ;

/// @brief Method GetCharCount addr 0x24c3460 size 0x10 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count) ;

/// @brief Method GetCharCount addr 0x24c3470 size 0x1d8 virtual true final false
 int32_t GetCharCount(::ArrayW<uint8_t> bytes, int32_t index, int32_t count, bool flush) ;

/// @brief Method GetCharCount addr 0x24c3648 size 0xf8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, bool flush) ;

/// @brief Method GetChars addr 0x24c3740 size 0x10 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex) ;

/// @brief Method GetChars addr 0x24c3750 size 0x298 virtual true final false
 int32_t GetChars(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, bool flush) ;

/// @brief Method GetChars addr 0x24c39e8 size 0x120 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, bool flush) ;

/// @brief Method Convert addr 0x24c3b08 size 0x2d0 virtual true final false
 void Convert(::ArrayW<uint8_t> bytes, int32_t byteIndex, int32_t byteCount, ::ArrayW<char16_t> chars, int32_t charIndex, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed) ;

/// @brief Method Convert addr 0x24c3dd8 size 0x1ac virtual true final false
 void Convert(void* bytes, int32_t byteCount, void* chars, int32_t charCount, bool flush, ByRef<int32_t> bytesUsed, ByRef<int32_t> charsUsed, ByRef<bool> completed) ;

/// @brief Method get_MustFlush addr 0x24c3f84 size 0x8 virtual false final false
 bool get_MustFlush() ;

/// @brief Method get_HasState addr 0x24c3f8c size 0x8 virtual true final false
 bool get_HasState() ;

/// @brief Method ClearMustFlush addr 0x24c3f94 size 0x8 virtual false final false
 void ClearMustFlush() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::DecoderNLS);
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderNLS, "System.Text", "DecoderNLS");
