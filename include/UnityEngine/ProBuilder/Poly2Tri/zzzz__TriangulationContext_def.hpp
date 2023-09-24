#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationDebugContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationAlgorithm;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationConstraint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Triangulatable;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DelaunayTriangle;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class DTSweepDebugContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::TriangulationContext
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15363))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.TriangulationContext
class CORDL_TYPE TriangulationContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TriangulationContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationContext", modifiers: " const&", def_value: None }]
constexpr TriangulationContext(TriangulationContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriangulationContext", modifiers: "&&", def_value: None }]
constexpr TriangulationContext(TriangulationContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriangulationContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TriangulationContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriangulationContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriangulationContext& operator=(TriangulationContext&& o) noexcept = default;
  constexpr TriangulationContext& operator=(TriangulationContext const& o) noexcept = default;
                


// Fields

 UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext __declspec(property(get=__get__DebugContext_k__BackingField, put=__set__DebugContext_k__BackingField))  _DebugContext_k__BackingField;

constexpr void __set__DebugContext_k__BackingField(UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext __get__DebugContext_k__BackingField() const;

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __declspec(property(get=__get_Triangles, put=__set_Triangles))  Triangles;

constexpr void __set_Triangles(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::DelaunayTriangle> __get_Triangles() const;

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __declspec(property(get=__get_Points, put=__set_Points))  Points;

constexpr void __set_Points(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> __get_Points() const;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode __declspec(property(get=__get__TriangulationMode_k__BackingField, put=__set__TriangulationMode_k__BackingField))  _TriangulationMode_k__BackingField;

constexpr void __set__TriangulationMode_k__BackingField(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::TriangulationMode __get__TriangulationMode_k__BackingField() const;

 UnityEngine::ProBuilder::Poly2Tri::Triangulatable __declspec(property(get=__get__Triangulatable_k__BackingField, put=__set__Triangulatable_k__BackingField))  _Triangulatable_k__BackingField;

constexpr void __set__Triangulatable_k__BackingField(UnityEngine::ProBuilder::Poly2Tri::Triangulatable value) ;

constexpr UnityEngine::ProBuilder::Poly2Tri::Triangulatable __get__Triangulatable_k__BackingField() const;

 int32_t __declspec(property(get=__get__StepCount_k__BackingField, put=__set__StepCount_k__BackingField))  _StepCount_k__BackingField;

constexpr void __set__StepCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__StepCount_k__BackingField() const;

 bool __declspec(property(get=__get__IsDebugEnabled_k__BackingField, put=__set__IsDebugEnabled_k__BackingField))  _IsDebugEnabled_k__BackingField;

constexpr void __set__IsDebugEnabled_k__BackingField(bool value) ;

constexpr bool __get__IsDebugEnabled_k__BackingField() const;


// Properties

 UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext __declspec(property(get=get_DebugContext, put=set_DebugContext))  DebugContext;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode __declspec(property(get=get_TriangulationMode, put=set_TriangulationMode))  TriangulationMode;

 UnityEngine::ProBuilder::Poly2Tri::Triangulatable __declspec(property(get=get_Triangulatable, put=set_Triangulatable))  Triangulatable;

 int32_t __declspec(property(get=get_StepCount, put=set_StepCount))  StepCount;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm __declspec(property(get=get_Algorithm))  Algorithm;

 bool __declspec(property(get=get_IsDebugEnabled, put=set_IsDebugEnabled))  IsDebugEnabled;

 UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext __declspec(property(get=get_DTDebugContext))  DTDebugContext;


// Methods

/// @brief Method get_DebugContext addr 0x29a1d08 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext get_DebugContext() ;

/// @brief Method set_DebugContext addr 0x29a1d10 size 0x8 virtual false final false
 void set_DebugContext(UnityEngine::ProBuilder::Poly2Tri::TriangulationDebugContext value) ;

/// @brief Method get_TriangulationMode addr 0x29a1d18 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode() ;

/// @brief Method set_TriangulationMode addr 0x29a1d20 size 0x8 virtual false final false
 void set_TriangulationMode(UnityEngine::ProBuilder::Poly2Tri::TriangulationMode value) ;

/// @brief Method get_Triangulatable addr 0x29a1d28 size 0x8 virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::Triangulatable get_Triangulatable() ;

/// @brief Method set_Triangulatable addr 0x29a1d30 size 0x8 virtual false final false
 void set_Triangulatable(UnityEngine::ProBuilder::Poly2Tri::Triangulatable value) ;

/// @brief Method get_StepCount addr 0x29a1d38 size 0x8 virtual false final false
 int32_t get_StepCount() ;

/// @brief Method set_StepCount addr 0x29a1d40 size 0x8 virtual false final false
 void set_StepCount(int32_t value) ;

/// @brief Method Done addr 0x299db38 size 0x10 virtual false final false
 void Done() ;

/// @brief Method get_Algorithm addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationAlgorithm get_Algorithm() ;

/// @brief Method PrepareTriangulation addr 0x29a1164 size 0x108 virtual true final false
 void PrepareTriangulation(UnityEngine::ProBuilder::Poly2Tri::Triangulatable t) ;

/// @brief Method NewConstraint addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationConstraint NewConstraint(UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint a, UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint b) ;

/// @brief Method Update addr 0x299deb0 size 0x4 virtual false final false
 void Update(::StringW message) ;

/// @brief Method Clear addr 0x29a0e40 size 0x80 virtual true final false
 void Clear() ;

/// @brief Method get_IsDebugEnabled addr 0x29a1d48 size 0x8 virtual true final false
 bool get_IsDebugEnabled() ;

/// @brief Method set_IsDebugEnabled addr 0x29a1d50 size 0xc virtual true final false
 void set_IsDebugEnabled(bool value) ;

/// @brief Method get_DTDebugContext addr 0x299dc64 size 0x7c virtual false final false
 UnityEngine::ProBuilder::Poly2Tri::DTSweepDebugContext get_DTDebugContext() ;

static UnityEngine::ProBuilder::Poly2Tri::TriangulationContext New_ctor() ;

/// @brief Method .ctor addr 0x29a0b38 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext, "UnityEngine.ProBuilder.Poly2Tri", "TriangulationContext");
