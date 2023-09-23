#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ProBuilder/zzzz__EntityBehaviour_def.hpp"
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColliderBehaviour;
}
// Type: UnityEngine.ProBuilder::ColliderBehaviour
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12053))
// CS Name: UnityEngine.ProBuilder.ColliderBehaviour
class CORDL_TYPE ColliderBehaviour : public UnityEngine::ProBuilder::EntityBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ColliderBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColliderBehaviour", modifiers: " const&", def_value: None }]
constexpr ColliderBehaviour(ColliderBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColliderBehaviour", modifiers: "&&", def_value: None }]
constexpr ColliderBehaviour(ColliderBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColliderBehaviour(void* ptr) noexcept : UnityEngine::ProBuilder::EntityBehaviour(ptr) {
}


  constexpr ColliderBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColliderBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColliderBehaviour& operator=(ColliderBehaviour&& o) noexcept = default;
  constexpr ColliderBehaviour& operator=(ColliderBehaviour const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x29a8af4 size 0x10c virtual true final false
 void Initialize() ;

/// @brief Method OnEnterPlayMode addr 0x29a8ce4 size 0xb8 virtual true final false
 void OnEnterPlayMode() ;

/// @brief Method OnSceneLoaded addr 0x29a8d9c size 0xb8 virtual true final false
 void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode) ;

// Ctor Parameters []
explicit ColliderBehaviour() ;

/// @brief Method .ctor addr 0x29a8e54 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ColliderBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColliderBehaviour, "UnityEngine.ProBuilder", "ColliderBehaviour");
