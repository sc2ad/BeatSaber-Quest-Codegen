#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
// Forward declare root types
namespace GlobalNamespace {
class SceneLoadedCallbacksOrderDebug;
}
// Type: ::SceneLoadedCallbacksOrderDebug
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13825))
// CS Name: SceneLoadedCallbacksOrderDebug
class CORDL_TYPE SceneLoadedCallbacksOrderDebug : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SceneLoadedCallbacksOrderDebug() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneLoadedCallbacksOrderDebug", modifiers: " const&", def_value: None }]
constexpr SceneLoadedCallbacksOrderDebug(SceneLoadedCallbacksOrderDebug const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneLoadedCallbacksOrderDebug", modifiers: "&&", def_value: None }]
constexpr SceneLoadedCallbacksOrderDebug(SceneLoadedCallbacksOrderDebug&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneLoadedCallbacksOrderDebug(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SceneLoadedCallbacksOrderDebug& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneLoadedCallbacksOrderDebug& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneLoadedCallbacksOrderDebug& operator=(SceneLoadedCallbacksOrderDebug&& o) noexcept = default;
  constexpr SceneLoadedCallbacksOrderDebug& operator=(SceneLoadedCallbacksOrderDebug const& o) noexcept = default;
                


// Methods

/// @brief Method Awake addr 0x1f7a26c size 0x68 virtual false final false
 void Awake() ;

/// @brief Method OnEnable addr 0x1f7a2d4 size 0xe8 virtual false final false
 void OnEnable() ;

/// @brief Method OnSceneLoaded addr 0x1f7a3bc size 0xd0 virtual false final false
 void OnSceneLoaded(UnityEngine::SceneManagement::Scene scene, UnityEngine::SceneManagement::LoadSceneMode mode) ;

/// @brief Method Start addr 0x1f7a48c size 0x68 virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x1f7a4f4 size 0xe8 virtual false final false
 void OnDisable() ;

static GlobalNamespace::SceneLoadedCallbacksOrderDebug New_ctor() ;

/// @brief Method .ctor addr 0x1f7a5dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SceneLoadedCallbacksOrderDebug);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneLoadedCallbacksOrderDebug, "", "SceneLoadedCallbacksOrderDebug");
