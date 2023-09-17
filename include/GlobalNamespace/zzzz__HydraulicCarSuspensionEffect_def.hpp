#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Rigidbody;
}
namespace GlobalNamespace {
class BeatmapDataCallbackWrapper;
}
namespace GlobalNamespace {
class BasicBeatmapEventData;
}
namespace GlobalNamespace {
struct BasicBeatmapEventType;
}
namespace UnityEngine {
class SpringJoint;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
class BeatmapCallbacksController;
}
// Forward declare root types
namespace GlobalNamespace {
class HydraulicCarSuspensionEffect;
}
// Type: ::HydraulicCarSuspensionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3986))
// CS Name: HydraulicCarSuspensionEffect
class CORDL_TYPE HydraulicCarSuspensionEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~HydraulicCarSuspensionEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: " const&", def_value: None }]
constexpr HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HydraulicCarSuspensionEffect", modifiers: "&&", def_value: None }]
constexpr HydraulicCarSuspensionEffect(HydraulicCarSuspensionEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HydraulicCarSuspensionEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr HydraulicCarSuspensionEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HydraulicCarSuspensionEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HydraulicCarSuspensionEffect& operator=(HydraulicCarSuspensionEffect&& o) noexcept = default;
  constexpr HydraulicCarSuspensionEffect& operator=(HydraulicCarSuspensionEffect const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__contractEvent, put=__set__contractEvent))  _contractEvent;

constexpr void __set__contractEvent(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__contractEvent() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__contractEventValues, put=__set__contractEventValues))  _contractEventValues;

constexpr void __set__contractEventValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__contractEventValues() const;

 ::GlobalNamespace::BasicBeatmapEventType __declspec(property(get=__get__expandEvent, put=__set__expandEvent))  _expandEvent;

constexpr void __set__expandEvent(::GlobalNamespace::BasicBeatmapEventType value) ;

constexpr ::GlobalNamespace::BasicBeatmapEventType __get__expandEvent() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__expandEventValues, put=__set__expandEventValues))  _expandEventValues;

constexpr void __set__expandEventValues(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__expandEventValues() const;

 ::UnityEngine::SpringJoint __declspec(property(get=__get__springJoint, put=__set__springJoint))  _springJoint;

constexpr void __set__springJoint(::UnityEngine::SpringJoint value) ;

constexpr ::UnityEngine::SpringJoint __get__springJoint() const;

 float_t __declspec(property(get=__get__contractDistance, put=__set__contractDistance))  _contractDistance;

constexpr void __set__contractDistance(float_t value) ;

constexpr float_t __get__contractDistance() const;

 float_t __declspec(property(get=__get__expandDistance, put=__set__expandDistance))  _expandDistance;

constexpr void __set__expandDistance(float_t value) ;

constexpr float_t __get__expandDistance() const;

 ::UnityEngine::Rigidbody __declspec(property(get=__get__rigidbody, put=__set__rigidbody))  _rigidbody;

constexpr void __set__rigidbody(::UnityEngine::Rigidbody value) ;

constexpr ::UnityEngine::Rigidbody __get__rigidbody() const;

 ::GlobalNamespace::BeatmapCallbacksController __declspec(property(get=__get__beatmapCallbacksController, put=__set__beatmapCallbacksController))  _beatmapCallbacksController;

constexpr void __set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController value) ;

constexpr ::GlobalNamespace::BeatmapCallbacksController __get__beatmapCallbacksController() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get__contractEventValuesHashSet, put=__set__contractEventValuesHashSet))  _contractEventValuesHashSet;

constexpr void __set__contractEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get__contractEventValuesHashSet() const;

 ::System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get__expandEventValuesHashSet, put=__set__expandEventValuesHashSet))  _expandEventValuesHashSet;

constexpr void __set__expandEventValuesHashSet(::System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr ::System::Collections::Generic::HashSet_1<int32_t> __get__expandEventValuesHashSet() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__contractBeatmapDataCallbackWrapper, put=__set__contractBeatmapDataCallbackWrapper))  _contractBeatmapDataCallbackWrapper;

constexpr void __set__contractBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__contractBeatmapDataCallbackWrapper() const;

 ::GlobalNamespace::BeatmapDataCallbackWrapper __declspec(property(get=__get__expandBeatmapDataCallbackWrapper, put=__set__expandBeatmapDataCallbackWrapper))  _expandBeatmapDataCallbackWrapper;

constexpr void __set__expandBeatmapDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper value) ;

constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper __get__expandBeatmapDataCallbackWrapper() const;


// Methods

/// @brief Method Start addr 0x20add14 size 0x220 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x20adf34 size 0x40 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleContractBeatmapEvent addr 0x20adf74 size 0xa4 virtual false final false
 void HandleContractBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

/// @brief Method HandleExpandBeatmapEvent addr 0x20ae018 size 0xa4 virtual false final false
 void HandleExpandBeatmapEvent(::GlobalNamespace::BasicBeatmapEventData basicBeatmapEventData) ;

// Ctor Parameters []
explicit HydraulicCarSuspensionEffect() ;

/// @brief Method .ctor addr 0x20ae0bc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::HydraulicCarSuspensionEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::HydraulicCarSuspensionEffect, "", "HydraulicCarSuspensionEffect");
