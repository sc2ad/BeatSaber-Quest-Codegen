#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Text {
class EncoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class EncoderFallback;
}
// Type: System.Text::EncoderFallback
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2840))
// CS Name: System.Text.EncoderFallback
class CORDL_TYPE EncoderFallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncoderFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderFallback", modifiers: " const&", def_value: None }]
constexpr EncoderFallback(EncoderFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderFallback", modifiers: "&&", def_value: None }]
constexpr EncoderFallback(EncoderFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderFallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncoderFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderFallback& operator=(EncoderFallback&& o) noexcept = default;
  constexpr EncoderFallback& operator=(EncoderFallback const& o) noexcept = default;
                


// Fields

static System::Text::EncoderFallback __declspec(property(get=__get_s_replacementFallback, put=__set_s_replacementFallback))  s_replacementFallback;

static void __set_s_replacementFallback(System::Text::EncoderFallback value) ;

static System::Text::EncoderFallback __get_s_replacementFallback() ;

static System::Text::EncoderFallback __declspec(property(get=__get_s_exceptionFallback, put=__set_s_exceptionFallback))  s_exceptionFallback;

static void __set_s_exceptionFallback(System::Text::EncoderFallback value) ;

static System::Text::EncoderFallback __get_s_exceptionFallback() ;


// Properties

static System::Text::EncoderFallback __declspec(property(get=get_ReplacementFallback))  ReplacementFallback;

static System::Text::EncoderFallback __declspec(property(get=get_ExceptionFallback))  ExceptionFallback;

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

/// @brief Method get_ReplacementFallback addr 0x24bf98c size 0x9c virtual false final false
static System::Text::EncoderFallback get_ReplacementFallback() ;

/// @brief Method get_ExceptionFallback addr 0x24c5bb8 size 0xa0 virtual false final false
static System::Text::EncoderFallback get_ExceptionFallback() ;

/// @brief Method CreateFallbackBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Text::EncoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_MaxCharCount() ;

static System::Text::EncoderFallback New_ctor() ;

/// @brief Method .ctor addr 0x24c4e94 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderFallback);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderFallback, "System.Text", "EncoderFallback");
