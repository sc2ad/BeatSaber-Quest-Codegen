#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct BezierCurve;
}
namespace GlobalNamespace {
class BezierSpline;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSplineEvaluator;
}
namespace GlobalNamespace {
struct GlobalNamespace__BezierSplineEvaluator__CubicSolveResult;
}
// Type: ::CubicSolveResult
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3981))
// CS Name: BezierSplineEvaluator::CubicSolveResult
struct CORDL_TYPE GlobalNamespace__BezierSplineEvaluator__CubicSolveResult : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "numberOfSolutions", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "solution1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "solution2", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "solution3", ty: "float_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__BezierSplineEvaluator__CubicSolveResult(int32_t numberOfSolutions, float_t solution1, float_t solution2, float_t solution3) noexcept;


                    constexpr GlobalNamespace__BezierSplineEvaluator__CubicSolveResult(GlobalNamespace__BezierSplineEvaluator__CubicSolveResult const&) = default;
                    constexpr GlobalNamespace__BezierSplineEvaluator__CubicSolveResult(GlobalNamespace__BezierSplineEvaluator__CubicSolveResult&&) = default;
                    constexpr GlobalNamespace__BezierSplineEvaluator__CubicSolveResult& operator=(GlobalNamespace__BezierSplineEvaluator__CubicSolveResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__BezierSplineEvaluator__CubicSolveResult& operator=(GlobalNamespace__BezierSplineEvaluator__CubicSolveResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BezierSplineEvaluator__CubicSolveResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_numberOfSolutions, put=__set_numberOfSolutions))  numberOfSolutions;

constexpr void __set_numberOfSolutions(int32_t value) ;

constexpr int32_t __get_numberOfSolutions() const;

 float_t __declspec(property(get=__get_solution1, put=__set_solution1))  solution1;

constexpr void __set_solution1(float_t value) ;

constexpr float_t __get_solution1() const;

 float_t __declspec(property(get=__get_solution2, put=__set_solution2))  solution2;

constexpr void __set_solution2(float_t value) ;

constexpr float_t __get_solution2() const;

 float_t __declspec(property(get=__get_solution3, put=__set_solution3))  solution3;

constexpr void __set_solution3(float_t value) ;

constexpr float_t __get_solution3() const;


// Methods

/// @brief Method .ctor addr 0x20ac89c size 0x14 virtual false final false
 void _ctor(float_t solution1) ;

/// @brief Method .ctor addr 0x20ac8b0 size 0x14 virtual false final false
 void _ctor(float_t solution1, float_t solution2) ;

/// @brief Method .ctor addr 0x20ac8c4 size 0x14 virtual false final false
 void _ctor(float_t solution1, float_t solution2, float_t solution3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BezierSplineEvaluator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3982))
// CS Name: BezierSplineEvaluator
class CORDL_TYPE BezierSplineEvaluator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using CubicSolveResult = GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BezierSplineEvaluator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierSplineEvaluator", modifiers: " const&", def_value: None }]
constexpr BezierSplineEvaluator(BezierSplineEvaluator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierSplineEvaluator", modifiers: "&&", def_value: None }]
constexpr BezierSplineEvaluator(BezierSplineEvaluator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BezierSplineEvaluator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BezierSplineEvaluator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BezierSplineEvaluator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BezierSplineEvaluator& operator=(BezierSplineEvaluator&& o) noexcept = default;
  constexpr BezierSplineEvaluator& operator=(BezierSplineEvaluator const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> __declspec(property(get=__get__segments, put=__set__segments))  _segments;

constexpr void __set__segments(System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::BezierCurve> __get__segments() const;

 int32_t __declspec(property(get=__get__currentSegmentIndex, put=__set__currentSegmentIndex))  _currentSegmentIndex;

constexpr void __set__currentSegmentIndex(int32_t value) ;

constexpr int32_t __get__currentSegmentIndex() const;

/// @brief Field kSlightAboveOne offset 0
static constexpr float_t  kSlightAboveOne{1.0005};

/// @brief Field kSlightBelowZero offset 0
static constexpr float_t  kSlightBelowZero{-0.0005};


// Methods

// Ctor Parameters [CppParam { name: "spline", ty: "GlobalNamespace::BezierSpline", modifiers: "", def_value: None }]
explicit BezierSplineEvaluator(GlobalNamespace::BezierSpline spline) ;

/// @brief Method .ctor addr 0x20a6d70 size 0x34 virtual false final false
 void _ctor(GlobalNamespace::BezierSpline spline) ;

/// @brief Method EvaluatePosition addr 0x20a4a70 size 0x18 virtual false final false
 UnityEngine::Vector3 EvaluatePosition(float_t time) ;

/// @brief Method Evaluate addr 0x20abe2c size 0x14c virtual false final false
 UnityEngine::Vector3 Evaluate(float_t t) ;

/// @brief Method EvaluateFirstDerivation addr 0x20abf78 size 0x15c virtual false final false
 UnityEngine::Vector3 EvaluateFirstDerivation(float_t t) ;

/// @brief Method EvaluateSecondDerivation addr 0x20ac0d4 size 0x14c virtual false final false
 UnityEngine::Vector3 EvaluateSecondDerivation(float_t t) ;

/// @brief Method OffsetSegmentAndGetT addr 0x20abcdc size 0x150 virtual false final false
 float_t OffsetSegmentAndGetT(float_t time) ;

/// @brief Method GetTForSegment addr 0x20ac340 size 0x14c virtual false final false
 float_t GetTForSegment(int32_t segmentIndex, float_t time) ;

/// @brief Method GetTimeValuesForSegment addr 0x20ac7b0 size 0xb8 virtual false final false
 void GetTimeValuesForSegment(int32_t segmentIndex, ByRef<float_t> t0Value, ByRef<float_t> t1Value) ;

/// @brief Method OffsetStartIndexToDistance addr 0x20ac220 size 0x120 virtual false final false
 void OffsetStartIndexToDistance(float_t time) ;

/// @brief Method CubeRoot addr 0x20ac868 size 0x34 virtual false final false
static float_t CubeRoot(float_t x) ;

/// @brief Method SolveCubic addr 0x20ac48c size 0x324 virtual false final false
static GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult SolveCubic(float_t a, float_t b, float_t c, float_t d) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BezierSplineEvaluator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BezierSplineEvaluator, "", "BezierSplineEvaluator");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BezierSplineEvaluator__CubicSolveResult, "", "BezierSplineEvaluator/CubicSolveResult");
