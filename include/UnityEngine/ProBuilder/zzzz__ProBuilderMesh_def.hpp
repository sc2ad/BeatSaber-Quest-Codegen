#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class UnwrapParameters;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0;
}
namespace UnityEngine {
struct Vector2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace UnityEngine::ProBuilder {
struct RefreshMask;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine::ProBuilder {
struct MeshArrays;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ProBuilder {
struct AutoUnwrapSettings;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__ProBuilderMesh____c;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::ProBuilder {
class SharedVertex;
}
namespace UnityEngine::ProBuilder {
struct MeshSyncState;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct HideFlags;
}
namespace UnityEngine {
class MeshFilter;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__ProBuilderMesh____c;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0;
}
namespace UnityEngine::ProBuilder {
struct UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope;
}
// Type: ::CacheValidState
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12112))
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh::CacheValidState
struct CORDL_TYPE UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState(uint8_t value__) noexcept;


                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState(UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState const&) = default;
                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState(UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState&&) = default;
                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState& operator=(UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState& operator=(UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState_Unwrapped : uint8_t {
__SharedVertex = 1u,
__SharedTexture = 2u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint8_t;


// Fields

 uint8_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint8_t value) ;

constexpr uint8_t __get_value__() const;

/// @brief Field SharedVertex offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState const SharedVertex;

/// @brief Field SharedTexture offset 0
static UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState const SharedTexture;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::NonVersionedEditScope
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12113))
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh::NonVersionedEditScope
struct CORDL_TYPE UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Mesh", ty: "UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "m_VersionIndex", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope(UnityEngine::ProBuilder::ProBuilderMesh m_Mesh, uint16_t m_VersionIndex) noexcept;


                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope(UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope const&) = default;
                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope(UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope&&) = default;
                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope& operator=(UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope& operator=(UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh))  m_Mesh;

constexpr void __set_m_Mesh(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_m_Mesh() const;

 uint16_t __declspec(property(get=__get_m_VersionIndex, put=__set_m_VersionIndex))  m_VersionIndex;

constexpr void __set_m_VersionIndex(uint16_t value) ;

constexpr uint16_t __get_m_VersionIndex() const;


// Methods

/// @brief Method .ctor addr 0x29c6288 size 0x20 virtual false final false
 void _ctor(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method Dispose addr 0x29cb610 size 0x20 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12114))
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh::<>c
class CORDL_TYPE UnityEngine__ProBuilder__ProBuilderMesh____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__ProBuilderMesh____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__ProBuilderMesh____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh____c(UnityEngine__ProBuilder__ProBuilderMesh____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__ProBuilderMesh____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh____c(UnityEngine__ProBuilder__ProBuilderMesh____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__ProBuilderMesh____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c& operator=(UnityEngine__ProBuilder__ProBuilderMesh____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c& operator=(UnityEngine__ProBuilder__ProBuilderMesh____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c value) ;

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c __get___9() ;

static System::Func_2<UnityEngine::Vector4,UnityEngine::Vector2> __declspec(property(get=__get___9__114_0, put=__set___9__114_0))  __9__114_0;

static void __set___9__114_0(System::Func_2<UnityEngine::Vector4,UnityEngine::Vector2> value) ;

static System::Func_2<UnityEngine::Vector4,UnityEngine::Vector2> __get___9__114_0() ;

static System::Func_2<UnityEngine::Vector4,UnityEngine::Vector2> __declspec(property(get=__get___9__114_1, put=__set___9__114_1))  __9__114_1;

static void __set___9__114_1(System::Func_2<UnityEngine::Vector4,UnityEngine::Vector2> value) ;

static System::Func_2<UnityEngine::Vector4,UnityEngine::Vector2> __get___9__114_1() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__122_0, put=__set___9__122_0))  __9__122_0;

static void __set___9__122_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__122_0() ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __declspec(property(get=__get___9__124_0, put=__set___9__124_0))  __9__124_0;

static void __set___9__124_0(System::Func_2<UnityEngine::ProBuilder::Face,int32_t> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,int32_t> __get___9__124_0() ;

static System::Func_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Face> __declspec(property(get=__get___9__165_0, put=__set___9__165_0))  __9__165_0;

static void __set___9__165_0(System::Func_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Face> value) ;

static System::Func_2<UnityEngine::ProBuilder::Face,UnityEngine::ProBuilder::Face> __get___9__165_0() ;


// Methods

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c New_ctor() ;

/// @brief Method .ctor addr 0x29cb694 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetUVs>b__114_0 addr 0x29cb69c size 0x4 virtual false final false
 UnityEngine::Vector2 _SetUVs_b__114_0(UnityEngine::Vector4 x) ;

/// @brief Method <SetUVs>b__114_1 addr 0x29cb6a0 size 0x4 virtual false final false
 UnityEngine::Vector2 _SetUVs_b__114_1(UnityEngine::Vector4 x) ;

/// @brief Method <get_indexCount>b__122_0 addr 0x29cb6a4 size 0x20 virtual false final false
 int32_t _get_indexCount_b__122_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <get_triangleCount>b__124_0 addr 0x29cb6c4 size 0x20 virtual false final false
 int32_t _get_triangleCount_b__124_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <CopyFrom>b__165_0 addr 0x29cb6e4 size 0x64 virtual false final false
 UnityEngine::ProBuilder::Face _CopyFrom_b__165_0(UnityEngine::ProBuilder::Face x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass168_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12115))
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh::<>c__DisplayClass168_0
class CORDL_TYPE UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0& operator=(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0& operator=(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(int32_t value) ;

constexpr int32_t __get_i() const;


// Methods

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0 New_ctor() ;

/// @brief Method .ctor addr 0x29c7c58 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetUnusedTextureGroup>b__0 addr 0x29cb748 size 0x24 virtual false final false
 bool _GetUnusedTextureGroup_b__0(UnityEngine::ProBuilder::Face element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: ::<>c__DisplayClass170_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12116))
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh::<>c__DisplayClass170_0
class CORDL_TYPE UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0& operator=(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0& operator=(UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_i, put=__set_i))  i;

constexpr void __set_i(int32_t value) ;

constexpr int32_t __get_i() const;


// Methods

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0 New_ctor() ;

/// @brief Method .ctor addr 0x29c7d7c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <UnusedElementGroup>b__0 addr 0x29cb76c size 0x24 virtual false final false
 bool _UnusedElementGroup_b__0(UnityEngine::ProBuilder::Face element) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::ProBuilderMesh
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12117))
// CS Name: UnityEngine.ProBuilder.ProBuilderMesh
class CORDL_TYPE ProBuilderMesh : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass170_0 = UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0;

using __c__DisplayClass168_0 = UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0;

using __c = UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c;

using NonVersionedEditScope = UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope;

using CacheValidState = UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~ProBuilderMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh", modifiers: " const&", def_value: None }]
constexpr ProBuilderMesh(ProBuilderMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProBuilderMesh", modifiers: "&&", def_value: None }]
constexpr ProBuilderMesh(ProBuilderMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProBuilderMesh(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ProBuilderMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProBuilderMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProBuilderMesh& operator=(ProBuilderMesh&& o) noexcept = default;
  constexpr ProBuilderMesh& operator=(ProBuilderMesh const& o) noexcept = default;
                


// Fields

/// @brief Field k_MeshFilterHideFlags offset 0
static UnityEngine::HideFlags const k_MeshFilterHideFlags;

/// @brief Field k_UVChannelCount offset 0
static constexpr int32_t  k_UVChannelCount{4};

/// @brief Field k_MeshFormatVersion offset 0
static constexpr int32_t  k_MeshFormatVersion{2};

/// @brief Field k_MeshFormatVersionSubmeshMaterialRefactor offset 0
static constexpr int32_t  k_MeshFormatVersionSubmeshMaterialRefactor{1};

/// @brief Field k_MeshFormatVersionAutoUVScaleOffset offset 0
static constexpr int32_t  k_MeshFormatVersionAutoUVScaleOffset{2};

/// @brief Field maxVertexCount offset 0
static constexpr uint32_t  maxVertexCount{65535u};

 int32_t __declspec(property(get=__get_m_MeshFormatVersion, put=__set_m_MeshFormatVersion))  m_MeshFormatVersion;

constexpr void __set_m_MeshFormatVersion(int32_t value) ;

constexpr int32_t __get_m_MeshFormatVersion() const;

 ::ArrayW<UnityEngine::ProBuilder::Face> __declspec(property(get=__get_m_Faces, put=__set_m_Faces))  m_Faces;

constexpr void __set_m_Faces(::ArrayW<UnityEngine::ProBuilder::Face> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::Face> __get_m_Faces() const;

 ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __declspec(property(get=__get_m_SharedVertices, put=__set_m_SharedVertices))  m_SharedVertices;

constexpr void __set_m_SharedVertices(::ArrayW<UnityEngine::ProBuilder::SharedVertex> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __get_m_SharedVertices() const;

 UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState __declspec(property(get=__get_m_CacheValid, put=__set_m_CacheValid))  m_CacheValid;

constexpr void __set_m_CacheValid(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState value) ;

constexpr UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState __get_m_CacheValid() const;

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_m_SharedVertexLookup, put=__set_m_SharedVertexLookup))  m_SharedVertexLookup;

constexpr void __set_m_SharedVertexLookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_m_SharedVertexLookup() const;

 ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __declspec(property(get=__get_m_SharedTextures, put=__set_m_SharedTextures))  m_SharedTextures;

constexpr void __set_m_SharedTextures(::ArrayW<UnityEngine::ProBuilder::SharedVertex> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __get_m_SharedTextures() const;

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=__get_m_SharedTextureLookup, put=__set_m_SharedTextureLookup))  m_SharedTextureLookup;

constexpr void __set_m_SharedTextureLookup(System::Collections::Generic::Dictionary_2<int32_t,int32_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,int32_t> __get_m_SharedTextureLookup() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_Positions, put=__set_m_Positions))  m_Positions;

constexpr void __set_m_Positions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_Positions() const;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=__get_m_Textures0, put=__set_m_Textures0))  m_Textures0;

constexpr void __set_m_Textures0(::ArrayW<UnityEngine::Vector2> value) ;

constexpr ::ArrayW<UnityEngine::Vector2> __get_m_Textures0() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Textures2, put=__set_m_Textures2))  m_Textures2;

