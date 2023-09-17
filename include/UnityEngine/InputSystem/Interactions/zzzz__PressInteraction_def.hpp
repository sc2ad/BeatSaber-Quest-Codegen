#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace UnityEngine::InputSystem::Interactions {
struct PressBehavior;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class PressInteraction;
}
// Type: UnityEngine.InputSystem.Interactions::PressInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6732))
// CS Name: UnityEngine.InputSystem.Interactions.PressInteraction
class CORDL_TYPE PressInteraction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PressInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "PressInteraction", modifiers: " const&", def_value: None }]
constexpr PressInteraction(PressInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PressInteraction", modifiers: "&&", def_value: None }]
constexpr PressInteraction(PressInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PressInteraction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PressInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PressInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PressInteraction& operator=(PressInteraction&& o) noexcept = default;
  constexpr PressInteraction& operator=(PressInteraction const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_pressPoint, put=__set_pressPoint))  pressPoint;

constexpr void __set_pressPoint(float_t value) ;

constexpr float_t __get_pressPoint() const;

 ::UnityEngine::InputSystem::Interactions::PressBehavior __declspec(property(get=__get_behavior, put=__set_behavior))  behavior;

constexpr void __set_behavior(::UnityEngine::InputSystem::Interactions::PressBehavior value) ;

constexpr ::UnityEngine::InputSystem::Interactions::PressBehavior __get_behavior() const;

 bool __declspec(property(get=__get_m_WaitingForRelease, put=__set_m_WaitingForRelease))  m_WaitingForRelease;

constexpr void __set_m_WaitingForRelease(bool value) ;

constexpr bool __get_m_WaitingForRelease() const;


// Properties

 float_t __declspec(property(get=get_pressPointOrDefault))  pressPointOrDefault;

 float_t __declspec(property(get=get_releasePointOrDefault))  releasePointOrDefault;


// Methods

/// @brief Method get_pressPointOrDefault addr 0x297a1c4 size 0x58 virtual false final false
 float_t get_pressPointOrDefault() ;

/// @brief Method get_releasePointOrDefault addr 0x297a21c size 0x88 virtual false final false
 float_t get_releasePointOrDefault() ;

/// @brief Method Process addr 0x297a2a4 size 0x3c4 virtual true final true
 void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) ;

/// @brief Method Reset addr 0x297a668 size 0x8 virtual true final true
 void Reset() ;

// Ctor Parameters []
explicit PressInteraction() ;

/// @brief Method .ctor addr 0x297a670 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Interactions
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::PressInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::PressInteraction, "UnityEngine.InputSystem.Interactions", "PressInteraction");
