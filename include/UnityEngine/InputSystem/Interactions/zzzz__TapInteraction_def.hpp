#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class TapInteraction;
}
// Type: UnityEngine.InputSystem.Interactions::TapInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6735))
// CS Name: UnityEngine.InputSystem.Interactions.TapInteraction
class CORDL_TYPE TapInteraction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::InputSystem::IInputInteraction
constexpr operator  UnityEngine::InputSystem::IInputInteraction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TapInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "TapInteraction", modifiers: " const&", def_value: None }]
constexpr TapInteraction(TapInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TapInteraction", modifiers: "&&", def_value: None }]
constexpr TapInteraction(TapInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TapInteraction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TapInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TapInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TapInteraction& operator=(TapInteraction&& o) noexcept = default;
  constexpr TapInteraction& operator=(TapInteraction const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_duration, put=__set_duration))  duration;

constexpr void __set_duration(float_t value) ;

constexpr float_t __get_duration() const;

 float_t __declspec(property(get=__get_pressPoint, put=__set_pressPoint))  pressPoint;

constexpr void __set_pressPoint(float_t value) ;

constexpr float_t __get_pressPoint() const;

 double_t __declspec(property(get=__get_m_TapStartTime, put=__set_m_TapStartTime))  m_TapStartTime;

constexpr void __set_m_TapStartTime(double_t value) ;

constexpr double_t __get_m_TapStartTime() const;


// Properties

 float_t __declspec(property(get=get_durationOrDefault))  durationOrDefault;

 float_t __declspec(property(get=get_pressPointOrDefault))  pressPointOrDefault;

 float_t __declspec(property(get=get_releasePointOrDefault))  releasePointOrDefault;


// Methods

/// @brief Method get_durationOrDefault addr 0x297a8b8 size 0x70 virtual false final false
 float_t get_durationOrDefault() ;

/// @brief Method get_pressPointOrDefault addr 0x297a928 size 0x58 virtual false final false
 float_t get_pressPointOrDefault() ;

/// @brief Method get_releasePointOrDefault addr 0x297a980 size 0x88 virtual false final false
 float_t get_releasePointOrDefault() ;

/// @brief Method Process addr 0x297aa08 size 0x160 virtual true final true
 void Process(ByRef<UnityEngine::InputSystem::InputInteractionContext> context) ;

/// @brief Method Reset addr 0x297ab68 size 0x8 virtual true final true
 void Reset() ;

static UnityEngine::InputSystem::Interactions::TapInteraction New_ctor() ;

/// @brief Method .ctor addr 0x297ab70 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Interactions
NEED_NO_BOX(UnityEngine::InputSystem::Interactions::TapInteraction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Interactions::TapInteraction, "UnityEngine.InputSystem.Interactions", "TapInteraction");
