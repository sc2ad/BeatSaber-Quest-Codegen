#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class GraphicsBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
namespace UnityEngine {
struct CombineInstance;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine::Rendering {
struct MeshUpdateFlags;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct UnityEngine__Mesh__MeshDataArray;
}
namespace System {
class Array;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
struct VertexAttributeDescriptor;
}
namespace UnityEngine {
struct UnityEngine__GraphicsBuffer__Target;
}
namespace UnityEngine {
struct UnityEngine__Mesh__MeshData;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::Rendering {
struct VertexAttribute;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct BoneWeight1;
}
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct UnityEngine__Mesh__MeshData;
}
namespace UnityEngine {
struct UnityEngine__Mesh__MeshDataArray;
}
// Type: ::MeshDataArray
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10010))
// CS Name: UnityEngine.Mesh::MeshDataArray
struct CORDL_TYPE UnityEngine__Mesh__MeshDataArray : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Ptrs", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "m_Length", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Mesh__MeshDataArray(void* m_Ptrs, int32_t m_Length) noexcept;


                    constexpr UnityEngine__Mesh__MeshDataArray(UnityEngine__Mesh__MeshDataArray const&) = default;
                    constexpr UnityEngine__Mesh__MeshDataArray(UnityEngine__Mesh__MeshDataArray&&) = default;
                    constexpr UnityEngine__Mesh__MeshDataArray& operator=(UnityEngine__Mesh__MeshDataArray const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Mesh__MeshDataArray& operator=(UnityEngine__Mesh__MeshDataArray&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Mesh__MeshDataArray(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 void* __declspec(property(get=__get_m_Ptrs, put=__set_m_Ptrs))  m_Ptrs;

constexpr void __set_m_Ptrs(void* value) ;

constexpr void* __get_m_Ptrs() const;

 int32_t __declspec(property(get=__get_m_Length, put=__set_m_Length))  m_Length;

constexpr void __set_m_Length(int32_t value) ;

constexpr int32_t __get_m_Length() const;


// Properties

 int32_t __declspec(property(get=get_Length))  Length;


// Methods

/// @brief Method get_Length addr 0x2b3706c size 0x8 virtual false final false
 int32_t get_Length() ;

/// @brief Method Dispose addr 0x2b37074 size 0x90 virtual true final true
 void Dispose() ;

/// @brief Method ApplyToMeshAndDispose addr 0x2b339ac size 0x124 virtual false final false
 void ApplyToMeshAndDispose(UnityEngine::Mesh mesh, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyToMeshesAndDispose addr 0x2b33c30 size 0x244 virtual false final false
 void ApplyToMeshesAndDispose(::ArrayW<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method .ctor addr 0x2b32f98 size 0x248 virtual false final false
 void _ctor(UnityEngine::Mesh mesh, bool checkReadWrite) ;

/// @brief Method .ctor addr 0x2b3327c size 0x338 virtual false final false
 void _ctor(::ArrayW<UnityEngine::Mesh> meshes, int32_t meshesCount, bool checkReadWrite) ;

/// @brief Method .ctor addr 0x2b336bc size 0x168 virtual false final false
 void _ctor(int32_t meshesCount) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b371f8 size 0x44 virtual false final false
static void AcquireReadOnlyMeshData(UnityEngine::Mesh mesh, void* datas) ;

/// @brief Method AcquireReadOnlyMeshDatas addr 0x2b3723c size 0x54 virtual false final false
static void AcquireReadOnlyMeshDatas(::ArrayW<UnityEngine::Mesh> meshes, void* datas, int32_t count) ;

/// @brief Method ReleaseMeshDatas addr 0x2b37104 size 0x44 virtual false final false
static void ReleaseMeshDatas(void* datas, int32_t count) ;

/// @brief Method CreateNewMeshDatas addr 0x2b37290 size 0x44 virtual false final false
static void CreateNewMeshDatas(void* datas, int32_t count) ;

/// @brief Method ApplyToMeshesImpl addr 0x2b3719c size 0x5c virtual false final false
static void ApplyToMeshesImpl(::ArrayW<UnityEngine::Mesh> meshes, void* datas, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyToMeshImpl addr 0x2b37148 size 0x54 virtual false final false
static void ApplyToMeshImpl(UnityEngine::Mesh mesh, ::cordl_internals::intptr_t data, UnityEngine::Rendering::MeshUpdateFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: ::MeshData
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10011))
// CS Name: UnityEngine.Mesh::MeshData
struct CORDL_TYPE UnityEngine__Mesh__MeshData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Ptr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Mesh__MeshData(::cordl_internals::intptr_t m_Ptr) noexcept;


                    constexpr UnityEngine__Mesh__MeshData(UnityEngine__Mesh__MeshData const&) = default;
                    constexpr UnityEngine__Mesh__MeshData(UnityEngine__Mesh__MeshData&&) = default;
                    constexpr UnityEngine__Mesh__MeshData& operator=(UnityEngine__Mesh__MeshData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Mesh__MeshData& operator=(UnityEngine__Mesh__MeshData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Mesh__MeshData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Mesh
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10012))
// CS Name: UnityEngine.Mesh
class CORDL_TYPE Mesh : public UnityEngine::Object {
public:
// Declarations
using MeshData = UnityEngine::UnityEngine__Mesh__MeshData;

using MeshDataArray = UnityEngine::UnityEngine__Mesh__MeshDataArray;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Mesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: " const&", def_value: None }]
constexpr Mesh(Mesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mesh", modifiers: "&&", def_value: None }]
constexpr Mesh(Mesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mesh(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr Mesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mesh& operator=(Mesh&& o) noexcept = default;
  constexpr Mesh& operator=(Mesh const& o) noexcept = default;
                


// Properties

 UnityEngine::Rendering::IndexFormat __declspec(property(get=get_indexFormat, put=set_indexFormat))  indexFormat;

 int32_t __declspec(property(get=get_vertexBufferCount))  vertexBufferCount;

 UnityEngine::UnityEngine__GraphicsBuffer__Target __declspec(property(get=get_vertexBufferTarget, put=set_vertexBufferTarget))  vertexBufferTarget;

 UnityEngine::UnityEngine__GraphicsBuffer__Target __declspec(property(get=get_indexBufferTarget, put=set_indexBufferTarget))  indexBufferTarget;

 int32_t __declspec(property(get=get_blendShapeCount))  blendShapeCount;

 ::ArrayW<UnityEngine::Matrix4x4> __declspec(property(get=get_bindposes, put=set_bindposes))  bindposes;

 bool __declspec(property(get=get_isReadable))  isReadable;

 bool __declspec(property(get=get_canAccess))  canAccess;

 int32_t __declspec(property(get=get_vertexCount))  vertexCount;

 int32_t __declspec(property(get=get_subMeshCount, put=set_subMeshCount))  subMeshCount;

 UnityEngine::Bounds __declspec(property(get=get_bounds, put=set_bounds))  bounds;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_vertices, put=set_vertices))  vertices;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_normals, put=set_normals))  normals;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=get_tangents, put=set_tangents))  tangents;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv, put=set_uv))  uv;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv2, put=set_uv2))  uv2;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv3, put=set_uv3))  uv3;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv4, put=set_uv4))  uv4;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv5, put=set_uv5))  uv5;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv6, put=set_uv6))  uv6;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv7, put=set_uv7))  uv7;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_uv8, put=set_uv8))  uv8;

 ::ArrayW<UnityEngine::Color> __declspec(property(get=get_colors, put=set_colors))  colors;

 ::ArrayW<UnityEngine::Color32> __declspec(property(get=get_colors32, put=set_colors32))  colors32;

 int32_t __declspec(property(get=get_vertexAttributeCount))  vertexAttributeCount;

 ::ArrayW<int32_t> __declspec(property(get=get_triangles, put=set_triangles))  triangles;

 ::ArrayW<UnityEngine::BoneWeight> __declspec(property(get=get_boneWeights, put=set_boneWeights))  boneWeights;


