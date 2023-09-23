#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MonoInstaller_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class PlayerHeightDetector;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class TutorialSceneSetupData;
}
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
// Forward declare root types
namespace GlobalNamespace {
class TutorialInstaller;
}
// Type: ::TutorialInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11080))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5491))
// CS Name: TutorialInstaller
class CORDL_TYPE TutorialInstaller : public Zenject::MonoInstaller {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TutorialInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialInstaller", modifiers: " const&", def_value: None }]
constexpr TutorialInstaller(TutorialInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TutorialInstaller", modifiers: "&&", def_value: None }]
constexpr TutorialInstaller(TutorialInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TutorialInstaller(void* ptr) noexcept : Zenject::MonoInstaller(ptr) {
}


  constexpr TutorialInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TutorialInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TutorialInstaller& operator=(TutorialInstaller&& o) noexcept = default;
  constexpr TutorialInstaller& operator=(TutorialInstaller const& o) noexcept = default;
                


// Fields

 UnityEngine::AudioClip __declspec(property(get=__get__audioClip, put=__set__audioClip))  _audioClip;

constexpr void __set__audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__audioClip() const;

 float_t __declspec(property(get=__get__songBPM, put=__set__songBPM))  _songBPM;

constexpr void __set__songBPM(float_t value) ;

constexpr float_t __get__songBPM() const;

 GlobalNamespace::PlayerHeightDetector __declspec(property(get=__get__playerHeightDetectorPrefab, put=__set__playerHeightDetectorPrefab))  _playerHeightDetectorPrefab;

constexpr void __set__playerHeightDetectorPrefab(GlobalNamespace::PlayerHeightDetector value) ;

constexpr GlobalNamespace::PlayerHeightDetector __get__playerHeightDetectorPrefab() const;

 GlobalNamespace::EffectPoolsManualInstaller __declspec(property(get=__get__effectPoolsManualInstaller, put=__set__effectPoolsManualInstaller))  _effectPoolsManualInstaller;

constexpr void __set__effectPoolsManualInstaller(GlobalNamespace::EffectPoolsManualInstaller value) ;

constexpr GlobalNamespace::EffectPoolsManualInstaller __get__effectPoolsManualInstaller() const;

 GlobalNamespace::TutorialSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::TutorialSceneSetupData value) ;

constexpr GlobalNamespace::TutorialSceneSetupData __get__sceneSetupData() const;


// Methods

/// @brief Method InstallBindings addr 0x211b6f4 size 0xd08 virtual true final false
 void InstallBindings() ;

// Ctor Parameters []
explicit TutorialInstaller() ;

/// @brief Method .ctor addr 0x211c3fc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TutorialInstaller);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TutorialInstaller, "", "TutorialInstaller");
