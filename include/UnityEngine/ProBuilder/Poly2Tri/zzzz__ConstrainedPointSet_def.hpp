#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/Poly2Tri/zzzz__PointSet_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder::Poly2Tri {
struct TriangulationMode;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationContext;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class TriangulationPoint;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class ConstrainedPointSet;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::ConstrainedPointSet
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15360))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15359))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.ConstrainedPointSet
class CORDL_TYPE ConstrainedPointSet : public UnityEngine::ProBuilder::Poly2Tri::PointSet {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ConstrainedPointSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstrainedPointSet", modifiers: " const&", def_value: None }]
constexpr ConstrainedPointSet(ConstrainedPointSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstrainedPointSet", modifiers: "&&", def_value: None }]
constexpr ConstrainedPointSet(ConstrainedPointSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstrainedPointSet(void* ptr) noexcept : UnityEngine::ProBuilder::Poly2Tri::PointSet(ptr) {
}


  constexpr ConstrainedPointSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstrainedPointSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstrainedPointSet& operator=(ConstrainedPointSet&& o) noexcept = default;
  constexpr ConstrainedPointSet& operator=(ConstrainedPointSet const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__EdgeIndex_k__BackingField, put=__set__EdgeIndex_k__BackingField))  _EdgeIndex_k__BackingField;

constexpr void __set__EdgeIndex_k__BackingField(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__EdgeIndex_k__BackingField() const;


// Properties

 ::ArrayW<int32_t> __declspec(property(get=get_EdgeIndex, put=set_EdgeIndex))  EdgeIndex;

 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode __declspec(property(get=get_TriangulationMode))  TriangulationMode;


// Methods

/// @brief Method get_EdgeIndex addr 0x29a141c size 0x8 virtual false final false
 ::ArrayW<int32_t> get_EdgeIndex() ;

/// @brief Method set_EdgeIndex addr 0x29a1424 size 0x8 virtual false final false
 void set_EdgeIndex(::ArrayW<int32_t> value) ;

static UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet New_ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> points, ::ArrayW<int32_t> index) ;

/// @brief Method .ctor addr 0x29a142c size 0x24 virtual false final false
 void _ctor(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::TriangulationPoint> points, ::ArrayW<int32_t> index) ;

/// @brief Method get_TriangulationMode addr 0x29a14e0 size 0x8 virtual true final false
 UnityEngine::ProBuilder::Poly2Tri::TriangulationMode get_TriangulationMode() ;

/// @brief Method Prepare addr 0x29a14e8 size 0x1a4 virtual true final false
 void Prepare(UnityEngine::ProBuilder::Poly2Tri::TriangulationContext tcx) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::ConstrainedPointSet, "UnityEngine.ProBuilder.Poly2Tri", "ConstrainedPointSet");
