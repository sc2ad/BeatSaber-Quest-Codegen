#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManagerAPIInternal;
}
// Type: UnityEngine.SceneManagement::SceneManagerAPIInternal
namespace UnityEngine::SceneManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10317))
// CS Name: UnityEngine.SceneManagement.SceneManagerAPIInternal
class CORDL_TYPE SceneManagerAPIInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SceneManagerAPIInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPIInternal", modifiers: " const&", def_value: None }]
constexpr SceneManagerAPIInternal(SceneManagerAPIInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPIInternal", modifiers: "&&", def_value: None }]
constexpr SceneManagerAPIInternal(SceneManagerAPIInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneManagerAPIInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneManagerAPIInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneManagerAPIInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneManagerAPIInternal& operator=(SceneManagerAPIInternal&& o) noexcept = default;
  constexpr SceneManagerAPIInternal& operator=(SceneManagerAPIInternal const& o) noexcept = default;
                


// Methods

/// @brief Method GetNumScenesInBuildSettings addr 0x2b7899c size 0x28 virtual false final false
static int32_t GetNumScenesInBuildSettings() ;

/// @brief Method LoadSceneAsyncNameIndexInternal addr 0x2b789c4 size 0x60 virtual false final false
static ::UnityEngine::AsyncOperation LoadSceneAsyncNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame) ;

/// @brief Method UnloadSceneNameIndexInternal addr 0x2b78a80 size 0x6c virtual false final false
static ::UnityEngine::AsyncOperation UnloadSceneNameIndexInternal(::StringW sceneName, int32_t sceneBuildIndex, bool immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions options, ByRef<bool> outSuccess) ;

/// @brief Method LoadSceneAsyncNameIndexInternal_Injected addr 0x2b78a24 size 0x5c virtual false final false
static ::UnityEngine::AsyncOperation LoadSceneAsyncNameIndexInternal_Injected(::StringW sceneName, int32_t sceneBuildIndex, ByRef<::UnityEngine::SceneManagement::LoadSceneParameters> parameters, bool mustCompleteNextFrame) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SceneManagement
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManagerAPIInternal);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManagerAPIInternal, "UnityEngine.SceneManagement", "SceneManagerAPIInternal");
