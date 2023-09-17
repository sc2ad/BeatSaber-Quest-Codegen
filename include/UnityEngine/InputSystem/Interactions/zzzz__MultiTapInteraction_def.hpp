#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::InputSystem {
template<typename TValue>
class IInputInteraction_1;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
struct ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase;
}
namespace UnityEngine::InputSystem::Interactions {
class MultiTapInteraction;
}
// Type: ::TapPhase
namespace UnityEngine::InputSystem::Interactions {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6730))
// CS Name: UnityEngine.InputSystem.Interactions.MultiTapInteraction::TapPhase
struct CORDL_TYPE ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase(int32_t value__) noexcept;


                    constexpr ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase(____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase const&) = default;
                    constexpr ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase(____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase&&) = default;
                    constexpr ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase& operator=(____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase& operator=(____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase_Unwrapped : int32_t {
__None = 0,
__WaitingForNextRelease = 1,
__WaitingForNextPress = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase const None;

/// @brief Field WaitingForNextRelease offset 0
static ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase const WaitingForNextRelease;

/// @brief Field WaitingForNextPress offset 0
static ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase const WaitingForNextPress;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Interactions
// Type: UnityEngine.InputSystem.Interactions::MultiTapInteraction
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6731))
// CS Name: UnityEngine.InputSystem.Interactions.MultiTapInteraction
class CORDL_TYPE MultiTapInteraction : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using TapPhase = ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase;

/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction_1<float_t>
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction_1<float_t>() const noexcept;

/// @brief Convert operator to ::UnityEngine::InputSystem::IInputInteraction
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MultiTapInteraction() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiTapInteraction", modifiers: " const&", def_value: None }]
constexpr MultiTapInteraction(MultiTapInteraction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiTapInteraction", modifiers: "&&", def_value: None }]
constexpr MultiTapInteraction(MultiTapInteraction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiTapInteraction(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiTapInteraction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiTapInteraction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiTapInteraction& operator=(MultiTapInteraction&& o) noexcept = default;
  constexpr MultiTapInteraction& operator=(MultiTapInteraction const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_tapTime, put=__set_tapTime))  tapTime;

constexpr void __set_tapTime(float_t value) ;

constexpr float_t __get_tapTime() const;

 float_t __declspec(property(get=__get_tapDelay, put=__set_tapDelay))  tapDelay;

constexpr void __set_tapDelay(float_t value) ;

constexpr float_t __get_tapDelay() const;

 int32_t __declspec(property(get=__get_tapCount, put=__set_tapCount))  tapCount;

constexpr void __set_tapCount(int32_t value) ;

constexpr int32_t __get_tapCount() const;

 float_t __declspec(property(get=__get_pressPoint, put=__set_pressPoint))  pressPoint;

constexpr void __set_pressPoint(float_t value) ;

constexpr float_t __get_pressPoint() const;

 ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase __declspec(property(get=__get_m_CurrentTapPhase, put=__set_m_CurrentTapPhase))  m_CurrentTapPhase;

constexpr void __set_m_CurrentTapPhase(::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase value) ;

constexpr ::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase __get_m_CurrentTapPhase() const;

 int32_t __declspec(property(get=__get_m_CurrentTapCount, put=__set_m_CurrentTapCount))  m_CurrentTapCount;

constexpr void __set_m_CurrentTapCount(int32_t value) ;

constexpr int32_t __get_m_CurrentTapCount() const;

 double_t __declspec(property(get=__get_m_CurrentTapStartTime, put=__set_m_CurrentTapStartTime))  m_CurrentTapStartTime;

constexpr void __set_m_CurrentTapStartTime(double_t value) ;

constexpr double_t __get_m_CurrentTapStartTime() const;

 double_t __declspec(property(get=__get_m_LastTapReleaseTime, put=__set_m_LastTapReleaseTime))  m_LastTapReleaseTime;

constexpr void __set_m_LastTapReleaseTime(double_t value) ;

constexpr double_t __get_m_LastTapReleaseTime() const;


// Properties

 float_t __declspec(property(get=get_tapTimeOrDefault))  tapTimeOrDefault;

 float_t __declspec(property(get=get_tapDelayOrDefault))  tapDelayOrDefault;

 float_t __declspec(property(get=get_pressPointOrDefault))  pressPointOrDefault;

 float_t __declspec(property(get=get_releasePointOrDefault))  releasePointOrDefault;


// Methods

/// @brief Method get_tapTimeOrDefault addr 0x2979d68 size 0x70 virtual false final false
 float_t get_tapTimeOrDefault() ;

/// @brief Method get_tapDelayOrDefault addr 0x2979dd8 size 0x70 virtual false final false
 float_t get_tapDelayOrDefault() ;

/// @brief Method get_pressPointOrDefault addr 0x2979e48 size 0x58 virtual false final false
 float_t get_pressPointOrDefault() ;

/// @brief Method get_releasePointOrDefault addr 0x2979ea0 size 0x88 virtual false final false
 float_t get_releasePointOrDefault() ;

/// @brief Method Process addr 0x2979f28 size 0x280 virtual true final true
 void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext> context) ;

/// @brief Method Reset addr 0x297a1a8 size 0xc virtual true final true
 void Reset() ;

// Ctor Parameters []
explicit MultiTapInteraction() ;

/// @brief Method .ctor addr 0x297a1b4 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Interactions
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::____UnityEngine__InputSystem__Interactions__MultiTapInteraction__TapPhase, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction/TapPhase");
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::MultiTapInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::MultiTapInteraction, "UnityEngine.InputSystem.Interactions", "MultiTapInteraction");
