#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__AvatarPartSO_1_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace GlobalNamespace {
class AvatarMeshPartSO;
}
// Type: ::AvatarMeshPartSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10012)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4773), inst: 883 }), TypeDefinitionIndex(TypeDefinitionIndex(4773))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4769))
// CS Name: AvatarMeshPartSO
class CORDL_TYPE AvatarMeshPartSO : public GlobalNamespace::AvatarPartSO_1<UnityEngine::Mesh> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AvatarMeshPartSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: " const&", def_value: None }]
constexpr AvatarMeshPartSO(AvatarMeshPartSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AvatarMeshPartSO", modifiers: "&&", def_value: None }]
constexpr AvatarMeshPartSO(AvatarMeshPartSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AvatarMeshPartSO(void* ptr) noexcept : GlobalNamespace::AvatarPartSO_1<UnityEngine::Mesh>(ptr) {
}


  constexpr AvatarMeshPartSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AvatarMeshPartSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AvatarMeshPartSO& operator=(AvatarMeshPartSO&& o) noexcept = default;
  constexpr AvatarMeshPartSO& operator=(AvatarMeshPartSO const& o) noexcept = default;
                


// Properties

 UnityEngine::Mesh __declspec(property(get=get_mesh))  mesh;


// Methods

/// @brief Method get_mesh addr 0x2229558 size 0x3c virtual false final false
 UnityEngine::Mesh get_mesh() ;

// Ctor Parameters []
explicit AvatarMeshPartSO() ;

/// @brief Method .ctor addr 0x2229594 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AvatarMeshPartSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarMeshPartSO, "", "AvatarMeshPartSO");
