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
class TriggerBehaviour;
}
// Type: UnityEngine.ProBuilder::TriggerBehaviour
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12065))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12152))
// CS Name: UnityEngine.ProBuilder.TriggerBehaviour
class CORDL_TYPE TriggerBehaviour : public UnityEngine::ProBuilder::EntityBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TriggerBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "TriggerBehaviour", modifiers: " const&", def_value: None }]
constexpr TriggerBehaviour(TriggerBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TriggerBehaviour", modifiers: "&&", def_value: None }]
constexpr TriggerBehaviour(TriggerBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TriggerBehaviour(void* ptr) noexcept : UnityEngine::ProBuilder::EntityBehaviour(ptr) {
}


  constexpr TriggerBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TriggerBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TriggerBehaviour& operator=(TriggerBehaviour&& o) noexcept = default;
  constexpr TriggerBehaviour& operator=(TriggerBehaviour const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x29e8358 size 0x19c virtual true final false
 void Initialize() ;

/// @brief Method OnEnterPlayMode addr 0x29e84f4 size 0xb8 virtual true final false
 void OnEnterPlayMode() ;

/// @brief Method OnSceneLoaded addr 0x29e85ac size 0xb8 virtual true final false
 void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode) ;

// Ctor Parameters []
explicit TriggerBehaviour() ;

/// @brief Method .ctor addr 0x29e8664 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::TriggerBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::TriggerBehaviour, "UnityEngine.ProBuilder", "TriggerBehaviour");
