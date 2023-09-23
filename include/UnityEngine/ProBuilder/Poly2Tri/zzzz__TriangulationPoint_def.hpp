#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepConstraint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationPoint
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15366))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationPoint
class CORDL_TYPE TriangulationPoint : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~TriangulationPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationPoint", modifiers: " const&", def_value: None }]
constexpr TriangulationPoint(TriangulationPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationPoint", modifiers: "&&", def_value: None }]
constexpr TriangulationPoint(TriangulationPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriangulationPoint(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TriangulationPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriangulationPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriangulationPoint& operator=(TriangulationPoint&& o) noexcept = default;
  constexpr TriangulationPoint& operator=(TriangulationPoint const& o) noexcept = default;
                


// Fields

/// @brief Field INSERTED_INDEX offset 0
static constexpr int32_t  INSERTED_INDEX{-1};

/// @brief Field INVALID_INDEX offset 0
static constexpr int32_t  INVALID_INDEX{-2};

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint> __declspec(property(get=__get__Edges_k__BackingField, put=__set__Edges_k__BackingField))  _Edges_k__BackingField;

constexpr void __set__Edges_k__BackingField(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint> __get__Edges_k__BackingField() const;

 double_t __declspec(property(get=__get_X, put=__set_X))  X;

constexpr void __set_X(double_t value) ;

constexpr double_t __get_X() const;

 double_t __declspec(property(get=__get_Y, put=__set_Y))  Y;

constexpr void __set_Y(double_t value) ;

constexpr double_t __get_Y() const;

 int32_t __declspec(property(get=__get_Index, put=__set_Index))  Index;

constexpr void __set_Index(int32_t value) ;

constexpr int32_t __get_Index() const;


// Properties

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint> __declspec(property(get=get_Edges, put=set_Edges))  Edges;

 float_t __declspec(property(get=get_Xf, put=set_Xf))  Xf;

 float_t __declspec(property(get=get_Yf, put=set_Yf))  Yf;

 bool __declspec(property(get=get_HasEdges))  HasEdges;


// Methods

/// @brief Method get_Edges addr 0x29a1d5c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint> get_Edges() ;

/// @brief Method set_Edges addr 0x29a1d64 size 0x8 virtual false final false
 void set_Edges(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint> value) ;

// Ctor Parameters [CppParam { name: "x", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
explicit TriangulationPoint(double_t x, double_t y, int32_t index) ;

/// @brief Method .ctor addr 0x299b828 size 0x3c virtual false final false
 void _ctor(double_t x, double_t y, int32_t index) ;

/// @brief Method ToString addr 0x29a1d6c size 0x1a4 virtual true final false
 ::StringW ToString() ;

/// @brief Method get_Xf addr 0x29a1f10 size 0xc virtual false final false
 float_t get_Xf() ;

/// @brief Method set_Xf addr 0x29a1f1c size 0xc virtual false final false
 void set_Xf(float_t value) ;

/// @brief Method get_Yf addr 0x29a1f28 size 0xc virtual false final false
 float_t get_Yf() ;

/// @brief Method set_Yf addr 0x29a1f34 size 0xc virtual false final false
 void set_Yf(float_t value) ;

/// @brief Method AddEdge addr 0x29a0a18 size 0xf0 virtual false final false
 void AddEdge(UnityEngine::ProBuilder::Poly2Tri::DTSweepConstraint e) ;

/// @brief Method get_HasEdges addr 0x299dc54 size 0x10 virtual false final false
 bool get_HasEdges() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationPoint");
