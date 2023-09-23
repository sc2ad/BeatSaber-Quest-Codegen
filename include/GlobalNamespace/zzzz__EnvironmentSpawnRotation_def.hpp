#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class SpawnRotationBeatmapEventData;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
// Type: ::EnvironmentSpawnRotation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5083))
// CS Name: EnvironmentSpawnRotation
class CORDL_TYPE EnvironmentSpawnRotation : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~EnvironmentSpawnRotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSpawnRotation", modifiers: " const&", def_value: None }]
constexpr EnvironmentSpawnRotation(EnvironmentSpawnRotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentSpawnRotation", modifiers: "&&", def_value: None }]
constexpr EnvironmentSpawnRotation(EnvironmentSpawnRotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentSpawnRotation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentSpawnRotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentSpawnRotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentSpawnRotation& operator=(EnvironmentSpawnRotation&& o) noexcept = default;
  constexpr EnvironmentSpawnRotation& operator=(EnvironmentSpawnRotation const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__aheadTime, put=__set__aheadTime))  _aheadTime;

constexpr void __set__aheadTime(float_t value) ;

constexpr float_t __get__aheadTime() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;

 GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(GlobalNamespace::BeatmapCallbacksController value) ;

constexpr GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

static int32_t __declspec(property(get=__get__spawnRotationID, put=__set__spawnRotationID))  _spawnRotationID;

static void __set__spawnRotationID(int32_t value) ;

static int32_t __get__spawnRotationID() ;

 GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__beatmapDataCallbackWrapper, put=__set__beatmapDataCallbackWrapper))  _beatmapDataCallbackWrapper;

constexpr void __set__beatmapDataCallbackWrapper(GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr GlobalNamespace::BeatmapDataCallbackWrapper __get__beatmapDataCallbackWrapper() const;

 float_t __declspec(property(get=__get__currentRotation, put=__set__currentRotation))  _currentRotation;

constexpr void __set__currentRotation(float_t value) ;

constexpr float_t __get__currentRotation() const;

 float_t __declspec(property(get=__get__prevRotation, put=__set__prevRotation))  _prevRotation;

constexpr void __set__prevRotation(float_t value) ;

constexpr float_t __get__prevRotation() const;

 float_t __declspec(property(get=__get__targetRotation, put=__set__targetRotation))  _targetRotation;

constexpr void __set__targetRotation(float_t value) ;

constexpr float_t __get__targetRotation() const;

static int32_t __declspec(property(get=__get__numberOfActiveEnvironmentSpawnRotationObjects, put=__set__numberOfActiveEnvironmentSpawnRotationObjects))  _numberOfActiveEnvironmentSpawnRotationObjects;

static void __set__numberOfActiveEnvironmentSpawnRotationObjects(int32_t value) ;

static int32_t __get__numberOfActiveEnvironmentSpawnRotationObjects() ;


// Properties

 float_t __declspec(property(get=get_targetRotation))  targetRotation;


// Methods

/// @brief Method get_targetRotation addr 0x2268c30 size 0x8 virtual false final false
 float_t get_targetRotation() ;

/// @brief Method OnEnable addr 0x2268c38 size 0x60 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2268c98 size 0x60 virtual false final false
 void OnDisable() ;

/// @brief Method Start addr 0x2268cf8 size 0x164 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2268e5c size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSpawnRotationBeatmapEvent addr 0x2268e78 size 0x104 virtual false final false
 void HandleSpawnRotationBeatmapEvent(GlobalNamespace::SpawnRotationBeatmapEventData beatmapEventData) ;

/// @brief Method FixedUpdate addr 0x2268f7c size 0x90 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x226900c size 0x128 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit EnvironmentSpawnRotation() ;

/// @brief Method .ctor addr 0x2269134 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentSpawnRotation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentSpawnRotation, "", "EnvironmentSpawnRotation");
