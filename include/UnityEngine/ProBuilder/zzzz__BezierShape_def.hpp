#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder {
struct BezierPoint;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class BezierShape;
}
// Type: UnityEngine.ProBuilder::BezierShape
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12046))
// CS Name: UnityEngine.ProBuilder.BezierShape
class CORDL_TYPE BezierShape : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BezierShape() = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierShape", modifiers: " const&", def_value: None }]
constexpr BezierShape(BezierShape const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BezierShape", modifiers: "&&", def_value: None }]
constexpr BezierShape(BezierShape&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BezierShape(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BezierShape& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BezierShape& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BezierShape& operator=(BezierShape&& o) noexcept = default;
  constexpr BezierShape& operator=(BezierShape const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint> __declspec(property(get=__get_points, put=__set_points))  points;

constexpr void __set_points(System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::BezierPoint> __get_points() const;

 bool __declspec(property(get=__get_closeLoop, put=__set_closeLoop))  closeLoop;

constexpr void __set_closeLoop(bool value) ;

constexpr bool __get_closeLoop() const;

 float_t __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(float_t value) ;

constexpr float_t __get_radius() const;

 int32_t __declspec(property(get=__get_rows, put=__set_rows))  rows;

constexpr void __set_rows(int32_t value) ;

constexpr int32_t __get_rows() const;

 int32_t __declspec(property(get=__get_columns, put=__set_columns))  columns;

constexpr void __set_columns(int32_t value) ;

constexpr int32_t __get_columns() const;

 bool __declspec(property(get=__get_smooth, put=__set_smooth))  smooth;

constexpr void __set_smooth(bool value) ;

constexpr bool __get_smooth() const;

 bool __declspec(property(get=__get_m_IsEditing, put=__set_m_IsEditing))  m_IsEditing;

constexpr void __set_m_IsEditing(bool value) ;

constexpr bool __get_m_IsEditing() const;

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh))  m_Mesh;

constexpr void __set_m_Mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_m_Mesh() const;


// Properties

 bool __declspec(property(get=get_isEditing, put=set_isEditing))  isEditing;

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=get_mesh, put=set_mesh))  mesh;


// Methods

/// @brief Method get_isEditing addr 0x29a47b0 size 0x8 virtual false final false
 bool get_isEditing() ;

/// @brief Method set_isEditing addr 0x29a47b8 size 0xc virtual false final false
 void set_isEditing(bool value) ;

/// @brief Method get_mesh addr 0x29a47c4 size 0x94 virtual false final false
 UnityEngine::ProBuilder::ProBuilderMesh get_mesh() ;

/// @brief Method set_mesh addr 0x29a4858 size 0x8 virtual false final false
 void set_mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

/// @brief Method Init addr 0x29a4860 size 0x260 virtual false final false
 void Init() ;

/// @brief Method Refresh addr 0x29a4ac0 size 0xc0 virtual false final false
 void Refresh() ;

static UnityEngine::ProBuilder::BezierShape New_ctor() ;

/// @brief Method .ctor addr 0x29a4b80 size 0x98 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::BezierShape);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::BezierShape, "UnityEngine.ProBuilder", "BezierShape");
