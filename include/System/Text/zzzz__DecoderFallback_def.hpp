#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class DecoderFallback;
}
// Type: System.Text::DecoderFallback
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2829))
// CS Name: System.Text.DecoderFallback
class CORDL_TYPE DecoderFallback : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DecoderFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallback", modifiers: " const&", def_value: None }]
constexpr DecoderFallback(DecoderFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderFallback", modifiers: "&&", def_value: None }]
constexpr DecoderFallback(DecoderFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderFallback(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DecoderFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderFallback& operator=(DecoderFallback&& o) noexcept = default;
  constexpr DecoderFallback& operator=(DecoderFallback const& o) noexcept = default;
                


// Fields

static ::System::Text::DecoderFallback __declspec(property(get=__get_s_replacementFallback, put=__set_s_replacementFallback))  s_replacementFallback;

static void __set_s_replacementFallback(::System::Text::DecoderFallback value) ;

static ::System::Text::DecoderFallback __get_s_replacementFallback() ;

static ::System::Text::DecoderFallback __declspec(property(get=__get_s_exceptionFallback, put=__set_s_exceptionFallback))  s_exceptionFallback;

static void __set_s_exceptionFallback(::System::Text::DecoderFallback value) ;

static ::System::Text::DecoderFallback __get_s_exceptionFallback() ;


// Properties

static ::System::Text::DecoderFallback __declspec(property(get=get_ReplacementFallback))  ReplacementFallback;

static ::System::Text::DecoderFallback __declspec(property(get=get_ExceptionFallback))  ExceptionFallback;

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

/// @brief Method get_ReplacementFallback addr 0x24bfa28 size 0x9c virtual false final false
static ::System::Text::DecoderFallback get_ReplacementFallback() ;

/// @brief Method get_ExceptionFallback addr 0x24c2e80 size 0xa4 virtual false final false
static ::System::Text::DecoderFallback get_ExceptionFallback() ;

/// @brief Method CreateFallbackBuffer addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Text::DecoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_MaxCharCount() ;

// Ctor Parameters []
explicit DecoderFallback() ;

/// @brief Method .ctor addr 0x24c25f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
} // end anonymous namespace
NEED_NO_BOX(::System::Text::DecoderFallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Text::DecoderFallback, "System.Text", "DecoderFallback");
