#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__PolyShape__PolyEditMode;
}
namespace UnityEngine::ProBuilder {
class PolyShape;
}
// Type: ::PolyEditMode
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12091))
// CS Name: UnityEngine.ProBuilder.PolyShape::PolyEditMode
struct CORDL_TYPE UnityEngine__ProBuilder__PolyShape__PolyEditMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ProBuilder__PolyShape__PolyEditMode(int32_t value__) noexcept;


                    constexpr UnityEngine__ProBuilder__PolyShape__PolyEditMode(UnityEngine__ProBuilder__PolyShape__PolyEditMode const&) = default;
                    constexpr UnityEngine__ProBuilder__PolyShape__PolyEditMode(UnityEngine__ProBuilder__PolyShape__PolyEditMode&&) = default;
                    constexpr UnityEngine__ProBuilder__PolyShape__PolyEditMode& operator=(UnityEngine__ProBuilder__PolyShape__PolyEditMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ProBuilder__PolyShape__PolyEditMode& operator=(UnityEngine__ProBuilder__PolyShape__PolyEditMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__PolyShape__PolyEditMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ProBuilder__PolyShape__PolyEditMode_Unwrapped : int32_t {
__None = 0,
__Path = 1,
__Height = 2,
__Edit = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ProBuilder__PolyShape__PolyEditMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ProBuilder__PolyShape__PolyEditMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode const None;

/// @brief Field Path offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode const Path;

/// @brief Field Height offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode const Height;

/// @brief Field Edit offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode const Edit;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::PolyShape
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12092))
// CS Name: UnityEngine.ProBuilder.PolyShape
class CORDL_TYPE PolyShape : public UnityEngine::MonoBehaviour {
public:
// Declarations
using PolyEditMode = UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~PolyShape() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolyShape", modifiers: " const&", def_value: None }]
constexpr PolyShape(PolyShape const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolyShape", modifiers: "&&", def_value: None }]
constexpr PolyShape(PolyShape&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolyShape(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PolyShape& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolyShape& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolyShape& operator=(PolyShape&& o) noexcept = default;
  constexpr PolyShape& operator=(PolyShape const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh))  m_Mesh;

constexpr void __set_m_Mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_m_Mesh() const;

 System::Collections::Generic::List_1<UnityEngine::Vector3> __declspec(property(get=__get_m_Points, put=__set_m_Points))  m_Points;

constexpr void __set_m_Points(System::Collections::Generic::List_1<UnityEngine::Vector3> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector3> __get_m_Points() const;

 float_t __declspec(property(get=__get_m_Extrude, put=__set_m_Extrude))  m_Extrude;

constexpr void __set_m_Extrude(float_t value) ;

constexpr float_t __get_m_Extrude() const;

 UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode __declspec(property(get=__get_m_EditMode, put=__set_m_EditMode))  m_EditMode;

constexpr void __set_m_EditMode(UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode value) ;

constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode __get_m_EditMode() const;

 bool __declspec(property(get=__get_m_FlipNormals, put=__set_m_FlipNormals))  m_FlipNormals;

constexpr void __set_m_FlipNormals(bool value) ;

constexpr bool __get_m_FlipNormals() const;

 bool __declspec(property(get=__get_isOnGrid, put=__set_isOnGrid))  isOnGrid;

constexpr void __set_isOnGrid(bool value) ;

constexpr bool __get_isOnGrid() const;


// Properties

 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Vector3> __declspec(property(get=get_controlPoints))  controlPoints;

 float_t __declspec(property(get=get_extrude, put=set_extrude))  extrude;

 UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode __declspec(property(get=get_polyEditMode, put=set_polyEditMode))  polyEditMode;

 bool __declspec(property(get=get_flipNormals, put=set_flipNormals))  flipNormals;

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=get_mesh, put=set_mesh))  mesh;


// Methods

/// @brief Method get_controlPoints addr 0x29c14b4 size 0x7c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Vector3> get_controlPoints() ;

/// @brief Method SetControlPoints addr 0x29c1530 size 0x5c virtual false final false
 void SetControlPoints(System::Collections::Generic::IList_1<UnityEngine::Vector3> points) ;

/// @brief Method get_extrude addr 0x29c158c size 0x8 virtual false final false
 float_t get_extrude() ;

/// @brief Method set_extrude addr 0x29c1594 size 0x8 virtual false final false
 void set_extrude(float_t value) ;

/// @brief Method get_polyEditMode addr 0x29c159c size 0x8 virtual false final false
 UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode get_polyEditMode() ;

/// @brief Method set_polyEditMode addr 0x29c15a4 size 0x8 virtual false final false
 void set_polyEditMode(UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode value) ;

/// @brief Method get_flipNormals addr 0x29c15ac size 0x8 virtual false final false
 bool get_flipNormals() ;

/// @brief Method set_flipNormals addr 0x29c15b4 size 0xc virtual false final false
 void set_flipNormals(bool value) ;

/// @brief Method get_mesh addr 0x29c15c0 size 0x94 virtual false final false
 UnityEngine::ProBuilder::ProBuilderMesh get_mesh() ;

/// @brief Method set_mesh addr 0x29c1654 size 0x8 virtual false final false
 void set_mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

/// @brief Method IsSnapEnabled addr 0x29c165c size 0x8 virtual false final false
 bool IsSnapEnabled() ;

// Ctor Parameters []
explicit PolyShape() ;

/// @brief Method .ctor addr 0x29c1664 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__PolyShape__PolyEditMode, "UnityEngine.ProBuilder", "PolyShape/PolyEditMode");
NEED_NO_BOX(UnityEngine::ProBuilder::PolyShape);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::PolyShape, "UnityEngine.ProBuilder", "PolyShape");
