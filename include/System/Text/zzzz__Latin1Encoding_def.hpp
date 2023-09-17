#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncodingNLS_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Text {
class DecoderNLS;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Text {
class EncoderNLS;
}
// Forward declare root types
namespace System::Text {
class Latin1Encoding;
}
// Type: System.Text::Latin1Encoding
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2845))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2847))
// CS Name: System.Text.Latin1Encoding
class CORDL_TYPE Latin1Encoding : public ::System::Text::EncodingNLS {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~Latin1Encoding() = default;

// Ctor Parameters [CppParam { name: "", ty: "Latin1Encoding", modifiers: " const&", def_value: None }]
constexpr Latin1Encoding(Latin1Encoding const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Latin1Encoding", modifiers: "&&", def_value: None }]
constexpr Latin1Encoding(Latin1Encoding&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Latin1Encoding(void* ptr) noexcept : ::System::Text::EncodingNLS(ptr) {
}


  constexpr Latin1Encoding& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Latin1Encoding& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Latin1Encoding& operator=(Latin1Encoding&& o) noexcept = default;
  constexpr Latin1Encoding& operator=(Latin1Encoding const& o) noexcept = default;
                


// Fields

static ::System::Text::Latin1Encoding __declspec(property(get=__get_s_default, put=__set_s_default))  s_default;

static void __set_s_default(::System::Text::Latin1Encoding value) ;

static ::System::Text::Latin1Encoding __get_s_default() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_arrayCharBestFit, put=__set_arrayCharBestFit))  arrayCharBestFit;

static void __set_arrayCharBestFit(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_arrayCharBestFit() ;


// Methods

// Ctor Parameters []
explicit Latin1Encoding() ;

/// @brief Method .ctor addr 0x22cb5d8 size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit Latin1Encoding(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22cb5e4 size 0x4c virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22cb630 size 0xe8 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetByteCount addr 0x22cb718 size 0x1fc virtual true final false
 int32_t GetByteCount(void* chars, int32_t charCount, ::System::Text::EncoderNLS encoder) ;

/// @brief Method GetBytes addr 0x22cb914 size 0x354 virtual true final false
 int32_t GetBytes(void* chars, int32_t charCount, void* bytes, int32_t byteCount, ::System::Text::EncoderNLS encoder) ;

/// @brief Method GetCharCount addr 0x22cbc68 size 0x8 virtual true final false
 int32_t GetCharCount(void* bytes, int32_t count, ::System::Text::DecoderNLS decoder) ;

/// @brief Method GetChars addr 0x22cbc70 size 0x74 virtual true final false
 int32_t GetChars(void* bytes, int32_t byteCount, void* chars, int32_t charCount, ::System::Text::DecoderNLS decoder) ;

/// @brief Method GetMaxByteCount addr 0x22cbce4 size 0x108 virtual true final false
 int32_t GetMaxByteCount(int32_t charCount) ;

/// @brief Method GetMaxCharCount addr 0x22cbdec size 0x104 virtual true final false
 int32_t GetMaxCharCount(int32_t byteCount) ;

/// @brief Method GetBestFitUnicodeToBytesData addr 0x22cbef0 size 0x58 virtual true final false
 ::ArrayW<char16_t> GetBestFitUnicodeToBytesData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::Latin1Encoding);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::Latin1Encoding, "System.Text", "Latin1Encoding");
