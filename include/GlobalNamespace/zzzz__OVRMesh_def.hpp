#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Mesh;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRPlugin__Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRMesh__MeshType;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRMesh__IOVRMeshDataProvider;
}
namespace GlobalNamespace {
class OVRMesh;
}
// Type: ::IOVRMeshDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8917))
// CS Name: OVRMesh::IOVRMeshDataProvider
class CORDL_TYPE GlobalNamespace__OVRMesh__IOVRMeshDataProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~GlobalNamespace__OVRMesh__IOVRMeshDataProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRMesh__IOVRMeshDataProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetMeshType addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::GlobalNamespace__OVRMesh__MeshType GetMeshType() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MeshType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8918))
// CS Name: OVRMesh::MeshType
struct CORDL_TYPE GlobalNamespace__OVRMesh__MeshType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRMesh__MeshType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRMesh__MeshType(GlobalNamespace__OVRMesh__MeshType const&) = default;
                    constexpr GlobalNamespace__OVRMesh__MeshType(GlobalNamespace__OVRMesh__MeshType&&) = default;
                    constexpr GlobalNamespace__OVRMesh__MeshType& operator=(GlobalNamespace__OVRMesh__MeshType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRMesh__MeshType& operator=(GlobalNamespace__OVRMesh__MeshType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRMesh__MeshType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRMesh__MeshType_Unwrapped : int32_t {
__None = -1,
__HandLeft = 0,
__HandRight = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRMesh__MeshType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRMesh__MeshType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVRMesh__MeshType const None;

/// @brief Field HandLeft offset 0
static GlobalNamespace::GlobalNamespace__OVRMesh__MeshType const HandLeft;

/// @brief Field HandRight offset 0
static GlobalNamespace::GlobalNamespace__OVRMesh__MeshType const HandRight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRMesh
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8919))
// CS Name: OVRMesh
class CORDL_TYPE OVRMesh : public UnityEngine::MonoBehaviour {
public:
// Declarations
using MeshType = GlobalNamespace::GlobalNamespace__OVRMesh__MeshType;

using IOVRMeshDataProvider = GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~OVRMesh() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: " const&", def_value: None }]
constexpr OVRMesh(OVRMesh const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMesh", modifiers: "&&", def_value: None }]
constexpr OVRMesh(OVRMesh&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMesh(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRMesh& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMesh& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMesh& operator=(OVRMesh&& o) noexcept = default;
  constexpr OVRMesh& operator=(OVRMesh const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider __declspec(property(get=__get__dataProvider, put=__set__dataProvider))  _dataProvider;

constexpr void __set__dataProvider(GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider __get__dataProvider() const;

 GlobalNamespace::GlobalNamespace__OVRMesh__MeshType __declspec(property(get=__get__meshType, put=__set__meshType))  _meshType;

constexpr void __set__meshType(GlobalNamespace::GlobalNamespace__OVRMesh__MeshType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRMesh__MeshType __get__meshType() const;

 UnityEngine::Mesh __declspec(property(get=__get__mesh, put=__set__mesh))  _mesh;

constexpr void __set__mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get__mesh() const;

 bool __declspec(property(get=__get__IsInitialized_k__BackingField, put=__set__IsInitialized_k__BackingField))  _IsInitialized_k__BackingField;

constexpr void __set__IsInitialized_k__BackingField(bool value) ;

constexpr bool __get__IsInitialized_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IsInitialized, put=set_IsInitialized))  IsInitialized;

 UnityEngine::Mesh __declspec(property(get=get_Mesh))  Mesh;


// Methods

/// @brief Method get_IsInitialized addr 0x26250c4 size 0x8 virtual false final false
 bool get_IsInitialized() ;

/// @brief Method set_IsInitialized addr 0x26250cc size 0xc virtual false final false
 void set_IsInitialized(bool value) ;

/// @brief Method get_Mesh addr 0x26250d8 size 0x8 virtual false final false
 UnityEngine::Mesh get_Mesh() ;

/// @brief Method Awake addr 0x26250e0 size 0xf4 virtual false final false
 void Awake() ;

/// @brief Method ShouldInitialize addr 0x26251d4 size 0x20 virtual false final false
 bool ShouldInitialize() ;

/// @brief Method Initialize addr 0x26251f4 size 0xbc virtual false final false
 void Initialize(GlobalNamespace::GlobalNamespace__OVRMesh__MeshType meshType) ;

/// @brief Method TransformOvrpMesh addr 0x26252b0 size 0xab4 virtual false final false
 void TransformOvrpMesh(GlobalNamespace::GlobalNamespace__OVRPlugin__Mesh ovrpMesh, UnityEngine::Mesh mesh) ;

// Ctor Parameters []
explicit OVRMesh() ;

/// @brief Method .ctor addr 0x2625d64 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRMesh__MeshType, "", "OVRMesh/MeshType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRMesh__IOVRMeshDataProvider, "", "OVRMesh/IOVRMeshDataProvider");
NEED_NO_BOX(GlobalNamespace::OVRMesh);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMesh, "", "OVRMesh");
