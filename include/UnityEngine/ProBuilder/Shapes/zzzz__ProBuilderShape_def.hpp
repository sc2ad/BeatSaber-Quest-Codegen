#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
struct PivotLocation;
}
namespace UnityEngine::ProBuilder::Shapes {
class Shape;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Shapes {
class ProBuilderShape;
}
// Type: UnityEngine.ProBuilder.Shapes::ProBuilderShape
namespace UnityEngine::ProBuilder::Shapes {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12174))
// CS Name: UnityEngine.ProBuilder.Shapes.ProBuilderShape
class CORDL_TYPE ProBuilderShape : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~ProBuilderShape() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProBuilderShape", modifiers: " const&", def_value: None }]
constexpr ProBuilderShape(ProBuilderShape const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProBuilderShape", modifiers: "&&", def_value: None }]
constexpr ProBuilderShape(ProBuilderShape&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProBuilderShape(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ProBuilderShape& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProBuilderShape& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProBuilderShape& operator=(ProBuilderShape&& o) noexcept = default;
  constexpr ProBuilderShape& operator=(ProBuilderShape const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Shapes::Shape __declspec(property(get=__get_m_Shape, put=__set_m_Shape))  m_Shape;

constexpr void __set_m_Shape(UnityEngine::ProBuilder::Shapes::Shape value) ;

constexpr UnityEngine::ProBuilder::Shapes::Shape __get_m_Shape() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_Size, put=__set_m_Size))  m_Size;

constexpr void __set_m_Size(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_Size() const;

 UnityEngine::Quaternion __declspec(property(get=__get_m_Rotation, put=__set_m_Rotation))  m_Rotation;

constexpr void __set_m_Rotation(UnityEngine::Quaternion value) ;

constexpr UnityEngine::Quaternion __get_m_Rotation() const;

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh))  m_Mesh;

constexpr void __set_m_Mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_m_Mesh() const;

 UnityEngine::ProBuilder::PivotLocation __declspec(property(get=__get_m_PivotLocation, put=__set_m_PivotLocation))  m_PivotLocation;

constexpr void __set_m_PivotLocation(UnityEngine::ProBuilder::PivotLocation value) ;

constexpr UnityEngine::ProBuilder::PivotLocation __get_m_PivotLocation() const;

 UnityEngine::Vector3 __declspec(property(get=__get_m_PivotPosition, put=__set_m_PivotPosition))  m_PivotPosition;

constexpr void __set_m_PivotPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_m_PivotPosition() const;

 uint16_t __declspec(property(get=__get_m_UnmodifiedMeshVersion, put=__set_m_UnmodifiedMeshVersion))  m_UnmodifiedMeshVersion;

constexpr void __set_m_UnmodifiedMeshVersion(uint16_t value) ;

constexpr uint16_t __get_m_UnmodifiedMeshVersion() const;

 UnityEngine::Bounds __declspec(property(get=__get_m_EditionBounds, put=__set_m_EditionBounds))  m_EditionBounds;

constexpr void __set_m_EditionBounds(UnityEngine::Bounds value) ;

constexpr UnityEngine::Bounds __get_m_EditionBounds() const;

 UnityEngine::Bounds __declspec(property(get=__get_m_ShapeBox, put=__set_m_ShapeBox))  m_ShapeBox;

constexpr void __set_m_ShapeBox(UnityEngine::Bounds value) ;

constexpr UnityEngine::Bounds __get_m_ShapeBox() const;


// Properties

 UnityEngine::ProBuilder::Shapes::Shape __declspec(property(get=get_shape, put=set_shape))  shape;

 UnityEngine::ProBuilder::PivotLocation __declspec(property(get=get_pivotLocation, put=set_pivotLocation))  pivotLocation;

 UnityEngine::Vector3 __declspec(property(get=get_pivotLocalPosition, put=set_pivotLocalPosition))  pivotLocalPosition;

 UnityEngine::Vector3 __declspec(property(get=get_pivotGlobalPosition, put=set_pivotGlobalPosition))  pivotGlobalPosition;

 UnityEngine::Vector3 __declspec(property(get=get_size, put=set_size))  size;

 UnityEngine::Quaternion __declspec(property(get=get_rotation, put=set_rotation))  rotation;

 UnityEngine::Bounds __declspec(property(get=get_editionBounds))  editionBounds;

 UnityEngine::Bounds __declspec(property(get=get_shapeBox))  shapeBox;

 bool __declspec(property(get=get_isEditable))  isEditable;

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=get_mesh))  mesh;


