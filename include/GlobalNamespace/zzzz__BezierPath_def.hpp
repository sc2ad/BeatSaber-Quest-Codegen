#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__BezierPath__ControlMode;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__BezierPath__ControlMode;
}
namespace GlobalNamespace {
class BezierPath;
}
// Type: ::ControlMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6045))
// CS Name: BezierPath::ControlMode
struct CORDL_TYPE GlobalNamespace__BezierPath__ControlMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BezierPath__ControlMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__BezierPath__ControlMode(GlobalNamespace__BezierPath__ControlMode const&) = default;
                    constexpr GlobalNamespace__BezierPath__ControlMode(GlobalNamespace__BezierPath__ControlMode&&) = default;
                    constexpr GlobalNamespace__BezierPath__ControlMode& operator=(GlobalNamespace__BezierPath__ControlMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BezierPath__ControlMode& operator=(GlobalNamespace__BezierPath__ControlMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BezierPath__ControlMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__BezierPath__ControlMode_Unwrapped : int32_t {
__Aligned = 0,
__Mirrored = 1,
__Free = 2,
__Automatic = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__BezierPath__ControlMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__BezierPath__ControlMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Aligned offset 0
static GlobalNamespace::GlobalNamespace__BezierPath__ControlMode const Aligned;

/// @brief Field Mirrored offset 0
static GlobalNamespace::GlobalNamespace__BezierPath__ControlMode const Mirrored;

/// @brief Field Free offset 0
static GlobalNamespace::GlobalNamespace__BezierPath__ControlMode const Free;

/// @brief Field Automatic offset 0
static GlobalNamespace::GlobalNamespace__BezierPath__ControlMode const Automatic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BezierPath
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6046))
// CS Name: BezierPath
class CORDL_TYPE BezierPath : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ControlMode = GlobalNamespace::GlobalNamespace__BezierPath__ControlMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BezierPath() = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierPath", modifiers: " const&", def_value: None }]
constexpr BezierPath(BezierPath const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierPath", modifiers: "&&", def_value: None }]
constexpr BezierPath(BezierPath&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BezierPath(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BezierPath& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BezierPath& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BezierPath& operator=(BezierPath&& o) noexcept = default;
  constexpr BezierPath& operator=(BezierPath const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_bezierPathWasModifiedEvent, put=__set_bezierPathWasModifiedEvent))  bezierPathWasModifiedEvent;

constexpr void __set_bezierPathWasModifiedEvent(System::Action value) ;

constexpr System::Action __get_bezierPathWasModifiedEvent() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get__points, put=__set__points))  _points;

constexpr void __set__points(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get__points() const;

 GlobalNamespace::GlobalNamespace__BezierPath__ControlMode __declspec(property(get=__get__controlMode, put=__set__controlMode))  _controlMode;

constexpr void __set__controlMode(GlobalNamespace::GlobalNamespace__BezierPath__ControlMode value) ;

constexpr GlobalNamespace::GlobalNamespace__BezierPath__ControlMode __get__controlMode() const;

 System::Collections::Generic::List_1<float_t> __declspec(property(get=__get__perAnchorNormalsAngle, put=__set__perAnchorNormalsAngle))  _perAnchorNormalsAngle;

constexpr void __set__perAnchorNormalsAngle(System::Collections::Generic::List_1<float_t> value) ;

constexpr System::Collections::Generic::List_1<float_t> __get__perAnchorNormalsAngle() const;

/// @brief Field kAutoControlLength offset 0
static constexpr float_t  kAutoControlLength{0.3};

 ::ArrayW<float_t> __declspec(property(get=__get__neighbourDistances, put=__set__neighbourDistances))  _neighbourDistances;

constexpr void __set__neighbourDistances(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get__neighbourDistances() const;


// Properties

 GlobalNamespace::GlobalNamespace__BezierPath__ControlMode __declspec(property(get=get_controlPointMode, put=set_controlPointMode))  controlPointMode;

 int32_t __declspec(property(get=get_pointsCount))  pointsCount;

 int32_t __declspec(property(get=get_anchorPointsCount))  anchorPointsCount;

 int32_t __declspec(property(get=get_segmentsCount))  segmentsCount;

 UnityEngine::Vector3 __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_controlPointMode addr 0x21ace88 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__BezierPath__ControlMode get_controlPointMode() ;

/// @brief Method set_controlPointMode addr 0x21ace90 size 0x4c virtual false final false
 void set_controlPointMode(GlobalNamespace::GlobalNamespace__BezierPath__ControlMode value) ;

/// @brief Method add_bezierPathWasModifiedEvent addr 0x21acf78 size 0x9c virtual false final false
 void add_bezierPathWasModifiedEvent(System::Action value) ;

/// @brief Method remove_bezierPathWasModifiedEvent addr 0x21ad014 size 0x9c virtual false final false
 void remove_bezierPathWasModifiedEvent(System::Action value) ;

/// @brief Method get_pointsCount addr 0x21ad0b0 size 0x48 virtual false final false
 int32_t get_pointsCount() ;

/// @brief Method get_anchorPointsCount addr 0x21ad0f8 size 0x64 virtual false final false
 int32_t get_anchorPointsCount() ;

/// @brief Method get_segmentsCount addr 0x21ad15c size 0x60 virtual false final false
 int32_t get_segmentsCount() ;

static GlobalNamespace::BezierPath New_ctor(UnityEngine::Vector3 centre, bool initTwoSegments) ;

/// @brief Method .ctor addr 0x21ad1bc size 0x544 virtual false final false
 void _ctor(UnityEngine::Vector3 centre, bool initTwoSegments) ;

/// @brief Method UpdateByAnchorPoints addr 0x21ad700 size 0x608 virtual false final false
 void UpdateByAnchorPoints(System::Collections::Generic::IReadOnlyList_1<UnityEngine::Vector3> points) ;

/// @brief Method UpdateControlPoints addr 0x21ae218 size 0x278 virtual false final false
 void UpdateControlPoints(System::Collections::Generic::IReadOnlyList_1<UnityEngine::Vector3> points) ;

/// @brief Method get_Item addr 0x21ae550 size 0x4 virtual false final false
 UnityEngine::Vector3 get_Item(int32_t i) ;

/// @brief Method GetPoint addr 0x21ae554 size 0x58 virtual false final false
 UnityEngine::Vector3 GetPoint(int32_t i) ;

/// @brief Method SetPoint addr 0x21ae490 size 0xc0 virtual false final false
 void SetPoint(int32_t i, UnityEngine::Vector3 localPosition, bool suppressPathModified) ;

/// @brief Method AddSegmentToEnd addr 0x21add08 size 0x510 virtual false final false
 void AddSegmentToEnd(UnityEngine::Vector3 anchorPos) ;

/// @brief Method GetPointsInSegment addr 0x21ae638 size 0x98 virtual false final false
 void GetPointsInSegment(int32_t segmentIndex, ByRef<::ArrayW<UnityEngine::Vector3>> points) ;

/// @brief Method GetPointsInSegment addr 0x21ae6d0 size 0xf8 virtual false final false
 void GetPointsInSegment(int32_t segmentIndex, ByRef<UnityEngine::Vector3> p0, ByRef<UnityEngine::Vector3> p1, ByRef<UnityEngine::Vector3> p2, ByRef<UnityEngine::Vector3> p3) ;

/// @brief Method GetAnchorNormalAngle addr 0x21ae7c8 size 0x64 virtual false final false
 float_t GetAnchorNormalAngle(int32_t anchorIndex) ;

/// @brief Method SetAnchorNormalAngle addr 0x21ae82c size 0x13c virtual false final false
 void SetAnchorNormalAngle(int32_t anchorIndex, float_t angle) ;

/// @brief Method AutoSetAllAffectedControlPoints addr 0x21ae5ac size 0x8c virtual false final false
 void AutoSetAllAffectedControlPoints(int32_t updatedAnchorIndex) ;

/// @brief Method AutoSetAllControlPoints addr 0x21acedc size 0x80 virtual false final false
 void AutoSetAllControlPoints() ;

/// @brief Method AutoSetAnchorControlPoints addr 0x21ae9c0 size 0x4f0 virtual false final false
 void AutoSetAnchorControlPoints(int32_t anchorIndex) ;

/// @brief Method AutoSetStartAndEndControls addr 0x21aeeb0 size 0x250 virtual false final false
 void AutoSetStartAndEndControls() ;

/// @brief Method LoopIndex addr 0x21ae968 size 0x58 virtual false final false
 int32_t LoopIndex(int32_t i) ;

/// @brief Method NotifyPathModified addr 0x21acf5c size 0x1c virtual false final false
 void NotifyPathModified() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BezierPath__ControlMode, "", "BezierPath/ControlMode");
NEED_NO_BOX(GlobalNamespace::BezierPath);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierPath, "", "BezierPath");
