#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
class TrailElementCollection;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberTrailRenderer;
}
// Type: ::SaberTrailRenderer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4990))
// CS Name: SaberTrailRenderer
class CORDL_TYPE SaberTrailRenderer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~SaberTrailRenderer() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTrailRenderer", modifiers: " const&", def_value: None }]
constexpr SaberTrailRenderer(SaberTrailRenderer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberTrailRenderer", modifiers: "&&", def_value: None }]
constexpr SaberTrailRenderer(SaberTrailRenderer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberTrailRenderer(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberTrailRenderer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberTrailRenderer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberTrailRenderer& operator=(SaberTrailRenderer&& o) noexcept = default;
  constexpr SaberTrailRenderer& operator=(SaberTrailRenderer const& o) noexcept = default;
                


// Fields

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__meshRenderer() const;

 ::UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get__meshFilter() const;

static ::UnityEngine::Bounds __declspec(property(get=__get__bounds, put=__set__bounds))  _bounds;

static void __set__bounds(::UnityEngine::Bounds value) ;

static ::UnityEngine::Bounds __get__bounds() ;

static int32_t __declspec(property(get=__get__saberTravelledDistanceId, put=__set__saberTravelledDistanceId))  _saberTravelledDistanceId;

static void __set__saberTravelledDistanceId(int32_t value) ;

static int32_t __get__saberTravelledDistanceId() ;

/// @brief Field kMinMotionBlurSpeed offset 0
static constexpr float_t  kMinMotionBlurSpeed{2.5};

/// @brief Field kMotionBlurStrength offset 0
static constexpr float_t  kMotionBlurStrength{0.8};

 ::UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get__mesh() const;

 ::ArrayW<::UnityEngine::Vector3> __declspec(property(get=__get__vertices, put=__set__vertices))  _vertices;

constexpr void __set__vertices(::ArrayW<::UnityEngine::Vector3> value) ;

constexpr ::ArrayW<::UnityEngine::Vector3> __get__vertices() const;

 ::ArrayW<int32_t> __declspec(property(get=__get__indices, put=__set__indices))  _indices;

constexpr void __set__indices(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__indices() const;

 ::ArrayW<::UnityEngine::Vector2> __declspec(property(get=__get__uvs, put=__set__uvs))  _uvs;

constexpr void __set__uvs(::ArrayW<::UnityEngine::Vector2> value) ;

constexpr ::ArrayW<::UnityEngine::Vector2> __get__uvs() const;

 ::ArrayW<::UnityEngine::Color> __declspec(property(get=__get__colors, put=__set__colors))  _colors;

constexpr void __set__colors(::ArrayW<::UnityEngine::Color> value) ;

constexpr ::ArrayW<::UnityEngine::Color> __get__colors() const;

 float_t __declspec(property(get=__get__trailWidth, put=__set__trailWidth))  _trailWidth;

constexpr void __set__trailWidth(float_t value) ;

constexpr float_t __get__trailWidth() const;

 float_t __declspec(property(get=__get__trailDuration, put=__set__trailDuration))  _trailDuration;

constexpr void __set__trailDuration(float_t value) ;

constexpr float_t __get__trailDuration() const;

 float_t __declspec(property(get=__get__segmentDuration, put=__set__segmentDuration))  _segmentDuration;

constexpr void __set__segmentDuration(float_t value) ;

constexpr float_t __get__segmentDuration() const;

 int32_t __declspec(property(get=__get__granularity, put=__set__granularity))  _granularity;

constexpr void __set__granularity(int32_t value) ;

constexpr int32_t __get__granularity() const;

 float_t __declspec(property(get=__get__whiteSectionMaxDuration, put=__set__whiteSectionMaxDuration))  _whiteSectionMaxDuration;

constexpr void __set__whiteSectionMaxDuration(float_t value) ;

constexpr float_t __get__whiteSectionMaxDuration() const;


// Methods

/// @brief Method Init addr 0x22568c4 size 0x174 virtual true final false
 void Init(float_t trailWidth, float_t trailDuration, int32_t granularity, float_t whiteSectionMaxDuration) ;

/// @brief Method OnDestroy addr 0x2256b90 size 0xc virtual false final false
 void OnDestroy() ;

/// @brief Method OnValidate addr 0x2256b9c size 0xd8 virtual false final false
 void OnValidate() ;

/// @brief Method OnEnable addr 0x2256c74 size 0x84 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2256cf8 size 0x84 virtual false final false
 void OnDisable() ;

/// @brief Method SetTrailWidth addr 0x2256d7c size 0x8 virtual false final false
 void SetTrailWidth(float_t width) ;

/// @brief Method UpdateMesh addr 0x22563ac size 0x134 virtual false final false
 void UpdateMesh(::GlobalNamespace::TrailElementCollection trailElementCollection, ::UnityEngine::Color color) ;

/// @brief Method UpdateVertices addr 0x2256d84 size 0x470 virtual true final false
 void UpdateVertices(::GlobalNamespace::TrailElementCollection trailElementCollection, ::UnityEngine::Color color) ;

/// @brief Method UpdateIndices addr 0x2256a38 size 0x158 virtual false final false
 void UpdateIndices() ;

// Ctor Parameters []
explicit SaberTrailRenderer() ;

/// @brief Method .ctor addr 0x2257488 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SaberTrailRenderer);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SaberTrailRenderer, "", "SaberTrailRenderer");