constexpr void __set_m_Textures2(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get_m_Textures2() const;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=__get_m_Textures3, put=__set_m_Textures3))  m_Textures3;

constexpr void __set_m_Textures3(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Vector4> __get_m_Textures3() const;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=__get_m_Tangents, put=__set_m_Tangents))  m_Tangents;

constexpr void __set_m_Tangents(::ArrayW<UnityEngine::Vector4> value) ;

constexpr ::ArrayW<UnityEngine::Vector4> __get_m_Tangents() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_Normals, put=__set_m_Normals))  m_Normals;

constexpr void __set_m_Normals(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_Normals() const;

 ::ArrayW<UnityEngine::Color> __declspec(property(get=__get_m_Colors, put=__set_m_Colors))  m_Colors;

constexpr void __set_m_Colors(::ArrayW<UnityEngine::Color> value) ;

constexpr ::ArrayW<UnityEngine::Color> __get_m_Colors() const;

 bool __declspec(property(get=__get__userCollisions_k__BackingField, put=__set__userCollisions_k__BackingField))  _userCollisions_k__BackingField;

constexpr void __set__userCollisions_k__BackingField(bool value) ;

constexpr bool __get__userCollisions_k__BackingField() const;

 UnityEngine::ProBuilder::UnwrapParameters __declspec(property(get=__get_m_UnwrapParameters, put=__set_m_UnwrapParameters))  m_UnwrapParameters;

constexpr void __set_m_UnwrapParameters(UnityEngine::ProBuilder::UnwrapParameters value) ;

constexpr UnityEngine::ProBuilder::UnwrapParameters __get_m_UnwrapParameters() const;

 bool __declspec(property(get=__get_m_PreserveMeshAssetOnDestroy, put=__set_m_PreserveMeshAssetOnDestroy))  m_PreserveMeshAssetOnDestroy;

constexpr void __set_m_PreserveMeshAssetOnDestroy(bool value) ;

constexpr bool __get_m_PreserveMeshAssetOnDestroy() const;

 ::StringW __declspec(property(get=__get_assetGuid, put=__set_assetGuid))  assetGuid;

constexpr void __set_assetGuid(::StringW value) ;

constexpr ::StringW __get_assetGuid() const;

 UnityEngine::Mesh __declspec(property(get=__get_m_Mesh, put=__set_m_Mesh))  m_Mesh;

constexpr void __set_m_Mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_m_Mesh() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get_m_MeshRenderer, put=__set_m_MeshRenderer))  m_MeshRenderer;

