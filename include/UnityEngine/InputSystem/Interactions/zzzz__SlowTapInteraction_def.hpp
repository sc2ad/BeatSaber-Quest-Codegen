#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class SlowTapInteraction;
}
// Type: UnityEngine.InputSystem.Interactions::SlowTapInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6734))
// CS Name: UnityEngine.InputSystem.Interactions.SlowTapInteraction
class CORDL_TYPE SlowTapInteraction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SlowTapInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "SlowTapInteraction", modifiers: " const&", def_value: None }]
constexpr SlowTapInteraction(SlowTapInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SlowTapInteraction", modifiers: "&&", def_value: None }]
constexpr SlowTapInteraction(SlowTapInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SlowTapInteraction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SlowTapInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SlowTapInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SlowTapInteraction& operator=(SlowTapInteraction&& o) noexcept = default;
  constexpr SlowTapInteraction& operator=(SlowTapInteraction const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 float_t __declspec(property(get=__get_pressPoint, put=__set_pressPoint))  pressPoint;

constexpr void __set_pressPoint(float_t value) ;

constexpr float_t __get_pressPoint() const;

 double_t __declspec(property(get=__get_m_SlowTapStartTime, put=__set_m_SlowTapStartTime))  m_SlowTapStartTime;

constexpr void __set_m_SlowTapStartTime(double_t value) ;

constexpr double_t __get_m_SlowTapStartTime() const;


// Properties

 float_t __declspec(property(get=get_durationOrDefault))  durationOrDefault;

 float_t __declspec(property(get=get_pressPointOrDefault))  pressPointOrDefault;


// Methods

/// @brief Method get_durationOrDefault addr 0x297a678 size 0x70 virtual false final false
 float_t get_durationOrDefault() ;

/// @brief Method get_pressPointOrDefault addr 0x297a6e8 size 0x58 virtual false final false
 float_t get_pressPointOrDefault() ;

/// @brief Method Process addr 0x297a740 size 0x168 virtual true final true
 void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) ;

/// @brief Method Reset addr 0x297a8a8 size 0x8 virtual true final true
 void Reset() ;

// Ctor Parameters []
explicit SlowTapInteraction() ;

/// @brief Method .ctor addr 0x297a8b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Interactions
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::SlowTapInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::SlowTapInteraction, "UnityEngine.InputSystem.Interactions", "SlowTapInteraction");