// Methods

/// @brief Method get_shape addr 0x29f7248 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Shapes::Shape get_shape() ;

/// @brief Method set_shape addr 0x29f7250 size 0x8 virtual false final false
 void set_shape(UnityEngine::ProBuilder::Shapes::Shape value) ;

/// @brief Method get_pivotLocation addr 0x29f7258 size 0x8 virtual false final false
 UnityEngine::ProBuilder::PivotLocation get_pivotLocation() ;

/// @brief Method set_pivotLocation addr 0x29f7260 size 0x8 virtual false final false
 void set_pivotLocation(UnityEngine::ProBuilder::PivotLocation value) ;

/// @brief Method get_pivotLocalPosition addr 0x29f7268 size 0xc virtual false final false
 UnityEngine::Vector3 get_pivotLocalPosition() ;

/// @brief Method set_pivotLocalPosition addr 0x29f7274 size 0xc virtual false final false
 void set_pivotLocalPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_pivotGlobalPosition addr 0x29f7280 size 0x34 virtual false final false
 UnityEngine::Vector3 get_pivotGlobalPosition() ;

/// @brief Method set_pivotGlobalPosition addr 0x29f73ac size 0x60 virtual false final false
 void set_pivotGlobalPosition(UnityEngine::Vector3 value) ;

/// @brief Method get_size addr 0x29f740c size 0xc virtual false final false
 UnityEngine::Vector3 get_size() ;

/// @brief Method set_size addr 0x29f7418 size 0xbc virtual false final false
 void set_size(UnityEngine::Vector3 value) ;

/// @brief Method get_rotation addr 0x29f74d4 size 0xc virtual false final false
 UnityEngine::Quaternion get_rotation() ;

/// @brief Method set_rotation addr 0x29f74e0 size 0xc virtual false final false
 void set_rotation(UnityEngine::Quaternion value) ;

/// @brief Method get_editionBounds addr 0x29f74ec size 0xcc virtual false final false
 UnityEngine::Bounds get_editionBounds() ;

/// @brief Method get_shapeBox addr 0x29f75b8 size 0x14 virtual false final false
 UnityEngine::Bounds get_shapeBox() ;

/// @brief Method get_isEditable addr 0x29f75cc size 0x28 virtual false final false
 bool get_isEditable() ;

/// @brief Method get_mesh addr 0x29f72b4 size 0xf8 virtual false final false
 UnityEngine::ProBuilder::ProBuilderMesh get_mesh() ;

/// @brief Method OnValidate addr 0x29f75f4 size 0xa4 virtual false final false
 void OnValidate() ;

/// @brief Method UpdateComponent addr 0x29f7698 size 0x34 virtual false final false
 void UpdateComponent() ;

/// @brief Method UpdateBounds addr 0x29f7a7c size 0xcc virtual false final false
 void UpdateBounds(UnityEngine::Bounds bounds) ;

/// @brief Method Rebuild addr 0x29f7b48 size 0xec virtual false final false
 void Rebuild(UnityEngine::Bounds bounds, UnityEngine::Quaternion rotation, UnityEngine::Vector3 cornerPivot) ;

/// @brief Method Rebuild addr 0x29f78e8 size 0x194 virtual false final false
 void Rebuild() ;

/// @brief Method SetShape addr 0x29f7e74 size 0x250 virtual false final false
 void SetShape(UnityEngine::ProBuilder::Shapes::Shape shape, UnityEngine::ProBuilder::PivotLocation location) ;

/// @brief Method RotateInsideBounds addr 0x29f80c4 size 0xd4 virtual false final false
 void RotateInsideBounds(UnityEngine::Quaternion deltaRotation) ;

/// @brief Method ResetPivot addr 0x29f76cc size 0x21c virtual false final false
 void ResetPivot(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

/// @brief Method RebuildPivot addr 0x29f7c34 size 0x240 virtual false final false
 void RebuildPivot(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Vector3 size, UnityEngine::Quaternion rotation) ;

static UnityEngine::ProBuilder::Shapes::ProBuilderShape New_ctor() ;

/// @brief Method .ctor addr 0x29f8198 size 0xe0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Shapes
NEED_NO_BOX(UnityEngine::ProBuilder::Shapes::ProBuilderShape);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Shapes::ProBuilderShape, "UnityEngine.ProBuilder.Shapes", "ProBuilderShape");
