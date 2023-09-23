#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BezierPath;
}
namespace GlobalNamespace {
class VertexPath;
}
// Forward declare root types
namespace GlobalNamespace {
class PathsHolder;
}
// Type: ::PathsHolder
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6047))
// CS Name: PathsHolder
class CORDL_TYPE PathsHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PathsHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PathsHolder", modifiers: " const&", def_value: None }]
constexpr PathsHolder(PathsHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PathsHolder", modifiers: "&&", def_value: None }]
constexpr PathsHolder(PathsHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PathsHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PathsHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PathsHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PathsHolder& operator=(PathsHolder&& o) noexcept = default;
  constexpr PathsHolder& operator=(PathsHolder const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BezierPath __declspec(property(get=__get__bezierPath, put=__set__bezierPath))  _bezierPath;

constexpr void __set__bezierPath(GlobalNamespace::BezierPath value) ;

constexpr GlobalNamespace::BezierPath __get__bezierPath() const;

 GlobalNamespace::VertexPath __declspec(property(get=__get__vertexPath, put=__set__vertexPath))  _vertexPath;

constexpr void __set__vertexPath(GlobalNamespace::VertexPath value) ;

constexpr GlobalNamespace::VertexPath __get__vertexPath() const;


// Properties

 GlobalNamespace::BezierPath __declspec(property(get=get_bezierPath))  bezierPath;

 GlobalNamespace::VertexPath __declspec(property(get=get_vertexPath))  vertexPath;


// Methods

/// @brief Method get_bezierPath addr 0x21af100 size 0x8 virtual false final false
 GlobalNamespace::BezierPath get_bezierPath() ;

/// @brief Method get_vertexPath addr 0x21af108 size 0x8 virtual false final false
 GlobalNamespace::VertexPath get_vertexPath() ;

// Ctor Parameters [CppParam { name: "numberOfFixedVertexPathSegments", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "updateVertexPath", ty: "bool", modifiers: "", def_value: None }]
explicit PathsHolder(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) ;

/// @brief Method .ctor addr 0x21af110 size 0x124 virtual false final false
 void _ctor(int32_t numberOfFixedVertexPathSegments, bool updateVertexPath) ;

/// @brief Method UpdateVertexPathByBezierPath addr 0x21af784 size 0x20 virtual false final false
 void UpdateVertexPathByBezierPath() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PathsHolder);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PathsHolder, "", "PathsHolder");
