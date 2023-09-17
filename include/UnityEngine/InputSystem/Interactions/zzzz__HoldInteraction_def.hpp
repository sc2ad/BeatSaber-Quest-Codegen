#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class HoldInteraction;
}
// Type: UnityEngine.InputSystem.Interactions::HoldInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6729))
// CS Name: UnityEngine.InputSystem.Interactions.HoldInteraction
class CORDL_TYPE HoldInteraction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HoldInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoldInteraction", modifiers: " const&", def_value: None }]
constexpr HoldInteraction(HoldInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoldInteraction", modifiers: "&&", def_value: None }]
constexpr HoldInteraction(HoldInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoldInteraction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoldInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoldInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoldInteraction& operator=(HoldInteraction&& o) noexcept = default;
  constexpr HoldInteraction& operator=(HoldInteraction const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 float_t __declspec(property(get=__get_pressPoint, put=__set_pressPoint))  pressPoint;

constexpr void __set_pressPoint(float_t value) ;

constexpr float_t __get_pressPoint() const;

 double_t __declspec(property(get=__get_m_TimePressed, put=__set_m_TimePressed))  m_TimePressed;

constexpr void __set_m_TimePressed(double_t value) ;

constexpr double_t __get_m_TimePressed() const;


// Properties

 float_t __declspec(property(get=get_durationOrDefault))  durationOrDefault;

 float_t __declspec(property(get=get_pressPointOrDefault))  pressPointOrDefault;


// Methods

/// @brief Method get_durationOrDefault addr 0x2979aec size 0x70 virtual false final false
 float_t get_durationOrDefault() ;

/// @brief Method get_pressPointOrDefault addr 0x2979b5c size 0x58 virtual false final false
 float_t get_pressPointOrDefault() ;

/// @brief Method Process addr 0x2979bb4 size 0x1a4 virtual true final true
 void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) ;

/// @brief Method Reset addr 0x2979d58 size 0x8 virtual true final true
 void Reset() ;

// Ctor Parameters []
explicit HoldInteraction() ;

/// @brief Method .ctor addr 0x2979d60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Interactions
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::HoldInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::HoldInteraction, "UnityEngine.InputSystem.Interactions", "HoldInteraction");
