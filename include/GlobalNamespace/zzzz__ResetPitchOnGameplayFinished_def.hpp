#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class GameplayLevelSceneTransitionEvents;
}
// Forward declare root types
namespace GlobalNamespace {
class ResetPitchOnGameplayFinished;
}
// Type: ::ResetPitchOnGameplayFinished
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4061))
// CS Name: ResetPitchOnGameplayFinished
class CORDL_TYPE ResetPitchOnGameplayFinished : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ResetPitchOnGameplayFinished() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResetPitchOnGameplayFinished", modifiers: " const&", def_value: None }]
constexpr ResetPitchOnGameplayFinished(ResetPitchOnGameplayFinished const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResetPitchOnGameplayFinished", modifiers: "&&", def_value: None }]
constexpr ResetPitchOnGameplayFinished(ResetPitchOnGameplayFinished&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResetPitchOnGameplayFinished(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResetPitchOnGameplayFinished& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResetPitchOnGameplayFinished& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResetPitchOnGameplayFinished& operator=(ResetPitchOnGameplayFinished&& o) noexcept = default;
  constexpr ResetPitchOnGameplayFinished& operator=(ResetPitchOnGameplayFinished const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayLevelSceneTransitionEvents __declspec(property(get=__get__gameplayLevelSceneTransitionEvents, put=__set__gameplayLevelSceneTransitionEvents))  _gameplayLevelSceneTransitionEvents;

constexpr void __set__gameplayLevelSceneTransitionEvents(GlobalNamespace::GameplayLevelSceneTransitionEvents value) ;

constexpr GlobalNamespace::GameplayLevelSceneTransitionEvents __get__gameplayLevelSceneTransitionEvents() const;

 GlobalNamespace::AudioManagerSO __declspec(property(get=__get__audioManager, put=__set__audioManager))  _audioManager;

constexpr void __set__audioManager(GlobalNamespace::AudioManagerSO value) ;

constexpr GlobalNamespace::AudioManagerSO __get__audioManager() const;


// Methods

static GlobalNamespace::ResetPitchOnGameplayFinished New_ctor(GlobalNamespace::GameplayLevelSceneTransitionEvents gameplayLevelSceneTransitionEvents, GlobalNamespace::AudioManagerSO audioManager) ;

/// @brief Method .ctor addr 0x20bd958 size 0xa8 virtual false final false
 void _ctor(GlobalNamespace::GameplayLevelSceneTransitionEvents gameplayLevelSceneTransitionEvents, GlobalNamespace::AudioManagerSO audioManager) ;

/// @brief Method Finalize addr 0x20bda00 size 0x110 virtual true final false
 void Finalize() ;

/// @brief Method HandleAnyGameplayLevelDidFinish addr 0x20bdb10 size 0x20 virtual false final false
 void HandleAnyGameplayLevelDidFinish() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ResetPitchOnGameplayFinished);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ResetPitchOnGameplayFinished, "", "ResetPitchOnGameplayFinished");
