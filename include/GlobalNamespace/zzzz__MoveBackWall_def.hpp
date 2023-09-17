#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class MeshRenderer;
}
namespace GlobalNamespace {
class PlayerTransforms;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
class MoveBackWall;
}
// Type: ::MoveBackWall
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5359))
// CS Name: MoveBackWall
class CORDL_TYPE MoveBackWall : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MoveBackWall() = default;

// Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: " const&", def_value: None }]
constexpr MoveBackWall(MoveBackWall const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MoveBackWall", modifiers: "&&", def_value: None }]
constexpr MoveBackWall(MoveBackWall&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MoveBackWall(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MoveBackWall& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MoveBackWall& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MoveBackWall& operator=(MoveBackWall&& o) noexcept = default;
  constexpr MoveBackWall& operator=(MoveBackWall const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fadeInRegion, put=__set__fadeInRegion))  _fadeInRegion;

constexpr void __set__fadeInRegion(float_t value) ;

constexpr float_t __get__fadeInRegion() const;

 ::UnityEngine::MeshRenderer __declspec(property(get=__get__meshRenderer, put=__set__meshRenderer))  _meshRenderer;

constexpr void __set__meshRenderer(::UnityEngine::MeshRenderer value) ;

constexpr ::UnityEngine::MeshRenderer __get__meshRenderer() const;

 ::GlobalNamespace::PlayerTransforms __declspec(property(get=__get__playerTransforms, put=__set__playerTransforms))  _playerTransforms;

constexpr void __set__playerTransforms(::GlobalNamespace::PlayerTransforms value) ;

constexpr ::GlobalNamespace::PlayerTransforms __get__playerTransforms() const;

 float_t __declspec(property(get=__get__thisZ, put=__set__thisZ))  _thisZ;

constexpr void __set__thisZ(float_t value) ;

constexpr float_t __get__thisZ() const;

 bool __declspec(property(get=__get__isVisible, put=__set__isVisible))  _isVisible;

constexpr void __set__isVisible(bool value) ;

constexpr bool __get__isVisible() const;

 ::UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__material() const;


// Methods

/// @brief Method Start addr 0x2107ee0 size 0x54 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2107f34 size 0xbc virtual false final false
 void Update() ;

// Ctor Parameters []
explicit MoveBackWall() ;

/// @brief Method .ctor addr 0x2107ff0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MoveBackWall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MoveBackWall, "", "MoveBackWall");
