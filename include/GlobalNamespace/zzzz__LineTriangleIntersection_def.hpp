#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LineTriangleIntersection;
}
// Type: ::LineTriangleIntersection
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13811))
// CS Name: LineTriangleIntersection
class CORDL_TYPE LineTriangleIntersection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LineTriangleIntersection() = default;

// Ctor Parameters [CppParam { name: "", ty: "LineTriangleIntersection", modifiers: " const&", def_value: None }]
constexpr LineTriangleIntersection(LineTriangleIntersection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LineTriangleIntersection", modifiers: "&&", def_value: None }]
constexpr LineTriangleIntersection(LineTriangleIntersection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LineTriangleIntersection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LineTriangleIntersection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LineTriangleIntersection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LineTriangleIntersection& operator=(LineTriangleIntersection&& o) noexcept = default;
  constexpr LineTriangleIntersection& operator=(LineTriangleIntersection const& o) noexcept = default;
                


// Methods

/// @brief Method Intersects addr 0x1f78dbc size 0x8 virtual false final false
static bool Intersects(::UnityEngine::Ray ray, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2) ;

// Ctor Parameters []
explicit LineTriangleIntersection() ;

/// @brief Method .ctor addr 0x1f78dc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LineTriangleIntersection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LineTriangleIntersection, "", "LineTriangleIntersection");
