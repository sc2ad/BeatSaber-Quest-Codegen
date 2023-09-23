#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
class Camera;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
class RaycastHit;
}
namespace UnityEngine::ProBuilder {
struct CullingMode;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine::ProBuilder {
struct HandleOrientation;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::ProBuilder {
template<typename T1,typename T2>
struct SimpleTuple_2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ProBuilder {
class Face;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class HandleUtility;
}
// Type: UnityEngine.ProBuilder::HandleUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12070))
// CS Name: UnityEngine.ProBuilder.HandleUtility
class CORDL_TYPE HandleUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HandleUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "HandleUtility", modifiers: " const&", def_value: None }]
constexpr HandleUtility(HandleUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HandleUtility", modifiers: "&&", def_value: None }]
constexpr HandleUtility(HandleUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HandleUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HandleUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HandleUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HandleUtility& operator=(HandleUtility&& o) noexcept = default;
  constexpr HandleUtility& operator=(HandleUtility const& o) noexcept = default;
                


// Methods

/// @brief Method ScreenToGuiPoint addr 0x29aeed4 size 0x50 virtual false final false
static UnityEngine::Vector3 ScreenToGuiPoint(UnityEngine::Camera camera, UnityEngine::Vector3 point, float_t pixelsPerPoint) ;

/// @brief Method FaceRaycast addr 0x29aef24 size 0x40 virtual false final false
static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<UnityEngine::ProBuilder::RaycastHit> hit, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> ignore) ;

/// @brief Method FaceRaycast addr 0x29aef64 size 0x51c virtual false final false
static bool FaceRaycast(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<UnityEngine::ProBuilder::RaycastHit> hit, float_t distance, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> ignore) ;

/// @brief Method FaceRaycastBothCullModes addr 0x29af75c size 0x4ac virtual false final false
static bool FaceRaycastBothCullModes(UnityEngine::Ray worldRay, UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::Vector3>> back, ByRef<UnityEngine::ProBuilder::SimpleTuple_2<UnityEngine::ProBuilder::Face,UnityEngine::Vector3>> front) ;

/// @brief Method FaceRaycast addr 0x29afc08 size 0x548 virtual false final false
static bool FaceRaycast(UnityEngine::Ray InWorldRay, UnityEngine::ProBuilder::ProBuilderMesh mesh, ByRef<System::Collections::Generic::List_1<UnityEngine::ProBuilder::RaycastHit>> hits, UnityEngine::ProBuilder::CullingMode cullingMode, System::Collections::Generic::HashSet_1<UnityEngine::ProBuilder::Face> ignore) ;

/// @brief Method InverseTransformRay addr 0x29b0150 size 0x138 virtual false final false
static UnityEngine::Ray InverseTransformRay(UnityEngine::Transform transform, UnityEngine::Ray InWorldRay) ;

/// @brief Method MeshRaycast addr 0x29b0288 size 0x188 virtual false final false
static bool MeshRaycast(UnityEngine::Ray InWorldRay, UnityEngine::GameObject gameObject, ByRef<UnityEngine::ProBuilder::RaycastHit> hit, float_t distance) ;

/// @brief Method MeshRaycast addr 0x29b0410 size 0x2b8 virtual false final false
static bool MeshRaycast(UnityEngine::Ray InRay, ::ArrayW<UnityEngine::Vector3> mesh, ::ArrayW<int32_t> triangles, ByRef<UnityEngine::ProBuilder::RaycastHit> hit, float_t distance) ;

/// @brief Method PointIsOccluded addr 0x29b0900 size 0x210 virtual false final false
static bool PointIsOccluded(UnityEngine::Camera cam, UnityEngine::ProBuilder::ProBuilderMesh pb, UnityEngine::Vector3 worldPoint) ;

/// @brief Method GetRotation addr 0x29b0b10 size 0x6b8 virtual false final false
static UnityEngine::Quaternion GetRotation(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> indices) ;

/// @brief Method GetFaceRotation addr 0x29b11c8 size 0x110 virtual false final false
static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method GetFaceRotation addr 0x29b12d8 size 0x268 virtual false final false
static UnityEngine::Quaternion GetFaceRotation(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Face face) ;

/// @brief Method GetEdgeRotation addr 0x29b192c size 0x110 virtual false final false
static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetEdgeRotation addr 0x29b1a3c size 0xc4 virtual false final false
static UnityEngine::Quaternion GetEdgeRotation(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::Edge edge) ;

/// @brief Method GetVertexRotation addr 0x29b1b00 size 0x108 virtual false final false
static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::ProBuilder::HandleOrientation orientation, System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

/// @brief Method GetVertexRotation addr 0x29b1c08 size 0x114 virtual false final false
static UnityEngine::Quaternion GetVertexRotation(UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t vertex) ;

/// @brief Method GetActiveElementPosition addr 0x29b1d1c size 0xd0 virtual false final false
static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method GetActiveElementPosition addr 0x29b23bc size 0x10c virtual false final false
static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method GetActiveElementPosition addr 0x29b24c8 size 0xa8 virtual false final false
static UnityEngine::Vector3 GetActiveElementPosition(UnityEngine::ProBuilder::ProBuilderMesh mesh, System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::HandleUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::HandleUtility, "UnityEngine.ProBuilder", "HandleUtility");
