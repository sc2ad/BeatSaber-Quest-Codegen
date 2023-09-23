#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Text {
class EncoderFallbackException;
}
// Type: System.Text::EncoderFallbackException
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2839))
// CS Name: System.Text.EncoderFallbackException
class CORDL_TYPE EncoderFallbackException : public System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~EncoderFallbackException() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackException", modifiers: " const&", def_value: None }]
constexpr EncoderFallbackException(EncoderFallbackException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderFallbackException", modifiers: "&&", def_value: None }]
constexpr EncoderFallbackException(EncoderFallbackException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderFallbackException(void* ptr) noexcept : System::ArgumentException(ptr) {
}


  constexpr EncoderFallbackException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderFallbackException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderFallbackException& operator=(EncoderFallbackException&& o) noexcept = default;
  constexpr EncoderFallbackException& operator=(EncoderFallbackException const& o) noexcept = default;
                


// Fields

 char16_t __declspec(property(get=__get__charUnknown, put=__set__charUnknown))  _charUnknown;

constexpr void __set__charUnknown(char16_t value) ;

constexpr char16_t __get__charUnknown() const;

 char16_t __declspec(property(get=__get__charUnknownHigh, put=__set__charUnknownHigh))  _charUnknownHigh;

constexpr void __set__charUnknownHigh(char16_t value) ;

constexpr char16_t __get__charUnknownHigh() const;

 char16_t __declspec(property(get=__get__charUnknownLow, put=__set__charUnknownLow))  _charUnknownLow;

constexpr void __set__charUnknownLow(char16_t value) ;

constexpr char16_t __get__charUnknownLow() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;


// Methods

// Ctor Parameters []
explicit EncoderFallbackException() ;

/// @brief Method .ctor addr 0x24c5b54 size 0x5c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "charUnknown", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit EncoderFallbackException(::StringW message, char16_t charUnknown, int32_t index) ;

/// @brief Method .ctor addr 0x24c56b4 size 0x30 virtual false final false
 void _ctor(::StringW message, char16_t charUnknown, int32_t index) ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "charUnknownHigh", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "charUnknownLow", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit EncoderFallbackException(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) ;

/// @brief Method .ctor addr 0x24c5944 size 0x1f8 virtual false final false
 void _ctor(::StringW message, char16_t charUnknownHigh, char16_t charUnknownLow, int32_t index) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit EncoderFallbackException(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x24c5bb0 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderFallbackException);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallbackException, "System.Text", "EncoderFallbackException");
