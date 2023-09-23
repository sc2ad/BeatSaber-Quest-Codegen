#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
namespace UnityEngine {
class TerrainData;
}
// Forward declare root types
namespace UnityEngine {
class TerrainCollider;
}
// Type: UnityEngine::TerrainCollider
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15468))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16027))
// CS Name: UnityEngine.TerrainCollider
class CORDL_TYPE TerrainCollider : public UnityEngine::Collider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TerrainCollider() = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainCollider", modifiers: " const&", def_value: None }]
constexpr TerrainCollider(TerrainCollider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TerrainCollider", modifiers: "&&", def_value: None }]
constexpr TerrainCollider(TerrainCollider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TerrainCollider(void* ptr) noexcept : UnityEngine::Collider(ptr) {
}


  constexpr TerrainCollider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TerrainCollider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TerrainCollider& operator=(TerrainCollider&& o) noexcept = default;
  constexpr TerrainCollider& operator=(TerrainCollider const& o) noexcept = default;
                


// Properties

 UnityEngine::TerrainData __declspec(property(put=set_terrainData))  terrainData;


// Methods

/// @brief Method set_terrainData addr 0x2baa284 size 0x44 virtual false final false
 void set_terrainData(UnityEngine::TerrainData value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::TerrainCollider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TerrainCollider, "UnityEngine", "TerrainCollider");
