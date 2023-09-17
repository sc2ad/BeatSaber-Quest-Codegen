#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class Encoding;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class InternalDecoderBestFitFallback;
}
// Type: System.Text::InternalDecoderBestFitFallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2824))
// CS Name: System.Text.InternalDecoderBestFitFallback
class CORDL_TYPE InternalDecoderBestFitFallback : public ::System::Text::DecoderFallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~InternalDecoderBestFitFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallback", modifiers: " const&", def_value: None }]
constexpr InternalDecoderBestFitFallback(InternalDecoderBestFitFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalDecoderBestFitFallback", modifiers: "&&", def_value: None }]
constexpr InternalDecoderBestFitFallback(InternalDecoderBestFitFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalDecoderBestFitFallback(void* ptr) noexcept : ::System::Text::DecoderFallback(ptr) {
}


  constexpr InternalDecoderBestFitFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalDecoderBestFitFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalDecoderBestFitFallback& operator=(InternalDecoderBestFitFallback&& o) noexcept = default;
  constexpr InternalDecoderBestFitFallback& operator=(InternalDecoderBestFitFallback const& o) noexcept = default;
                


// Fields

 ::System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(::System::Text::Encoding value) ;

constexpr ::System::Text::Encoding __get__encoding() const;

 ::ArrayW<char16_t> __declspec(property(get=__get__arrayBestFit, put=__set__arrayBestFit))  _arrayBestFit;

constexpr void __set__arrayBestFit(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get__arrayBestFit() const;

 char16_t __declspec(property(get=__get__cReplacement, put=__set__cReplacement))  _cReplacement;

constexpr void __set__cReplacement(char16_t value) ;

constexpr char16_t __get__cReplacement() const;


// Properties

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

// Ctor Parameters [CppParam { name: "encoding", ty: "::System::Text::Encoding", modifiers: "", def_value: None }]
explicit InternalDecoderBestFitFallback(::System::Text::Encoding encoding) ;

/// @brief Method .ctor addr 0x24c25c4 size 0x30 virtual false final false
 void _ctor(::System::Text::Encoding encoding) ;

/// @brief Method CreateFallbackBuffer addr 0x24c25fc size 0x60 virtual true final false
 ::System::Text::DecoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x24c2784 size 0x8 virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x24c278c size 0xa8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x24c2834 size 0x24 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::InternalDecoderBestFitFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::InternalDecoderBestFitFallback, "System.Text", "InternalDecoderBestFitFallback");
