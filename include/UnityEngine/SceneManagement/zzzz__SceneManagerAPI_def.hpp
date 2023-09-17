#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::SceneManagement {
struct LoadSceneParameters;
}
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::SceneManagement {
class SceneManagerAPI;
}
// Type: UnityEngine.SceneManagement::SceneManagerAPI
namespace UnityEngine::SceneManagement {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10318))
// CS Name: UnityEngine.SceneManagement.SceneManagerAPI
class CORDL_TYPE SceneManagerAPI : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SceneManagerAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPI", modifiers: " const&", def_value: None }]
constexpr SceneManagerAPI(SceneManagerAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneManagerAPI", modifiers: "&&", def_value: None }]
constexpr SceneManagerAPI(SceneManagerAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneManagerAPI(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneManagerAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneManagerAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneManagerAPI& operator=(SceneManagerAPI&& o) noexcept = default;
  constexpr SceneManagerAPI& operator=(SceneManagerAPI const& o) noexcept = default;
                


// Fields

static ::UnityEngine::SceneManagement::SceneManagerAPI __declspec(property(get=__get_s_DefaultAPI, put=__set_s_DefaultAPI))  s_DefaultAPI;

static void __set_s_DefaultAPI(::UnityEngine::SceneManagement::SceneManagerAPI value) ;

static ::UnityEngine::SceneManagement::SceneManagerAPI __get_s_DefaultAPI() ;

static ::UnityEngine::SceneManagement::SceneManagerAPI __declspec(property(get=__get__overrideAPI_k__BackingField, put=__set__overrideAPI_k__BackingField))  _overrideAPI_k__BackingField;

static void __set__overrideAPI_k__BackingField(::UnityEngine::SceneManagement::SceneManagerAPI value) ;

static ::UnityEngine::SceneManagement::SceneManagerAPI __get__overrideAPI_k__BackingField() ;


// Properties

static ::UnityEngine::SceneManagement::SceneManagerAPI __declspec(property(get=get_ActiveAPI))  ActiveAPI;

static ::UnityEngine::SceneManagement::SceneManagerAPI __declspec(property(get=get_overrideAPI))  overrideAPI;


// Methods

/// @brief Method get_ActiveAPI addr 0x2b77ea8 size 0xa8 virtual false final false
static ::UnityEngine::SceneManagement::SceneManagerAPI get_ActiveAPI() ;

/// @brief Method get_overrideAPI addr 0x2b78aec size 0x58 virtual false final false
static ::UnityEngine::SceneManagement::SceneManagerAPI get_overrideAPI() ;

// Ctor Parameters []
explicit SceneManagerAPI() ;

/// @brief Method .ctor addr 0x2b78b44 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetNumScenesInBuildSettings addr 0x2b78b4c size 0x28 virtual true final false
 int32_t GetNumScenesInBuildSettings() ;

/// @brief Method LoadSceneAsyncByNameOrIndex addr 0x2b78b74 size 0x60 virtual true final false
 ::UnityEngine::AsyncOperation LoadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex, ::UnityEngine::SceneManagement::LoadSceneParameters parameters, bool mustCompleteNextFrame) ;

/// @brief Method UnloadSceneAsyncByNameOrIndex addr 0x2b78bd4 size 0x6c virtual true final false
 ::UnityEngine::AsyncOperation UnloadSceneAsyncByNameOrIndex(::StringW sceneName, int32_t sceneBuildIndex, bool immediately, ::UnityEngine::SceneManagement::UnloadSceneOptions options, ByRef<bool> outSuccess) ;

/// @brief Method LoadFirstScene addr 0x2b78c40 size 0x8 virtual true final false
 ::UnityEngine::AsyncOperation LoadFirstScene(bool mustLoadAsync) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SceneManagement
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SceneManagement::SceneManagerAPI);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::SceneManagerAPI, "UnityEngine.SceneManagement", "SceneManagerAPI");
