#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__GameplayModifiers__EnergyType;
}
namespace System {
class Action;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class IGameEnergyCounter;
}
// Type: ::IGameEnergyCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5358))
// CS Name: IGameEnergyCounter
class CORDL_TYPE IGameEnergyCounter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGameEnergyCounter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGameEnergyCounter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isInitialized))  isInitialized;

 float_t __declspec(property(get=get_energy))  energy;

 int32_t __declspec(property(get=get_batteryEnergy))  batteryEnergy;

 int32_t __declspec(property(get=get_batteryLives))  batteryLives;

 ::GlobalNamespace::____GlobalNamespace__GameplayModifiers__EnergyType __declspec(property(get=get_energyType))  energyType;

 bool __declspec(property(get=get_noFail))  noFail;

 bool __declspec(property(get=get_instaFail))  instaFail;

 bool __declspec(property(get=get_failOnSaberClash))  failOnSaberClash;


// Methods

/// @brief Method add_didInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didInitEvent(::System::Action value) ;

/// @brief Method remove_didInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didInitEvent(::System::Action value) ;

/// @brief Method add_gameEnergyDidReach0Event addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_gameEnergyDidReach0Event(::System::Action value) ;

/// @brief Method remove_gameEnergyDidReach0Event addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_gameEnergyDidReach0Event(::System::Action value) ;

/// @brief Method add_gameEnergyDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_gameEnergyDidChangeEvent(::System::Action_1<float_t> value) ;

/// @brief Method remove_gameEnergyDidChangeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_gameEnergyDidChangeEvent(::System::Action_1<float_t> value) ;

/// @brief Method get_isInitialized addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isInitialized() ;

/// @brief Method get_energy addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t get_energy() ;

/// @brief Method get_batteryEnergy addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_batteryEnergy() ;

/// @brief Method get_batteryLives addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_batteryLives() ;

/// @brief Method get_energyType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::____GlobalNamespace__GameplayModifiers__EnergyType get_energyType() ;

/// @brief Method get_noFail addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_noFail() ;

/// @brief Method get_instaFail addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_instaFail() ;

/// @brief Method get_failOnSaberClash addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_failOnSaberClash() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IGameEnergyCounter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGameEnergyCounter, "", "IGameEnergyCounter");
