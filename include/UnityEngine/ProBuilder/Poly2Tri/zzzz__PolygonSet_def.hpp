#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder::Poly2Tri {
class Polygon;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::Poly2Tri {
class PolygonSet;
}
// Type: UnityEngine.ProBuilder.Poly2Tri::PolygonSet
namespace UnityEngine::ProBuilder::Poly2Tri {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15344))
// CS Name: UnityEngine.ProBuilder.Poly2Tri.PolygonSet
class CORDL_TYPE PolygonSet : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PolygonSet() = default;

// Ctor Parameters [CppParam { name: "", ty: "PolygonSet", modifiers: " const&", def_value: None }]
constexpr PolygonSet(PolygonSet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PolygonSet", modifiers: "&&", def_value: None }]
constexpr PolygonSet(PolygonSet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PolygonSet(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PolygonSet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PolygonSet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PolygonSet& operator=(PolygonSet&& o) noexcept = default;
  constexpr PolygonSet& operator=(PolygonSet const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::Polygon> __declspec(property(get=__get__polygons, put=__set__polygons))  _polygons;

constexpr void __set__polygons(System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::Polygon> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::ProBuilder::Poly2Tri::Polygon> __get__polygons() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::Polygon> __declspec(property(get=get_Polygons))  Polygons;


// Methods

static UnityEngine::ProBuilder::Poly2Tri::PolygonSet New_ctor() ;

/// @brief Method .ctor addr 0x299b884 size 0x7c virtual false final false
 void _ctor() ;

static UnityEngine::ProBuilder::Poly2Tri::PolygonSet New_ctor(UnityEngine::ProBuilder::Poly2Tri::Polygon poly) ;

/// @brief Method .ctor addr 0x299b900 size 0x104 virtual false final false
 void _ctor(UnityEngine::ProBuilder::Poly2Tri::Polygon poly) ;

/// @brief Method Add addr 0x299ba04 size 0xa8 virtual false final false
 void Add(UnityEngine::ProBuilder::Poly2Tri::Polygon p) ;

/// @brief Method get_Polygons addr 0x299baac size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Poly2Tri::Polygon> get_Polygons() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::Poly2Tri
NEED_NO_BOX(UnityEngine::ProBuilder::Poly2Tri::PolygonSet);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Poly2Tri::PolygonSet, "UnityEngine.ProBuilder.Poly2Tri", "PolygonSet");