constexpr void __set_m_MeshRenderer(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get_m_MeshRenderer() const;

 UnityEngine::MeshFilter __declspec(property(get=__get_m_MeshFilter, put=__set_m_MeshFilter))  m_MeshFilter;

constexpr void __set_m_MeshFilter(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get_m_MeshFilter() const;

 uint16_t __declspec(property(get=__get_m_VersionIndex, put=__set_m_VersionIndex))  m_VersionIndex;

constexpr void __set_m_VersionIndex(uint16_t value) ;

constexpr uint16_t __get_m_VersionIndex() const;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __declspec(property(get=__get_meshWillBeDestroyed, put=__set_meshWillBeDestroyed))  meshWillBeDestroyed;

static void __set_meshWillBeDestroyed(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __get_meshWillBeDestroyed() ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __declspec(property(get=__get_meshWasInitialized, put=__set_meshWasInitialized))  meshWasInitialized;

static void __set_meshWasInitialized(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __get_meshWasInitialized() ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __declspec(property(get=__get_componentWillBeDestroyed, put=__set_componentWillBeDestroyed))  componentWillBeDestroyed;

static void __set_componentWillBeDestroyed(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __get_componentWillBeDestroyed() ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __declspec(property(get=__get_componentHasBeenReset, put=__set_componentHasBeenReset))  componentHasBeenReset;

static void __set_componentHasBeenReset(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __get_componentHasBeenReset() ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __declspec(property(get=__get_elementSelectionChanged, put=__set_elementSelectionChanged))  elementSelectionChanged;

static void __set_elementSelectionChanged(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

static System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> __get_elementSelectionChanged() ;

static System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_s_CachedHashSet, put=__set_s_CachedHashSet))  s_CachedHashSet;

static void __set_s_CachedHashSet(System::Collections::Generic::HashSet_1<int32_t> value) ;

static System::Collections::Generic::HashSet_1<int32_t> __get_s_CachedHashSet() ;

 bool __declspec(property(get=__get_m_IsSelectable, put=__set_m_IsSelectable))  m_IsSelectable;

constexpr void __set_m_IsSelectable(bool value) ;

constexpr bool __get_m_IsSelectable() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_SelectedFaces, put=__set_m_SelectedFaces))  m_SelectedFaces;

constexpr void __set_m_SelectedFaces(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_SelectedFaces() const;

 ::ArrayW<UnityEngine::ProBuilder::Edge> __declspec(property(get=__get_m_SelectedEdges, put=__set_m_SelectedEdges))  m_SelectedEdges;

constexpr void __set_m_SelectedEdges(::ArrayW<UnityEngine::ProBuilder::Edge> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::Edge> __get_m_SelectedEdges() const;

 ::ArrayW<int32_t> __declspec(property(get=__get_m_SelectedVertices, put=__set_m_SelectedVertices))  m_SelectedVertices;

constexpr void __set_m_SelectedVertices(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_SelectedVertices() const;

 bool __declspec(property(get=__get_m_SelectedCacheDirty, put=__set_m_SelectedCacheDirty))  m_SelectedCacheDirty;

constexpr void __set_m_SelectedCacheDirty(bool value) ;

constexpr bool __get_m_SelectedCacheDirty() const;

 int32_t __declspec(property(get=__get_m_SelectedSharedVerticesCount, put=__set_m_SelectedSharedVerticesCount))  m_SelectedSharedVerticesCount;

constexpr void __set_m_SelectedSharedVerticesCount(int32_t value) ;

constexpr int32_t __get_m_SelectedSharedVerticesCount() const;

 int32_t __declspec(property(get=__get_m_SelectedCoincidentVertexCount, put=__set_m_SelectedCoincidentVertexCount))  m_SelectedCoincidentVertexCount;

constexpr void __set_m_SelectedCoincidentVertexCount(int32_t value) ;

constexpr int32_t __get_m_SelectedCoincidentVertexCount() const;

 System::Collections::Generic::HashSet_1<int32_t> __declspec(property(get=__get_m_SelectedSharedVertices, put=__set_m_SelectedSharedVertices))  m_SelectedSharedVertices;

constexpr void __set_m_SelectedSharedVertices(System::Collections::Generic::HashSet_1<int32_t> value) ;

constexpr System::Collections::Generic::HashSet_1<int32_t> __get_m_SelectedSharedVertices() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_SelectedCoincidentVertices, put=__set_m_SelectedCoincidentVertices))  m_SelectedCoincidentVertices;

constexpr void __set_m_SelectedCoincidentVertices(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_SelectedCoincidentVertices() const;


// Properties

 bool __declspec(property(get=get_userCollisions, put=set_userCollisions))  userCollisions;

 UnityEngine::ProBuilder::UnwrapParameters __declspec(property(get=get_unwrapParameters, put=set_unwrapParameters))  unwrapParameters;

 UnityEngine::MeshRenderer __declspec(property(get=get_renderer))  renderer;

 UnityEngine::MeshFilter __declspec(property(get=get_filter))  filter;

 uint16_t __declspec(property(get=get_versionIndex))  versionIndex;

 bool __declspec(property(get=get_preserveMeshAssetOnDestroy, put=set_preserveMeshAssetOnDestroy))  preserveMeshAssetOnDestroy;

 ::ArrayW<UnityEngine::ProBuilder::Face> __declspec(property(get=get_facesInternal, put=set_facesInternal))  facesInternal;

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> __declspec(property(get=get_faces, put=set_faces))  faces;

 ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __declspec(property(get=get_sharedVerticesInternal, put=set_sharedVerticesInternal))  sharedVerticesInternal;

 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> __declspec(property(get=get_sharedVertices, put=set_sharedVertices))  sharedVertices;

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=get_sharedVertexLookup))  sharedVertexLookup;

 ::ArrayW<UnityEngine::ProBuilder::SharedVertex> __declspec(property(get=get_sharedTextures, put=set_sharedTextures))  sharedTextures;

 System::Collections::Generic::Dictionary_2<int32_t,int32_t> __declspec(property(get=get_sharedTextureLookup))  sharedTextureLookup;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_positionsInternal, put=set_positionsInternal))  positionsInternal;

 System::Collections::Generic::IList_1<UnityEngine::Vector3> __declspec(property(get=get_positions, put=set_positions))  positions;

 System::Collections::Generic::IList_1<UnityEngine::Vector3> __declspec(property(get=get_normals))  normals;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=get_normalsInternal, put=set_normalsInternal))  normalsInternal;

 ::ArrayW<UnityEngine::Color> __declspec(property(get=get_colorsInternal, put=set_colorsInternal))  colorsInternal;

 System::Collections::Generic::IList_1<UnityEngine::Color> __declspec(property(get=get_colors, put=set_colors))  colors;

 System::Collections::Generic::IList_1<UnityEngine::Vector4> __declspec(property(get=get_tangents, put=set_tangents))  tangents;

 ::ArrayW<UnityEngine::Vector4> __declspec(property(get=get_tangentsInternal, put=set_tangentsInternal))  tangentsInternal;

 ::ArrayW<UnityEngine::Vector2> __declspec(property(get=get_texturesInternal, put=set_texturesInternal))  texturesInternal;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=get_textures2Internal, put=set_textures2Internal))  textures2Internal;

 System::Collections::Generic::List_1<UnityEngine::Vector4> __declspec(property(get=get_textures3Internal, put=set_textures3Internal))  textures3Internal;

 System::Collections::Generic::IList_1<UnityEngine::Vector2> __declspec(property(get=get_textures, put=set_textures))  textures;

 int32_t __declspec(property(get=get_faceCount))  faceCount;

 int32_t __declspec(property(get=get_vertexCount))  vertexCount;

 int32_t __declspec(property(get=get_edgeCount))  edgeCount;

 int32_t __declspec(property(get=get_indexCount))  indexCount;

 int32_t __declspec(property(get=get_triangleCount))  triangleCount;

 UnityEngine::Mesh __declspec(property(get=get_mesh, put=set_mesh))  mesh;

 int32_t __declspec(property(get=get_id))  id;

 UnityEngine::ProBuilder::MeshSyncState __declspec(property(get=get_meshSyncState))  meshSyncState;

 int32_t __declspec(property(get=get_meshFormatVersion))  meshFormatVersion;

 bool __declspec(property(get=get_selectable, put=set_selectable))  selectable;

 int32_t __declspec(property(get=get_selectedFaceCount))  selectedFaceCount;

 int32_t __declspec(property(get=get_selectedVertexCount))  selectedVertexCount;

 int32_t __declspec(property(get=get_selectedEdgeCount))  selectedEdgeCount;

 int32_t __declspec(property(get=get_selectedSharedVerticesCount))  selectedSharedVerticesCount;

 int32_t __declspec(property(get=get_selectedCoincidentVertexCount))  selectedCoincidentVertexCount;

 System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=get_selectedSharedVertices))  selectedSharedVertices;

 System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=get_selectedCoincidentVertices))  selectedCoincidentVertices;

 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> __declspec(property(get=get_selectedFaceIndexes))  selectedFaceIndexes;

 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> __declspec(property(get=get_selectedVertices))  selectedVertices;

 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::Edge> __declspec(property(get=get_selectedEdges))  selectedEdges;

 ::ArrayW<UnityEngine::ProBuilder::Face> __declspec(property(get=get_selectedFacesInternal, put=set_selectedFacesInternal))  selectedFacesInternal;

 ::ArrayW<int32_t> __declspec(property(get=get_selectedFaceIndicesInternal, put=set_selectedFaceIndicesInternal))  selectedFaceIndicesInternal;

 ::ArrayW<UnityEngine::ProBuilder::Edge> __declspec(property(get=get_selectedEdgesInternal, put=set_selectedEdgesInternal))  selectedEdgesInternal;

 ::ArrayW<int32_t> __declspec(property(get=get_selectedIndexesInternal, put=set_selectedIndexesInternal))  selectedIndexesInternal;


