#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Vector2f;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Vector3f;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Vector4f;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRPlugin__Vector4s;
}
namespace UnityEngine {
struct Vector2;
}
namespace Unity::Jobs {
class IJobParallelFor;
}
namespace UnityEngine {
struct BoneWeight;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMeshJobs;
}
namespace GlobalNamespace {
template<typename T>
struct ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1;
}
namespace GlobalNamespace {
template<>
struct ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>;
}
namespace GlobalNamespace {
template<>
struct ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>;
}
namespace GlobalNamespace {
template<>
struct ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>;
}
namespace GlobalNamespace {
template<>
struct ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>;
}
namespace GlobalNamespace {
template<>
struct ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t>;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob;
}
// Type: ::TransformToUnitySpaceJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8920))
// CS Name: OVRMeshJobs::TransformToUnitySpaceJob
struct CORDL_TYPE ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::Unity::Jobs::IJobParallelFor
constexpr operator  ::Unity::Jobs::IJobParallelFor() const;

// Ctor Parameters [CppParam { name: "Vertices", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "Normals", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "UV", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "BoneWeights", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight>", modifiers: "", def_value: None }, CppParam { name: "MeshVerticesPosition", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "MeshNormals", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "MeshUV", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>", modifiers: "", def_value: None }, CppParam { name: "MeshBoneWeights", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>", modifiers: "", def_value: None }, CppParam { name: "MeshBoneIndices", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Vertices, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> Normals, ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> UV, ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> BoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> MeshVerticesPosition, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> MeshNormals, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> MeshUV, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> MeshBoneWeights, ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> MeshBoneIndices) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob(____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob(____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob& operator=(____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob& operator=(____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x90};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> __declspec(property(get=__get_Vertices, put=__set_Vertices))  Vertices;

