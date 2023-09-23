#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class IGameEnergyCounter;
}
namespace GlobalNamespace {
class BeatmapObjectManager;
}
namespace GlobalNamespace {
class NoteController;
}
namespace GlobalNamespace {
class SaberClashChecker;
}
namespace GlobalNamespace {
class PlayerHeadAndObstacleInteraction;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayModifiers__EnergyType;
}
namespace System {
class Action;
}
namespace GlobalNamespace {
struct NoteCutInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class GameEnergyCounter;
}
namespace GlobalNamespace {
class GlobalNamespace__GameEnergyCounter__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5356))
// CS Name: GameEnergyCounter::InitData
class CORDL_TYPE GlobalNamespace__GameEnergyCounter__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__GameEnergyCounter__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameEnergyCounter__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameEnergyCounter__InitData(GlobalNamespace__GameEnergyCounter__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameEnergyCounter__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameEnergyCounter__InitData(GlobalNamespace__GameEnergyCounter__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameEnergyCounter__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameEnergyCounter__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameEnergyCounter__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameEnergyCounter__InitData& operator=(GlobalNamespace__GameEnergyCounter__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__GameEnergyCounter__InitData& operator=(GlobalNamespace__GameEnergyCounter__InitData const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __declspec(property(get=__get_energyType, put=__set_energyType))  energyType;

constexpr void __set_energyType(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType value) ;

constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __get_energyType() const;

 bool __declspec(property(get=__get_noFail, put=__set_noFail))  noFail;

constexpr void __set_noFail(bool value) ;

constexpr bool __get_noFail() const;

 bool __declspec(property(get=__get_instaFail, put=__set_instaFail))  instaFail;

constexpr void __set_instaFail(bool value) ;

constexpr bool __get_instaFail() const;

 bool __declspec(property(get=__get_failOnSaberClash, put=__set_failOnSaberClash))  failOnSaberClash;

constexpr void __set_failOnSaberClash(bool value) ;

constexpr bool __get_failOnSaberClash() const;


// Methods

// Ctor Parameters [CppParam { name: "energyType", ty: "GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType", modifiers: "", def_value: None }, CppParam { name: "noFail", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "instaFail", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "failOnSaberClash", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__GameEnergyCounter__InitData(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash) ;

/// @brief Method .ctor addr 0x2107e98 size 0x48 virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameEnergyCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5357))
// CS Name: GameEnergyCounter
class CORDL_TYPE GameEnergyCounter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__GameEnergyCounter__InitData;

/// @brief Convert operator to GlobalNamespace::IGameEnergyCounter
constexpr operator  GlobalNamespace::IGameEnergyCounter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~GameEnergyCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameEnergyCounter", modifiers: " const&", def_value: None }]
constexpr GameEnergyCounter(GameEnergyCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameEnergyCounter", modifiers: "&&", def_value: None }]
constexpr GameEnergyCounter(GameEnergyCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameEnergyCounter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameEnergyCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameEnergyCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameEnergyCounter& operator=(GameEnergyCounter&& o) noexcept = default;
  constexpr GameEnergyCounter& operator=(GameEnergyCounter const& o) noexcept = default;
                


// Fields

/// @brief Field kBadNoteEnergyDrain offset 0
static constexpr float_t  kBadNoteEnergyDrain{0.1};

/// @brief Field kBadBurstSliderElementEnergyDrain offset 0
static constexpr float_t  kBadBurstSliderElementEnergyDrain{0.025};

/// @brief Field kMissNoteEnergyDrain offset 0
static constexpr float_t  kMissNoteEnergyDrain{0.15};

/// @brief Field kMissBurstSliderElementEnergyDrain offset 0
static constexpr float_t  kMissBurstSliderElementEnergyDrain{0.03};

/// @brief Field kHitBombEnergyDrain offset 0
static constexpr float_t  kHitBombEnergyDrain{0.15};

/// @brief Field kGoodNoteEnergyCharge offset 0
static constexpr float_t  kGoodNoteEnergyCharge{0.01};

/// @brief Field kGoodBurstSliderElementCharge offset 0
static constexpr float_t  kGoodBurstSliderElementCharge{0.002};

/// @brief Field kObstacleEnergyDrainPerSecond offset 0
static constexpr float_t  kObstacleEnergyDrainPerSecond{1.3};

 int32_t __declspec(property(get=__get__batteryLives, put=__set__batteryLives))  _batteryLives;

constexpr void __set__batteryLives(int32_t value) ;

constexpr int32_t __get__batteryLives() const;

 GlobalNamespace::GlobalNamespace__GameEnergyCounter__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__GameEnergyCounter__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__GameEnergyCounter__InitData __get__initData() const;

 GlobalNamespace::SaberClashChecker __declspec(property(get=__get__saberClashChecker, put=__set__saberClashChecker))  _saberClashChecker;

constexpr void __set__saberClashChecker(GlobalNamespace::SaberClashChecker value) ;

constexpr GlobalNamespace::SaberClashChecker __get__saberClashChecker() const;

 GlobalNamespace::BeatmapObjectManager __declspec(property(get=__get__beatmapObjectManager, put=__set__beatmapObjectManager))  _beatmapObjectManager;

constexpr void __set__beatmapObjectManager(GlobalNamespace::BeatmapObjectManager value) ;

constexpr GlobalNamespace::BeatmapObjectManager __get__beatmapObjectManager() const;

 GlobalNamespace::PlayerHeadAndObstacleInteraction __declspec(property(get=__get__playerHeadAndObstacleInteraction, put=__set__playerHeadAndObstacleInteraction))  _playerHeadAndObstacleInteraction;

constexpr void __set__playerHeadAndObstacleInteraction(GlobalNamespace::PlayerHeadAndObstacleInteraction value) ;

constexpr GlobalNamespace::PlayerHeadAndObstacleInteraction __get__playerHeadAndObstacleInteraction() const;

 System::Action __declspec(property(get=__get_didInitEvent, put=__set_didInitEvent))  didInitEvent;

constexpr void __set_didInitEvent(System::Action value) ;

constexpr System::Action __get_didInitEvent() const;

 System::Action __declspec(property(get=__get_gameEnergyDidReach0Event, put=__set_gameEnergyDidReach0Event))  gameEnergyDidReach0Event;

constexpr void __set_gameEnergyDidReach0Event(System::Action value) ;

constexpr System::Action __get_gameEnergyDidReach0Event() const;

 System::Action_1<float_t> __declspec(property(get=__get_gameEnergyDidChangeEvent, put=__set_gameEnergyDidChangeEvent))  gameEnergyDidChangeEvent;

constexpr void __set_gameEnergyDidChangeEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_gameEnergyDidChangeEvent() const;

 float_t __declspec(property(get=__get__energy_k__BackingField, put=__set__energy_k__BackingField))  _energy_k__BackingField;

constexpr void __set__energy_k__BackingField(float_t value) ;

constexpr float_t __get__energy_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __declspec(property(get=__get__energyType_k__BackingField, put=__set__energyType_k__BackingField))  _energyType_k__BackingField;

constexpr void __set__energyType_k__BackingField(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType value) ;

constexpr GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __get__energyType_k__BackingField() const;

 bool __declspec(property(get=__get__noFail_k__BackingField, put=__set__noFail_k__BackingField))  _noFail_k__BackingField;

constexpr void __set__noFail_k__BackingField(bool value) ;

constexpr bool __get__noFail_k__BackingField() const;

 bool __declspec(property(get=__get__instaFail_k__BackingField, put=__set__instaFail_k__BackingField))  _instaFail_k__BackingField;

constexpr void __set__instaFail_k__BackingField(bool value) ;

constexpr bool __get__instaFail_k__BackingField() const;

 bool __declspec(property(get=__get__failOnSaberClash_k__BackingField, put=__set__failOnSaberClash_k__BackingField))  _failOnSaberClash_k__BackingField;

constexpr void __set__failOnSaberClash_k__BackingField(bool value) ;

constexpr bool __get__failOnSaberClash_k__BackingField() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 bool __declspec(property(get=__get__didReach0Energy, put=__set__didReach0Energy))  _didReach0Energy;

constexpr void __set__didReach0Energy(bool value) ;

constexpr bool __get__didReach0Energy() const;

 float_t __declspec(property(get=__get__nextFrameEnergyChange, put=__set__nextFrameEnergyChange))  _nextFrameEnergyChange;

constexpr void __set__nextFrameEnergyChange(float_t value) ;

constexpr float_t __get__nextFrameEnergyChange() const;


// Properties

 bool __declspec(property(get=get_isInitialized))  isInitialized;

 float_t __declspec(property(get=get_energy, put=set_energy))  energy;

 int32_t __declspec(property(get=get_batteryEnergy))  batteryEnergy;

 int32_t __declspec(property(get=get_batteryLives))  batteryLives;

 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType __declspec(property(get=get_energyType, put=set_energyType))  energyType;

 bool __declspec(property(get=get_noFail, put=set_noFail))  noFail;

 bool __declspec(property(get=get_instaFail, put=set_instaFail))  instaFail;

 bool __declspec(property(get=get_failOnSaberClash, put=set_failOnSaberClash))  failOnSaberClash;


// Methods

/// @brief Method add_didInitEvent addr 0x2107238 size 0x9c virtual true final true
 void add_didInitEvent(System::Action value) ;

/// @brief Method remove_didInitEvent addr 0x21072d4 size 0x9c virtual true final true
 void remove_didInitEvent(System::Action value) ;

/// @brief Method add_gameEnergyDidReach0Event addr 0x2107370 size 0x9c virtual true final true
 void add_gameEnergyDidReach0Event(System::Action value) ;

/// @brief Method remove_gameEnergyDidReach0Event addr 0x210740c size 0x9c virtual true final true
 void remove_gameEnergyDidReach0Event(System::Action value) ;

/// @brief Method add_gameEnergyDidChangeEvent addr 0x21074a8 size 0xb0 virtual true final true
 void add_gameEnergyDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_gameEnergyDidChangeEvent addr 0x2107558 size 0xb0 virtual true final true
 void remove_gameEnergyDidChangeEvent(System::Action_1<float_t> value) ;

/// @brief Method get_isInitialized addr 0x2107608 size 0x8 virtual true final true
 bool get_isInitialized() ;

/// @brief Method get_energy addr 0x2107610 size 0x8 virtual true final true
 float_t get_energy() ;

/// @brief Method set_energy addr 0x2107618 size 0x8 virtual false final false
 void set_energy(float_t value) ;

/// @brief Method get_batteryEnergy addr 0x2107620 size 0x80 virtual true final true
 int32_t get_batteryEnergy() ;

/// @brief Method get_batteryLives addr 0x21076a0 size 0x8 virtual true final true
 int32_t get_batteryLives() ;

/// @brief Method get_energyType addr 0x21076a8 size 0x8 virtual true final true
 GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType get_energyType() ;

/// @brief Method set_energyType addr 0x21076b0 size 0x8 virtual false final false
 void set_energyType(GlobalNamespace::GlobalNamespace__GameplayModifiers__EnergyType value) ;

/// @brief Method get_noFail addr 0x21076b8 size 0x8 virtual true final true
 bool get_noFail() ;

/// @brief Method set_noFail addr 0x21076c0 size 0xc virtual false final false
 void set_noFail(bool value) ;

/// @brief Method get_instaFail addr 0x21076cc size 0x8 virtual true final true
 bool get_instaFail() ;

/// @brief Method set_instaFail addr 0x21076d4 size 0xc virtual false final false
 void set_instaFail(bool value) ;

/// @brief Method get_failOnSaberClash addr 0x21076e0 size 0x8 virtual true final true
 bool get_failOnSaberClash() ;

/// @brief Method set_failOnSaberClash addr 0x21076e8 size 0xc virtual false final false
 void set_failOnSaberClash(bool value) ;

/// @brief Method Start addr 0x21076f4 size 0x194 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2107888 size 0x104 virtual false final false
 void OnDestroy() ;

/// @brief Method LateUpdate addr 0x210798c size 0x108 virtual false final false
 void LateUpdate() ;

/// @brief Method HandleNoteWasCut addr 0x2107d38 size 0xe4 virtual false final false
 void HandleNoteWasCut(GlobalNamespace::NoteController noteController, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) ;

/// @brief Method HandleNoteWasMissed addr 0x2107e1c size 0x64 virtual false final false
 void HandleNoteWasMissed(GlobalNamespace::NoteController noteController) ;

/// @brief Method ProcessEnergyChange addr 0x2107ae4 size 0xf0 virtual false final false
 void ProcessEnergyChange(float_t energyChange) ;

// Ctor Parameters []
explicit GameEnergyCounter() ;

/// @brief Method .ctor addr 0x2107e80 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameEnergyCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameEnergyCounter, "", "GameEnergyCounter");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameEnergyCounter__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameEnergyCounter__InitData, "", "GameEnergyCounter/InitData");
