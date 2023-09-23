#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
namespace UnityEngine {
class Mesh;
}
// Forward declare root types
namespace UnityEngine {
class MeshCollider;
}
// Type: UnityEngine::MeshCollider
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15465))
// CS Name: UnityEngine.MeshCollider
class CORDL_TYPE MeshCollider : public UnityEngine::Collider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MeshCollider() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: " const&", def_value: None }]
constexpr MeshCollider(MeshCollider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeshCollider", modifiers: "&&", def_value: None }]
constexpr MeshCollider(MeshCollider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeshCollider(void* ptr) noexcept : UnityEngine::Collider(ptr) {
}


  constexpr MeshCollider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeshCollider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeshCollider& operator=(MeshCollider&& o) noexcept = default;
  constexpr MeshCollider& operator=(MeshCollider const& o) noexcept = default;
                


// Properties

 UnityEngine::Mesh __declspec(property(get=get_sharedMesh, put=set_sharedMesh))  sharedMesh;

 bool __declspec(property(put=set_convex))  convex;


// Methods

/// @brief Method get_sharedMesh addr 0x2b9f448 size 0x3c virtual false final false
 UnityEngine::Mesh get_sharedMesh() ;

/// @brief Method set_sharedMesh addr 0x2b9f484 size 0x44 virtual false final false
 void set_sharedMesh(UnityEngine::Mesh value) ;

/// @brief Method set_convex addr 0x2b9f4c8 size 0x44 virtual false final false
 void set_convex(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::MeshCollider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MeshCollider, "UnityEngine", "MeshCollider");
