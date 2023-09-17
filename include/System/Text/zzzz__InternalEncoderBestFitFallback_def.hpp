#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Text {
class InternalEncoderBestFitFallback;
}
// Type: System.Text::InternalEncoderBestFitFallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2840))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2835))
// CS Name: System.Text.InternalEncoderBestFitFallback
class CORDL_TYPE InternalEncoderBestFitFallback : public ::System::Text::EncoderFallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InternalEncoderBestFitFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallback", modifiers: " const&", def_value: None }]
constexpr InternalEncoderBestFitFallback(InternalEncoderBestFitFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalEncoderBestFitFallback", modifiers: "&&", def_value: None }]
constexpr InternalEncoderBestFitFallback(InternalEncoderBestFitFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalEncoderBestFitFallback(void* ptr) noexcept : ::System::Text::EncoderFallback(ptr) {
}


  constexpr InternalEncoderBestFitFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalEncoderBestFitFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalEncoderBestFitFallback& operator=(InternalEncoderBestFitFallback&& o) noexcept = default;
  constexpr InternalEncoderBestFitFallback& operator=(InternalEncoderBestFitFallback const& o) noexcept = default;
                


// Fields

 ::System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get__encoding() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__arrayBestFit, put=__set__arrayBestFit))  _arrayBestFit;

constexpr void __set__arrayBestFit(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__arrayBestFit() const;


// Properties

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
explicit InternalEncoderBestFitFallback(::System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x24c4e6c size 0x28 virtual false final false
 void _ctor(::System::Text::Encoding encoding) ;

/// @brief Method CreateFallbackBuffer addr 0x24c4e9c size 0x60 virtual true final false
 ::System::Text::EncoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x24c5024 size 0x8 virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x24c502c size 0xc4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x24c50f0 size 0x24 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::InternalEncoderBestFitFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalEncoderBestFitFallback, "System.Text", "InternalEncoderBestFitFallback");
