#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Gradient;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class CloudsMeshGenerator;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__CloudsMeshGenerator__Cloud;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__CloudsMeshGenerator__Ring;
}
// Type: ::Cloud
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3972))
// CS Name: CloudsMeshGenerator::Cloud
struct CORDL_TYPE ____GlobalNamespace__CloudsMeshGenerator__Cloud : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "precisionOpaqueMesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: None }, CppParam { name: "lowPolyMesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: None }, CppParam { name: "sizeModifier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "bottomThreshold", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "weight", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "precisionVertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lowPolyVertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "generatedCount", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__CloudsMeshGenerator__Cloud(::UnityEngine::Mesh precisionOpaqueMesh, ::UnityEngine::Mesh lowPolyMesh, float_t sizeModifier, float_t bottomThreshold, int32_t weight, int32_t precisionVertexCount, int32_t lowPolyVertexCount, int32_t generatedCount) noexcept;


                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Cloud(____GlobalNamespace__CloudsMeshGenerator__Cloud const&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Cloud(____GlobalNamespace__CloudsMeshGenerator__Cloud&&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Cloud& operator=(____GlobalNamespace__CloudsMeshGenerator__Cloud const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Cloud& operator=(____GlobalNamespace__CloudsMeshGenerator__Cloud&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CloudsMeshGenerator__Cloud(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Mesh __declspec(property(get=__get_precisionOpaqueMesh, put=__set_precisionOpaqueMesh))  precisionOpaqueMesh;

constexpr void __set_precisionOpaqueMesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get_precisionOpaqueMesh() const;

 ::UnityEngine::Mesh __declspec(property(get=__get_lowPolyMesh, put=__set_lowPolyMesh))  lowPolyMesh;

constexpr void __set_lowPolyMesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get_lowPolyMesh() const;

 float_t __declspec(property(get=__get_sizeModifier, put=__set_sizeModifier))  sizeModifier;

constexpr void __set_sizeModifier(float_t value) ;

constexpr float_t __get_sizeModifier() const;

 float_t __declspec(property(get=__get_bottomThreshold, put=__set_bottomThreshold))  bottomThreshold;

constexpr void __set_bottomThreshold(float_t value) ;

constexpr float_t __get_bottomThreshold() const;

 int32_t __declspec(property(get=__get_weight, put=__set_weight))  weight;

constexpr void __set_weight(int32_t value) ;

constexpr int32_t __get_weight() const;

 int32_t __declspec(property(get=__get_precisionVertexCount, put=__set_precisionVertexCount))  precisionVertexCount;

constexpr void __set_precisionVertexCount(int32_t value) ;

constexpr int32_t __get_precisionVertexCount() const;

 int32_t __declspec(property(get=__get_lowPolyVertexCount, put=__set_lowPolyVertexCount))  lowPolyVertexCount;

constexpr void __set_lowPolyVertexCount(int32_t value) ;

constexpr int32_t __get_lowPolyVertexCount() const;

 int32_t __declspec(property(get=__get_generatedCount, put=__set_generatedCount))  generatedCount;

constexpr void __set_generatedCount(int32_t value) ;

constexpr int32_t __get_generatedCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Ring
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3973))
// CS Name: CloudsMeshGenerator::Ring
struct CORDL_TYPE ____GlobalNamespace__CloudsMeshGenerator__Ring : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normalizedRadius", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "meshCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "cloudIDs", ty: "::ArrayW<int32_t>", modifiers: "", def_value: None }, CppParam { name: "sizeMultiplier", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__CloudsMeshGenerator__Ring(float_t radius, float_t normalizedRadius, int32_t meshCount, ::ArrayW<int32_t> cloudIDs, float_t sizeMultiplier) noexcept;


                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Ring(____GlobalNamespace__CloudsMeshGenerator__Ring const&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Ring(____GlobalNamespace__CloudsMeshGenerator__Ring&&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Ring& operator=(____GlobalNamespace__CloudsMeshGenerator__Ring const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__Ring& operator=(____GlobalNamespace__CloudsMeshGenerator__Ring&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CloudsMeshGenerator__Ring(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(float_t value) ;

constexpr float_t __get_radius() const;

 float_t __declspec(property(get=__get_normalizedRadius, put=__set_normalizedRadius))  normalizedRadius;

constexpr void __set_normalizedRadius(float_t value) ;

constexpr float_t __get_normalizedRadius() const;

 int32_t __declspec(property(get=__get_meshCount, put=__set_meshCount))  meshCount;

constexpr void __set_meshCount(int32_t value) ;

constexpr int32_t __get_meshCount() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_cloudIDs, put=__set_cloudIDs))  cloudIDs;

constexpr void __set_cloudIDs(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_cloudIDs() const;

 float_t __declspec(property(get=__get_sizeMultiplier, put=__set_sizeMultiplier))  sizeMultiplier;

constexpr void __set_sizeMultiplier(float_t value) ;

constexpr float_t __get_sizeMultiplier() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ProhibitedRadius
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3974))
// CS Name: CloudsMeshGenerator::ProhibitedRadius
struct CORDL_TYPE ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "transform", ty: "::UnityEngine::Transform", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "radius", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius(::UnityEngine::Transform transform, float_t distance, float_t radius) noexcept;


                    constexpr ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius(____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius const&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius(____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius&&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius& operator=(____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius& operator=(____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get_transform, put=__set_transform))  transform;

constexpr void __set_transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get_transform() const;

 float_t __declspec(property(get=__get_distance, put=__set_distance))  distance;

constexpr void __set_distance(float_t value) ;

constexpr float_t __get_distance() const;

 float_t __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(float_t value) ;

constexpr float_t __get_radius() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RadiusChunk
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3975))
// CS Name: CloudsMeshGenerator::RadiusChunk
struct CORDL_TYPE ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "normalizedStart", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "normalizedEnd", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "absoluteStart", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "absoluteEnd", ty: "float_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk(float_t normalizedStart, float_t normalizedEnd, float_t absoluteStart, float_t absoluteEnd) noexcept;


                    constexpr ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk(____GlobalNamespace__CloudsMeshGenerator__RadiusChunk const&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk(____GlobalNamespace__CloudsMeshGenerator__RadiusChunk&&) = default;
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk& operator=(____GlobalNamespace__CloudsMeshGenerator__RadiusChunk const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk& operator=(____GlobalNamespace__CloudsMeshGenerator__RadiusChunk&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__CloudsMeshGenerator__RadiusChunk(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_normalizedStart, put=__set_normalizedStart))  normalizedStart;

constexpr void __set_normalizedStart(float_t value) ;

constexpr float_t __get_normalizedStart() const;

 float_t __declspec(property(get=__get_normalizedEnd, put=__set_normalizedEnd))  normalizedEnd;

constexpr void __set_normalizedEnd(float_t value) ;

constexpr float_t __get_normalizedEnd() const;

 float_t __declspec(property(get=__get_absoluteStart, put=__set_absoluteStart))  absoluteStart;

constexpr void __set_absoluteStart(float_t value) ;

constexpr float_t __get_absoluteStart() const;

 float_t __declspec(property(get=__get_absoluteEnd, put=__set_absoluteEnd))  absoluteEnd;

constexpr void __set_absoluteEnd(float_t value) ;

constexpr float_t __get_absoluteEnd() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::CloudsMeshGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3976))
// CS Name: CloudsMeshGenerator
class CORDL_TYPE CloudsMeshGenerator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using RadiusChunk = ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk;

using ProhibitedRadius = ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius;

using Ring = ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring;

using Cloud = ::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~CloudsMeshGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudsMeshGenerator", modifiers: " const&", def_value: None }]
constexpr CloudsMeshGenerator(CloudsMeshGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CloudsMeshGenerator", modifiers: "&&", def_value: None }]
constexpr CloudsMeshGenerator(CloudsMeshGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CloudsMeshGenerator(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CloudsMeshGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CloudsMeshGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CloudsMeshGenerator& operator=(CloudsMeshGenerator&& o) noexcept = default;
  constexpr CloudsMeshGenerator& operator=(CloudsMeshGenerator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(::UnityEngine::MeshFilter value) ;

constexpr ::UnityEngine::MeshFilter __get__meshFilter() const;

 ::StringW __declspec(property(get=__get__meshName, put=__set__meshName))  _meshName;

constexpr void __set__meshName(::StringW value) ;

constexpr ::StringW __get__meshName() const;

 bool __declspec(property(get=__get__pauseGenerator, put=__set__pauseGenerator))  _pauseGenerator;

constexpr void __set__pauseGenerator(bool value) ;

constexpr bool __get__pauseGenerator() const;

 bool __declspec(property(get=__get__bottomPushEnabled, put=__set__bottomPushEnabled))  _bottomPushEnabled;

constexpr void __set__bottomPushEnabled(bool value) ;

constexpr bool __get__bottomPushEnabled() const;

 float_t __declspec(property(get=__get__bottomPushDistance, put=__set__bottomPushDistance))  _bottomPushDistance;

constexpr void __set__bottomPushDistance(float_t value) ;

constexpr float_t __get__bottomPushDistance() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__bottomScaleTopBottom, put=__set__bottomScaleTopBottom))  _bottomScaleTopBottom;

constexpr void __set__bottomScaleTopBottom(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__bottomScaleTopBottom() const;

 float_t __declspec(property(get=__get__bottomHorizontalScale, put=__set__bottomHorizontalScale))  _bottomHorizontalScale;

constexpr void __set__bottomHorizontalScale(float_t value) ;

constexpr float_t __get__bottomHorizontalScale() const;

 bool __declspec(property(get=__get__drawRingGizmos, put=__set__drawRingGizmos))  _drawRingGizmos;

constexpr void __set__drawRingGizmos(bool value) ;

constexpr bool __get__drawRingGizmos() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> __declspec(property(get=__get__prohibitedRadii, put=__set__prohibitedRadii))  _prohibitedRadii;

constexpr void __set__prohibitedRadii(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> __get__prohibitedRadii() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__meshSize, put=__set__meshSize))  _meshSize;

constexpr void __set__meshSize(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__meshSize() const;

 float_t __declspec(property(get=__get__sizeRandomness, put=__set__sizeRandomness))  _sizeRandomness;

constexpr void __set__sizeRandomness(float_t value) ;

constexpr float_t __get__sizeRandomness() const;

 float_t __declspec(property(get=__get__ratioRandomness, put=__set__ratioRandomness))  _ratioRandomness;

constexpr void __set__ratioRandomness(float_t value) ;

constexpr float_t __get__ratioRandomness() const;

 float_t __declspec(property(get=__get__perMeshRadiusOffset, put=__set__perMeshRadiusOffset))  _perMeshRadiusOffset;

constexpr void __set__perMeshRadiusOffset(float_t value) ;

constexpr float_t __get__perMeshRadiusOffset() const;

 ::UnityEngine::Gradient __declspec(property(get=__get__possibleColors, put=__set__possibleColors))  _possibleColors;

constexpr void __set__possibleColors(::UnityEngine::Gradient value) ;

constexpr ::UnityEngine::Gradient __get__possibleColors() const;

 int32_t __declspec(property(get=__get__randomSeed, put=__set__randomSeed))  _randomSeed;

constexpr void __set__randomSeed(int32_t value) ;

constexpr int32_t __get__randomSeed() const;

 float_t __declspec(property(get=__get__heightRandomness, put=__set__heightRandomness))  _heightRandomness;

constexpr void __set__heightRandomness(float_t value) ;

constexpr float_t __get__heightRandomness() const;

 float_t __declspec(property(get=__get__ringRotationRandomness, put=__set__ringRotationRandomness))  _ringRotationRandomness;

constexpr void __set__ringRotationRandomness(float_t value) ;

constexpr float_t __get__ringRotationRandomness() const;

 int32_t __declspec(property(get=__get__ringCount, put=__set__ringCount))  _ringCount;

constexpr void __set__ringCount(int32_t value) ;

constexpr int32_t __get__ringCount() const;

 float_t __declspec(property(get=__get__meshesPerRadius, put=__set__meshesPerRadius))  _meshesPerRadius;

constexpr void __set__meshesPerRadius(float_t value) ;

constexpr float_t __get__meshesPerRadius() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__radiusCloseFar, put=__set__radiusCloseFar))  _radiusCloseFar;

constexpr void __set__radiusCloseFar(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__radiusCloseFar() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__sizeCloseFar, put=__set__sizeCloseFar))  _sizeCloseFar;

constexpr void __set__sizeCloseFar(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__sizeCloseFar() const;

 ::UnityEngine::AnimationCurve __declspec(property(get=__get__heightCloseFar, put=__set__heightCloseFar))  _heightCloseFar;

constexpr void __set__heightCloseFar(::UnityEngine::AnimationCurve value) ;

constexpr ::UnityEngine::AnimationCurve __get__heightCloseFar() const;

 float_t __declspec(property(get=__get__lowPolyThreshold, put=__set__lowPolyThreshold))  _lowPolyThreshold;

constexpr void __set__lowPolyThreshold(float_t value) ;

constexpr float_t __get__lowPolyThreshold() const;

 bool __declspec(property(get=__get__flipNormals, put=__set__flipNormals))  _flipNormals;

constexpr void __set__flipNormals(bool value) ;

constexpr bool __get__flipNormals() const;

 bool __declspec(property(get=__get__curveMesh, put=__set__curveMesh))  _curveMesh;

constexpr void __set__curveMesh(bool value) ;

constexpr bool __get__curveMesh() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud> __declspec(property(get=__get__clouds, put=__set__clouds))  _clouds;

constexpr void __set__clouds(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud> __get__clouds() const;

 int32_t __declspec(property(get=__get__meshCount, put=__set__meshCount))  _meshCount;

constexpr void __set__meshCount(int32_t value) ;

constexpr int32_t __get__meshCount() const;

 int32_t __declspec(property(get=__get__vertexCount, put=__set__vertexCount))  _vertexCount;

constexpr void __set__vertexCount(int32_t value) ;

constexpr int32_t __get__vertexCount() const;

 ::UnityEngine::Mesh __declspec(property(get=__get__generatedMesh, put=__set__generatedMesh))  _generatedMesh;

constexpr void __set__generatedMesh(::UnityEngine::Mesh value) ;

constexpr ::UnityEngine::Mesh __get__generatedMesh() const;

 ::UnityEngine::Bounds __declspec(property(get=__get__meshBounds, put=__set__meshBounds))  _meshBounds;

constexpr void __set__meshBounds(::UnityEngine::Bounds value) ;

constexpr ::UnityEngine::Bounds __get__meshBounds() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk> __declspec(property(get=__get__radiusChunks, put=__set__radiusChunks))  _radiusChunks;

constexpr void __set__radiusChunks(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk> __get__radiusChunks() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring> __declspec(property(get=__get__rings, put=__set__rings))  _rings;

constexpr void __set__rings(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring> __get__rings() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> __declspec(property(get=__get__sortedProhibitedRadii, put=__set__sortedProhibitedRadii))  _sortedProhibitedRadii;

constexpr void __set__sortedProhibitedRadii(::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius> __get__sortedProhibitedRadii() const;


// Methods

// Ctor Parameters []
explicit CloudsMeshGenerator() ;

/// @brief Method .ctor addr 0x20ab4a8 size 0xbc virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CloudsMeshGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CloudsMeshGenerator, "", "CloudsMeshGenerator");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Cloud, "", "CloudsMeshGenerator/Cloud");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__ProhibitedRadius, "", "CloudsMeshGenerator/ProhibitedRadius");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__RadiusChunk, "", "CloudsMeshGenerator/RadiusChunk");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__CloudsMeshGenerator__Ring, "", "CloudsMeshGenerator/Ring");
