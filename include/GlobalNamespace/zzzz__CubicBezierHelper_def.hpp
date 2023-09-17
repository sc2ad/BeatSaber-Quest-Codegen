#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class CubicBezierHelper;
}
// Type: ::CubicBezierHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13755))
// CS Name: CubicBezierHelper
class CORDL_TYPE CubicBezierHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CubicBezierHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "CubicBezierHelper", modifiers: " const&", def_value: None }]
constexpr CubicBezierHelper(CubicBezierHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CubicBezierHelper", modifiers: "&&", def_value: None }]
constexpr CubicBezierHelper(CubicBezierHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CubicBezierHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CubicBezierHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CubicBezierHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CubicBezierHelper& operator=(CubicBezierHelper&& o) noexcept = default;
  constexpr CubicBezierHelper& operator=(CubicBezierHelper const& o) noexcept = default;
                


// Methods

/// @brief Method EvaluateCurve addr 0x1f73380 size 0x90 virtual false final false
static ::UnityEngine::Vector3 EvaluateCurve(ByRef<::UnityEngine::Vector3> a1, ByRef<::UnityEngine::Vector3> c1, ByRef<::UnityEngine::Vector3> c2, ByRef<::UnityEngine::Vector3> a2, float_t t) ;

/// @brief Method EvaluateCurveDerivative addr 0x1f73410 size 0x90 virtual false final false
static ::UnityEngine::Vector3 EvaluateCurveDerivative(ByRef<::UnityEngine::Vector3> a1, ByRef<::UnityEngine::Vector3> c1, ByRef<::UnityEngine::Vector3> c2, ByRef<::UnityEngine::Vector3> a2, float_t t) ;

/// @brief Method EvaluateCurveSecondDerivative addr 0x1f734a0 size 0x84 virtual false final false
static ::UnityEngine::Vector3 EvaluateCurveSecondDerivative(ByRef<::UnityEngine::Vector3> a1, ByRef<::UnityEngine::Vector3> c1, ByRef<::UnityEngine::Vector3> c2, ByRef<::UnityEngine::Vector3> a2, float_t t) ;

/// @brief Method Normal addr 0x1f73524 size 0x168 virtual false final false
static ::UnityEngine::Vector3 Normal(ByRef<::UnityEngine::Vector3> a1, ByRef<::UnityEngine::Vector3> c1, ByRef<::UnityEngine::Vector3> c2, ByRef<::UnityEngine::Vector3> a2, float_t t) ;

/// @brief Method SplitCurve addr 0x1f7368c size 0x4d4 virtual false final false
static void SplitCurve(::System::Collections::Generic::List_1<::UnityEngine::Vector3> points, float_t t) ;

/// @brief Method EstimateCurveLength addr 0x1f73b60 size 0x250 virtual false final false
static float_t EstimateCurveLength(ByRef<::UnityEngine::Vector3> p0, ByRef<::UnityEngine::Vector3> p1, ByRef<::UnityEngine::Vector3> p2, ByRef<::UnityEngine::Vector3> p3) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CubicBezierHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CubicBezierHelper, "", "CubicBezierHelper");
