#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::UIElements {
class MeshWriteData;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct ScaleMode;
}
namespace UnityEngine::UIElements {
struct ColorPage;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements::UIR {
struct VertexFlags;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Rect;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::TextCore::Text {
struct MeshInfo;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::UIElements {
struct TextVertex;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements::UIR {
struct BMPAlloc;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContext__MeshFlags;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge;
}
namespace GlobalNamespace {
class UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator;
}
namespace UnityEngine::UIElements::UIR {
class MeshBuilder;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData;
}
namespace UnityEngine::UIElements::UIR {
struct UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts;
}
// Type: ::Allocator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7503))
// CS Name: UnityEngine.UIElements.UIR.MeshBuilder::AllocMeshData::Allocator
class CORDL_TYPE UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator& operator=(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator&& o) noexcept = default;
  constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator& operator=(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d22be0 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d22ca4 size 0x14 virtual true final false
 UnityEngine::UIElements::MeshWriteData Invoke(uint32_t vertexCount, uint32_t indexCount, ByRef<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData> allocatorData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AllocMeshData
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7504))
// CS Name: UnityEngine.UIElements.UIR.MeshBuilder::AllocMeshData
struct CORDL_TYPE UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Allocator = GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator;

// Ctor Parameters [CppParam { name: "alloc", ty: "GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator", modifiers: "", def_value: None }, CppParam { name: "texture", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "svgTexture", ty: "UnityEngine::UIElements::TextureId", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags", modifiers: "", def_value: None }, CppParam { name: "colorAlloc", ty: "UnityEngine::UIElements::UIR::BMPAlloc", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData(GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator alloc, UnityEngine::Texture texture, UnityEngine::UIElements::TextureId svgTexture, UnityEngine::Material material, UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags flags, UnityEngine::UIElements::UIR::BMPAlloc colorAlloc) noexcept;


                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData const&) = default;
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData&&) = default;
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData& operator=(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData& operator=(UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __declspec(property(get=__get_alloc, put=__set_alloc))  alloc;

constexpr void __set_alloc(GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator value) ;

constexpr GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator __get_alloc() const;

 UnityEngine::Texture __declspec(property(get=__get_texture, put=__set_texture))  texture;

constexpr void __set_texture(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_texture() const;

 UnityEngine::UIElements::TextureId __declspec(property(get=__get_svgTexture, put=__set_svgTexture))  svgTexture;

constexpr void __set_svgTexture(UnityEngine::UIElements::TextureId value) ;

constexpr UnityEngine::UIElements::TextureId __get_svgTexture() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

 UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags __declspec(property(get=__get_flags, put=__set_flags))  flags;

constexpr void __set_flags(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContext__MeshFlags __get_flags() const;

 UnityEngine::UIElements::UIR::BMPAlloc __declspec(property(get=__get_colorAlloc, put=__set_colorAlloc))  colorAlloc;

constexpr void __set_colorAlloc(UnityEngine::UIElements::UIR::BMPAlloc value) ;

constexpr UnityEngine::UIElements::UIR::BMPAlloc __get_colorAlloc() const;


// Methods

/// @brief Method Allocate addr 0x2d1db78 size 0x28 virtual false final false
 UnityEngine::UIElements::MeshWriteData Allocate(uint32_t vertexCount, uint32_t indexCount) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::ClipCounts
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7505))
// CS Name: UnityEngine.UIElements.UIR.MeshBuilder::ClipCounts
struct CORDL_TYPE UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "firstClippedIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "firstDegenerateIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lastClippedIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "clippedTriangles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "addedTriangles", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "degenerateTriangles", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts(int32_t firstClippedIndex, int32_t firstDegenerateIndex, int32_t lastClippedIndex, int32_t clippedTriangles, int32_t addedTriangles, int32_t degenerateTriangles) noexcept;


                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts(UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts const&) = default;
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts(UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts&&) = default;
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts& operator=(UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts& operator=(UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_firstClippedIndex, put=__set_firstClippedIndex))  firstClippedIndex;

constexpr void __set_firstClippedIndex(int32_t value) ;

constexpr int32_t __get_firstClippedIndex() const;

 int32_t __declspec(property(get=__get_firstDegenerateIndex, put=__set_firstDegenerateIndex))  firstDegenerateIndex;

constexpr void __set_firstDegenerateIndex(int32_t value) ;

constexpr int32_t __get_firstDegenerateIndex() const;

 int32_t __declspec(property(get=__get_lastClippedIndex, put=__set_lastClippedIndex))  lastClippedIndex;

constexpr void __set_lastClippedIndex(int32_t value) ;

constexpr int32_t __get_lastClippedIndex() const;

 int32_t __declspec(property(get=__get_clippedTriangles, put=__set_clippedTriangles))  clippedTriangles;

constexpr void __set_clippedTriangles(int32_t value) ;

constexpr int32_t __get_clippedTriangles() const;

 int32_t __declspec(property(get=__get_addedTriangles, put=__set_addedTriangles))  addedTriangles;

constexpr void __set_addedTriangles(int32_t value) ;

constexpr int32_t __get_addedTriangles() const;

 int32_t __declspec(property(get=__get_degenerateTriangles, put=__set_degenerateTriangles))  degenerateTriangles;

constexpr void __set_degenerateTriangles(int32_t value) ;

constexpr int32_t __get_degenerateTriangles() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: ::VertexClipEdge
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7506))
// CS Name: UnityEngine.UIElements.UIR.MeshBuilder::VertexClipEdge
struct CORDL_TYPE UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge(int32_t value__) noexcept;


                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge(UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge const&) = default;
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge(UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge&&) = default;
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge& operator=(UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge& operator=(UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge_Unwrapped : int32_t {
__None = 0,
__Left = 1,
__Top = 2,
__Right = 4,
__Bottom = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge const None;

/// @brief Field Left offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge const Left;

/// @brief Field Top offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge const Top;

/// @brief Field Right offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge const Right;

/// @brief Field Bottom offset 0
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge const Bottom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::MeshBuilder
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7507))
// CS Name: UnityEngine.UIElements.UIR.MeshBuilder
class CORDL_TYPE MeshBuilder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using VertexClipEdge = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge;

using ClipCounts = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts;

using AllocMeshData = UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MeshBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: " const&", def_value: None }]
constexpr MeshBuilder(MeshBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshBuilder", modifiers: "&&", def_value: None }]
constexpr MeshBuilder(MeshBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshBuilder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshBuilder& operator=(MeshBuilder&& o) noexcept = default;
  constexpr MeshBuilder& operator=(MeshBuilder const& o) noexcept = default;
                


// Fields

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_VectorGraphics9Slice, put=__set_s_VectorGraphics9Slice))  s_VectorGraphics9Slice;

static void __set_s_VectorGraphics9Slice(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_VectorGraphics9Slice() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_VectorGraphicsSplitTriangle, put=__set_s_VectorGraphicsSplitTriangle))  s_VectorGraphicsSplitTriangle;

