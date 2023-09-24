#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Curve__CurveEditState;
}
namespace HoudiniEngineUnity {
class HEU_HoudiniAsset;
}
namespace UnityEngine {
class GameObject;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Curve__Interaction;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0;
}
namespace UnityEngine {
struct Vector3;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0;
}
namespace HoudiniEngineUnity {
class CurveNodeData;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Curve__CurveDrawCollision;
}
namespace HoudiniEngineUnity {
class HEU_Parameters;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Curve__CurveDrawCollision;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Curve__CurveEditState;
}
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_Curve__Interaction;
}
namespace HoudiniEngineUnity {
class HEU_Curve;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0;
}
// Type: ::CurveEditState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9561))
// CS Name: HoudiniEngineUnity.HEU_Curve::CurveEditState
struct CORDL_TYPE HoudiniEngineUnity__HEU_Curve__CurveEditState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve__CurveEditState(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_Curve__CurveEditState(HoudiniEngineUnity__HEU_Curve__CurveEditState const&) = default;
                    constexpr HoudiniEngineUnity__HEU_Curve__CurveEditState(HoudiniEngineUnity__HEU_Curve__CurveEditState&&) = default;
                    constexpr HoudiniEngineUnity__HEU_Curve__CurveEditState& operator=(HoudiniEngineUnity__HEU_Curve__CurveEditState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_Curve__CurveEditState& operator=(HoudiniEngineUnity__HEU_Curve__CurveEditState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_Curve__CurveEditState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_Curve__CurveEditState_Unwrapped : int32_t {
__INVALID = 0,
__GENERATED = 1,
__EDITING = 2,
__REQUIRES_GENERATION = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_Curve__CurveEditState_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_Curve__CurveEditState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field INVALID offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState const INVALID;

/// @brief Field GENERATED offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState const GENERATED;

/// @brief Field EDITING offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState const EDITING;

/// @brief Field REQUIRES_GENERATION offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState const REQUIRES_GENERATION;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::Interaction
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9562))
// CS Name: HoudiniEngineUnity.HEU_Curve::Interaction
struct CORDL_TYPE HoudiniEngineUnity__HEU_Curve__Interaction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve__Interaction(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_Curve__Interaction(HoudiniEngineUnity__HEU_Curve__Interaction const&) = default;
                    constexpr HoudiniEngineUnity__HEU_Curve__Interaction(HoudiniEngineUnity__HEU_Curve__Interaction&&) = default;
                    constexpr HoudiniEngineUnity__HEU_Curve__Interaction& operator=(HoudiniEngineUnity__HEU_Curve__Interaction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_Curve__Interaction& operator=(HoudiniEngineUnity__HEU_Curve__Interaction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_Curve__Interaction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_Curve__Interaction_Unwrapped : int32_t {
__VIEW = 0,
__ADD = 1,
__EDIT = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_Curve__Interaction_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_Curve__Interaction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VIEW offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction const VIEW;

/// @brief Field ADD offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction const ADD;

/// @brief Field EDIT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction const EDIT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::CurveDrawCollision
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9563))
// CS Name: HoudiniEngineUnity.HEU_Curve::CurveDrawCollision
struct CORDL_TYPE HoudiniEngineUnity__HEU_Curve__CurveDrawCollision : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve__CurveDrawCollision(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_Curve__CurveDrawCollision(HoudiniEngineUnity__HEU_Curve__CurveDrawCollision const&) = default;
                    constexpr HoudiniEngineUnity__HEU_Curve__CurveDrawCollision(HoudiniEngineUnity__HEU_Curve__CurveDrawCollision&&) = default;
                    constexpr HoudiniEngineUnity__HEU_Curve__CurveDrawCollision& operator=(HoudiniEngineUnity__HEU_Curve__CurveDrawCollision const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_Curve__CurveDrawCollision& operator=(HoudiniEngineUnity__HEU_Curve__CurveDrawCollision&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_Curve__CurveDrawCollision(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_Curve__CurveDrawCollision_Unwrapped : int32_t {
__COLLIDERS = 0,
__LAYERMASK = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_Curve__CurveDrawCollision_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_Curve__CurveDrawCollision_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field COLLIDERS offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision const COLLIDERS;

/// @brief Field LAYERMASK offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision const LAYERMASK;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass38_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9564))
// CS Name: HoudiniEngineUnity.HEU_Curve::<>c__DisplayClass38_0
class CORDL_TYPE HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0(HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0(HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0& operator=(HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0& operator=(HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_positions, put=__set_positions))  positions;

constexpr void __set_positions(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_positions() const;

 System::Collections::Generic::List_1<UnityEngine::Quaternion> __declspec(property(get=__get_rotations, put=__set_rotations))  rotations;

constexpr void __set_rotations(System::Collections::Generic::List_1<UnityEngine::Quaternion> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Quaternion> __get_rotations() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_scales, put=__set_scales))  scales;

constexpr void __set_scales(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_scales() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fdfb54 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UpdateCurveInputForCustomAttributes>b__0 addr 0x1fe1a5c size 0x1c4 virtual false final false
 void _UpdateCurveInputForCustomAttributes_b__0(HoudiniEngineUnity::CurveNodeData data) ;

/// @brief Method <UpdateCurveInputForCustomAttributes>b__1 addr 0x1fe1c20 size 0x3c8 virtual false final false
 void _UpdateCurveInputForCustomAttributes_b__1(int32_t nIndex1, int32_t nIndex2, float_t fCoeff, int32_t nInsertIndex) ;

/// @brief Method <UpdateCurveInputForCustomAttributes>b__2 addr 0x1fe1fe8 size 0x2d4 virtual false final false
 void _UpdateCurveInputForCustomAttributes_b__2(int32_t nIndex, int32_t nInsertIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass40_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9565))
// CS Name: HoudiniEngineUnity.HEU_Curve::<>c__DisplayClass40_0
class CORDL_TYPE HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0(HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0(HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0& operator=(HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0& operator=(HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_rotations, put=__set_rotations))  rotations;

constexpr void __set_rotations(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_rotations() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_scales, put=__set_scales))  scales;

constexpr void __set_scales(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_scales() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fe062c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UpdatePoints>b__0 addr 0x1fe22bc size 0x120 virtual false final false
 void _UpdatePoints_b__0(HoudiniEngineUnity::CurveNodeData data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::<>c__DisplayClass48_0
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9566))
// CS Name: HoudiniEngineUnity.HEU_Curve::<>c__DisplayClass48_0
class CORDL_TYPE HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0(HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0(HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0& operator=(HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0& operator=(HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_points, put=__set_points))  points;

constexpr void __set_points(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_points() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0 New_ctor() ;

/// @brief Method .ctor addr 0x1fe1020 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetAllPoints>b__0 addr 0x1fe23dc size 0xb8 virtual false final false
 void _GetAllPoints_b__0(HoudiniEngineUnity::CurveNodeData transform) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_Curve
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9567))
// CS Name: HoudiniEngineUnity.HEU_Curve
class CORDL_TYPE HEU_Curve : public UnityEngine::ScriptableObject {
public:
// Declarations
using __c__DisplayClass48_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0;

using __c__DisplayClass40_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0;

using __c__DisplayClass38_0 = HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0;

using CurveDrawCollision = HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision;

using Interaction = HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction;

using CurveEditState = HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Curve>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_Curve>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~HEU_Curve() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Curve", modifiers: " const&", def_value: None }]
constexpr HEU_Curve(HEU_Curve const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_Curve", modifiers: "&&", def_value: None }]
constexpr HEU_Curve(HEU_Curve&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_Curve(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr HEU_Curve& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_Curve& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_Curve& operator=(HEU_Curve&& o) noexcept = default;
  constexpr HEU_Curve& operator=(HEU_Curve const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__geoID, put=__set__geoID))  _geoID;

constexpr void __set__geoID(int32_t value) ;

constexpr int32_t __get__geoID() const;

 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> __declspec(property(get=__get__curveNodeData, put=__set__curveNodeData))  _curveNodeData;

constexpr void __set__curveNodeData(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> __get__curveNodeData() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__vertices, put=__set__vertices))  _vertices;

constexpr void __set__vertices(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__vertices() const;

 bool __declspec(property(get=__get__isEditable, put=__set__isEditable))  _isEditable;

constexpr void __set__isEditable(bool value) ;

constexpr bool __get__isEditable() const;

 HoudiniEngineUnity::HEU_Parameters __declspec(property(get=__get__parameters, put=__set__parameters))  _parameters;

constexpr void __set__parameters(HoudiniEngineUnity::HEU_Parameters value) ;

constexpr HoudiniEngineUnity::HEU_Parameters __get__parameters() const;

 bool __declspec(property(get=__get__bUploadParameterPreset, put=__set__bUploadParameterPreset))  _bUploadParameterPreset;

constexpr void __set__bUploadParameterPreset(bool value) ;

constexpr bool __get__bUploadParameterPreset() const;

 ::StringW __declspec(property(get=__get__curveName, put=__set__curveName))  _curveName;

constexpr void __set__curveName(::StringW value) ;

constexpr ::StringW __get__curveName() const;

 UnityEngine::GameObject __declspec(property(get=__get__targetGameObject, put=__set__targetGameObject))  _targetGameObject;

constexpr void __set__targetGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__targetGameObject() const;

 bool __declspec(property(get=__get__isGeoCurve, put=__set__isGeoCurve))  _isGeoCurve;

constexpr void __set__isGeoCurve(bool value) ;

constexpr bool __get__isGeoCurve() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState __declspec(property(get=__get__editState, put=__set__editState))  _editState;

constexpr void __set__editState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState __get__editState() const;

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction __declspec(property(get=__get_PreferredNextInteractionMode, put=__set_PreferredNextInteractionMode))  PreferredNextInteractionMode;

static void __set_PreferredNextInteractionMode(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction value) ;

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction __get_PreferredNextInteractionMode() ;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=__get__parentAsset, put=__set__parentAsset))  _parentAsset;

constexpr void __set__parentAsset(HoudiniEngineUnity::HEU_HoudiniAsset value) ;

constexpr HoudiniEngineUnity::HEU_HoudiniAsset __get__parentAsset() const;


// Properties

 int32_t __declspec(property(get=get_GeoID))  GeoID;

 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> __declspec(property(get=get_CurveNodeData))  CurveNodeData;

 HoudiniEngineUnity::HEU_Parameters __declspec(property(get=get_Parameters))  Parameters;

 ::StringW __declspec(property(get=get_CurveName))  CurveName;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState __declspec(property(get=get_EditState))  EditState;

 HoudiniEngineUnity::HEU_HoudiniAsset __declspec(property(get=get_ParentAsset))  ParentAsset;


// Methods

/// @brief Method get_GeoID addr 0x1fdd8f8 size 0x8 virtual false final false
 int32_t get_GeoID() ;

/// @brief Method get_CurveNodeData addr 0x1fdd900 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> get_CurveNodeData() ;

/// @brief Method IsEditable addr 0x1fdd908 size 0x8 virtual false final false
 bool IsEditable() ;

/// @brief Method get_Parameters addr 0x1fdd910 size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_Parameters get_Parameters() ;

/// @brief Method SetUploadParameterPreset addr 0x1fdd918 size 0xc virtual false final false
 void SetUploadParameterPreset(bool bValue) ;

/// @brief Method get_CurveName addr 0x1fdd924 size 0x8 virtual false final false
 ::StringW get_CurveName() ;

/// @brief Method IsGeoCurve addr 0x1fdd92c size 0x8 virtual false final false
 bool IsGeoCurve() ;

/// @brief Method get_EditState addr 0x1fdd934 size 0x8 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState get_EditState() ;

/// @brief Method get_ParentAsset addr 0x1fdd93c size 0x8 virtual false final false
 HoudiniEngineUnity::HEU_HoudiniAsset get_ParentAsset() ;

/// @brief Method CreateSetupCurve addr 0x1fdd944 size 0x184 virtual false final false
static HoudiniEngineUnity::HEU_Curve CreateSetupCurve(HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, bool isEditable, ::StringW curveName, int32_t geoID, bool bGeoCurve) ;

/// @brief Method DestroyAllData addr 0x1fddb9c size 0x14c virtual false final false
 void DestroyAllData(bool bIsRebuild) ;

/// @brief Method SetCurveName addr 0x1fddce8 size 0x9c virtual false final false
 void SetCurveName(::StringW name) ;

/// @brief Method UploadParameterPreset addr 0x1fddd84 size 0xe8 virtual false final false
 void UploadParameterPreset(HoudiniEngineUnity::HEU_SessionBase session, int32_t geoID, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method ResetCurveParameters addr 0x1fdde6c size 0xd0 virtual false final false
 void ResetCurveParameters(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method SetCurveParameterPreset addr 0x1fddf3c size 0xd0 virtual false final false
 void SetCurveParameterPreset(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, ::ArrayW<uint8_t> parameterPreset) ;

/// @brief Method UpdateCurve addr 0x1fde00c size 0x1e8 virtual false final false
 void UpdateCurve(HoudiniEngineUnity::HEU_SessionBase session, int32_t partID) ;

/// @brief Method GenerateMesh addr 0x1fde1f4 size 0x3b4 virtual false final false
 void GenerateMesh(UnityEngine::GameObject inGameObject) ;

/// @brief Method UpdateCurveInputForCustomAttributes addr 0x1fde5a8 size 0x15ac virtual false final false
 bool UpdateCurveInputForCustomAttributes(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method SyncFromParameters addr 0x1fdfdbc size 0x274 virtual false final false
 void SyncFromParameters(HoudiniEngineUnity::HEU_SessionBase session, HoudiniEngineUnity::HEU_HoudiniAsset parentAsset) ;

/// @brief Method UpdatePoints addr 0x1fe0030 size 0x564 virtual false final false
 void UpdatePoints(HoudiniEngineUnity::HEU_SessionBase session, int32_t partID) ;

/// @brief Method ProjectToColliders addr 0x1fe0634 size 0x4d8 virtual false final false
 void ProjectToColliders(HoudiniEngineUnity::HEU_HoudiniAsset parentAsset, UnityEngine::Vector3 rayDirection, float_t rayDistance) ;

/// @brief Method GetPointsString addr 0x1fe0b0c size 0x274 virtual false final false
static ::StringW GetPointsString(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> points) ;

/// @brief Method GetPointsString addr 0x1fdfb5c size 0x260 virtual false final false
static ::StringW GetPointsString(System::Collections::Generic::List_1<UnityEngine::Vector3> points) ;

/// @brief Method SetEditState addr 0x1fe0d80 size 0x8 virtual false final false
 void SetEditState(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState editState) ;

/// @brief Method SetCurvePoint addr 0x1fe0d88 size 0xa0 virtual false final false
 void SetCurvePoint(int32_t pointIndex, UnityEngine::Vector3 newPosition) ;

/// @brief Method GetCurvePoint addr 0x1fe0e28 size 0xd0 virtual false final false
 UnityEngine::Vector3 GetCurvePoint(int32_t pointIndex) ;

/// @brief Method GetAllPointTransforms addr 0x1fe0ef8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> GetAllPointTransforms() ;

/// @brief Method GetAllPoints addr 0x1fe0f00 size 0x120 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::Vector3> GetAllPoints() ;

/// @brief Method GetNumPoints addr 0x1fe1028 size 0x48 virtual false final false
 int32_t GetNumPoints() ;

/// @brief Method GetTransformedPoint addr 0x1fe1070 size 0xc8 virtual false final false
 UnityEngine::Vector3 GetTransformedPoint(int32_t pointIndex) ;

/// @brief Method GetTransformedPosition addr 0x1fe1138 size 0x50 virtual false final false
 UnityEngine::Vector3 GetTransformedPosition(UnityEngine::Vector3 inPosition) ;

/// @brief Method GetInvertedTransformedPosition addr 0x1fe1188 size 0x50 virtual false final false
 UnityEngine::Vector3 GetInvertedTransformedPosition(UnityEngine::Vector3 inPosition) ;

/// @brief Method GetInvertedTransformedDirection addr 0x1fe11d8 size 0x50 virtual false final false
 UnityEngine::Vector3 GetInvertedTransformedDirection(UnityEngine::Vector3 inPosition) ;

/// @brief Method GetVertices addr 0x1fe1228 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Vector3> GetVertices() ;

/// @brief Method SetCurveGeometryVisibility addr 0x1fe1230 size 0xe8 virtual false final false
 void SetCurveGeometryVisibility(bool bVisible) ;

/// @brief Method DownloadPresetData addr 0x1fe0594 size 0x98 virtual false final false
 void DownloadPresetData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method UploadPresetData addr 0x1fe1318 size 0x98 virtual false final false
 void UploadPresetData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method DownloadAsDefaultPresetData addr 0x1fe13b0 size 0x98 virtual false final false
 void DownloadAsDefaultPresetData(HoudiniEngineUnity::HEU_SessionBase session) ;

/// @brief Method DuplicateCurveNodeData addr 0x1fe1448 size 0x224 virtual false final false
 System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> DuplicateCurveNodeData() ;

/// @brief Method SetCurveNodeData addr 0x1fe166c size 0x8 virtual false final false
 void SetCurveNodeData(System::Collections::Generic::List_1<HoudiniEngineUnity::CurveNodeData> curveNodeData) ;

/// @brief Method IsEquivalentTo addr 0x1fe1674 size 0x36c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_Curve other) ;

static HoudiniEngineUnity::HEU_Curve New_ctor() ;

/// @brief Method .ctor addr 0x1fe19e0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveDrawCollision, "HoudiniEngineUnity", "HEU_Curve/CurveDrawCollision");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__CurveEditState, "HoudiniEngineUnity", "HEU_Curve/CurveEditState");
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve__Interaction, "HoudiniEngineUnity", "HEU_Curve/Interaction");
NEED_NO_BOX(HoudiniEngineUnity::HEU_Curve);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_Curve, "HoudiniEngineUnity", "HEU_Curve");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass38_0, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass38_0");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass40_0, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass40_0");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_Curve____c__DisplayClass48_0, "HoudiniEngineUnity", "HEU_Curve/<>c__DisplayClass48_0");
