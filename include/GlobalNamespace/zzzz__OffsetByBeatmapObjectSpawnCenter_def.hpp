#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class BeatmapObjectSpawnCenter;
}
// Forward declare root types
namespace GlobalNamespace {
class OffsetByBeatmapObjectSpawnCenter;
}
// Type: ::OffsetByBeatmapObjectSpawnCenter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4810))
// CS Name: OffsetByBeatmapObjectSpawnCenter
class CORDL_TYPE OffsetByBeatmapObjectSpawnCenter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OffsetByBeatmapObjectSpawnCenter() = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetByBeatmapObjectSpawnCenter", modifiers: " const&", def_value: None }]
constexpr OffsetByBeatmapObjectSpawnCenter(OffsetByBeatmapObjectSpawnCenter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OffsetByBeatmapObjectSpawnCenter", modifiers: "&&", def_value: None }]
constexpr OffsetByBeatmapObjectSpawnCenter(OffsetByBeatmapObjectSpawnCenter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OffsetByBeatmapObjectSpawnCenter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OffsetByBeatmapObjectSpawnCenter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OffsetByBeatmapObjectSpawnCenter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OffsetByBeatmapObjectSpawnCenter& operator=(OffsetByBeatmapObjectSpawnCenter&& o) noexcept = default;
  constexpr OffsetByBeatmapObjectSpawnCenter& operator=(OffsetByBeatmapObjectSpawnCenter const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BeatmapObjectSpawnCenter __declspec(property(get=__get__spawnCenter, put=__set__spawnCenter))  _spawnCenter;

constexpr void __set__spawnCenter(GlobalNamespace::BeatmapObjectSpawnCenter value) ;

constexpr GlobalNamespace::BeatmapObjectSpawnCenter __get__spawnCenter() const;


// Methods

/// @brief Method Start addr 0x222cc84 size 0xa4 virtual false final false
 void Start() ;

/// @brief Method HandleSpawnCenterDistanceWasFound addr 0x222cd28 size 0x68 virtual false final false
 void HandleSpawnCenterDistanceWasFound(float_t distance) ;

// Ctor Parameters []
explicit OffsetByBeatmapObjectSpawnCenter() ;

/// @brief Method .ctor addr 0x222ce40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OffsetByBeatmapObjectSpawnCenter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OffsetByBeatmapObjectSpawnCenter, "", "OffsetByBeatmapObjectSpawnCenter");