// Methods

/// @brief Method get_userCollisions addr 0x29c2dac size 0x8 virtual false final false
 bool get_userCollisions() ;

/// @brief Method set_userCollisions addr 0x29c2db4 size 0xc virtual false final false
 void set_userCollisions(bool value) ;

/// @brief Method get_unwrapParameters addr 0x29c2dc0 size 0x8 virtual false final false
 UnityEngine::ProBuilder::UnwrapParameters get_unwrapParameters() ;

/// @brief Method set_unwrapParameters addr 0x29c2dc8 size 0x8 virtual false final false
 void set_unwrapParameters(UnityEngine::ProBuilder::UnwrapParameters value) ;

/// @brief Method get_renderer addr 0x29bfdcc size 0x74 virtual false final false
 UnityEngine::MeshRenderer get_renderer() ;

/// @brief Method get_filter addr 0x29c2dd0 size 0xb8 virtual false final false
 UnityEngine::MeshFilter get_filter() ;

/// @brief Method get_versionIndex addr 0x29c2e88 size 0x8 virtual false final false
 uint16_t get_versionIndex() ;

/// @brief Method get_preserveMeshAssetOnDestroy addr 0x29c2e90 size 0x8 virtual false final false
 bool get_preserveMeshAssetOnDestroy() ;

