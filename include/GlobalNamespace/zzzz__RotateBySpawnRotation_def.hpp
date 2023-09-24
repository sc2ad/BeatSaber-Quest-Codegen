#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
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
class RotateBySpawnRotation;
}
// Type: ::RotateBySpawnRotation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5092))
// CS Name: RotateBySpawnRotation
class CORDL_TYPE RotateBySpawnRotation : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~RotateBySpawnRotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "RotateBySpawnRotation", modifiers: " const&", def_value: None }]
constexpr RotateBySpawnRotation(RotateBySpawnRotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RotateBySpawnRotation", modifiers: "&&", def_value: None }]
constexpr RotateBySpawnRotation(RotateBySpawnRotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RotateBySpawnRotation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RotateBySpawnRotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RotateBySpawnRotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RotateBySpawnRotation& operator=(RotateBySpawnRotation&& o) noexcept = default;
  constexpr RotateBySpawnRotation& operator=(RotateBySpawnRotation const& o) noexcept = default;
                


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


// Methods

/// @brief Method Start addr 0x226a2a0 size 0x138 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x226a3d8 size 0x1c virtual false final false
 void OnDestroy() ;

/// @brief Method HandleSpawnRotationBeatmapEvent addr 0x226a3f4 size 0x9c virtual false final false
 void HandleSpawnRotationBeatmapEvent(GlobalNamespace::SpawnRotationBeatmapEventData beatmapEventData) ;

/// @brief Method FixedUpdate addr 0x226a490 size 0x90 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x226a520 size 0xc0 virtual false final false
 void LateUpdate() ;

static GlobalNamespace::RotateBySpawnRotation New_ctor() ;

/// @brief Method .ctor addr 0x226a5e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::RotateBySpawnRotation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::RotateBySpawnRotation, "", "RotateBySpawnRotation");
