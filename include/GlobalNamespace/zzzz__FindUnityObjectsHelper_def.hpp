#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class FindUnityObjectsHelper;
}
// Type: ::FindUnityObjectsHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13737))
// CS Name: FindUnityObjectsHelper
class CORDL_TYPE FindUnityObjectsHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FindUnityObjectsHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "FindUnityObjectsHelper", modifiers: " const&", def_value: None }]
constexpr FindUnityObjectsHelper(FindUnityObjectsHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FindUnityObjectsHelper", modifiers: "&&", def_value: None }]
constexpr FindUnityObjectsHelper(FindUnityObjectsHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FindUnityObjectsHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FindUnityObjectsHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FindUnityObjectsHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FindUnityObjectsHelper& operator=(FindUnityObjectsHelper&& o) noexcept = default;
  constexpr FindUnityObjectsHelper& operator=(FindUnityObjectsHelper const& o) noexcept = default;
                


// Methods

/// @brief Method GetMonoBehavioursInLoadedScenes addr 0x1f719b4 size 0x60 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::MonoBehaviour> GetMonoBehavioursInLoadedScenes() ;

/// @brief Method GetAllRootGameObjectsInLoadedScenes addr 0x1f71c58 size 0x10c virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> GetAllRootGameObjectsInLoadedScenes() ;

/// @brief Method GetAllGameObjectsInGameObject addr 0x1f71d64 size 0x1e0 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> GetAllGameObjectsInGameObject(UnityEngine::GameObject go) ;

/// @brief Method GetAllGameObjectsInLoadedScenes addr 0x1f71a14 size 0x244 virtual false final false
static ::ArrayW<UnityEngine::GameObject> GetAllGameObjectsInLoadedScenes() ;

/// @brief Method GetComponentsInGameObjects addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::List_1<T> GetComponentsInGameObjects(System::Collections::Generic::IReadOnlyList_1<UnityEngine::GameObject> gameObjects) ;

/// @brief Method GetComponentsInScene addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::List_1<T> GetComponentsInScene(UnityEngine::SceneManagement::Scene scene, bool includeInactive) ;

/// @brief Method GetComponentInScene addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetComponentInScene(UnityEngine::SceneManagement::Scene scene, bool includeInactive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FindUnityObjectsHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FindUnityObjectsHelper, "", "FindUnityObjectsHelper");