/// @brief Method set_preserveMeshAssetOnDestroy addr 0x29c2e98 size 0xc virtual false final false
 void set_preserveMeshAssetOnDestroy(bool value) ;

/// @brief Method HasArrays addr 0x29be4f8 size 0x1e0 virtual false final false
 bool HasArrays(UnityEngine::ProBuilder::MeshArrays channels) ;

/// @brief Method get_facesInternal addr 0x29c2ea4 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Face> get_facesInternal() ;

/// @brief Method set_facesInternal addr 0x29c2eac size 0x8 virtual false final false
 void set_facesInternal(::ArrayW<UnityEngine::ProBuilder::Face> value) ;

/// @brief Method get_faces addr 0x29c2eb4 size 0x7c virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> get_faces() ;

/// @brief Method set_faces addr 0x29c2f30 size 0xa4 virtual false final false
 void set_faces(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> value) ;

/// @brief Method InvalidateSharedVertexLookup addr 0x29c2fd4 size 0xa8 virtual false final false
 void InvalidateSharedVertexLookup() ;

/// @brief Method InvalidateSharedTextureLookup addr 0x29c307c size 0xa8 virtual false final false
 void InvalidateSharedTextureLookup() ;

/// @brief Method InvalidateFaces addr 0x29c3124 size 0x310 virtual false final false
 void InvalidateFaces() ;

/// @brief Method InvalidateCaches addr 0x29c3434 size 0x2c virtual false final false
 void InvalidateCaches() ;

/// @brief Method get_sharedVerticesInternal addr 0x29c3460 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::SharedVertex> get_sharedVerticesInternal() ;

/// @brief Method set_sharedVerticesInternal addr 0x29c3468 size 0x8 virtual false final false
 void set_sharedVerticesInternal(::ArrayW<UnityEngine::ProBuilder::SharedVertex> value) ;

/// @brief Method get_sharedVertices addr 0x29c3470 size 0x7c virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> get_sharedVertices() ;

/// @brief Method set_sharedVertices addr 0x29c34ec size 0x244 virtual false final false
 void set_sharedVertices(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> value) ;

/// @brief Method get_sharedVertexLookup addr 0x29c3730 size 0xa4 virtual false final false
 System::Collections::Generic::Dictionary_2<int32_t,int32_t> get_sharedVertexLookup() ;

/// @brief Method SetSharedVertices addr 0x29c37d4 size 0x74 virtual false final false
 void SetSharedVertices(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> indexes) ;

/// @brief Method get_sharedTextures addr 0x29c3848 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::SharedVertex> get_sharedTextures() ;

/// @brief Method set_sharedTextures addr 0x29c3850 size 0x8 virtual false final false
 void set_sharedTextures(::ArrayW<UnityEngine::ProBuilder::SharedVertex> value) ;

/// @brief Method get_sharedTextureLookup addr 0x29c3858 size 0xa0 virtual false final false
 System::Collections::Generic::Dictionary_2<int32_t,int32_t> get_sharedTextureLookup() ;

/// @brief Method SetSharedTextures addr 0x29c38f8 size 0x74 virtual false final false
 void SetSharedTextures(System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> indexes) ;

/// @brief Method get_positionsInternal addr 0x29c396c size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_positionsInternal() ;

/// @brief Method set_positionsInternal addr 0x29c3974 size 0x8 virtual false final false
 void set_positionsInternal(::ArrayW<UnityEngine::Vector3> value) ;

/// @brief Method get_positions addr 0x29c397c size 0x7c virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::Vector3> get_positions() ;

/// @brief Method set_positions addr 0x29c39f8 size 0xa4 virtual false final false
 void set_positions(System::Collections::Generic::IList_1<UnityEngine::Vector3> value) ;

/// @brief Method GetVertices addr 0x29bf394 size 0x6bc virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Vertex> GetVertices(System::Collections::Generic::IList_1<int32_t> indexes) ;

/// @brief Method GetVerticesInList addr 0x29c3a9c size 0x888 virtual false final false
 void GetVerticesInList(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices) ;

/// @brief Method SetVertices addr 0x29c4324 size 0x2cc virtual false final false
 void SetVertices(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, bool applyMesh) ;

/// @brief Method get_normals addr 0x29c470c size 0x88 virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::Vector3> get_normals() ;

/// @brief Method get_normalsInternal addr 0x29c4794 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Vector3> get_normalsInternal() ;

/// @brief Method set_normalsInternal addr 0x29c479c size 0x8 virtual false final false
 void set_normalsInternal(::ArrayW<UnityEngine::Vector3> value) ;

/// @brief Method GetNormals addr 0x29be9f4 size 0x88 virtual false final false
 ::ArrayW<UnityEngine::Vector3> GetNormals() ;

/// @brief Method get_colorsInternal addr 0x29c47a4 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Color> get_colorsInternal() ;

/// @brief Method set_colorsInternal addr 0x29c47ac size 0x8 virtual false final false
 void set_colorsInternal(::ArrayW<UnityEngine::Color> value) ;

/// @brief Method get_colors addr 0x29c47b4 size 0x88 virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::Color> get_colors() ;

/// @brief Method set_colors addr 0x29c483c size 0x104 virtual false final false
 void set_colors(System::Collections::Generic::IList_1<UnityEngine::Color> value) ;

/// @brief Method GetColors addr 0x29c4940 size 0xa4 virtual false final false
 ::ArrayW<UnityEngine::Color> GetColors() ;

/// @brief Method get_tangents addr 0x29c49e4 size 0xa0 virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::Vector4> get_tangents() ;

/// @brief Method set_tangents addr 0x29c4a84 size 0xf4 virtual false final false
 void set_tangents(System::Collections::Generic::IList_1<UnityEngine::Vector4> value) ;

/// @brief Method get_tangentsInternal addr 0x29c4b78 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Vector4> get_tangentsInternal() ;

