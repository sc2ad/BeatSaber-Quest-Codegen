#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class ScreenCaptureAfterDelay;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class BloomFogSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameCoreSceneSetup;
}
// Type: ::GameCoreSceneSetup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6084))
// CS Name: GameCoreSceneSetup
class CORDL_TYPE GameCoreSceneSetup : public ::Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GameCoreSceneSetup() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: " const&", def_value: None }]
constexpr GameCoreSceneSetup(GameCoreSceneSetup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameCoreSceneSetup", modifiers: "&&", def_value: None }]
constexpr GameCoreSceneSetup(GameCoreSceneSetup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameCoreSceneSetup(void* ptr) noexcept : ::Zenject::MonoInstaller(ptr) {
}


  constexpr GameCoreSceneSetup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameCoreSceneSetup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameCoreSceneSetup& operator=(GameCoreSceneSetup&& o) noexcept = default;
  constexpr GameCoreSceneSetup& operator=(GameCoreSceneSetup const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::ScreenCaptureAfterDelay __declspec(property(get=__get__screenCaptureAfterDelayPrefab, put=__set__screenCaptureAfterDelayPrefab))  _screenCaptureAfterDelayPrefab;

constexpr void __set__screenCaptureAfterDelayPrefab(::GlobalNamespace::ScreenCaptureAfterDelay value) ;

constexpr ::GlobalNamespace::ScreenCaptureAfterDelay __get__screenCaptureAfterDelayPrefab() const;

 ::GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::GlobalNamespace::BloomFogSO __declspec(property(get=__get__bloomFog, put=__set__bloomFog))  _bloomFog;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO value) ;

constexpr ::GlobalNamespace::BloomFogSO __get__bloomFog() const;

/// @brief Field kPauseButtonPressDurationMultiplier offset 0
static constexpr float_t  kPauseButtonPressDurationMultiplier{0.75};


// Methods

/// @brief Method InstallBindings addr 0x21b4d9c size 0x46c virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit GameCoreSceneSetup() ;

/// @brief Method .ctor addr 0x21b5208 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameCoreSceneSetup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameCoreSceneSetup, "", "GameCoreSceneSetup");