constexpr void __set_Vertices(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> __get_Vertices() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> __declspec(property(get=__get_Normals, put=__set_Normals))  Normals;

constexpr void __set_Normals(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> __get_Normals() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __declspec(property(get=__get_UV, put=__set_UV))  UV;

constexpr void __set_UV(::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector2> __get_UV() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> __declspec(property(get=__get_BoneWeights, put=__set_BoneWeights))  BoneWeights;

constexpr void __set_BoneWeights(::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoneWeight> __get_BoneWeights() const;

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __declspec(property(get=__get_MeshVerticesPosition, put=__set_MeshVerticesPosition))  MeshVerticesPosition;

constexpr void __set_MeshVerticesPosition(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __get_MeshVerticesPosition() const;

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __declspec(property(get=__get_MeshNormals, put=__set_MeshNormals))  MeshNormals;

constexpr void __set_MeshNormals(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __get_MeshNormals() const;

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> __declspec(property(get=__get_MeshUV, put=__set_MeshUV))  MeshUV;

constexpr void __set_MeshUV(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> __get_MeshUV() const;

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> __declspec(property(get=__get_MeshBoneWeights, put=__set_MeshBoneWeights))  MeshBoneWeights;

constexpr void __set_MeshBoneWeights(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> __get_MeshBoneWeights() const;

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> __declspec(property(get=__get_MeshBoneIndices, put=__set_MeshBoneIndices))  MeshBoneIndices;

constexpr void __set_MeshBoneIndices(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> __get_MeshBoneIndices() const;


// Methods

/// @brief Method Execute addr 0x2625d7c size 0x180 virtual true final true
 void Execute(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TransformTrianglesJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8921))
// CS Name: OVRMeshJobs::TransformTrianglesJob
struct CORDL_TYPE ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::Unity::Jobs::IJobParallelFor
constexpr operator  ::Unity::Jobs::IJobParallelFor() const;

// Ctor Parameters [CppParam { name: "Triangles", ty: "::Unity::Collections::NativeArray_1<uint32_t>", modifiers: "", def_value: None }, CppParam { name: "MeshIndices", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "NumIndices", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob(::Unity::Collections::NativeArray_1<uint32_t> Triangles, ::Unity::Collections::NativeArray_1<int16_t> MeshIndices, int32_t NumIndices) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob(____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob(____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob& operator=(____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob& operator=(____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<uint32_t> __declspec(property(get=__get_Triangles, put=__set_Triangles))  Triangles;

constexpr void __set_Triangles(::Unity::Collections::NativeArray_1<uint32_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<uint32_t> __get_Triangles() const;

 ::Unity::Collections::NativeArray_1<int16_t> __declspec(property(get=__get_MeshIndices, put=__set_MeshIndices))  MeshIndices;

constexpr void __set_MeshIndices(::Unity::Collections::NativeArray_1<int16_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<int16_t> __get_MeshIndices() const;

 int32_t __declspec(property(get=__get_NumIndices, put=__set_NumIndices))  NumIndices;

constexpr void __set_NumIndices(int32_t value) ;

constexpr int32_t __get_NumIndices() const;


// Methods

/// @brief Method Execute addr 0x2625efc size 0x20 virtual true final true
 void Execute(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
// Type: ::OVRMeshJobs
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8923))
// CS Name: OVRMeshJobs
class CORDL_TYPE OVRMeshJobs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using NativeArrayHelper_1 = ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<T>;

using TransformTrianglesJob = ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob;

using TransformToUnitySpaceJob = ::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRMeshJobs() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: " const&", def_value: None }]
constexpr OVRMeshJobs(OVRMeshJobs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMeshJobs", modifiers: "&&", def_value: None }]
constexpr OVRMeshJobs(OVRMeshJobs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMeshJobs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRMeshJobs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMeshJobs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMeshJobs& operator=(OVRMeshJobs&& o) noexcept = default;
  constexpr OVRMeshJobs& operator=(OVRMeshJobs const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OVRMeshJobs() ;

/// @brief Method .ctor addr 0x2625d74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8922))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8922), inst: 721 })
// CS Name: OVRMeshJobs::NativeArrayHelper`1
struct CORDL_TYPE ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<int16_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<int16_t>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<int16_t> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<int16_t> __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray))  UnityNativeArray;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<int16_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<int16_t> __get_UnityNativeArray() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get__handle() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<int16_t> ovrArray, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8922))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8922), inst: 735 })
// CS Name: OVRMeshJobs::NativeArrayHelper`1
struct CORDL_TYPE ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray))  UnityNativeArray;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> __get_UnityNativeArray() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get__handle() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector2f> ovrArray, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8922))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8922), inst: 736 })
// CS Name: OVRMeshJobs::NativeArrayHelper`1
struct CORDL_TYPE ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray))  UnityNativeArray;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> __get_UnityNativeArray() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get__handle() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector3f> ovrArray, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8922)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8922), inst: 737 })
// CS Name: OVRMeshJobs::NativeArrayHelper`1
struct CORDL_TYPE ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray))  UnityNativeArray;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> __get_UnityNativeArray() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get__handle() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4f> ovrArray, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NativeArrayHelper`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(8922))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8922), inst: 738 })
// CS Name: OVRMeshJobs::NativeArrayHelper`1
struct CORDL_TYPE ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const;

// Ctor Parameters [CppParam { name: "UnityNativeArray", ty: "::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> UnityNativeArray, ::System::Runtime::InteropServices::GCHandle _handle) noexcept;


                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&&) = default;
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1& operator=(____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> __declspec(property(get=__get_UnityNativeArray, put=__set_UnityNativeArray))  UnityNativeArray;

constexpr void __set_UnityNativeArray(::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> value) ;

constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> __get_UnityNativeArray() const;

 ::System::Runtime::InteropServices::GCHandle __declspec(property(get=__get__handle, put=__set__handle))  _handle;

constexpr void __set__handle(::System::Runtime::InteropServices::GCHandle value) ;

constexpr ::System::Runtime::InteropServices::GCHandle __get__handle() const;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRPlugin__Vector4s> ovrArray, int32_t length) ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRMeshJobs);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMeshJobs, "", "OVRMeshJobs");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__NativeArrayHelper_1, "", "OVRMeshJobs/NativeArrayHelper`1");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformToUnitySpaceJob, "", "OVRMeshJobs/TransformToUnitySpaceJob");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRMeshJobs__TransformTrianglesJob, "", "OVRMeshJobs/TransformTrianglesJob");
