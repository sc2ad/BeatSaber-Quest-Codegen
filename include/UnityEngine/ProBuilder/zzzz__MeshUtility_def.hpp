#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class MeshUtility;
}
namespace UnityEngine::ProBuilder {
class UnityEngine__ProBuilder__MeshUtility____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12085))
// CS Name: UnityEngine.ProBuilder.MeshUtility::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshUtility____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshUtility____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshUtility____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshUtility____c(UnityEngine__ProBuilder__MeshUtility____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshUtility____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshUtility____c(UnityEngine__ProBuilder__MeshUtility____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshUtility____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshUtility____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshUtility____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshUtility____c& operator=(UnityEngine__ProBuilder__MeshUtility____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshUtility____c& operator=(UnityEngine__ProBuilder__MeshUtility____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshUtility____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshUtility____c value) ;

static UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshUtility____c __get___9() ;

static System::Func_2<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Vertex,int32_t>,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Vertex>> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(System::Func_2<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Vertex,int32_t>,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Vertex>> value) ;

static System::Func_2<System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Vertex,int32_t>,System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Vertex>> __get___9__11_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__ProBuilder__MeshUtility____c() ;

/// @brief Method .ctor addr 0x29c00c8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <CollapseSharedVertices>b__11_0 addr 0x29c00d0 size 0x50 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::ProBuilder::Vertex> _CollapseSharedVertices_b__11_0(System::Collections::Generic::Dictionary_2<UnityEngine::ProBuilder::Vertex,int32_t> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::MeshUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12086))
// CS Name: UnityEngine.ProBuilder.MeshUtility
class CORDL_TYPE MeshUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshUtility____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MeshUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshUtility", modifiers: " const&", def_value: None }]
constexpr MeshUtility(MeshUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshUtility", modifiers: "&&", def_value: None }]
constexpr MeshUtility(MeshUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshUtility& operator=(MeshUtility&& o) noexcept = default;
  constexpr MeshUtility& operator=(MeshUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GeneratePerTriangleMesh addr 0x29bc080 size 0x348 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Vertex> GeneratePerTriangleMesh(UnityEngine::Mesh mesh) ;

/// @brief Method GenerateTangent addr 0x29bc998 size 0x534 virtual false final false
static void GenerateTangent(UnityEngine::Mesh mesh) ;

/// @brief Method DeepCopy addr 0x29bcecc size 0x6c virtual false final false
static UnityEngine::Mesh DeepCopy(UnityEngine::Mesh source) ;

/// @brief Method CopyTo addr 0x29bcf38 size 0x4a0 virtual false final false
static void CopyTo(UnityEngine::Mesh source, UnityEngine::Mesh destination) ;

/// @brief Method GetMeshChannel addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetMeshChannel(UnityEngine::GameObject gameObject, System::Func_2<UnityEngine::Mesh,T> attributeGetter) ;

/// @brief Method PrintAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void PrintAttribute(System::Text::StringBuilder sb, ::StringW title, System::Collections::Generic::IEnumerable_1<T> attrib, ::StringW fmt) ;

/// @brief Method Print addr 0x29bd3d8 size 0xbb8 virtual false final false
static ::StringW Print(UnityEngine::Mesh mesh) ;

/// @brief Method GetIndexCount addr 0x29bdfa0 size 0xc0 virtual false final false
static uint32_t GetIndexCount(UnityEngine::Mesh mesh) ;

/// @brief Method GetPrimitiveCount addr 0x29be060 size 0x114 virtual false final false
static uint32_t GetPrimitiveCount(UnityEngine::Mesh mesh) ;

/// @brief Method Compile addr 0x29be174 size 0x384 virtual false final false
static void Compile(UnityEngine::ProBuilder::ProBuilderMesh probuilderMesh, UnityEngine::Mesh targetMesh, UnityEngine::MeshTopology preferredTopology) ;

/// @brief Method GetVertices addr 0x29bc3c8 size 0x5d0 virtual false final false
static ::ArrayW<UnityEngine::ProBuilder::Vertex> GetVertices(UnityEngine::Mesh mesh) ;

/// @brief Method CollapseSharedVertices addr 0x29beb24 size 0x500 virtual false final false
static void CollapseSharedVertices(UnityEngine::Mesh mesh, ::ArrayW<UnityEngine::ProBuilder::Vertex> vertices) ;

/// @brief Method FitToSize addr 0x29bf024 size 0x31c virtual false final false
static void FitToSize(UnityEngine::ProBuilder::ProBuilderMesh mesh, UnityEngine::Bounds currentSize, UnityEngine::Vector3 sizeToFit) ;

/// @brief Method SanityCheck addr 0x29bf378 size 0x1c virtual false final false
static ::StringW SanityCheck(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method SanityCheck addr 0x29bdf90 size 0x10 virtual false final false
static ::StringW SanityCheck(UnityEngine::Mesh mesh) ;

/// @brief Method SanityCheck addr 0x29bfa50 size 0x28c virtual false final false
static ::StringW SanityCheck(System::Collections::Generic::IList_1<UnityEngine::ProBuilder::Vertex> vertices) ;

/// @brief Method IsUsedInParticleSystem addr 0x29bfcdc size 0xf0 virtual false final false
static bool IsUsedInParticleSystem(UnityEngine::ProBuilder::ProBuilderMesh pbmesh) ;

/// @brief Method RestoreParticleSystem addr 0x29bfe40 size 0x98 virtual false final false
static void RestoreParticleSystem(UnityEngine::ProBuilder::ProBuilderMesh pbmesh) ;

/// @brief Method GetBounds addr 0x29bfed8 size 0xd0 virtual false final false
static UnityEngine::Bounds GetBounds(UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::MeshUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshUtility, "UnityEngine.ProBuilder", "MeshUtility");
NEED_NO_BOX(UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshUtility____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::UnityEngine__ProBuilder__MeshUtility____c, "UnityEngine.ProBuilder", "MeshUtility/<>c");
