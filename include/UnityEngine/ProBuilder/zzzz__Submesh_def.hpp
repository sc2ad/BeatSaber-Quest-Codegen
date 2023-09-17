#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Submesh;
}
// Type: UnityEngine.ProBuilder::Submesh
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12148))
// CS Name: UnityEngine.ProBuilder.Submesh
class CORDL_TYPE Submesh : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Submesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: " const&", def_value: None }]
constexpr Submesh(Submesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Submesh", modifiers: "&&", def_value: None }]
constexpr Submesh(Submesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Submesh(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Submesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Submesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Submesh& operator=(Submesh&& o) noexcept = default;
  constexpr Submesh& operator=(Submesh const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get_m_Indexes, put=__set_m_Indexes))  m_Indexes;

constexpr void __set_m_Indexes(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get_m_Indexes() const;

 ::UnityEngine::MeshTopology __declspec(property(get=__get_m_Topology, put=__set_m_Topology))  m_Topology;

constexpr void __set_m_Topology(::UnityEngine::MeshTopology value) ;

constexpr ::UnityEngine::MeshTopology __get_m_Topology() const;

 int32_t __declspec(property(get=__get_m_SubmeshIndex, put=__set_m_SubmeshIndex))  m_SubmeshIndex;

constexpr void __set_m_SubmeshIndex(int32_t value) ;

constexpr int32_t __get_m_SubmeshIndex() const;


// Properties

 ::System::Collections::Generic::IEnumerable_1<int32_t> __declspec(property(get=get_indexes, put=set_indexes))  indexes;

 ::UnityEngine::MeshTopology __declspec(property(get=get_topology, put=set_topology))  topology;

 int32_t __declspec(property(get=get_submeshIndex, put=set_submeshIndex))  submeshIndex;


// Methods

/// @brief Method get_indexes addr 0x29e6808 size 0x7c virtual false final false
 ::System::Collections::Generic::IEnumerable_1<int32_t> get_indexes() ;

/// @brief Method set_indexes addr 0x29e6884 size 0x5c virtual false final false
 void set_indexes(::System::Collections::Generic::IEnumerable_1<int32_t> value) ;

/// @brief Method get_topology addr 0x29e68e0 size 0x8 virtual false final false
 ::UnityEngine::MeshTopology get_topology() ;

/// @brief Method set_topology addr 0x29e68e8 size 0x8 virtual false final false
 void set_topology(::UnityEngine::MeshTopology value) ;

/// @brief Method get_submeshIndex addr 0x29e68f0 size 0x8 virtual false final false
 int32_t get_submeshIndex() ;

/// @brief Method set_submeshIndex addr 0x29e68f8 size 0x8 virtual false final false
 void set_submeshIndex(int32_t value) ;

// Ctor Parameters [CppParam { name: "submeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "topology", ty: "::UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "indexes", ty: "::System::Collections::Generic::IEnumerable_1<int32_t>", modifiers: "", def_value: None }]
explicit Submesh(int32_t submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int32_t> indexes) ;

/// @brief Method .ctor addr 0x29e6900 size 0xc4 virtual false final false
 void _ctor(int32_t submeshIndex, ::UnityEngine::MeshTopology topology, ::System::Collections::Generic::IEnumerable_1<int32_t> indexes) ;

// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::Mesh", modifiers: "", def_value: None }, CppParam { name: "subMeshIndex", ty: "int32_t", modifiers: "", def_value: None }]
explicit Submesh(::UnityEngine::Mesh mesh, int32_t subMeshIndex) ;

/// @brief Method .ctor addr 0x29e69c4 size 0xfc virtual false final false
 void _ctor(::UnityEngine::Mesh mesh, int32_t subMeshIndex) ;

/// @brief Method ToString addr 0x29e6ac0 size 0x108 virtual true final false
 ::StringW ToString() ;

/// @brief Method GetSubmeshCount addr 0x29e6bc8 size 0x60 virtual false final false
static int32_t GetSubmeshCount(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

/// @brief Method GetSubmeshes addr 0x29e6c28 size 0x96c virtual false final false
static ::ArrayW<::UnityEngine::ProBuilder::Submesh> GetSubmeshes(::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face> faces, int32_t submeshCount, ::UnityEngine::MeshTopology preferredTopology) ;

/// @brief Method MapFaceMaterialsToSubmeshIndex addr 0x29e7594 size 0x12c virtual false final false
static void MapFaceMaterialsToSubmeshIndex(::UnityEngine::ProBuilder::ProBuilderMesh mesh) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::Submesh);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Submesh, "UnityEngine.ProBuilder", "Submesh");