/// @brief Method set_tangentsInternal addr 0x29c4b80 size 0x8 virtual false final false
 void set_tangentsInternal(::ArrayW<UnityEngine::Vector4> value) ;

/// @brief Method GetTangents addr 0x29bea7c size 0x88 virtual false final false
 ::ArrayW<UnityEngine::Vector4> GetTangents() ;

/// @brief Method get_texturesInternal addr 0x29c4b88 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Vector2> get_texturesInternal() ;

/// @brief Method set_texturesInternal addr 0x29c4b90 size 0x8 virtual false final false
 void set_texturesInternal(::ArrayW<UnityEngine::Vector2> value) ;

/// @brief Method get_textures2Internal addr 0x29c4b98 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::Vector4> get_textures2Internal() ;

/// @brief Method set_textures2Internal addr 0x29c4ba0 size 0x8 virtual false final false
 void set_textures2Internal(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

/// @brief Method get_textures3Internal addr 0x29c4ba8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::Vector4> get_textures3Internal() ;

/// @brief Method set_textures3Internal addr 0x29c4bb0 size 0x8 virtual false final false
 void set_textures3Internal(System::Collections::Generic::List_1<UnityEngine::Vector4> value) ;

/// @brief Method get_textures addr 0x29c4bb8 size 0x88 virtual false final false
 System::Collections::Generic::IList_1<UnityEngine::Vector2> get_textures() ;

/// @brief Method set_textures addr 0x29c4c40 size 0xe0 virtual false final false
 void set_textures(System::Collections::Generic::IList_1<UnityEngine::Vector2> value) ;

/// @brief Method GetUVs addr 0x29be6d8 size 0x31c virtual false final false
 void GetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs) ;

/// @brief Method GetUVs addr 0x29c4d20 size 0x124 virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Vector2> GetUVs(int32_t channel) ;

/// @brief Method SetUVs addr 0x29c4e44 size 0x2d8 virtual false final false
 void SetUVs(int32_t channel, System::Collections::Generic::List_1<UnityEngine::Vector4> uvs) ;

/// @brief Method get_faceCount addr 0x29c13d4 size 0x18 virtual false final false
 int32_t get_faceCount() ;

/// @brief Method get_vertexCount addr 0x29bf340 size 0x18 virtual false final false
 int32_t get_vertexCount() ;

/// @brief Method get_edgeCount addr 0x29c511c size 0x8c virtual false final false
 int32_t get_edgeCount() ;

/// @brief Method get_indexCount addr 0x29c51a8 size 0x114 virtual false final false
 int32_t get_indexCount() ;

/// @brief Method get_triangleCount addr 0x29c52bc size 0x124 virtual false final false
 int32_t get_triangleCount() ;

