#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Bounds2D;
}
// Type: UnityEngine.ProBuilder::Bounds2D
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12047))
// CS Name: UnityEngine.ProBuilder.Bounds2D
class CORDL_TYPE Bounds2D : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Bounds2D() = default;

// Ctor Parameters [CppParam { name: "", ty: "Bounds2D", modifiers: " const&", def_value: None }]
constexpr Bounds2D(Bounds2D const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Bounds2D", modifiers: "&&", def_value: None }]
constexpr Bounds2D(Bounds2D&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Bounds2D(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Bounds2D& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Bounds2D& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Bounds2D& operator=(Bounds2D&& o) noexcept = default;
  constexpr Bounds2D& operator=(Bounds2D const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_center, put=__set_center))  center;

constexpr void __set_center(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_center() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Size, put=__set_m_Size))  m_Size;

constexpr void __set_m_Size(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Size() const;

 UnityEngine::Vector2 __declspec(property(get=__get_m_Extents, put=__set_m_Extents))  m_Extents;

constexpr void __set_m_Extents(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_m_Extents() const;


// Properties

 UnityEngine::Vector2 __declspec(property(get=get_size, put=set_size))  size;

 UnityEngine::Vector2 __declspec(property(get=get_extents))  extents;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_corners))  corners;


// Methods

/// @brief Method get_size addr 0x29a4c18 size 0x8 virtual false final false
 UnityEngine::Vector2 get_size() ;

/// @brief Method set_size addr 0x29a4c20 size 0x18 virtual false final false
 void set_size(UnityEngine::Vector2 value) ;

/// @brief Method get_extents addr 0x29a4c38 size 0x8 virtual false final false
 UnityEngine::Vector2 get_extents() ;

/// @brief Method get_corners addr 0x29a4c40 size 0xc8 virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_corners() ;

// Ctor Parameters []
explicit Bounds2D() ;

/// @brief Method .ctor addr 0x29a4d08 size 0x70 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "center", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "size", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }]
explicit Bounds2D(UnityEngine::Vector2 center, UnityEngine::Vector2 size) ;

/// @brief Method .ctor addr 0x29a4d78 size 0xac virtual false final false
 void _ctor(UnityEngine::Vector2 center, UnityEngine::Vector2 size) ;

// Ctor Parameters [CppParam { name: "points", ty: "System::Collections::Generic::IList_1<UnityEngine::Vector2>", modifiers: "", def_value: None }]
explicit Bounds2D(System::Collections::Generic::IList_1<UnityEngine::Vector2> points) ;

/// @brief Method .ctor addr 0x29a4e24 size 0x80 virtual false final false
 void _ctor(System::Collections::Generic::IList_1<UnityEngine::Vector2> points) ;

// Ctor Parameters [CppParam { name: "points", ty: "System::Collections::Generic::IList_1<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "indexes", ty: "System::Collections::Generic::IList_1<int32_t>", modifiers: "", def_value: None }]
explicit Bounds2D(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method .ctor addr 0x29a5194 size 0x90 virtual false final false
 void _ctor(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, System::Collections::Generic::IList_1<int32_t> indexes) ;

// Ctor Parameters [CppParam { name: "points", ty: "::ArrayW<UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "edges", ty: "::ArrayW<UnityEngine::ProBuilder::Edge>", modifiers: "", def_value: None }]
explicit Bounds2D(::ArrayW<UnityEngine::Vector3> points, ::ArrayW<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method .ctor addr 0x29a5784 size 0x1c4 virtual false final false
 void _ctor(::ArrayW<UnityEngine::Vector3> points, ::ArrayW<UnityEngine::ProBuilder::Edge> edges) ;

// Ctor Parameters [CppParam { name: "points", ty: "::ArrayW<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }]
explicit Bounds2D(::ArrayW<UnityEngine::Vector2> points, int32_t length) ;

/// @brief Method .ctor addr 0x29a5948 size 0x14c virtual false final false
 void _ctor(::ArrayW<UnityEngine::Vector2> points, int32_t length) ;

/// @brief Method ContainsPoint addr 0x29a5a94 size 0x54 virtual false final false
 bool ContainsPoint(UnityEngine::Vector2 point) ;

/// @brief Method IntersectsLineSegment addr 0x29a5ae8 size 0x198 virtual false final false
 bool IntersectsLineSegment(UnityEngine::Vector2 lineStart, UnityEngine::Vector2 lineEnd) ;

/// @brief Method Intersects addr 0x29a5cf8 size 0x64 virtual false final false
 bool Intersects(UnityEngine::ProBuilder::Bounds2D bounds) ;

/// @brief Method Intersects addr 0x29a5d5c size 0x90 virtual false final false
 bool Intersects(UnityEngine::Rect rect) ;

/// @brief Method SetWithPoints addr 0x29a4ea4 size 0x2f0 virtual false final false
 void SetWithPoints(System::Collections::Generic::IList_1<UnityEngine::Vector2> points) ;

/// @brief Method SetWithPoints addr 0x29a5224 size 0x560 virtual false final false
 void SetWithPoints(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Center addr 0x29a5dec size 0x2b4 virtual false final false
static UnityEngine::Vector2 Center(System::Collections::Generic::IList_1<UnityEngine::Vector2> points) ;

/// @brief Method Center addr 0x29a60a0 size 0x458 virtual false final false
static UnityEngine::Vector2 Center(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Size addr 0x29a64f8 size 0x44c virtual false final false
static UnityEngine::Vector2 Size(System::Collections::Generic::IList_1<UnityEngine::Vector2> points, System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method Center addr 0x29a6944 size 0x540 virtual false final false
static UnityEngine::Vector2 Center(System::Collections::Generic::IList_1<UnityEngine::Vector4> points, System::Collections::Generic::IEnumerable_1<int32_t> indexes) ;

/// @brief Method ToString addr 0x29a6e84 size 0x1bc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::Bounds2D);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::Bounds2D, "UnityEngine.ProBuilder", "Bounds2D");