// Methods

/// @brief Method Internal_Create addr 0x2b2e598 size 0x3c virtual false final false
static void Internal_Create(UnityEngine::Mesh mono) ;

static UnityEngine::Mesh New_ctor() ;

/// @brief Method .ctor addr 0x2b2e5d4 size 0x80 virtual false final false
 void _ctor() ;

/// @brief Method FromInstanceID addr 0x2b2e654 size 0x3c virtual false final false
static UnityEngine::Mesh FromInstanceID(int32_t id) ;

/// @brief Method get_indexFormat addr 0x2b2e690 size 0x3c virtual false final false
 UnityEngine::Rendering::IndexFormat get_indexFormat() ;

/// @brief Method set_indexFormat addr 0x2b2e6cc size 0x44 virtual false final false
 void set_indexFormat(UnityEngine::Rendering::IndexFormat value) ;

/// @brief Method GetTotalIndexCount addr 0x2b2e710 size 0x3c virtual false final false
 uint32_t GetTotalIndexCount() ;

/// @brief Method SetIndexBufferParams addr 0x2b2e74c size 0x54 virtual false final false
 void SetIndexBufferParams(int32_t indexCount, UnityEngine::Rendering::IndexFormat format) ;

/// @brief Method InternalSetIndexBufferData addr 0x2b2e7a0 size 0x84 virtual false final false
 void InternalSetIndexBufferData(::cordl_internals::intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method InternalSetIndexBufferDataFromArray addr 0x2b2e824 size 0x84 virtual false final false
 void InternalSetIndexBufferDataFromArray(System::Array data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertexBufferParamsFromPtr addr 0x2b2e8a8 size 0x5c virtual false final false
 void SetVertexBufferParamsFromPtr(int32_t vertexCount, ::cordl_internals::intptr_t attributesPtr, int32_t attributesCount) ;

/// @brief Method SetVertexBufferParamsFromArray addr 0x2b2e904 size 0x54 virtual false final false
 void SetVertexBufferParamsFromArray(int32_t vertexCount, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method InternalSetVertexBufferData addr 0x2b2e958 size 0x8c virtual false final false
 void InternalSetVertexBufferData(int32_t stream, ::cordl_internals::intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method InternalSetVertexBufferDataFromArray addr 0x2b2e9e4 size 0x8c virtual false final false
 void InternalSetVertexBufferDataFromArray(int32_t stream, System::Array data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetVertexAttributesAlloc addr 0x2b2ea70 size 0x3c virtual false final false
 System::Array GetVertexAttributesAlloc() ;

/// @brief Method GetVertexAttributesArray addr 0x2b2eaac size 0x44 virtual false final false
 int32_t GetVertexAttributesArray(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method GetVertexAttributesList addr 0x2b2eaf0 size 0x44 virtual false final false
 int32_t GetVertexAttributesList(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method GetVertexAttributeCountImpl addr 0x2b2eb34 size 0x3c virtual false final false
 int32_t GetVertexAttributeCountImpl() ;

/// @brief Method GetVertexAttribute addr 0x2b2eb70 size 0x5c virtual false final false
 UnityEngine::Rendering::VertexAttributeDescriptor GetVertexAttribute(int32_t index) ;

/// @brief Method GetIndexStartImpl addr 0x2b2ec20 size 0x44 virtual false final false
 uint32_t GetIndexStartImpl(int32_t submesh) ;

/// @brief Method GetIndexCountImpl addr 0x2b2ec64 size 0x44 virtual false final false
 uint32_t GetIndexCountImpl(int32_t submesh) ;

/// @brief Method GetTrianglesCountImpl addr 0x2b2eca8 size 0x44 virtual false final false
 uint32_t GetTrianglesCountImpl(int32_t submesh) ;

/// @brief Method GetBaseVertexImpl addr 0x2b2ecec size 0x44 virtual false final false
 uint32_t GetBaseVertexImpl(int32_t submesh) ;

/// @brief Method GetTrianglesImpl addr 0x2b2ed30 size 0x54 virtual false final false
 ::ArrayW<int32_t> GetTrianglesImpl(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndicesImpl addr 0x2b2ed84 size 0x54 virtual false final false
 ::ArrayW<int32_t> GetIndicesImpl(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method SetIndicesImpl addr 0x2b2edd8 size 0x9c virtual false final false
 void SetIndicesImpl(int32_t submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndicesNativeArrayImpl addr 0x2b2ee74 size 0x9c virtual false final false
 void SetIndicesNativeArrayImpl(int32_t submesh, UnityEngine::MeshTopology topology, UnityEngine::Rendering::IndexFormat indicesFormat, ::cordl_internals::intptr_t indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method GetTrianglesNonAllocImpl addr 0x2b2ef10 size 0x5c virtual false final false
 void GetTrianglesNonAllocImpl(ByRef<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetTrianglesNonAllocImpl16 addr 0x2b2ef6c size 0x5c virtual false final false
 void GetTrianglesNonAllocImpl16(ByRef<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndicesNonAllocImpl addr 0x2b2efc8 size 0x5c virtual false final false
 void GetIndicesNonAllocImpl(ByRef<::ArrayW<int32_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndicesNonAllocImpl16 addr 0x2b2f024 size 0x5c virtual false final false
 void GetIndicesNonAllocImpl16(ByRef<::ArrayW<uint16_t>> values, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method PrintErrorCantAccessChannel addr 0x2b2f080 size 0x44 virtual false final false
 void PrintErrorCantAccessChannel(UnityEngine::Rendering::VertexAttribute ch) ;

/// @brief Method HasVertexAttribute addr 0x2b2f0c4 size 0x44 virtual false final false
 bool HasVertexAttribute(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeDimension addr 0x2b2f108 size 0x44 virtual false final false
 int32_t GetVertexAttributeDimension(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeFormat addr 0x2b2f14c size 0x44 virtual false final false
 UnityEngine::Rendering::VertexAttributeFormat GetVertexAttributeFormat(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeStream addr 0x2b2f190 size 0x44 virtual false final false
 int32_t GetVertexAttributeStream(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method GetVertexAttributeOffset addr 0x2b2f1d4 size 0x44 virtual false final false
 int32_t GetVertexAttributeOffset(UnityEngine::Rendering::VertexAttribute attr) ;

/// @brief Method SetArrayForChannelImpl addr 0x2b2f218 size 0x9c virtual false final false
 void SetArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetNativeArrayForChannelImpl addr 0x2b2f2b4 size 0x9c virtual false final false
 void SetNativeArrayForChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::cordl_internals::intptr_t values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetAllocArrayFromChannelImpl addr 0x2b2f350 size 0x5c virtual false final false
 System::Array GetAllocArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) ;

/// @brief Method GetArrayFromChannelImpl addr 0x2b2f3ac size 0x6c virtual false final false
 void GetArrayFromChannelImpl(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values) ;

/// @brief Method get_vertexBufferCount addr 0x2b2f418 size 0x3c virtual false final false
 int32_t get_vertexBufferCount() ;

/// @brief Method GetVertexBufferStride addr 0x2b2f454 size 0x44 virtual false final false
 int32_t GetVertexBufferStride(int32_t stream) ;

/// @brief Method GetNativeVertexBufferPtr addr 0x2b2f498 size 0x44 virtual false final false
 ::cordl_internals::intptr_t GetNativeVertexBufferPtr(int32_t index) ;

/// @brief Method GetNativeIndexBufferPtr addr 0x2b2f4dc size 0x3c virtual false final false
 ::cordl_internals::intptr_t GetNativeIndexBufferPtr() ;

/// @brief Method GetVertexBufferImpl addr 0x2b2f518 size 0x44 virtual false final false
 UnityEngine::GraphicsBuffer GetVertexBufferImpl(int32_t index) ;

/// @brief Method GetIndexBufferImpl addr 0x2b2f55c size 0x3c virtual false final false
 UnityEngine::GraphicsBuffer GetIndexBufferImpl() ;

/// @brief Method get_vertexBufferTarget addr 0x2b2f598 size 0x3c virtual false final false
 UnityEngine::UnityEngine__GraphicsBuffer__Target get_vertexBufferTarget() ;

/// @brief Method set_vertexBufferTarget addr 0x2b2f5d4 size 0x44 virtual false final false
 void set_vertexBufferTarget(UnityEngine::UnityEngine__GraphicsBuffer__Target value) ;

/// @brief Method get_indexBufferTarget addr 0x2b2f618 size 0x3c virtual false final false
 UnityEngine::UnityEngine__GraphicsBuffer__Target get_indexBufferTarget() ;

/// @brief Method set_indexBufferTarget addr 0x2b2f654 size 0x44 virtual false final false
 void set_indexBufferTarget(UnityEngine::UnityEngine__GraphicsBuffer__Target value) ;

/// @brief Method get_blendShapeCount addr 0x2b2f698 size 0x3c virtual false final false
 int32_t get_blendShapeCount() ;

/// @brief Method ClearBlendShapes addr 0x2b2f6d4 size 0x3c virtual false final false
 void ClearBlendShapes() ;

/// @brief Method GetBlendShapeName addr 0x2b2f710 size 0x44 virtual false final false
 ::StringW GetBlendShapeName(int32_t shapeIndex) ;

/// @brief Method GetBlendShapeIndex addr 0x2b2f754 size 0x44 virtual false final false
 int32_t GetBlendShapeIndex(::StringW blendShapeName) ;

/// @brief Method GetBlendShapeFrameCount addr 0x2b2f798 size 0x44 virtual false final false
 int32_t GetBlendShapeFrameCount(int32_t shapeIndex) ;

/// @brief Method GetBlendShapeFrameWeight addr 0x2b2f7dc size 0x54 virtual false final false
 float_t GetBlendShapeFrameWeight(int32_t shapeIndex, int32_t frameIndex) ;

/// @brief Method GetBlendShapeFrameVertices addr 0x2b2f830 size 0x74 virtual false final false
 void GetBlendShapeFrameVertices(int32_t shapeIndex, int32_t frameIndex, ::ArrayW<UnityEngine::Vector3> deltaVertices, ::ArrayW<UnityEngine::Vector3> deltaNormals, ::ArrayW<UnityEngine::Vector3> deltaTangents) ;

/// @brief Method AddBlendShapeFrame addr 0x2b2f8a4 size 0x7c virtual false final false
 void AddBlendShapeFrame(::StringW shapeName, float_t frameWeight, ::ArrayW<UnityEngine::Vector3> deltaVertices, ::ArrayW<UnityEngine::Vector3> deltaNormals, ::ArrayW<UnityEngine::Vector3> deltaTangents) ;

/// @brief Method HasBoneWeights addr 0x2b2f920 size 0x3c virtual false final false
 bool HasBoneWeights() ;

/// @brief Method GetBoneWeightsImpl addr 0x2b2f95c size 0x3c virtual false final false
 ::ArrayW<UnityEngine::BoneWeight> GetBoneWeightsImpl() ;

/// @brief Method SetBoneWeightsImpl addr 0x2b2f998 size 0x44 virtual false final false
 void SetBoneWeightsImpl(::ArrayW<UnityEngine::BoneWeight> weights) ;

/// @brief Method SetBoneWeights addr 0x2b2f9dc size 0xe8 virtual false final false
 void SetBoneWeights(Unity::Collections::NativeArray_1<uint8_t> bonesPerVertex, Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> weights) ;

/// @brief Method InternalSetBoneWeights addr 0x2b2fac4 size 0x6c virtual false final false
 void InternalSetBoneWeights(::cordl_internals::intptr_t bonesPerVertex, int32_t bonesPerVertexSize, ::cordl_internals::intptr_t weights, int32_t weightsSize) ;

/// @brief Method GetAllBoneWeights addr 0x2b2fb30 size 0xb4 virtual false final false
 Unity::Collections::NativeArray_1<UnityEngine::BoneWeight1> GetAllBoneWeights() ;

/// @brief Method GetBonesPerVertex addr 0x2b2fc5c size 0xe4 virtual false final false
 Unity::Collections::NativeArray_1<uint8_t> GetBonesPerVertex() ;

/// @brief Method GetAllBoneWeightsArraySize addr 0x2b2fc20 size 0x3c virtual false final false
 int32_t GetAllBoneWeightsArraySize() ;

/// @brief Method GetAllBoneWeightsArray addr 0x2b2fbe4 size 0x3c virtual false final false
 ::cordl_internals::intptr_t GetAllBoneWeightsArray() ;

/// @brief Method GetBonesPerVertexArray addr 0x2b2fd7c size 0x3c virtual false final false
 ::cordl_internals::intptr_t GetBonesPerVertexArray() ;

/// @brief Method GetBindposeCount addr 0x2b2fdb8 size 0x3c virtual false final false
 int32_t GetBindposeCount() ;

/// @brief Method get_bindposes addr 0x2b2fdf4 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::Matrix4x4> get_bindposes() ;

/// @brief Method set_bindposes addr 0x2b2fe30 size 0x44 virtual false final false
 void set_bindposes(::ArrayW<UnityEngine::Matrix4x4> value) ;

/// @brief Method GetBoneWeightsNonAllocImpl addr 0x2b2fe74 size 0x44 virtual false final false
 void GetBoneWeightsNonAllocImpl(ByRef<::ArrayW<UnityEngine::BoneWeight>> values) ;

/// @brief Method GetBindposesNonAllocImpl addr 0x2b2feb8 size 0x44 virtual false final false
 void GetBindposesNonAllocImpl(ByRef<::ArrayW<UnityEngine::Matrix4x4>> values) ;

/// @brief Method get_isReadable addr 0x2b2fefc size 0x3c virtual false final false
 bool get_isReadable() ;

/// @brief Method get_canAccess addr 0x2b2ff38 size 0x3c virtual false final false
 bool get_canAccess() ;

/// @brief Method get_vertexCount addr 0x2b2fd40 size 0x3c virtual false final false
 int32_t get_vertexCount() ;

/// @brief Method get_subMeshCount addr 0x2b2ff74 size 0x3c virtual false final false
 int32_t get_subMeshCount() ;

/// @brief Method set_subMeshCount addr 0x2b2ffb0 size 0x44 virtual false final false
 void set_subMeshCount(int32_t value) ;

/// @brief Method SetSubMesh addr 0x2b2fff4 size 0x5c virtual false final false
 void SetSubMesh(int32_t index, UnityEngine::Rendering::SubMeshDescriptor desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetSubMesh addr 0x2b300ac size 0x7c virtual false final false
 UnityEngine::Rendering::SubMeshDescriptor GetSubMesh(int32_t index) ;

/// @brief Method SetAllSubMeshesAtOnceFromArray addr 0x2b3017c size 0x6c virtual false final false
 void SetAllSubMeshesAtOnceFromArray(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetAllSubMeshesAtOnceFromNativeArray addr 0x2b301e8 size 0x6c virtual false final false
 void SetAllSubMeshesAtOnceFromNativeArray(::cordl_internals::intptr_t desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method get_bounds addr 0x2b30254 size 0x68 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method set_bounds addr 0x2b30300 size 0x44 virtual false final false
 void set_bounds(UnityEngine::Bounds value) ;

/// @brief Method ClearImpl addr 0x2b30388 size 0x44 virtual false final false
 void ClearImpl(bool keepVertexLayout) ;

/// @brief Method RecalculateBoundsImpl addr 0x2b303cc size 0x44 virtual false final false
 void RecalculateBoundsImpl(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateNormalsImpl addr 0x2b30410 size 0x44 virtual false final false
 void RecalculateNormalsImpl(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateTangentsImpl addr 0x2b30454 size 0x44 virtual false final false
 void RecalculateTangentsImpl(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method MarkDynamicImpl addr 0x2b30498 size 0x3c virtual false final false
 void MarkDynamicImpl() ;

/// @brief Method MarkModified addr 0x2b304d4 size 0x3c virtual false final false
 void MarkModified() ;

/// @brief Method UploadMeshDataImpl addr 0x2b30510 size 0x44 virtual false final false
 void UploadMeshDataImpl(bool markNoLongerReadable) ;

/// @brief Method GetTopologyImpl addr 0x2b30554 size 0x44 virtual false final false
 UnityEngine::MeshTopology GetTopologyImpl(int32_t submesh) ;

/// @brief Method RecalculateUVDistributionMetricImpl addr 0x2b30598 size 0x54 virtual false final false
 void RecalculateUVDistributionMetricImpl(int32_t uvSetIndex, float_t uvAreaThreshold) ;

/// @brief Method RecalculateUVDistributionMetricsImpl addr 0x2b305ec size 0x4c virtual false final false
 void RecalculateUVDistributionMetricsImpl(float_t uvAreaThreshold) ;

/// @brief Method GetUVDistributionMetric addr 0x2b30638 size 0x44 virtual false final false
 float_t GetUVDistributionMetric(int32_t uvSetIndex) ;

/// @brief Method CombineMeshesImpl addr 0x2b3067c size 0x6c virtual false final false
 void CombineMeshesImpl(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) ;

/// @brief Method OptimizeImpl addr 0x2b306e8 size 0x3c virtual false final false
 void OptimizeImpl() ;

/// @brief Method OptimizeIndexBuffersImpl addr 0x2b30724 size 0x3c virtual false final false
 void OptimizeIndexBuffersImpl() ;

/// @brief Method OptimizeReorderVertexBufferImpl addr 0x2b30760 size 0x3c virtual false final false
 void OptimizeReorderVertexBufferImpl() ;

/// @brief Method GetUVChannel addr 0x2b3079c size 0x78 virtual false final false
static UnityEngine::Rendering::VertexAttribute GetUVChannel(int32_t uvIndex) ;

/// @brief Method DefaultDimensionForChannel addr 0x2b30814 size 0xa0 virtual false final false
static int32_t DefaultDimensionForChannel(UnityEngine::Rendering::VertexAttribute channel) ;

/// @brief Method GetAllocArrayFromChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim) ;

/// @brief Method GetAllocArrayFromChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::ArrayW<T> GetAllocArrayFromChannel(UnityEngine::Rendering::VertexAttribute channel) ;

/// @brief Method SetSizedArrayForChannel addr 0x2b308b4 size 0x2a4 virtual false final false
 void SetSizedArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Array values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSizedNativeArrayForChannel addr 0x2b30b58 size 0x29c virtual false final false
 void SetSizedNativeArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::cordl_internals::intptr_t values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetArrayForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, ::ArrayW<T> values, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetArrayForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetArrayForChannel(UnityEngine::Rendering::VertexAttribute channel, ::ArrayW<T> values, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, System::Collections::Generic::List_1<T> values, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetListForChannel(UnityEngine::Rendering::VertexAttribute channel, System::Collections::Generic::List_1<T> values, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetListForChannel(System::Collections::Generic::List_1<T> buffer, int32_t capacity, UnityEngine::Rendering::VertexAttribute channel, int32_t dim) ;

/// @brief Method GetListForChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetListForChannel(System::Collections::Generic::List_1<T> buffer, int32_t capacity, UnityEngine::Rendering::VertexAttribute channel, int32_t dim, UnityEngine::Rendering::VertexAttributeFormat channelType) ;

/// @brief Method get_vertices addr 0x2b30df4 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_vertices() ;

/// @brief Method set_vertices addr 0x2b30e40 size 0x60 virtual false final false
 void set_vertices(::ArrayW<UnityEngine::Vector3> value) ;

/// @brief Method get_normals addr 0x2b30ea0 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_normals() ;

/// @brief Method set_normals addr 0x2b30eec size 0x60 virtual false final false
 void set_normals(::ArrayW<UnityEngine::Vector3> value) ;

/// @brief Method get_tangents addr 0x2b30f4c size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector4> get_tangents() ;

/// @brief Method set_tangents addr 0x2b30f98 size 0x60 virtual false final false
 void set_tangents(::ArrayW<UnityEngine::Vector4> value) ;

/// @brief Method get_uv addr 0x2b30ff8 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv() ;

/// @brief Method set_uv addr 0x2b31044 size 0x60 virtual false final false
 void set_uv(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv2 addr 0x2b310a4 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv2() ;

/// @brief Method set_uv2 addr 0x2b310f0 size 0x60 virtual false final false
 void set_uv2(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv3 addr 0x2b31150 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv3() ;

/// @brief Method set_uv3 addr 0x2b3119c size 0x60 virtual false final false
 void set_uv3(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv4 addr 0x2b311fc size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv4() ;

/// @brief Method set_uv4 addr 0x2b31248 size 0x60 virtual false final false
 void set_uv4(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv5 addr 0x2b312a8 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv5() ;

/// @brief Method set_uv5 addr 0x2b312f4 size 0x60 virtual false final false
 void set_uv5(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv6 addr 0x2b31354 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv6() ;

/// @brief Method set_uv6 addr 0x2b313a0 size 0x60 virtual false final false
 void set_uv6(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv7 addr 0x2b31400 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv7() ;

/// @brief Method set_uv7 addr 0x2b3144c size 0x60 virtual false final false
 void set_uv7(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_uv8 addr 0x2b314ac size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_uv8() ;

/// @brief Method set_uv8 addr 0x2b314f8 size 0x60 virtual false final false
 void set_uv8(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_colors addr 0x2b31558 size 0x4c virtual false final false
 ::ArrayW<UnityEngine::Color> get_colors() ;

/// @brief Method set_colors addr 0x2b315a4 size 0x60 virtual false final false
 void set_colors(::ArrayW<UnityEngine::Color> value) ;

/// @brief Method get_colors32 addr 0x2b31604 size 0x54 virtual false final false
 ::ArrayW<UnityEngine::Color32> get_colors32() ;

/// @brief Method set_colors32 addr 0x2b31658 size 0x68 virtual false final false
 void set_colors32(::ArrayW<UnityEngine::Color32> value) ;

/// @brief Method GetVertices addr 0x2b316c0 size 0xf0 virtual false final false
 void GetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> vertices) ;

/// @brief Method SetVertices addr 0x2b317b0 size 0x6c virtual false final false
 void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices) ;

/// @brief Method SetVertices addr 0x2b3181c size 0x8 virtual false final false
 void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices, int32_t start, int32_t length) ;

/// @brief Method SetVertices addr 0x2b31824 size 0x7c virtual false final false
 void SetVertices(System::Collections::Generic::List_1<UnityEngine::Vector3> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertices addr 0x2b318a0 size 0x68 virtual false final false
 void SetVertices(::ArrayW<UnityEngine::Vector3> inVertices) ;

/// @brief Method SetVertices addr 0x2b31908 size 0x68 virtual false final false
 void SetVertices(::ArrayW<UnityEngine::Vector3> inVertices, int32_t start, int32_t length) ;

/// @brief Method SetVertices addr 0x2b31970 size 0x6c virtual false final false
 void SetVertices(::ArrayW<UnityEngine::Vector3> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertices(Unity::Collections::NativeArray_1<T> inVertices) ;

/// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertices(Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length) ;

/// @brief Method SetVertices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertices(Unity::Collections::NativeArray_1<T> inVertices, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetNormals addr 0x2b319dc size 0xf0 virtual false final false
 void GetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> normals) ;

/// @brief Method SetNormals addr 0x2b31acc size 0x6c virtual false final false
 void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals) ;

/// @brief Method SetNormals addr 0x2b31b38 size 0x8 virtual false final false
 void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals, int32_t start, int32_t length) ;

/// @brief Method SetNormals addr 0x2b31b40 size 0x7c virtual false final false
 void SetNormals(System::Collections::Generic::List_1<UnityEngine::Vector3> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetNormals addr 0x2b31bbc size 0x68 virtual false final false
 void SetNormals(::ArrayW<UnityEngine::Vector3> inNormals) ;

/// @brief Method SetNormals addr 0x2b31c24 size 0x68 virtual false final false
 void SetNormals(::ArrayW<UnityEngine::Vector3> inNormals, int32_t start, int32_t length) ;

/// @brief Method SetNormals addr 0x2b31c8c size 0x6c virtual false final false
 void SetNormals(::ArrayW<UnityEngine::Vector3> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetNormals(Unity::Collections::NativeArray_1<T> inNormals) ;

/// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetNormals(Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length) ;

/// @brief Method SetNormals addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetNormals(Unity::Collections::NativeArray_1<T> inNormals, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetTangents addr 0x2b31cf8 size 0xf0 virtual false final false
 void GetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> tangents) ;

/// @brief Method SetTangents addr 0x2b31de8 size 0x6c virtual false final false
 void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents) ;

/// @brief Method SetTangents addr 0x2b31e54 size 0x8 virtual false final false
 void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents, int32_t start, int32_t length) ;

/// @brief Method SetTangents addr 0x2b31e5c size 0x7c virtual false final false
 void SetTangents(System::Collections::Generic::List_1<UnityEngine::Vector4> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetTangents addr 0x2b31ed8 size 0x68 virtual false final false
 void SetTangents(::ArrayW<UnityEngine::Vector4> inTangents) ;

/// @brief Method SetTangents addr 0x2b31f40 size 0x68 virtual false final false
 void SetTangents(::ArrayW<UnityEngine::Vector4> inTangents, int32_t start, int32_t length) ;

/// @brief Method SetTangents addr 0x2b31fa8 size 0x6c virtual false final false
 void SetTangents(::ArrayW<UnityEngine::Vector4> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetTangents(Unity::Collections::NativeArray_1<T> inTangents) ;

/// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetTangents(Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length) ;

/// @brief Method SetTangents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetTangents(Unity::Collections::NativeArray_1<T> inTangents, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetColors addr 0x2b32014 size 0xf0 virtual false final false
 void GetColors(System::Collections::Generic::List_1<UnityEngine::Color> colors) ;

/// @brief Method SetColors addr 0x2b32104 size 0x6c virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors) ;

/// @brief Method SetColors addr 0x2b32170 size 0x8 virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b32178 size 0x7c virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetColors addr 0x2b321f4 size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color> inColors) ;

/// @brief Method SetColors addr 0x2b3225c size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b322c4 size 0x6c virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetColors addr 0x2b32330 size 0xf4 virtual false final false
 void GetColors(System::Collections::Generic::List_1<UnityEngine::Color32> colors) ;

/// @brief Method SetColors addr 0x2b32424 size 0x6c virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors) ;

/// @brief Method SetColors addr 0x2b32490 size 0x8 virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b32498 size 0x94 virtual false final false
 void SetColors(System::Collections::Generic::List_1<UnityEngine::Color32> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetColors addr 0x2b3252c size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color32> inColors) ;

/// @brief Method SetColors addr 0x2b32594 size 0x68 virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color32> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x2b325fc size 0x6c virtual false final false
 void SetColors(::ArrayW<UnityEngine::Color32> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetColors(Unity::Collections::NativeArray_1<T> inColors) ;

/// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetColors(Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length) ;

/// @brief Method SetColors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetColors(Unity::Collections::NativeArray_1<T> inColors, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUvsImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUvsImpl(int32_t uvIndex, int32_t dim, System::Collections::Generic::List_1<T> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b32668 size 0x74 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs) ;

/// @brief Method SetUVs addr 0x2b326e4 size 0x74 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs) ;

/// @brief Method SetUVs addr 0x2b32760 size 0x74 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs) ;

/// @brief Method SetUVs addr 0x2b326dc size 0x8 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b327dc size 0x8c virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b32758 size 0x8 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b32868 size 0x8c virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b327d4 size 0x8 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b328f4 size 0x8c virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUvsImpl addr 0x2b32980 size 0x10c virtual false final false
 void SetUvsImpl(int32_t uvIndex, int32_t dim, System::Array uvs, int32_t arrayStart, int32_t arraySize, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b32a8c size 0x48 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs) ;

/// @brief Method SetUVs addr 0x2b32aec size 0x48 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs) ;

/// @brief Method SetUVs addr 0x2b32b4c size 0x48 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs) ;

/// @brief Method SetUVs addr 0x2b32ad4 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b32bac size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector2> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b32b34 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b32bc4 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector3> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x2b32b94 size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x2b32bdc size 0x18 virtual false final false
 void SetUVs(int32_t channel, ::ArrayW<UnityEngine::Vector4> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs) ;

/// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length) ;

/// @brief Method SetUVs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUVs(int32_t channel, Unity::Collections::NativeArray_1<T> uvs, int32_t start, int32_t length, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetUVsImpl addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void GetUVsImpl(int32_t uvIndex, System::Collections::Generic::List_1<T> uvs, int32_t dim) ;

/// @brief Method GetUVs addr 0x2b32bf4 size 0x64 virtual false final false
 void GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector2> uvs) ;

/// @brief Method GetUVs addr 0x2b32c58 size 0x64 virtual false final false
 void GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector3> uvs) ;

/// @brief Method GetUVs addr 0x2b32cbc size 0x64 virtual false final false
 void GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs) ;

/// @brief Method get_vertexAttributeCount addr 0x2b32d20 size 0x3c virtual false final false
 int32_t get_vertexAttributeCount() ;

/// @brief Method GetVertexAttributes addr 0x2b32d5c size 0x8c virtual false final false
 ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> GetVertexAttributes() ;

/// @brief Method GetVertexAttributes addr 0x2b32de8 size 0x44 virtual false final false
 int32_t GetVertexAttributes(::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method GetVertexAttributes addr 0x2b32e2c size 0x44 virtual false final false
 int32_t GetVertexAttributes(System::Collections::Generic::List_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method SetVertexBufferParams addr 0x2b32e70 size 0x54 virtual false final false
 void SetVertexBufferParams(int32_t vertexCount, ::ArrayW<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method SetVertexBufferParams addr 0x2b32ec4 size 0xa8 virtual false final false
 void SetVertexBufferParams(int32_t vertexCount, Unity::Collections::NativeArray_1<UnityEngine::Rendering::VertexAttributeDescriptor> attributes) ;

/// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertexBufferData(Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetVertexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetVertexBufferData(System::Collections::Generic::List_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t stream, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b32f6c size 0x2c virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AcquireReadOnlyMeshData(UnityEngine::Mesh mesh) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b331e0 size 0x9c virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AcquireReadOnlyMeshData(::ArrayW<UnityEngine::Mesh> meshes) ;

/// @brief Method AcquireReadOnlyMeshData addr 0x2b335b4 size 0xe0 virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AcquireReadOnlyMeshData(System::Collections::Generic::List_1<UnityEngine::Mesh> meshes) ;

/// @brief Method AllocateWritableMeshData addr 0x2b33694 size 0x28 virtual false final false
static UnityEngine::UnityEngine__Mesh__MeshDataArray AllocateWritableMeshData(int32_t meshCount) ;

/// @brief Method ApplyAndDisposeWritableMeshData addr 0x2b33824 size 0x188 virtual false final false
static void ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, UnityEngine::Mesh mesh, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyAndDisposeWritableMeshData addr 0x2b33ad0 size 0x160 virtual false final false
static void ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, ::ArrayW<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method ApplyAndDisposeWritableMeshData addr 0x2b33e74 size 0x1bc virtual false final false
static void ApplyAndDisposeWritableMeshData(UnityEngine::UnityEngine__Mesh__MeshDataArray data, System::Collections::Generic::List_1<UnityEngine::Mesh> meshes, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetVertexBuffer addr 0x2b34030 size 0xd4 virtual false final false
 UnityEngine::GraphicsBuffer GetVertexBuffer(int32_t index) ;

/// @brief Method GetIndexBuffer addr 0x2b34104 size 0xc4 virtual false final false
 UnityEngine::GraphicsBuffer GetIndexBuffer() ;

/// @brief Method PrintErrorCantAccessIndices addr 0x2b341c8 size 0x98 virtual false final false
 void PrintErrorCantAccessIndices() ;

/// @brief Method CheckCanAccessSubmesh addr 0x2b34260 size 0x140 virtual false final false
 bool CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles) ;

/// @brief Method CheckCanAccessSubmeshTriangles addr 0x2b343a0 size 0x8 virtual false final false
 bool CheckCanAccessSubmeshTriangles(int32_t submesh) ;

/// @brief Method CheckCanAccessSubmeshIndices addr 0x2b343a8 size 0x8 virtual false final false
 bool CheckCanAccessSubmeshIndices(int32_t submesh) ;

/// @brief Method get_triangles addr 0x2b343b0 size 0xb4 virtual false final false
 ::ArrayW<int32_t> get_triangles() ;

/// @brief Method set_triangles addr 0x2b34464 size 0xa8 virtual false final false
 void set_triangles(::ArrayW<int32_t> value) ;

/// @brief Method GetTriangles addr 0x2b345ac size 0x8 virtual false final false
 ::ArrayW<int32_t> GetTriangles(int32_t submesh) ;

/// @brief Method GetTriangles addr 0x2b345b4 size 0xa8 virtual false final false
 ::ArrayW<int32_t> GetTriangles(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetTriangles addr 0x2b3465c size 0x8 virtual false final false
 void GetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh) ;

/// @brief Method GetTriangles addr 0x2b34664 size 0x1bc virtual false final false
 void GetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetTriangles addr 0x2b34820 size 0x1bc virtual false final false
 void GetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndices addr 0x2b349dc size 0x8 virtual false final false
 ::ArrayW<int32_t> GetIndices(int32_t submesh) ;

/// @brief Method GetIndices addr 0x2b349e4 size 0xa8 virtual false final false
 ::ArrayW<int32_t> GetIndices(int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndices addr 0x2b34a8c size 0x8 virtual false final false
 void GetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t submesh) ;

/// @brief Method GetIndices addr 0x2b34a94 size 0x19c virtual false final false
 void GetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method GetIndices addr 0x2b34cf4 size 0x19c virtual false final false
 void GetIndices(System::Collections::Generic::List_1<uint16_t> indices, int32_t submesh, bool applyBaseVertex) ;

/// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndexBufferData(Unity::Collections::NativeArray_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndexBufferData(::ArrayW<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetIndexBufferData addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndexBufferData(System::Collections::Generic::List_1<T> data, int32_t dataStart, int32_t meshBufferStart, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetIndexStart addr 0x2b34e90 size 0xc4 virtual false final false
 uint32_t GetIndexStart(int32_t submesh) ;

/// @brief Method GetIndexCount addr 0x2b34c30 size 0xc4 virtual false final false
 uint32_t GetIndexCount(int32_t submesh) ;

/// @brief Method GetBaseVertex addr 0x2b34f54 size 0xc4 virtual false final false
 uint32_t GetBaseVertex(int32_t submesh) ;

/// @brief Method CheckIndicesArrayRange addr 0x2b35018 size 0x1ac virtual false final false
 void CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length) ;

/// @brief Method SetTrianglesImpl addr 0x2b3450c size 0xa0 virtual false final false
 void SetTrianglesImpl(int32_t submesh, UnityEngine::Rendering::IndexFormat indicesFormat, System::Array triangles, int32_t trianglesArrayLength, int32_t start, int32_t length, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b351c4 size 0x48 virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh) ;

/// @brief Method SetTriangles addr 0x2b35264 size 0x54 virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds) ;

/// @brief Method SetTriangles addr 0x2b3520c size 0x58 virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b352b8 size 0x8c virtual false final false
 void SetTriangles(::ArrayW<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b35344 size 0x58 virtual false final false
 void SetTriangles(::ArrayW<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b3539c size 0x8c virtual false final false
 void SetTriangles(::ArrayW<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b35428 size 0xc virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh) ;

/// @brief Method SetTriangles addr 0x2b354bc size 0xc virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool calculateBounds) ;

/// @brief Method SetTriangles addr 0x2b35434 size 0x88 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b354c8 size 0xd0 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<int32_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b35598 size 0x88 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetTriangles addr 0x2b35620 size 0xd0 virtual false final false
 void SetTriangles(System::Collections::Generic::List_1<uint16_t> triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b356f0 size 0x64 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh) ;

/// @brief Method SetIndices addr 0x2b357c8 size 0x68 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds) ;

/// @brief Method SetIndices addr 0x2b35754 size 0x74 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b35830 size 0xd4 virtual false final false
 void SetIndices(::ArrayW<int32_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b35904 size 0x74 virtual false final false
 void SetIndices(::ArrayW<uint16_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b35978 size 0xd4 virtual false final false
 void SetIndices(::ArrayW<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndices(Unity::Collections::NativeArray_1<T> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetIndices(Unity::Collections::NativeArray_1<T> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b35a4c size 0xa4 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<int32_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b35af0 size 0x110 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<int32_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b35c00 size 0xa4 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<uint16_t> indices, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetIndices addr 0x2b35ca4 size 0x110 virtual false final false
 void SetIndices(System::Collections::Generic::List_1<uint16_t> indices, int32_t indicesStart, int32_t indicesLength, UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex) ;

/// @brief Method SetSubMeshes addr 0x2b35db4 size 0x2dc virtual false final false
 void SetSubMeshes(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x2b36090 size 0x2c virtual false final false
 void SetSubMeshes(::ArrayW<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x2b360bc size 0x80 virtual false final false
 void SetSubMeshes(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x2b3613c size 0x90 virtual false final false
 void SetSubMeshes(System::Collections::Generic::List_1<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetSubMeshes(Unity::Collections::NativeArray_1<T> desc, int32_t start, int32_t count, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method SetSubMeshes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetSubMeshes(Unity::Collections::NativeArray_1<T> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetBindposes addr 0x2b361cc size 0x134 virtual false final false
 void GetBindposes(System::Collections::Generic::List_1<UnityEngine::Matrix4x4> bindposes) ;

/// @brief Method GetBoneWeights addr 0x2b36300 size 0x160 virtual false final false
 void GetBoneWeights(System::Collections::Generic::List_1<UnityEngine::BoneWeight> boneWeights) ;

/// @brief Method get_boneWeights addr 0x2b36460 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::BoneWeight> get_boneWeights() ;

/// @brief Method set_boneWeights addr 0x2b3649c size 0x44 virtual false final false
 void set_boneWeights(::ArrayW<UnityEngine::BoneWeight> value) ;

/// @brief Method Clear addr 0x2b364e0 size 0x44 virtual false final false
 void Clear(bool keepVertexLayout) ;

/// @brief Method Clear addr 0x2b36524 size 0x40 virtual false final false
 void Clear() ;

/// @brief Method RecalculateBounds addr 0x2b36564 size 0x8 virtual false final false
 void RecalculateBounds() ;

/// @brief Method RecalculateNormals addr 0x2b36660 size 0x8 virtual false final false
 void RecalculateNormals() ;

/// @brief Method RecalculateTangents addr 0x2b3675c size 0x8 virtual false final false
 void RecalculateTangents() ;

/// @brief Method RecalculateBounds addr 0x2b3656c size 0xf4 virtual false final false
 void RecalculateBounds(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateNormals addr 0x2b36668 size 0xf4 virtual false final false
 void RecalculateNormals(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateTangents addr 0x2b36764 size 0xf4 virtual false final false
 void RecalculateTangents(UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method RecalculateUVDistributionMetric addr 0x2b36858 size 0x108 virtual false final false
 void RecalculateUVDistributionMetric(int32_t uvSetIndex, float_t uvAreaThreshold) ;

/// @brief Method RecalculateUVDistributionMetrics addr 0x2b36960 size 0x100 virtual false final false
 void RecalculateUVDistributionMetrics(float_t uvAreaThreshold) ;

/// @brief Method MarkDynamic addr 0x2b36a60 size 0x74 virtual false final false
 void MarkDynamic() ;

/// @brief Method UploadMeshData addr 0x2b36ad4 size 0x7c virtual false final false
 void UploadMeshData(bool markNoLongerReadable) ;

/// @brief Method Optimize addr 0x2b36b50 size 0xec virtual false final false
 void Optimize() ;

/// @brief Method OptimizeIndexBuffers addr 0x2b36c3c size 0xec virtual false final false
 void OptimizeIndexBuffers() ;

/// @brief Method OptimizeReorderVertexBuffer addr 0x2b36d28 size 0xec virtual false final false
 void OptimizeReorderVertexBuffer() ;

/// @brief Method GetTopology addr 0x2b36e14 size 0xe0 virtual false final false
 UnityEngine::MeshTopology GetTopology(int32_t submesh) ;

/// @brief Method CombineMeshes addr 0x2b36ef4 size 0x6c virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices, bool hasLightmapData) ;

/// @brief Method CombineMeshes addr 0x2b36f60 size 0x60 virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes, bool useMatrices) ;

/// @brief Method CombineMeshes addr 0x2b36fc0 size 0x5c virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine, bool mergeSubMeshes) ;

/// @brief Method CombineMeshes addr 0x2b3701c size 0x50 virtual false final false
 void CombineMeshes(::ArrayW<UnityEngine::CombineInstance> combine) ;

/// @brief Method GetVertexAttribute_Injected addr 0x2b2ebcc size 0x54 virtual false final false
 void GetVertexAttribute_Injected(int32_t index, ByRef<UnityEngine::Rendering::VertexAttributeDescriptor> ret) ;

/// @brief Method SetSubMesh_Injected addr 0x2b30050 size 0x5c virtual false final false
 void SetSubMesh_Injected(int32_t index, ByRef<UnityEngine::Rendering::SubMeshDescriptor> desc, UnityEngine::Rendering::MeshUpdateFlags flags) ;

/// @brief Method GetSubMesh_Injected addr 0x2b30128 size 0x54 virtual false final false
 void GetSubMesh_Injected(int32_t index, ByRef<UnityEngine::Rendering::SubMeshDescriptor> ret) ;

/// @brief Method get_bounds_Injected addr 0x2b302bc size 0x44 virtual false final false
 void get_bounds_Injected(ByRef<UnityEngine::Bounds> ret) ;

/// @brief Method set_bounds_Injected addr 0x2b30344 size 0x44 virtual false final false
 void set_bounds_Injected(ByRef<UnityEngine::Bounds> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Mesh);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mesh, "UnityEngine", "Mesh");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Mesh__MeshData, "UnityEngine", "Mesh/MeshData");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Mesh__MeshDataArray, "UnityEngine", "Mesh/MeshDataArray");
