#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class TrackLaneRing;
}
// Forward declare root types
namespace GlobalNamespace {
class TrackLaneRingsManager;
}
// Type: ::TrackLaneRingsManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5104))
// CS Name: TrackLaneRingsManager
class CORDL_TYPE TrackLaneRingsManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TrackLaneRingsManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: " const&", def_value: None }]
constexpr TrackLaneRingsManager(TrackLaneRingsManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackLaneRingsManager", modifiers: "&&", def_value: None }]
constexpr TrackLaneRingsManager(TrackLaneRingsManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackLaneRingsManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrackLaneRingsManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackLaneRingsManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackLaneRingsManager& operator=(TrackLaneRingsManager&& o) noexcept = default;
  constexpr TrackLaneRingsManager& operator=(TrackLaneRingsManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TrackLaneRing __declspec(property(get=__get__trackLaneRingPrefab, put=__set__trackLaneRingPrefab))  _trackLaneRingPrefab;

constexpr void __set__trackLaneRingPrefab(GlobalNamespace::TrackLaneRing value) ;

constexpr GlobalNamespace::TrackLaneRing __get__trackLaneRingPrefab() const;

 int32_t __declspec(property(get=__get__ringCount, put=__set__ringCount))  _ringCount;

constexpr void __set__ringCount(int32_t value) ;

constexpr int32_t __get__ringCount() const;

 float_t __declspec(property(get=__get__ringPositionStep, put=__set__ringPositionStep))  _ringPositionStep;

constexpr void __set__ringPositionStep(float_t value) ;

constexpr float_t __get__ringPositionStep() const;

 bool __declspec(property(get=__get__spawnAsChildren, put=__set__spawnAsChildren))  _spawnAsChildren;

constexpr void __set__spawnAsChildren(bool value) ;

constexpr bool __get__spawnAsChildren() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 ::ArrayW<GlobalNamespace::TrackLaneRing> __declspec(property(get=__get__rings, put=__set__rings))  _rings;

constexpr void __set__rings(::ArrayW<GlobalNamespace::TrackLaneRing> value) ;

constexpr ::ArrayW<GlobalNamespace::TrackLaneRing> __get__rings() const;


// Properties

 float_t __declspec(property(get=get_ringPositionStep))  ringPositionStep;

 ::ArrayW<GlobalNamespace::TrackLaneRing> __declspec(property(get=get_Rings))  Rings;


// Methods

/// @brief Method get_ringPositionStep addr 0x226c8ec size 0x8 virtual false final false
 float_t get_ringPositionStep() ;

/// @brief Method get_Rings addr 0x226c8f4 size 0x8 virtual false final false
 ::ArrayW<GlobalNamespace::TrackLaneRing> get_Rings() ;

/// @brief Method Start addr 0x226c8fc size 0x2b0 virtual false final false
 void Start() ;

/// @brief Method FixedUpdate addr 0x226cbac size 0x9c virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x226cc48 size 0x9c virtual false final false
 void LateUpdate() ;

/// @brief Method OnDrawGizmosSelected addr 0x226cce4 size 0x284 virtual false final false
 void OnDrawGizmosSelected() ;

static GlobalNamespace::TrackLaneRingsManager New_ctor() ;

/// @brief Method .ctor addr 0x226cf68 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TrackLaneRingsManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrackLaneRingsManager, "", "TrackLaneRingsManager");
