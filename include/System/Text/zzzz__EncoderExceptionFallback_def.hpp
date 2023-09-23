#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Text {
class EncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class EncoderExceptionFallback;
}
// Type: System.Text::EncoderExceptionFallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2840))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2837))
// CS Name: System.Text.EncoderExceptionFallback
class CORDL_TYPE EncoderExceptionFallback : public System::Text::EncoderFallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncoderExceptionFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallback", modifiers: " const&", def_value: None }]
constexpr EncoderExceptionFallback(EncoderExceptionFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderExceptionFallback", modifiers: "&&", def_value: None }]
constexpr EncoderExceptionFallback(EncoderExceptionFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderExceptionFallback(void* ptr) noexcept : System::Text::EncoderFallback(ptr) {
}


  constexpr EncoderExceptionFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderExceptionFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderExceptionFallback& operator=(EncoderExceptionFallback&& o) noexcept = default;
  constexpr EncoderExceptionFallback& operator=(EncoderExceptionFallback const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

// Ctor Parameters []
explicit EncoderExceptionFallback() ;

/// @brief Method .ctor addr 0x24c5528 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateFallbackBuffer addr 0x24c5530 size 0x5c virtual true final false
 System::Text::EncoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x24c5594 size 0x8 virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x24c559c size 0x5c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x24c55f8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderExceptionFallback);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderExceptionFallback, "System.Text", "EncoderExceptionFallback");
