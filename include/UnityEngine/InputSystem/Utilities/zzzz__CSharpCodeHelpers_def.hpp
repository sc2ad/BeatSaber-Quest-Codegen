#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class CSharpCodeHelpers;
}
// Type: UnityEngine.InputSystem.Utilities::CSharpCodeHelpers
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6746))
// CS Name: UnityEngine.InputSystem.Utilities.CSharpCodeHelpers
class CORDL_TYPE CSharpCodeHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CSharpCodeHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "CSharpCodeHelpers", modifiers: " const&", def_value: None }]
constexpr CSharpCodeHelpers(CSharpCodeHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CSharpCodeHelpers", modifiers: "&&", def_value: None }]
constexpr CSharpCodeHelpers(CSharpCodeHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CSharpCodeHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CSharpCodeHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CSharpCodeHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CSharpCodeHelpers& operator=(CSharpCodeHelpers&& o) noexcept = default;
  constexpr CSharpCodeHelpers& operator=(CSharpCodeHelpers const& o) noexcept = default;
                


// Methods

/// @brief Method IsProperIdentifier addr 0x297c838 size 0x108 virtual false final false
static bool IsProperIdentifier(::StringW name) ;

/// @brief Method IsEmptyOrProperIdentifier addr 0x297c940 size 0x2c virtual false final false
static bool IsEmptyOrProperIdentifier(::StringW name) ;

/// @brief Method IsEmptyOrProperNamespaceName addr 0x297c96c size 0xd8 virtual false final false
static bool IsEmptyOrProperNamespaceName(::StringW name) ;

/// @brief Method MakeIdentifier addr 0x297ca44 size 0x244 virtual false final false
static ::StringW MakeIdentifier(::StringW name, ::StringW suffix) ;

/// @brief Method MakeTypeName addr 0x297cc88 size 0x10c virtual false final false
static ::StringW MakeTypeName(::StringW name, ::StringW suffix) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Utilities
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::CSharpCodeHelpers, "UnityEngine.InputSystem.Utilities", "CSharpCodeHelpers");
