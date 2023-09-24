#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Spline;
}
// Type: UnityEngine.ProBuilder::Spline
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12147))
// CS Name: UnityEngine.ProBuilder.Spline
class CORDL_TYPE Spline : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Spline() = default;

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: " const&", def_value: None }]
constexpr Spline(Spline const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Spline", modifiers: "&&", def_value: None }]
constexpr Spline(Spline&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Spline(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Spline& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Spline& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Spline& operator=(Spline&& o) noexcept = default;
  constexpr Spline& operator=(Spline const& o) noexcept = default;
                


// Methods

/// @brief Method Extrude addr 0x29e4e10 size 0x24 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh Extrude(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::BezierPoint> points, float_t radius, int32_t columns, int32_t rows, bool closeLoop, bool smooth) ;

/// @brief Method Extrude addr 0x29e4e34 size 0xd8 virtual false final false
static void Extrude(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::BezierPoint> bezierPoints, float_t radius, int32_t columns, int32_t rows, bool closeLoop, bool smooth, ByRef<UnityEngine::ProBuilder::ProBuilderMesh> target) ;

/// @brief Method GetControlPoints addr 0x29e4f0c size 0x520 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::Vector3> GetControlPoints(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::BezierPoint> bezierPoints, int32_t subdivisionsPerSegment, bool closeLoop, System::Collections::Generic::List_1<UnityEngine::Quaternion> rotations) ;

/// @brief Method Extrude addr 0x29e542c size 0x95c virtual false final false
static void Extrude(System::Collections::Generic::IList_1<UnityEngine::Vector3> points, float_t radius, int32_t radiusRows, bool closeLoop, bool smooth, ByRef<UnityEngine::ProBuilder::ProBuilderMesh> target, System::Collections::Generic::IList_1<UnityEngine::Quaternion> pointRotations) ;

/// @brief Method GetRingRotation addr 0x29e5d88 size 0x890 virtual false final false
static UnityEngine::Quaternion GetRingRotation(System::Collections::Generic::IList_1<UnityEngine::Vector3> points, int32_t i, bool closeLoop, ByRef<float_t> secant) ;

/// @brief Method VertexRing addr 0x29e6618 size 0x1f0 virtual false final false
static ::ArrayW<UnityEngine::Vector3> VertexRing(UnityEngine::Quaternion orientation, UnityEngine::Vector3 offset, float_t radius, int32_t segments) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Spline);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Spline, "UnityEngine.ProBuilder", "Spline");
