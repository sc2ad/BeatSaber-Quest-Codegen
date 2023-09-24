#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class DecoderExceptionFallback;
}
// Type: System.Text::DecoderExceptionFallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2826))
// CS Name: System.Text.DecoderExceptionFallback
class CORDL_TYPE DecoderExceptionFallback : public System::Text::DecoderFallback {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DecoderExceptionFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallback", modifiers: " const&", def_value: None }]
constexpr DecoderExceptionFallback(DecoderExceptionFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderExceptionFallback", modifiers: "&&", def_value: None }]
constexpr DecoderExceptionFallback(DecoderExceptionFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderExceptionFallback(void* ptr) noexcept : System::Text::DecoderFallback(ptr) {
}


  constexpr DecoderExceptionFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderExceptionFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderExceptionFallback& operator=(DecoderExceptionFallback&& o) noexcept = default;
  constexpr DecoderExceptionFallback& operator=(DecoderExceptionFallback const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

static System::Text::DecoderExceptionFallback New_ctor() ;

/// @brief Method .ctor addr 0x24c2ae0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method CreateFallbackBuffer addr 0x24c2ae8 size 0x5c virtual true final false
 System::Text::DecoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x24c2b4c size 0x8 virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x24c2b54 size 0x5c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x24c2bb0 size 0x8 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::DecoderExceptionFallback);
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderExceptionFallback, "System.Text", "DecoderExceptionFallback");