static void __set_s_VectorGraphicsSplitTriangle(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_VectorGraphicsSplitTriangle() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_VectorGraphicsScaleTriangle, put=__set_s_VectorGraphicsScaleTriangle))  s_VectorGraphicsScaleTriangle;

static void __set_s_VectorGraphicsScaleTriangle(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_VectorGraphicsScaleTriangle() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_VectorGraphicsStretch, put=__set_s_VectorGraphicsStretch))  s_VectorGraphicsStretch;

static void __set_s_VectorGraphicsStretch(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_VectorGraphicsStretch() ;

static int32_t __declspec(property(get=__get_s_MaxTextMeshVertices, put=__set_s_MaxTextMeshVertices))  s_MaxTextMeshVertices;

static void __set_s_MaxTextMeshVertices(int32_t value) ;

static int32_t __get_s_MaxTextMeshVertices() ;

static ::ArrayW<uint16_t> __declspec(property(get=__get_slicedQuadIndices, put=__set_slicedQuadIndices))  slicedQuadIndices;

static void __set_slicedQuadIndices(::ArrayW<uint16_t> value) ;

static ::ArrayW<uint16_t> __get_slicedQuadIndices() ;

static ::ArrayW<float_t> __declspec(property(get=__get_k_TexCoordSlicesX, put=__set_k_TexCoordSlicesX))  k_TexCoordSlicesX;

static void __set_k_TexCoordSlicesX(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_k_TexCoordSlicesX() ;

static ::ArrayW<float_t> __declspec(property(get=__get_k_TexCoordSlicesY, put=__set_k_TexCoordSlicesY))  k_TexCoordSlicesY;

static void __set_k_TexCoordSlicesY(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_k_TexCoordSlicesY() ;

static ::ArrayW<float_t> __declspec(property(get=__get_k_PositionSlicesX, put=__set_k_PositionSlicesX))  k_PositionSlicesX;

static void __set_k_PositionSlicesX(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_k_PositionSlicesX() ;

static ::ArrayW<float_t> __declspec(property(get=__get_k_PositionSlicesY, put=__set_k_PositionSlicesY))  k_PositionSlicesY;

static void __set_k_PositionSlicesY(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_k_PositionSlicesY() ;

static ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge> __declspec(property(get=__get_s_AllClipEdges, put=__set_s_AllClipEdges))  s_AllClipEdges;

static void __set_s_AllClipEdges(::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge> value) ;

static ::ArrayW<UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge> __get_s_AllClipEdges() ;


// Methods

/// @brief Method MakeBorder addr 0x2d1ac94 size 0xc0 virtual false final false
static void MakeBorder(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__BorderParams borderParams, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc) ;

/// @brief Method MakeSolidRect addr 0x2d1afd0 size 0x154 virtual false final false
static void MakeSolidRect(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc) ;

/// @brief Method MakeTexturedRect addr 0x2d1bbb8 size 0x314 virtual false final false
static void MakeTexturedRect(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc, UnityEngine::UIElements::ColorPage colorPage) ;

/// @brief Method ConvertTextVertexToUIRVertex addr 0x2d1d5cc size 0x110 virtual false final false
static UnityEngine::UIElements::Vertex ConvertTextVertexToUIRVertex(UnityEngine::TextCore::Text::MeshInfo info, int32_t index, UnityEngine::Vector2 offset, UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor) ;

/// @brief Method ConvertTextVertexToUIRVertex addr 0x2d1d6dc size 0x38 virtual false final false
static UnityEngine::UIElements::Vertex ConvertTextVertexToUIRVertex(UnityEngine::UIElements::TextVertex textVertex, UnityEngine::Vector2 offset) ;

/// @brief Method LimitTextVertices addr 0x2d1d714 size 0x130 virtual false final false
static int32_t LimitTextVertices(int32_t vertexCount, bool logTruncation) ;

/// @brief Method MakeText addr 0x2d1d844 size 0x334 virtual false final false
static void MakeText(UnityEngine::TextCore::Text::MeshInfo meshInfo, UnityEngine::Vector2 offset, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc, UnityEngine::UIElements::UIR::VertexFlags flags, bool isDynamicColor) ;

/// @brief Method MakeText addr 0x2d1dba0 size 0x2c4 virtual false final false
static void MakeText(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> uiVertices, UnityEngine::Vector2 offset, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc) ;

/// @brief Method UpdateText addr 0x2d1de64 size 0x1b8 virtual false final false
static void UpdateText(Unity::Collections::NativeArray_1<UnityEngine::UIElements::TextVertex> uiVertices, UnityEngine::Vector2 offset, UnityEngine::Matrix4x4 transform, UnityEngine::Color32 xformClipPages, UnityEngine::Color32 ids, UnityEngine::Color32 flags, UnityEngine::Color32 opacityPageSettingIndex, Unity::Collections::NativeSlice_1<UnityEngine::UIElements::Vertex> vertices) ;

/// @brief Method MakeQuad addr 0x2d1becc size 0xd58 virtual false final false
static void MakeQuad(UnityEngine::Rect rcPosition, UnityEngine::Rect rcTexCoord, UnityEngine::Color color, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc, UnityEngine::UIElements::ColorPage colorPage) ;

/// @brief Method MakeSlicedQuad addr 0x2d1cc24 size 0x9a8 virtual false final false
static void MakeSlicedQuad(ByRef<UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams> rectParams, float_t posZ, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc) ;

/// @brief Method MakeVectorGraphics addr 0x2d1e01c size 0x3b0 virtual false final false
static void MakeVectorGraphics(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams, int32_t settingIndexOffset, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount) ;

/// @brief Method MakeVectorGraphicsStretchBackground addr 0x2d1e3cc size 0xfec virtual false final false
static void MakeVectorGraphicsStretchBackground(::ArrayW<UnityEngine::UIElements::Vertex> svgVertices, ::ArrayW<uint16_t> svgIndices, float_t svgWidth, float_t svgHeight, UnityEngine::Rect targetRect, UnityEngine::Rect sourceUV, UnityEngine::ScaleMode scaleMode, UnityEngine::Color tint, int32_t settingIndexOffset, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc, ByRef<int32_t> finalVertexCount, ByRef<int32_t> finalIndexCount) ;

/// @brief Method SplitTriangle addr 0x2d2054c size 0xc48 virtual false final false
static void SplitTriangle(void* vertices, void* indices, ByRef<int32_t> vertexCount, int32_t indexToProcess, ByRef<int32_t> indexCount, float_t svgWidth, float_t svgHeight, UnityEngine::Vector4 sliceLTRB, int32_t sliceIndex) ;

/// @brief Method ScaleSplittedTriangles addr 0x2d21194 size 0x284 virtual false final false
static void ScaleSplittedTriangles(void* vertices, int32_t vertexCount, float_t svgWidth, float_t svgHeight, UnityEngine::Rect targetRect, UnityEngine::Vector4 sliceLTRB) ;

/// @brief Method MakeVectorGraphics9SliceBackground addr 0x2d1f3b8 size 0xbac virtual false final false
static void MakeVectorGraphics9SliceBackground(::ArrayW<UnityEngine::UIElements::Vertex> svgVertices, ::ArrayW<uint16_t> svgIndices, float_t svgWidth, float_t svgHeight, UnityEngine::Rect targetRect, UnityEngine::Vector4 sliceLTRB, bool stretch, UnityEngine::Color tint, int32_t settingIndexOffset, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData meshAlloc) ;

/// @brief Method UpperBoundApproximateRectClippingResults addr 0x2d1ff64 size 0x1ac virtual false final false
static UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts UpperBoundApproximateRectClippingResults(::ArrayW<UnityEngine::UIElements::Vertex> vertices, ::ArrayW<uint16_t> indices, UnityEngine::Vector4 clipRectMinMax) ;

/// @brief Method RectClip addr 0x2d20110 size 0x43c virtual false final false
static void RectClip(::ArrayW<UnityEngine::UIElements::Vertex> vertices, ::ArrayW<uint16_t> indices, UnityEngine::Vector4 clipRectMinMax, UnityEngine::UIElements::MeshWriteData mwd, UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts cc, ByRef<int32_t> newVertexCount) ;

/// @brief Method RectClipTriangle addr 0x2d21418 size 0xb5c virtual false final false
static void RectClipTriangle(void* vt, void* it, UnityEngine::Vector4 clipRectMinMax, UnityEngine::UIElements::MeshWriteData mwd, ByRef<uint16_t> nextNewVertex) ;

/// @brief Method GetVertexBaryCentricCoordinates addr 0x2d21f74 size 0xbc virtual false final false
static UnityEngine::Vector3 GetVertexBaryCentricCoordinates(void* vt, float_t x, float_t y) ;

/// @brief Method InterpolateVertexInTriangle addr 0x2d22030 size 0x47c virtual false final false
static UnityEngine::UIElements::Vertex InterpolateVertexInTriangle(void* vt, float_t x, float_t y, UnityEngine::Vector3 uvw) ;

/// @brief Method InterpolateVertexInTriangleEdge addr 0x2d22548 size 0x418 virtual false final false
static UnityEngine::UIElements::Vertex InterpolateVertexInTriangleEdge(void* vt, int32_t e0, int32_t e1, float_t t) ;

/// @brief Method IntersectSegments addr 0x2d224ac size 0x9c virtual false final false
static float_t IntersectSegments(float_t ax, float_t ay, float_t bx, float_t by, float_t cx, float_t cy, float_t dx, float_t dy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__VertexClipEdge, "UnityEngine.UIElements.UIR", "MeshBuilder/VertexClipEdge");
NEED_NO_BOX(GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData__Allocator, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData/Allocator");
NEED_NO_BOX(UnityEngine::UIElements::UIR::MeshBuilder);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::MeshBuilder, "UnityEngine.UIElements.UIR", "MeshBuilder");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__AllocMeshData, "UnityEngine.UIElements.UIR", "MeshBuilder/AllocMeshData");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::UnityEngine__UIElements__UIR__MeshBuilder__ClipCounts, "UnityEngine.UIElements.UIR", "MeshBuilder/ClipCounts");
