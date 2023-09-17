#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class FadeInOutController;
}
namespace GlobalNamespace {
class GameScenesManager;
}
// Forward declare root types
namespace GlobalNamespace {
class FadeOutOnSceneTransitionStart;
}
// Type: ::FadeOutOnSceneTransitionStart
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15306))
// CS Name: FadeOutOnSceneTransitionStart
class CORDL_TYPE FadeOutOnSceneTransitionStart : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~FadeOutOnSceneTransitionStart() = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutOnSceneTransitionStart", modifiers: " const&", def_value: None }]
constexpr FadeOutOnSceneTransitionStart(FadeOutOnSceneTransitionStart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FadeOutOnSceneTransitionStart", modifiers: "&&", def_value: None }]
constexpr FadeOutOnSceneTransitionStart(FadeOutOnSceneTransitionStart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FadeOutOnSceneTransitionStart(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FadeOutOnSceneTransitionStart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FadeOutOnSceneTransitionStart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FadeOutOnSceneTransitionStart& operator=(FadeOutOnSceneTransitionStart&& o) noexcept = default;
  constexpr FadeOutOnSceneTransitionStart& operator=(FadeOutOnSceneTransitionStart const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::FadeInOutController __declspec(property(get=__get__fadeInOut, put=__set__fadeInOut))  _fadeInOut;

constexpr void __set__fadeInOut(::GlobalNamespace::FadeInOutController value) ;

constexpr ::GlobalNamespace::FadeInOutController __get__fadeInOut() const;

 ::GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager value) ;

constexpr ::GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Methods

/// @brief Method Start addr 0x267633c size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x26763c8 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleGameScenesManagerTransitionDidStart addr 0x267649c size 0x1c virtual false final false
 void HandleGameScenesManagerTransitionDidStart(float_t duration) ;

// Ctor Parameters []
explicit FadeOutOnSceneTransitionStart() ;

/// @brief Method .ctor addr 0x26764b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FadeOutOnSceneTransitionStart);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutOnSceneTransitionStart, "", "FadeOutOnSceneTransitionStart");
