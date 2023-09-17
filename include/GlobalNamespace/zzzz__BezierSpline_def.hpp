#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct BezierCurve;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T>
class Comparison_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BezierSpline;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BezierSpline____c;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__BezierSpline__ComputeControlPointsResults;
}
// Type: ::ComputeControlPointsResults
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3978))
// CS Name: BezierSpline::ComputeControlPointsResults
struct CORDL_TYPE ____GlobalNamespace__BezierSpline__ComputeControlPointsResults : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "p1", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }, CppParam { name: "p2", ty: "::ArrayW<float_t>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__BezierSpline__ComputeControlPointsResults(::ArrayW<float_t> p1, ::ArrayW<float_t> p2) noexcept;


                    constexpr ____GlobalNamespace__BezierSpline__ComputeControlPointsResults(____GlobalNamespace__BezierSpline__ComputeControlPointsResults const&) = default;
                    constexpr ____GlobalNamespace__BezierSpline__ComputeControlPointsResults(____GlobalNamespace__BezierSpline__ComputeControlPointsResults&&) = default;
                    constexpr ____GlobalNamespace__BezierSpline__ComputeControlPointsResults& operator=(____GlobalNamespace__BezierSpline__ComputeControlPointsResults const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__BezierSpline__ComputeControlPointsResults& operator=(____GlobalNamespace__BezierSpline__ComputeControlPointsResults&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BezierSpline__ComputeControlPointsResults(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<float_t> __declspec(property(get=__get_p1, put=__set_p1))  p1;

constexpr void __set_p1(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_p1() const;

 ::ArrayW<float_t> __declspec(property(get=__get_p2, put=__set_p2))  p2;

constexpr void __set_p2(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_p2() const;


// Methods

/// @brief Method .ctor addr 0x20abc24 size 0x8 virtual false final false
 void _ctor(::ArrayW<float_t> p1, ::ArrayW<float_t> p2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3979))
// CS Name: BezierSpline::<>c
class CORDL_TYPE ____GlobalNamespace__BezierSpline____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BezierSpline____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BezierSpline____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BezierSpline____c(____GlobalNamespace__BezierSpline____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BezierSpline____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BezierSpline____c(____GlobalNamespace__BezierSpline____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BezierSpline____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BezierSpline____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BezierSpline____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BezierSpline____c& operator=(____GlobalNamespace__BezierSpline____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__BezierSpline____c& operator=(____GlobalNamespace__BezierSpline____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__BezierSpline____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__BezierSpline____c value) ;

static ::GlobalNamespace::____GlobalNamespace__BezierSpline____c __get___9() ;

static ::System::Comparison_1<::UnityEngine::Vector3> __declspec(property(get=__get___9__6_0, put=__set___9__6_0))  __9__6_0;

static void __set___9__6_0(::System::Comparison_1<::UnityEngine::Vector3> value) ;

static ::System::Comparison_1<::UnityEngine::Vector3> __get___9__6_0() ;

static ::System::Func_2<::UnityEngine::Vector3,float_t> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(::System::Func_2<::UnityEngine::Vector3,float_t> value) ;

static ::System::Func_2<::UnityEngine::Vector3,float_t> __get___9__8_0() ;

static ::System::Func_2<::UnityEngine::Vector3,float_t> __declspec(property(get=__get___9__8_1, put=__set___9__8_1))  __9__8_1;

static void __set___9__8_1(::System::Func_2<::UnityEngine::Vector3,float_t> value) ;

static ::System::Func_2<::UnityEngine::Vector3,float_t> __get___9__8_1() ;

static ::System::Func_2<::UnityEngine::Vector3,float_t> __declspec(property(get=__get___9__8_2, put=__set___9__8_2))  __9__8_2;

static void __set___9__8_2(::System::Func_2<::UnityEngine::Vector3,float_t> value) ;

static ::System::Func_2<::UnityEngine::Vector3,float_t> __get___9__8_2() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BezierSpline____c() ;

/// @brief Method .ctor addr 0x20abc90 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SortSourceData>b__6_0 addr 0x20abc98 size 0x30 virtual false final false
 int32_t _SortSourceData_b__6_0(::UnityEngine::Vector3 point1, ::UnityEngine::Vector3 point2) ;

/// @brief Method <ComputeControlPoints>b__8_0 addr 0x20abcc8 size 0x4 virtual false final false
 float_t _ComputeControlPoints_b__8_0(::UnityEngine::Vector3 p) ;

/// @brief Method <ComputeControlPoints>b__8_1 addr 0x20abccc size 0x8 virtual false final false
 float_t _ComputeControlPoints_b__8_1(::UnityEngine::Vector3 p) ;

/// @brief Method <ComputeControlPoints>b__8_2 addr 0x20abcd4 size 0x8 virtual false final false
 float_t _ComputeControlPoints_b__8_2(::UnityEngine::Vector3 p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BezierSpline
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3980))
// CS Name: BezierSpline
class CORDL_TYPE BezierSpline : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__BezierSpline____c;

using ComputeControlPointsResults = ::GlobalNamespace::____GlobalNamespace__BezierSpline__ComputeControlPointsResults;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BezierSpline() = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: " const&", def_value: None }]
constexpr BezierSpline(BezierSpline const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierSpline", modifiers: "&&", def_value: None }]
constexpr BezierSpline(BezierSpline&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BezierSpline(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BezierSpline& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BezierSpline& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BezierSpline& operator=(BezierSpline&& o) noexcept = default;
  constexpr BezierSpline& operator=(BezierSpline const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve> __declspec(property(get=__get__segments, put=__set__segments))  _segments;

constexpr void __set__segments(::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve> __get__segments() const;

 ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __declspec(property(get=__get__sourceDataPoints, put=__set__sourceDataPoints))  _sourceDataPoints;

constexpr void __set__sourceDataPoints(::System::Collections::Generic::List_1<::UnityEngine::Vector3> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Vector3> __get__sourceDataPoints() const;


// Properties

 ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve> __declspec(property(get=get_segments))  segments;


// Methods

/// @brief Method get_segments addr 0x20ab594 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::GlobalNamespace::BezierCurve> get_segments() ;

/// @brief Method AddPoint addr 0x20a6544 size 0xd8 virtual false final false
 void AddPoint(float_t distance, ::UnityEngine::Vector2 point) ;

/// @brief Method SortSourceData addr 0x20ab59c size 0x100 virtual false final false
 void SortSourceData() ;

/// @brief Method AddArtificialStartAndFinishPoint addr 0x20a661c size 0x1f8 virtual false final false
 void AddArtificialStartAndFinishPoint() ;

/// @brief Method ComputeControlPoints addr 0x20a6814 size 0x55c virtual false final false
 void ComputeControlPoints() ;

/// @brief Method Clear addr 0x20abbb4 size 0x70 virtual false final false
 void Clear() ;

/// @brief Method ComputeControlPoints addr 0x20ab69c size 0x518 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__BezierSpline__ComputeControlPointsResults ComputeControlPoints(::System::Collections::Generic::List_1<float_t> k) ;

// Ctor Parameters []
explicit BezierSpline() ;

/// @brief Method .ctor addr 0x20a6194 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BezierSpline);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BezierSpline, "", "BezierSpline");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BezierSpline____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BezierSpline____c, "", "BezierSpline/<>c");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BezierSpline__ComputeControlPointsResults, "", "BezierSpline/ComputeControlPointsResults");
