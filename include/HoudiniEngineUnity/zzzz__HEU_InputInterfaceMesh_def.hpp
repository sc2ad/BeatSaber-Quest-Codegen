#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputInterface_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HoudiniEngineUnity {
class HEU_InputData;
}
namespace UnityEngine {
struct Vector2;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_InputInterfaceMesh;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh;
}
namespace HoudiniEngineUnity {
class HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes;
}
// Type: ::HEU_InputDataMeshes
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9779))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9781))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceMesh::HEU_InputDataMeshes
class CORDL_TYPE HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes : public HoudiniEngineUnity::HEU_InputData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes(void* ptr) noexcept : HoudiniEngineUnity::HEU_InputData(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes& operator=(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes& operator=(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh> __declspec(property(get=__get__inputMeshes, put=__set__inputMeshes))  _inputMeshes;

constexpr void __set__inputMeshes(System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh> value) ;

constexpr System::Collections::Generic::List_1<HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh> __get__inputMeshes() const;

 bool __declspec(property(get=__get__hasLOD, put=__set__hasLOD))  _hasLOD;

constexpr void __set__hasLOD(bool value) ;

constexpr bool __get__hasLOD() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes New_ctor() ;

/// @brief Method .ctor addr 0x2057688 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: ::HEU_InputDataMesh
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9782))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceMesh::HEU_InputDataMesh
class CORDL_TYPE HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh", modifiers: " const&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh", modifiers: "&&", def_value: None }]
constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh& operator=(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh&& o) noexcept = default;
  constexpr HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh& operator=(HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh const& o) noexcept = default;
                


// Fields

 UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__mesh() const;

 ::ArrayW<UnityEngine::Material> __declspec(property(get=__get__materials, put=__set__materials))  _materials;

constexpr void __set__materials(::ArrayW<UnityEngine::Material> value) ;

constexpr ::ArrayW<UnityEngine::Material> __get__materials() const;

 ::StringW __declspec(property(get=__get__meshPath, put=__set__meshPath))  _meshPath;

constexpr void __set__meshPath(::StringW value) ;

constexpr ::StringW __get__meshPath() const;

 ::StringW __declspec(property(get=__get__meshName, put=__set__meshName))  _meshName;

constexpr void __set__meshName(::StringW value) ;

constexpr ::StringW __get__meshName() const;

 int32_t __declspec(property(get=__get__numVertices, put=__set__numVertices))  _numVertices;

constexpr void __set__numVertices(int32_t value) ;

constexpr int32_t __get__numVertices() const;

 int32_t __declspec(property(get=__get__numSubMeshes, put=__set__numSubMeshes))  _numSubMeshes;

constexpr void __set__numSubMeshes(int32_t value) ;

constexpr int32_t __get__numSubMeshes() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__indexStart, put=__set__indexStart))  _indexStart;

constexpr void __set__indexStart(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__indexStart() const;

 ::ArrayW<uint32_t> __declspec(property(get=__get__indexCount, put=__set__indexCount))  _indexCount;

constexpr void __set__indexCount(::ArrayW<uint32_t> value) ;

constexpr ::ArrayW<uint32_t> __get__indexCount() const;

 float_t __declspec(property(get=__get__LODScreenTransition, put=__set__LODScreenTransition))  _LODScreenTransition;

constexpr void __set__LODScreenTransition(float_t value) ;

constexpr float_t __get__LODScreenTransition() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Methods

static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh New_ctor() ;

/// @brief Method .ctor addr 0x2057704 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_InputInterfaceMesh
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9780))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9783))
// CS Name: HoudiniEngineUnity.HEU_InputInterfaceMesh
class CORDL_TYPE HEU_InputInterfaceMesh : public HoudiniEngineUnity::HEU_InputInterface {
public:
// Declarations
using HEU_InputDataMesh = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh;

using HEU_InputDataMeshes = HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_InputInterfaceMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceMesh", modifiers: " const&", def_value: None }]
constexpr HEU_InputInterfaceMesh(HEU_InputInterfaceMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_InputInterfaceMesh", modifiers: "&&", def_value: None }]
constexpr HEU_InputInterfaceMesh(HEU_InputInterfaceMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_InputInterfaceMesh(void* ptr) noexcept : HoudiniEngineUnity::HEU_InputInterface(ptr) {
}


  constexpr HEU_InputInterfaceMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_InputInterfaceMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_InputInterfaceMesh& operator=(HEU_InputInterfaceMesh&& o) noexcept = default;
  constexpr HEU_InputInterfaceMesh& operator=(HEU_InputInterfaceMesh const& o) noexcept = default;
                


// Methods

static HoudiniEngineUnity::HEU_InputInterfaceMesh New_ctor() ;

/// @brief Method .ctor addr 0x2054a80 size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method CreateInputNodeWithDataUpload addr 0x2054aa0 size 0x188 virtual true final false
 bool CreateInputNodeWithDataUpload(HoudiniEngineUnity::HEU_SessionBase session, int32_t connectNodeID, UnityEngine::GameObject inputObject, ByRef<int32_t> inputNodeID) ;

/// @brief Method IsThisInputObjectSupported addr 0x2057188 size 0x164 virtual true final false
 bool IsThisInputObjectSupported(UnityEngine::GameObject inputObject) ;

/// @brief Method GetUVsFromMesh addr 0x20572ec size 0x90 virtual false final false
static void GetUVsFromMesh(UnityEngine::Mesh mesh, ::ArrayW<UnityEngine::Vector2> srcUVs, System::Collections::Generic::List_1<UnityEngine::Vector3> destUVs, int32_t index) ;

/// @brief Method UploadData addr 0x2054f98 size 0x21f0 virtual false final false
 bool UploadData(HoudiniEngineUnity::HEU_SessionBase session, int32_t inputNodeID, HoudiniEngineUnity::HEU_InputData inputData) ;

/// @brief Method GenerateMeshDatasFromGameObject addr 0x2054c28 size 0x370 virtual false final false
 HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes GenerateMeshDatasFromGameObject(UnityEngine::GameObject inputObject) ;

/// @brief Method CreateSingleMeshData addr 0x205737c size 0x1d4 virtual false final false
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh CreateSingleMeshData(UnityEngine::GameObject meshGameObject) ;

/// @brief Method GetMeshFromObject addr 0x2057550 size 0x138 virtual false final false
static UnityEngine::Mesh GetMeshFromObject(UnityEngine::GameObject meshGameObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_InputInterfaceMesh);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_InputInterfaceMesh, "HoudiniEngineUnity", "HEU_InputInterfaceMesh");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMesh, "HoudiniEngineUnity", "HEU_InputInterfaceMesh/HEU_InputDataMesh");
NEED_NO_BOX(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_InputInterfaceMesh__HEU_InputDataMeshes, "HoudiniEngineUnity", "HEU_InputInterfaceMesh/HEU_InputDataMeshes");
