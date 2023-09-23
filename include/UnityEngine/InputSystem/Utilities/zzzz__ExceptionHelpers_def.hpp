#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class ExceptionHelpers;
}
// Type: UnityEngine.InputSystem.Utilities::ExceptionHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6749))
// CS Name: UnityEngine.InputSystem.Utilities.ExceptionHelpers
class CORDL_TYPE ExceptionHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExceptionHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: " const&", def_value: None }]
constexpr ExceptionHelpers(ExceptionHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExceptionHelpers", modifiers: "&&", def_value: None }]
constexpr ExceptionHelpers(ExceptionHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExceptionHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ExceptionHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExceptionHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExceptionHelpers& operator=(ExceptionHelpers&& o) noexcept = default;
  constexpr ExceptionHelpers& operator=(ExceptionHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method IsExceptionIndicatingBugInCode addr 0x297d088 size 0xd8 virtual false final false
static bool IsExceptionIndicatingBugInCode(System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
NEED_NO_BOX(UnityEngine::InputSystem::Utilities::ExceptionHelpers);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Utilities::ExceptionHelpers, "UnityEngine.InputSystem.Utilities", "ExceptionHelpers");
