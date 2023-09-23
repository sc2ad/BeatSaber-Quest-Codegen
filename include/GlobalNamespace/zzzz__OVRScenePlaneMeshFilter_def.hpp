#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class MeshFilter;
}
namespace UnityEngine {
class Mesh;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace Unity::Jobs {
class IJob;
}
namespace Unity::Collections {
struct Allocator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRScenePlaneMeshFilter;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;
}
// Type: ::NList
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8832))
// CS Name: OVRScenePlaneMeshFilter::TriangulateBoundaryJob::NList
struct CORDL_TYPE GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "_Count_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_data", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(int32_t _Count_k__BackingField, Unity::Collections::NativeArray_1<int32_t> _data) noexcept;


                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList const&) = default;
                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList&&) = default;
                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList& operator=(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList& operator=(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__Count_k__BackingField, put=__set__Count_k__BackingField))  _Count_k__BackingField;

constexpr void __set__Count_k__BackingField(int32_t value) ;

constexpr int32_t __get__Count_k__BackingField() const;

 Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr Unity::Collections::NativeArray_1<int32_t> __get__data() const;


// Properties

 int32_t __declspec(property(get=get_Count, put=set_Count))  Count;

 int32_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Count addr 0x260bfb0 size 0x8 virtual false final false
 int32_t get_Count() ;

/// @brief Method set_Count addr 0x260bfb8 size 0x8 virtual false final false
 void set_Count(int32_t value) ;

/// @brief Method .ctor addr 0x260bdd0 size 0xa4 virtual false final false
 void _ctor(int32_t capacity, Unity::Collections::Allocator allocator) ;

/// @brief Method RemoveAt addr 0x260bf74 size 0x3c virtual false final false
 void RemoveAt(int32_t index) ;

/// @brief Method GetAt addr 0x260be80 size 0x3c virtual false final false
 int32_t GetAt(int32_t index) ;

/// @brief Method get_Item addr 0x260be74 size 0xc virtual false final false
 int32_t get_Item(int32_t index) ;

/// @brief Method Dispose addr 0x260bfc0 size 0x48 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TriangulateBoundaryJob
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8833))
// CS Name: OVRScenePlaneMeshFilter::TriangulateBoundaryJob
struct CORDL_TYPE GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using NList = GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList;

/// @brief Convert operator to Unity::Jobs::IJob
constexpr operator  Unity::Jobs::IJob() const;

// Ctor Parameters [CppParam { name: "Boundary", ty: "Unity::Collections::NativeArray_1<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "Triangles", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob(Unity::Collections::NativeArray_1<UnityEngine::Vector2> Boundary, Unity::Collections::NativeArray_1<int32_t> Triangles) noexcept;


                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob const&) = default;
                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob&&) = default;
                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob& operator=(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob& operator=(GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Vector2> __declspec(property(get=__get_Boundary, put=__set_Boundary))  Boundary;

constexpr void __set_Boundary(Unity::Collections::NativeArray_1<UnityEngine::Vector2> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector2> __get_Boundary() const;

 Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get_Triangles, put=__set_Triangles))  Triangles;

constexpr void __set_Triangles(Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr Unity::Collections::NativeArray_1<int32_t> __get_Triangles() const;


// Methods

/// @brief Method Execute addr 0x260ba3c size 0x394 virtual true final true
 void Execute() ;

/// @brief Method Cross addr 0x260bebc size 0x10 virtual false final false
static float_t Cross(UnityEngine::Vector2 a, UnityEngine::Vector2 b) ;

/// @brief Method PointInTriangle addr 0x260becc size 0xa8 virtual false final false
static bool PointInTriangle(UnityEngine::Vector2 p, UnityEngine::Vector2 a, UnityEngine::Vector2 b, UnityEngine::Vector2 c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRScenePlaneMeshFilter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8834))
// CS Name: OVRScenePlaneMeshFilter
class CORDL_TYPE OVRScenePlaneMeshFilter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using TriangulateBoundaryJob = GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~OVRScenePlaneMeshFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: " const&", def_value: None }]
constexpr OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRScenePlaneMeshFilter", modifiers: "&&", def_value: None }]
constexpr OVRScenePlaneMeshFilter(OVRScenePlaneMeshFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRScenePlaneMeshFilter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRScenePlaneMeshFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRScenePlaneMeshFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRScenePlaneMeshFilter& operator=(OVRScenePlaneMeshFilter&& o) noexcept = default;
  constexpr OVRScenePlaneMeshFilter& operator=(OVRScenePlaneMeshFilter const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshFilter __declspec(property(get=__get__meshFilter, put=__set__meshFilter))  _meshFilter;

constexpr void __set__meshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get__meshFilter() const;

 UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__mesh() const;

 System::Nullable_1<Unity::Jobs::JobHandle> __declspec(property(get=__get__jobHandle, put=__set__jobHandle))  _jobHandle;

constexpr void __set__jobHandle(System::Nullable_1<Unity::Jobs::JobHandle> value) ;

constexpr System::Nullable_1<Unity::Jobs::JobHandle> __get__jobHandle() const;

 bool __declspec(property(get=__get__meshRequested, put=__set__meshRequested))  _meshRequested;

constexpr void __set__meshRequested(bool value) ;

constexpr bool __get__meshRequested() const;

 Unity::Collections::NativeArray_1<UnityEngine::Vector2> __declspec(property(get=__get__boundary, put=__set__boundary))  _boundary;

constexpr void __set__boundary(Unity::Collections::NativeArray_1<UnityEngine::Vector2> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Vector2> __get__boundary() const;

 Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get__triangles, put=__set__triangles))  _triangles;

constexpr void __set__triangles(Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr Unity::Collections::NativeArray_1<int32_t> __get__triangles() const;


// Methods

/// @brief Method Start addr 0x260aafc size 0x1ac virtual false final false
 void Start() ;

/// @brief Method ScheduleMeshGeneration addr 0x260aca8 size 0x5c8 virtual false final false
 void ScheduleMeshGeneration() ;

/// @brief Method Update addr 0x260b270 size 0x734 virtual false final false
 void Update() ;

/// @brief Method RequestMeshGeneration addr 0x260a744 size 0x30 virtual false final false
 void RequestMeshGeneration() ;

/// @brief Method OnDisable addr 0x260b9a4 size 0x90 virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit OVRScenePlaneMeshFilter() ;

/// @brief Method .ctor addr 0x260ba34 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRScenePlaneMeshFilter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRScenePlaneMeshFilter, "", "OVRScenePlaneMeshFilter");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRScenePlaneMeshFilter__TriangulateBoundaryJob__NList, "", "OVRScenePlaneMeshFilter/TriangulateBoundaryJob/NList");
