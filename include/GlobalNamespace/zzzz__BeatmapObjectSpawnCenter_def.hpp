#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance;
}
// Type: ::PlayerCountToDistance
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4833))
// CS Name: BeatmapObjectSpawnCenter::PlayerCountToDistance
class CORDL_TYPE GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance(GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance(GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance& operator=(GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance& operator=(GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__playerCount, put=__set__playerCount))  _playerCount;

constexpr void __set__playerCount(int32_t value) ;

constexpr int32_t __get__playerCount() const;

 float_t __declspec(property(get=__get__distance, put=__set__distance))  _distance;

constexpr void __set__distance(float_t value) ;

constexpr float_t __get__distance() const;


// Properties

 int32_t __declspec(property(get=get_playerCount))  playerCount;

 float_t __declspec(property(get=get_distance))  distance;


// Methods

/// @brief Method get_playerCount addr 0x2235bec size 0x8 virtual false final false
 int32_t get_playerCount() ;

/// @brief Method get_distance addr 0x2235bf4 size 0x8 virtual false final false
 float_t get_distance() ;

// Ctor Parameters []
explicit GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance() ;

/// @brief Method .ctor addr 0x2235bfc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapObjectSpawnCenter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4834))
// CS Name: BeatmapObjectSpawnCenter
class CORDL_TYPE BeatmapObjectSpawnCenter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using PlayerCountToDistance = GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapObjectSpawnCenter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter", modifiers: " const&", def_value: None }]
constexpr BeatmapObjectSpawnCenter(BeatmapObjectSpawnCenter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapObjectSpawnCenter", modifiers: "&&", def_value: None }]
constexpr BeatmapObjectSpawnCenter(BeatmapObjectSpawnCenter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapObjectSpawnCenter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapObjectSpawnCenter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapObjectSpawnCenter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapObjectSpawnCenter& operator=(BeatmapObjectSpawnCenter&& o) noexcept = default;
  constexpr BeatmapObjectSpawnCenter& operator=(BeatmapObjectSpawnCenter const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance> __declspec(property(get=__get__distances, put=__set__distances))  _distances;

constexpr void __set__distances(::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance> __get__distances() const;

 float_t __declspec(property(get=__get__defaultDistnace, put=__set__defaultDistnace))  _defaultDistnace;

constexpr void __set__defaultDistnace(float_t value) ;

constexpr float_t __get__defaultDistnace() const;

 System::Action_1<float_t> __declspec(property(get=__get_spawnCenterDistanceWasFoundEvent, put=__set_spawnCenterDistanceWasFoundEvent))  spawnCenterDistanceWasFoundEvent;

constexpr void __set_spawnCenterDistanceWasFoundEvent(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_spawnCenterDistanceWasFoundEvent() const;

 bool __declspec(property(get=__get__spawnCenterDistanceWasFound, put=__set__spawnCenterDistanceWasFound))  _spawnCenterDistanceWasFound;

constexpr void __set__spawnCenterDistanceWasFound(bool value) ;

constexpr bool __get__spawnCenterDistanceWasFound() const;

 float_t __declspec(property(get=__get__spawnCenterDistance, put=__set__spawnCenterDistance))  _spawnCenterDistance;

constexpr void __set__spawnCenterDistance(float_t value) ;

constexpr float_t __get__spawnCenterDistance() const;


// Properties

 float_t __declspec(property(get=get_spawnCenterDistance))  spawnCenterDistance;

 bool __declspec(property(get=get_spawnCenterDistanceWasFound))  spawnCenterDistanceWasFound;


// Methods

/// @brief Method get_spawnCenterDistance addr 0x223599c size 0x8 virtual false final false
 float_t get_spawnCenterDistance() ;

/// @brief Method get_spawnCenterDistanceWasFound addr 0x22359a4 size 0x8 virtual false final false
 bool get_spawnCenterDistanceWasFound() ;

/// @brief Method add_spawnCenterDistanceWasFoundEvent addr 0x222cd90 size 0xb0 virtual false final false
 void add_spawnCenterDistanceWasFoundEvent(System::Action_1<float_t> value) ;

/// @brief Method remove_spawnCenterDistanceWasFoundEvent addr 0x22359ac size 0xb0 virtual false final false
 void remove_spawnCenterDistanceWasFoundEvent(System::Action_1<float_t> value) ;

/// @brief Method CalculateSpawnCenterPosition addr 0x2235a5c size 0x158 virtual false final false
 float_t CalculateSpawnCenterPosition(int32_t numberOfPlayers) ;

/// @brief Method ReportAndSaveSpawnCenterDistance addr 0x2235bb4 size 0x28 virtual false final false
 void ReportAndSaveSpawnCenterDistance(float_t distance) ;

// Ctor Parameters []
explicit BeatmapObjectSpawnCenter() ;

/// @brief Method .ctor addr 0x2235bdc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapObjectSpawnCenter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectSpawnCenter, "", "BeatmapObjectSpawnCenter");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapObjectSpawnCenter__PlayerCountToDistance, "", "BeatmapObjectSpawnCenter/PlayerCountToDistance");
