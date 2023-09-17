#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
namespace {
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ImmediateModeException;
}
// Type: UnityEngine.UIElements::ImmediateModeException
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6943))
// CS Name: UnityEngine.UIElements.ImmediateModeException
class CORDL_TYPE ImmediateModeException : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ImmediateModeException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateModeException", modifiers: " const&", def_value: None }]
constexpr ImmediateModeException(ImmediateModeException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ImmediateModeException", modifiers: "&&", def_value: None }]
constexpr ImmediateModeException(ImmediateModeException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ImmediateModeException(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr ImmediateModeException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ImmediateModeException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ImmediateModeException& operator=(ImmediateModeException&& o) noexcept = default;
  constexpr ImmediateModeException& operator=(ImmediateModeException const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "inner", ty: "::System::Exception", modifiers: "", def_value: None }]
explicit ImmediateModeException(::System::Exception inner) ;

/// @brief Method .ctor addr 0x2c4f418 size 0x80 virtual false final false
 void _ctor(::System::Exception inner) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::ImmediateModeException);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ImmediateModeException, "UnityEngine.UIElements", "ImmediateModeException");