/// @brief Method add_meshWillBeDestroyed addr 0x29c53e0 size 0xf0 virtual false final false
static void add_meshWillBeDestroyed(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method remove_meshWillBeDestroyed addr 0x29c54d0 size 0xf0 virtual false final false
static void remove_meshWillBeDestroyed(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method add_meshWasInitialized addr 0x29c55c0 size 0xf4 virtual false final false
static void add_meshWasInitialized(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method remove_meshWasInitialized addr 0x29c56b4 size 0xf4 virtual false final false
static void remove_meshWasInitialized(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method add_componentWillBeDestroyed addr 0x29c57a8 size 0xf4 virtual false final false
static void add_componentWillBeDestroyed(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method remove_componentWillBeDestroyed addr 0x29c589c size 0xf4 virtual false final false
static void remove_componentWillBeDestroyed(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method add_componentHasBeenReset addr 0x29c5990 size 0xf4 virtual false final false
static void add_componentHasBeenReset(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method remove_componentHasBeenReset addr 0x29c5a84 size 0xf4 virtual false final false
static void remove_componentHasBeenReset(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method add_elementSelectionChanged addr 0x29c5b78 size 0xf4 virtual false final false
static void add_elementSelectionChanged(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method remove_elementSelectionChanged addr 0x29c5c6c size 0xf4 virtual false final false
static void remove_elementSelectionChanged(System::Action_1<UnityEngine::ProBuilder::ProBuilderMesh> value) ;

/// @brief Method get_mesh addr 0x29bffa8 size 0xbc virtual false final false
 UnityEngine::Mesh get_mesh() ;

/// @brief Method set_mesh addr 0x29c5d60 size 0x8 virtual false final false
 void set_mesh(UnityEngine::Mesh value) ;

/// @brief Method get_id addr 0x29beb04 size 0x20 virtual false final false
 int32_t get_id() ;

/// @brief Method get_meshSyncState addr 0x29c5d68 size 0x124 virtual false final false
 UnityEngine::ProBuilder::MeshSyncState get_meshSyncState() ;

/// @brief Method get_meshFormatVersion addr 0x29c5e8c size 0x8 virtual false final false
 int32_t get_meshFormatVersion() ;

/// @brief Method Awake addr 0x29c5e94 size 0x13c virtual false final false
 void Awake() ;

/// @brief Method Reset addr 0x29c62a8 size 0xd0 virtual false final false
 void Reset() ;

/// @brief Method OnDestroy addr 0x29c6378 size 0x210 virtual false final false
 void OnDestroy() ;

/// @brief Method IncrementVersionIndex addr 0x29c46fc size 0x10 virtual false final false
 void IncrementVersionIndex() ;

/// @brief Method Clear addr 0x29c45f0 size 0x10c virtual false final false
 void Clear() ;

/// @brief Method EnsureMeshFilterIsAssigned addr 0x29c5fd0 size 0x124 virtual false final false
 void EnsureMeshFilterIsAssigned() ;

/// @brief Method CreateInstanceWithPoints addr 0x29c6588 size 0x120 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh CreateInstanceWithPoints(::ArrayW<UnityEngine::Vector3> positions) ;

/// @brief Method Create addr 0x29c68d0 size 0x90 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh Create() ;

/// @brief Method Create addr 0x29c6960 size 0xd0 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh Create(System::Collections::Generic::IEnumerable_1<UnityEngine::Vector3> positions, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method Create addr 0x29c6b44 size 0x1a0 virtual false final false
static UnityEngine::ProBuilder::ProBuilderMesh Create(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> sharedVertices, System::Collections::Generic::IList_1<UnityEngine::ProBuilder::SharedVertex> sharedTextures, System::Collections::Generic::IList_1<UnityEngine::Material> materials) ;

/// @brief Method GeometryWithPoints addr 0x29c66a8 size 0x228 virtual false final false
 void GeometryWithPoints(::ArrayW<UnityEngine::Vector3> points) ;

/// @brief Method RebuildWithPositionsAndFaces addr 0x29c6a30 size 0x114 virtual false final false
 void RebuildWithPositionsAndFaces(System::Collections::Generic::IEnumerable_1<UnityEngine::Vector3> vertices, System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces) ;

/// @brief Method Rebuild addr 0x29bf358 size 0x20 virtual false final false
 void Rebuild() ;

/// @brief Method ToMesh addr 0x29c6ce4 size 0x368 virtual false final false
 void ToMesh(UnityEngine::MeshTopology preferredTopology) ;

/// @brief Method MakeUnique addr 0x29c714c size 0x74 virtual false final false
 void MakeUnique() ;

/// @brief Method CopyFrom addr 0x29c71c0 size 0x2e4 virtual false final false
 void CopyFrom(UnityEngine::ProBuilder::ProBuilderMesh other) ;

/// @brief Method Refresh addr 0x29c704c size 0x100 virtual false final false
 void Refresh(UnityEngine::ProBuilder::RefreshMask mask) ;

/// @brief Method EnsureMeshColliderIsAssigned addr 0x29c60f4 size 0x100 virtual false final false
 void EnsureMeshColliderIsAssigned() ;

/// @brief Method GetUnusedTextureGroup addr 0x29c7b48 size 0x110 virtual false final false
 int32_t GetUnusedTextureGroup(int32_t i) ;

/// @brief Method IsValidTextureGroup addr 0x29c7c60 size 0xc virtual false final false
static bool IsValidTextureGroup(int32_t group) ;

/// @brief Method UnusedElementGroup addr 0x29c7c6c size 0x110 virtual false final false
 int32_t UnusedElementGroup(int32_t i) ;

/// @brief Method RefreshUV addr 0x29c74a4 size 0x594 virtual false final false
 void RefreshUV(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> facesToRefresh) ;

/// @brief Method SetGroupUV addr 0x29c7d84 size 0xc4 virtual false final false
 void SetGroupUV(UnityEngine::ProBuilder::AutoUnwrapSettings settings, int32_t group) ;

/// @brief Method RefreshColors addr 0x29c7a38 size 0x30 virtual false final false
 void RefreshColors() ;

/// @brief Method SetFaceColor addr 0x29c7e48 size 0x374 virtual false final false
 void SetFaceColor(UnityEngine::ProBuilder::Face face, UnityEngine::Color color) ;

/// @brief Method SetMaterial addr 0x29c81bc size 0x564 virtual false final false
 void SetMaterial(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, UnityEngine::Material material) ;

/// @brief Method RefreshNormals addr 0x29c7a68 size 0x70 virtual false final false
 void RefreshNormals() ;

/// @brief Method RefreshTangents addr 0x29c7ad8 size 0x70 virtual false final false
 void RefreshTangents() ;

/// @brief Method GetSharedVertexHandle addr 0x29c8720 size 0x168 virtual false final false
 int32_t GetSharedVertexHandle(int32_t vertex) ;

/// @brief Method GetSharedVertexHandles addr 0x29c8888 size 0x380 virtual false final false
 System::Collections::Generic::HashSet_1<int32_t> GetSharedVertexHandles(System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

/// @brief Method GetCoincidentVertices addr 0x29c8c08 size 0xd8 virtual false final false
 System::Collections::Generic::List_1<int32_t> GetCoincidentVertices(System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

/// @brief Method GetCoincidentVertices addr 0x29c9230 size 0x5c0 virtual false final false
 void GetCoincidentVertices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> faces, System::Collections::Generic::List_1<int32_t> coincident) ;

/// @brief Method GetCoincidentVertices addr 0x29c97f0 size 0x690 virtual false final false
 void GetCoincidentVertices(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges, System::Collections::Generic::List_1<int32_t> coincident) ;

/// @brief Method GetCoincidentVertices addr 0x29c8ce0 size 0x550 virtual false final false
 void GetCoincidentVertices(System::Collections::Generic::IEnumerable_1<int32_t> vertices, System::Collections::Generic::List_1<int32_t> coincident) ;

/// @brief Method GetCoincidentVertices addr 0x29c9e80 size 0x1d4 virtual false final false
 void GetCoincidentVertices(int32_t vertex, System::Collections::Generic::List_1<int32_t> coincident) ;

/// @brief Method SetVerticesCoincident addr 0x29ca054 size 0xb8 virtual false final false
 void SetVerticesCoincident(System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

/// @brief Method SetTexturesCoincident addr 0x29ca10c size 0x40 virtual false final false
 void SetTexturesCoincident(System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

/// @brief Method AddToSharedVertex addr 0x29ca14c size 0x9c virtual false final false
 void AddToSharedVertex(int32_t sharedVertexHandle, int32_t vertex) ;

/// @brief Method AddSharedVertex addr 0x29ca1e8 size 0xac virtual false final false
 void AddSharedVertex(UnityEngine::ProBuilder::SharedVertex vertex) ;

/// @brief Method get_selectable addr 0x29ca294 size 0x8 virtual false final false
 bool get_selectable() ;

/// @brief Method set_selectable addr 0x29ca29c size 0xc virtual false final false
 void set_selectable(bool value) ;

/// @brief Method get_selectedFaceCount addr 0x29ca2a8 size 0x1c virtual false final false
 int32_t get_selectedFaceCount() ;

/// @brief Method get_selectedVertexCount addr 0x29ca2c4 size 0x1c virtual false final false
 int32_t get_selectedVertexCount() ;

/// @brief Method get_selectedEdgeCount addr 0x29ca2e0 size 0x1c virtual false final false
 int32_t get_selectedEdgeCount() ;

/// @brief Method get_selectedSharedVerticesCount addr 0x29ca2fc size 0x18 virtual false final false
 int32_t get_selectedSharedVerticesCount() ;

/// @brief Method get_selectedCoincidentVertexCount addr 0x29ca864 size 0x18 virtual false final false
 int32_t get_selectedCoincidentVertexCount() ;

/// @brief Method get_selectedSharedVertices addr 0x29ca87c size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> get_selectedSharedVertices() ;

/// @brief Method get_selectedCoincidentVertices addr 0x29ca894 size 0x18 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> get_selectedCoincidentVertices() ;

/// @brief Method CacheSelection addr 0x29ca314 size 0x550 virtual false final false
 void CacheSelection() ;

/// @brief Method GetSelectedFaces addr 0x29ca8ac size 0x108 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Face> GetSelectedFaces() ;

/// @brief Method get_selectedFaceIndexes addr 0x29ca9b4 size 0x7c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> get_selectedFaceIndexes() ;

/// @brief Method get_selectedVertices addr 0x29caa30 size 0x7c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<int32_t> get_selectedVertices() ;

/// @brief Method get_selectedEdges addr 0x29caaac size 0x7c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::ProBuilder::Edge> get_selectedEdges() ;

/// @brief Method get_selectedFacesInternal addr 0x29cab28 size 0x4 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Face> get_selectedFacesInternal() ;

/// @brief Method set_selectedFacesInternal addr 0x29cab2c size 0xc8 virtual false final false
 void set_selectedFacesInternal(::ArrayW<UnityEngine::ProBuilder::Face> value) ;

/// @brief Method get_selectedFaceIndicesInternal addr 0x29cabf4 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_selectedFaceIndicesInternal() ;

/// @brief Method set_selectedFaceIndicesInternal addr 0x29cabfc size 0x8 virtual false final false
 void set_selectedFaceIndicesInternal(::ArrayW<int32_t> value) ;

/// @brief Method get_selectedEdgesInternal addr 0x29cac04 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::ProBuilder::Edge> get_selectedEdgesInternal() ;

/// @brief Method set_selectedEdgesInternal addr 0x29cac0c size 0x8 virtual false final false
 void set_selectedEdgesInternal(::ArrayW<UnityEngine::ProBuilder::Edge> value) ;

/// @brief Method get_selectedIndexesInternal addr 0x29cac14 size 0x8 virtual false final false
 ::ArrayW<int32_t> get_selectedIndexesInternal() ;

/// @brief Method set_selectedIndexesInternal addr 0x29cac1c size 0x8 virtual false final false
 void set_selectedIndexesInternal(::ArrayW<int32_t> value) ;

/// @brief Method GetActiveFace addr 0x29cac24 size 0x5c virtual false final false
 UnityEngine::ProBuilder::Face GetActiveFace() ;

/// @brief Method GetActiveEdge addr 0x29cac80 size 0x88 virtual false final false
 UnityEngine::ProBuilder::Edge GetActiveEdge() ;

/// @brief Method GetActiveVertex addr 0x29cad08 size 0x3c virtual false final false
 int32_t GetActiveVertex() ;

/// @brief Method AddToFaceSelection addr 0x29cad44 size 0x6c virtual false final false
 void AddToFaceSelection(int32_t index) ;

/// @brief Method SetSelectedFaces addr 0x29cafb0 size 0xc0 virtual false final false
 void SetSelectedFaces(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Face> selected) ;

/// @brief Method SetSelectedFaces addr 0x29cadb0 size 0x200 virtual false final false
 void SetSelectedFaces(System::Collections::Generic::IEnumerable_1<int32_t> selected) ;

/// @brief Method SetSelectedEdges addr 0x29cb070 size 0x118 virtual false final false
 void SetSelectedEdges(System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> edges) ;

/// @brief Method SetSelectedVertices addr 0x29cb188 size 0x150 virtual false final false
 void SetSelectedVertices(System::Collections::Generic::IEnumerable_1<int32_t> vertices) ;

/// @brief Method RemoveFromFaceSelectionAtIndex addr 0x29cb2d8 size 0x64 virtual false final false
 void RemoveFromFaceSelectionAtIndex(int32_t index) ;

/// @brief Method ClearSelection addr 0x29c61f4 size 0x94 virtual false final false
 void ClearSelection() ;

static UnityEngine::ProBuilder::ProBuilderMesh New_ctor() ;

/// @brief Method .ctor addr 0x29cb33c size 0x128 virtual false final false
 void _ctor() ;

/// @brief Method <set_selectedFacesInternal>b__225_0 addr 0x29cb4f0 size 0x58 virtual false final false
 int32_t _set_selectedFacesInternal_b__225_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <SetSelectedFaces>b__239_0 addr 0x29cb548 size 0x58 virtual false final false
 int32_t _SetSelectedFaces_b__239_0(UnityEngine::ProBuilder::Face x) ;

/// @brief Method <SetSelectedFaces>b__240_0 addr 0x29cb5a0 size 0x38 virtual false final false
 System::Collections::Generic::IEnumerable_1<int32_t> _SetSelectedFaces_b__240_0(int32_t x) ;

/// @brief Method <SetSelectedFaces>b__240_1 addr 0x29cb5d8 size 0x38 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Edge> _SetSelectedFaces_b__240_1(int32_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__CacheValidState, "UnityEngine.ProBuilder", "ProBuilderMesh/CacheValidState");
NEED_NO_BOX(UnityEngine::ProBuilder::ProBuilderMesh);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ProBuilderMesh, "UnityEngine.ProBuilder", "ProBuilderMesh");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass168_0, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass168_0");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh____c__DisplayClass170_0, "UnityEngine.ProBuilder", "ProBuilderMesh/<>c__DisplayClass170_0");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__ProBuilderMesh__NonVersionedEditScope, "UnityEngine.ProBuilder", "ProBuilderMesh/NonVersionedEditScope");
