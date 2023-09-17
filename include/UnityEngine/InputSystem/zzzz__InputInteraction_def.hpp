#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Utilities {
struct TypeTable;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class InputInteraction;
}
// Type: UnityEngine.InputSystem::InputInteraction
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6214))
// CS Name: UnityEngine.InputSystem.InputInteraction
class CORDL_TYPE InputInteraction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputInteraction", modifiers: " const&", def_value: None }]
constexpr InputInteraction(InputInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputInteraction", modifiers: "&&", def_value: None }]
constexpr InputInteraction(InputInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputInteraction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputInteraction& operator=(InputInteraction&& o) noexcept = default;
  constexpr InputInteraction& operator=(InputInteraction const& o) noexcept = default;
                


// Fields

static ::UnityEngine::InputSystem::Utilities::TypeTable __declspec(property(get=__get_s_Interactions, put=__set_s_Interactions))  s_Interactions;

static void __set_s_Interactions(::UnityEngine::InputSystem::Utilities::TypeTable value) ;

static ::UnityEngine::InputSystem::Utilities::TypeTable __get_s_Interactions() ;


// Methods

/// @brief Method GetValueType addr 0x28a3b58 size 0xf4 virtual false final false
static ::System::Type GetValueType(::System::Type interactionType) ;

/// @brief Method GetDisplayName addr 0x28a3c4c size 0x104 virtual false final false
static ::StringW GetDisplayName(::StringW interaction) ;

/// @brief Method GetDisplayName addr 0x28a3d50 size 0x198 virtual false final false
static ::StringW GetDisplayName(::System::Type interactionType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::InputInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::InputInteraction, "UnityEngine.InputSystem", "InputInteraction");
