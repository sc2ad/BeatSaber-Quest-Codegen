#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::ProBuilder {
class Vertex;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImportSettings;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MeshImporter____c;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
namespace UnityEngine {
struct Vector3;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::ProBuilder::MeshOperations {
class MeshImporter;
}
namespace UnityEngine::ProBuilder::MeshOperations {
class UnityEngine__ProBuilder__MeshOperations__MeshImporter____c;
}
// Type: ::<>c
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12213))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshImporter::<>c
class CORDL_TYPE UnityEngine__ProBuilder__MeshOperations__MeshImporter____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__ProBuilder__MeshOperations__MeshImporter____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshImporter____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshImporter____c(UnityEngine__ProBuilder__MeshOperations__MeshImporter____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__ProBuilder__MeshOperations__MeshImporter____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__ProBuilder__MeshOperations__MeshImporter____c(UnityEngine__ProBuilder__MeshOperations__MeshImporter____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__ProBuilder__MeshOperations__MeshImporter____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__ProBuilder__MeshOperations__MeshImporter____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshImporter____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__ProBuilder__MeshOperations__MeshImporter____c& operator=(UnityEngine__ProBuilder__MeshOperations__MeshImporter____c&& o) noexcept = default;
  constexpr UnityEngine__ProBuilder__MeshOperations__MeshImporter____c& operator=(UnityEngine__ProBuilder__MeshOperations__MeshImporter____c const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshImporter____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshImporter____c value) ;

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshImporter____c __get___9() ;

static System::Func_2<UnityEngine::ProBuilder::Vertex,UnityEngine::Vector3> __declspec(property(get=__get___9__9_0, put=__set___9__9_0))  __9__9_0;

static void __set___9__9_0(System::Func_2<UnityEngine::ProBuilder::Vertex,UnityEngine::Vector3> value) ;

static System::Func_2<UnityEngine::ProBuilder::Vertex,UnityEngine::Vector3> __get___9__9_0() ;


// Methods

static UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshImporter____c New_ctor() ;

/// @brief Method .ctor addr 0x2a24b2c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Import>b__9_0 addr 0x2a24b34 size 0x1c virtual false final false
 UnityEngine::Vector3 _Import_b__9_0(UnityEngine::ProBuilder::Vertex x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
// Type: UnityEngine.ProBuilder.MeshOperations::MeshImporter
namespace UnityEngine::ProBuilder::MeshOperations {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12214))
// CS Name: UnityEngine.ProBuilder.MeshOperations.MeshImporter
class CORDL_TYPE MeshImporter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshImporter____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MeshImporter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: " const&", def_value: None }]
constexpr MeshImporter(MeshImporter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshImporter", modifiers: "&&", def_value: None }]
constexpr MeshImporter(MeshImporter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshImporter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeshImporter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshImporter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshImporter& operator=(MeshImporter&& o) noexcept = default;
  constexpr MeshImporter& operator=(MeshImporter const& o) noexcept = default;
                


// Fields

static UnityEngine::ProBuilder::MeshOperations::MeshImportSettings __declspec(property(get=__get_k_DefaultImportSettings, put=__set_k_DefaultImportSettings))  k_DefaultImportSettings;

static void __set_k_DefaultImportSettings(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings value) ;

static UnityEngine::ProBuilder::MeshOperations::MeshImportSettings __get_k_DefaultImportSettings() ;

 UnityEngine::Mesh __declspec(property(get=__get_m_SourceMesh, put=__set_m_SourceMesh))  m_SourceMesh;

constexpr void __set_m_SourceMesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_m_SourceMesh() const;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=__get_m_SourceMaterials, put=__set_m_SourceMaterials))  m_SourceMaterials;

constexpr void __set_m_SourceMaterials(::ArrayW<UnityEngine::Material> value) ;

constexpr ::ArrayW<UnityEngine::Material> __get_m_SourceMaterials() const;

 UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_m_Destination, put=__set_m_Destination))  m_Destination;

constexpr void __set_m_Destination(UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr UnityEngine::ProBuilder::ProBuilderMesh __get_m_Destination() const;

 ::ArrayW<UnityEngine::ProBuilder::Vertex> __declspec(property(get=__get_m_Vertices, put=__set_m_Vertices))  m_Vertices;

constexpr void __set_m_Vertices(::ArrayW<UnityEngine::ProBuilder::Vertex> value) ;

constexpr ::ArrayW<UnityEngine::ProBuilder::Vertex> __get_m_Vertices() const;


// Methods

static UnityEngine::ProBuilder::MeshOperations::MeshImporter New_ctor(UnityEngine::GameObject gameObject) ;

/// @brief Method .ctor addr 0x2a232e4 size 0x16c virtual false final false
 void _ctor(UnityEngine::GameObject gameObject) ;

static UnityEngine::ProBuilder::MeshOperations::MeshImporter New_ctor(UnityEngine::Mesh sourceMesh, ::ArrayW<UnityEngine::Material> sourceMaterials, UnityEngine::ProBuilder::ProBuilderMesh destination) ;

/// @brief Method .ctor addr 0x2a23450 size 0x128 virtual false final false
 void _ctor(UnityEngine::Mesh sourceMesh, ::ArrayW<UnityEngine::Material> sourceMaterials, UnityEngine::ProBuilder::ProBuilderMesh destination) ;

static UnityEngine::ProBuilder::MeshOperations::MeshImporter New_ctor(UnityEngine::ProBuilder::ProBuilderMesh destination) ;

/// @brief Method .ctor addr 0x2a23578 size 0x28 virtual false final false
 void _ctor(UnityEngine::ProBuilder::ProBuilderMesh destination) ;

/// @brief Method Import addr 0x2a235a0 size 0x184 virtual false final false
 bool Import(UnityEngine::GameObject go, UnityEngine::ProBuilder::MeshOperations::MeshImportSettings importSettings) ;

/// @brief Method Import addr 0x2a23724 size 0xab8 virtual false final false
 void Import(UnityEngine::ProBuilder::MeshOperations::MeshImportSettings importSettings) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::MeshOperations
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::MeshImporter);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::MeshImporter, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter");
NEED_NO_BOX(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshImporter____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::UnityEngine__ProBuilder__MeshOperations__MeshImporter____c, "UnityEngine.ProBuilder.MeshOperations", "MeshImporter/<>c");
