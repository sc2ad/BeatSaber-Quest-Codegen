#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class TrailElement;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace GlobalNamespace {
struct GlobalNamespace__TrailElementCollection__InterpolationState;
}
// Type: ::InterpolationState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4993))
// CS Name: TrailElementCollection::InterpolationState
struct CORDL_TYPE GlobalNamespace__TrailElementCollection__InterpolationState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "segmentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "segmentLerp", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TrailElementCollection__InterpolationState(int32_t segmentIndex, float_t segmentLerp) noexcept;


                    constexpr GlobalNamespace__TrailElementCollection__InterpolationState(GlobalNamespace__TrailElementCollection__InterpolationState const&) = default;
                    constexpr GlobalNamespace__TrailElementCollection__InterpolationState(GlobalNamespace__TrailElementCollection__InterpolationState&&) = default;
                    constexpr GlobalNamespace__TrailElementCollection__InterpolationState& operator=(GlobalNamespace__TrailElementCollection__InterpolationState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TrailElementCollection__InterpolationState& operator=(GlobalNamespace__TrailElementCollection__InterpolationState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TrailElementCollection__InterpolationState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_segmentIndex, put=__set_segmentIndex))  segmentIndex;

constexpr void __set_segmentIndex(int32_t value) ;

constexpr int32_t __get_segmentIndex() const;

 float_t __declspec(property(get=__get_segmentLerp, put=__set_segmentLerp))  segmentLerp;

constexpr void __set_segmentLerp(float_t value) ;

constexpr float_t __get_segmentLerp() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrailElementCollection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4994))
// CS Name: TrailElementCollection
class CORDL_TYPE TrailElementCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using InterpolationState = GlobalNamespace::GlobalNamespace__TrailElementCollection__InterpolationState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~TrailElementCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrailElementCollection", modifiers: " const&", def_value: None }]
constexpr TrailElementCollection(TrailElementCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrailElementCollection", modifiers: "&&", def_value: None }]
constexpr TrailElementCollection(TrailElementCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrailElementCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TrailElementCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrailElementCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrailElementCollection& operator=(TrailElementCollection&& o) noexcept = default;
  constexpr TrailElementCollection& operator=(TrailElementCollection const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__capacity, put=__set__capacity))  _capacity;

constexpr void __set__capacity(int32_t value) ;

constexpr int32_t __get__capacity() const;

 ::ArrayW<GlobalNamespace::TrailElement> __declspec(property(get=__get__snapshots, put=__set__snapshots))  _snapshots;

constexpr void __set__snapshots(::ArrayW<GlobalNamespace::TrailElement> value) ;

constexpr ::ArrayW<GlobalNamespace::TrailElement> __get__snapshots() const;

 int32_t __declspec(property(get=__get__headIndex, put=__set__headIndex))  _headIndex;

constexpr void __set__headIndex(int32_t value) ;

constexpr int32_t __get__headIndex() const;

 float_t __declspec(property(get=__get__totalDistance, put=__set__totalDistance))  _totalDistance;

constexpr void __set__totalDistance(float_t value) ;

constexpr float_t __get__totalDistance() const;


// Methods

// Ctor Parameters [CppParam { name: "capacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "defaultStartPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "defaultEndPosition", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }]
explicit TrailElementCollection(int32_t capacity, UnityEngine::Vector3 defaultStartPosition, UnityEngine::Vector3 defaultEndPosition, float_t time) ;

/// @brief Method .ctor addr 0x2255a64 size 0x1b0 virtual false final false
 void _ctor(int32_t capacity, UnityEngine::Vector3 defaultStartPosition, UnityEngine::Vector3 defaultEndPosition, float_t time) ;

/// @brief Method InitSnapshots addr 0x2255d6c size 0x90 virtual false final false
 void InitSnapshots(UnityEngine::Vector3 defaultStartPosition, UnityEngine::Vector3 defaultEndPosition, float_t time) ;

/// @brief Method SetHeadData addr 0x22561e0 size 0xb4 virtual false final false
 void SetHeadData(UnityEngine::Vector3 start, UnityEngine::Vector3 end, float_t time) ;

/// @brief Method MoveTailToHead addr 0x2256294 size 0x9c virtual false final false
 void MoveTailToHead() ;

/// @brief Method UpdateDistances addr 0x2256330 size 0x7c virtual false final false
 void UpdateDistances() ;

/// @brief Method Interpolate addr 0x22571f4 size 0x294 virtual false final false
 void Interpolate(float_t t, ByRef<GlobalNamespace::GlobalNamespace__TrailElementCollection__InterpolationState> lerpState, ByRef<UnityEngine::Vector3> position, ByRef<UnityEngine::Vector3> normal, ByRef<float_t> time) ;

/// @brief Method UpdateLerpState addr 0x22577bc size 0x110 virtual false final false
 void UpdateLerpState(float_t t, ByRef<GlobalNamespace::GlobalNamespace__TrailElementCollection__InterpolationState> interpolationState) ;

/// @brief Method GetElement addr 0x22578cc size 0x44 virtual false final false
 GlobalNamespace::TrailElement GetElement(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TrailElementCollection);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailElementCollection, "", "TrailElementCollection");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TrailElementCollection__InterpolationState, "", "TrailElementCollection/InterpolationState");
