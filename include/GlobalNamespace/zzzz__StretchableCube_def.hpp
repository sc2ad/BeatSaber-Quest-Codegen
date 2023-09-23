#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class StretchableCube;
}
// Type: ::StretchableCube
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4912))
// CS Name: StretchableCube
class CORDL_TYPE StretchableCube : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~StretchableCube() = default;

// Ctor Parameters [CppParam { name: "", ty: "StretchableCube", modifiers: " const&", def_value: None }]
constexpr StretchableCube(StretchableCube const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StretchableCube", modifiers: "&&", def_value: None }]
constexpr StretchableCube(StretchableCube&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StretchableCube(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StretchableCube& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StretchableCube& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StretchableCube& operator=(StretchableCube&& o) noexcept = default;
  constexpr StretchableCube& operator=(StretchableCube const& o) noexcept = default;
                


// Fields

/// @brief Field kLength offset 0
static constexpr float_t  kLength{1};

/// @brief Field kWidth offset 0
static constexpr float_t  kWidth{1};

/// @brief Field kHeight offset 0
static constexpr float_t  kHeight{1};

static UnityEngine::Vector3 __declspec(property(get=__get_p0, put=__set_p0))  p0;

static void __set_p0(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p0() ;

static UnityEngine::Vector3 __declspec(property(get=__get_p1, put=__set_p1))  p1;

static void __set_p1(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p1() ;

static UnityEngine::Vector3 __declspec(property(get=__get_p2, put=__set_p2))  p2;

static void __set_p2(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p2() ;

static UnityEngine::Vector3 __declspec(property(get=__get_p3, put=__set_p3))  p3;

static void __set_p3(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p3() ;

static UnityEngine::Vector3 __declspec(property(get=__get_p4, put=__set_p4))  p4;

static void __set_p4(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p4() ;

static UnityEngine::Vector3 __declspec(property(get=__get_p5, put=__set_p5))  p5;

static void __set_p5(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p5() ;

static UnityEngine::Vector3 __declspec(property(get=__get_p6, put=__set_p6))  p6;

static void __set_p6(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p6() ;

static UnityEngine::Vector3 __declspec(property(get=__get_p7, put=__set_p7))  p7;

static void __set_p7(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_p7() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

static void __set_vertices(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_vertices() ;

static UnityEngine::Vector3 __declspec(property(get=__get_up, put=__set_up))  up;

static void __set_up(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_up() ;

static UnityEngine::Vector3 __declspec(property(get=__get_down, put=__set_down))  down;

static void __set_down(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_down() ;

static UnityEngine::Vector3 __declspec(property(get=__get_front, put=__set_front))  front;

static void __set_front(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_front() ;

static UnityEngine::Vector3 __declspec(property(get=__get_back, put=__set_back))  back;

static void __set_back(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_back() ;

static UnityEngine::Vector3 __declspec(property(get=__get_left, put=__set_left))  left;

static void __set_left(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_left() ;

static UnityEngine::Vector3 __declspec(property(get=__get_right, put=__set_right))  right;

static void __set_right(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_right() ;

static ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_normals, put=__set_normals))  normals;

static void __set_normals(::ArrayW<UnityEngine::Vector3> value) ;

static ::ArrayW<UnityEngine::Vector3> __get_normals() ;

static ::ArrayW<int32_t> __declspec(property(get=__get_triangles, put=__set_triangles))  triangles;

static void __set_triangles(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_triangles() ;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get__uvs, put=__set__uvs))  _uvs;

constexpr void __set__uvs(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get__uvs() const;

 UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__mesh() const;


// Methods

/// @brief Method Awake addr 0x22462d0 size 0x70 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2246484 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method CreateBox addr 0x2246340 size 0x144 virtual false final false
 UnityEngine::Mesh CreateBox() ;

/// @brief Method RecalculateUVs addr 0x2246490 size 0x1e4 virtual false final false
 void RecalculateUVs(::ArrayW<UnityEngine::Vector2> uvs) ;

/// @brief Method RefreshUVs addr 0x2246674 size 0x94 virtual false final false
 void RefreshUVs() ;

// Ctor Parameters []
explicit StretchableCube() ;

/// @brief Method .ctor addr 0x2246708 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StretchableCube);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StretchableCube, "", "StretchableCube");
