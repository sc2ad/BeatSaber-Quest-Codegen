#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class EntityBehaviour;
}
// Type: UnityEngine.ProBuilder::EntityBehaviour
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12065))
// CS Name: UnityEngine.ProBuilder.EntityBehaviour
class CORDL_TYPE EntityBehaviour : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EntityBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "EntityBehaviour", modifiers: " const&", def_value: None }]
constexpr EntityBehaviour(EntityBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EntityBehaviour", modifiers: "&&", def_value: None }]
constexpr EntityBehaviour(EntityBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EntityBehaviour(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EntityBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EntityBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EntityBehaviour& operator=(EntityBehaviour&& o) noexcept = default;
  constexpr EntityBehaviour& operator=(EntityBehaviour const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_manageVisibility, put=__set_manageVisibility))  manageVisibility;

constexpr void __set_manageVisibility(bool value) ;

constexpr bool __get_manageVisibility() const;


// Methods

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Initialize() ;

/// @brief Method OnEnterPlayMode addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnEnterPlayMode() ;

/// @brief Method OnSceneLoaded addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method SetMaterial addr 0x29a8c00 size 0xe4 virtual false final false
 void SetMaterial(UnityEngine::Material material) ;

// Ctor Parameters []
explicit EntityBehaviour() ;

/// @brief Method .ctor addr 0x29a8e64 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::EntityBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::EntityBehaviour, "UnityEngine.ProBuilder", "EntityBehaviour");
