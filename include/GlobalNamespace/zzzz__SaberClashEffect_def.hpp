#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class SaberClashChecker;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmissionModule;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberClashEffect;
}
// Type: ::SaberClashEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5069))
// CS Name: SaberClashEffect
class CORDL_TYPE SaberClashEffect : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~SaberClashEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashEffect", modifiers: " const&", def_value: None }]
constexpr SaberClashEffect(SaberClashEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberClashEffect", modifiers: "&&", def_value: None }]
constexpr SaberClashEffect(SaberClashEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberClashEffect(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberClashEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberClashEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberClashEffect& operator=(SaberClashEffect&& o) noexcept = default;
  constexpr SaberClashEffect& operator=(SaberClashEffect const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__sparkleParticleSystem, put=__set__sparkleParticleSystem))  _sparkleParticleSystem;

constexpr void __set__sparkleParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__sparkleParticleSystem() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__glowParticleSystem, put=__set__glowParticleSystem))  _glowParticleSystem;

constexpr void __set__glowParticleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__glowParticleSystem() const;

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__rumblePreset, put=__set__rumblePreset))  _rumblePreset;

constexpr void __set__rumblePreset(Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr Libraries::HM::HMLib::VR::HapticPresetSO __get__rumblePreset() const;

 GlobalNamespace::SaberClashChecker __declspec(property(get=__get__saberClashChecker, put=__set__saberClashChecker))  _saberClashChecker;

constexpr void __set__saberClashChecker(GlobalNamespace::SaberClashChecker value) ;

constexpr GlobalNamespace::SaberClashChecker __get__saberClashChecker() const;

 GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackController, put=__set__hapticFeedbackController))  _hapticFeedbackController;

constexpr void __set__hapticFeedbackController(GlobalNamespace::HapticFeedbackManager value) ;

constexpr GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackController() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 UnityEngine::UnityEngine__ParticleSystem__EmissionModule __declspec(property(get=__get__sparkleParticleSystemEmmisionModule, put=__set__sparkleParticleSystemEmmisionModule))  _sparkleParticleSystemEmmisionModule;

constexpr void __set__sparkleParticleSystemEmmisionModule(UnityEngine::UnityEngine__ParticleSystem__EmissionModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmissionModule __get__sparkleParticleSystemEmmisionModule() const;

 UnityEngine::UnityEngine__ParticleSystem__EmissionModule __declspec(property(get=__get__glowParticleSystemEmmisionModule, put=__set__glowParticleSystemEmmisionModule))  _glowParticleSystemEmmisionModule;

constexpr void __set__glowParticleSystemEmmisionModule(UnityEngine::UnityEngine__ParticleSystem__EmissionModule value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmissionModule __get__glowParticleSystemEmmisionModule() const;

 bool __declspec(property(get=__get__sabersAreClashing, put=__set__sabersAreClashing))  _sabersAreClashing;

constexpr void __set__sabersAreClashing(bool value) ;

constexpr bool __get__sabersAreClashing() const;


// Methods

/// @brief Method Start addr 0x226718c size 0x1b0 virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x226733c size 0x10 virtual false final false
 void OnDisable() ;

/// @brief Method LateUpdate addr 0x226734c size 0xfc virtual false final false
 void LateUpdate() ;

static GlobalNamespace::SaberClashEffect New_ctor() ;

/// @brief Method .ctor addr 0x2267448 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberClashEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberClashEffect, "", "SaberClashEffect");
