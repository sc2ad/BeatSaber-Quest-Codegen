#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SliderInteractionEffect_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class IGamePause;
}
namespace Libraries::HM::HMLib::VR {
class HapticPresetSO;
}
namespace GlobalNamespace {
class HapticFeedbackManager;
}
namespace GlobalNamespace {
struct SaberType;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderHapticFeedbackInteractionEffect;
}
// Type: ::SliderHapticFeedbackInteractionEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4934))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4928))
// CS Name: SliderHapticFeedbackInteractionEffect
class CORDL_TYPE SliderHapticFeedbackInteractionEffect : public GlobalNamespace::SliderInteractionEffect {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SliderHapticFeedbackInteractionEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: " const&", def_value: None }]
constexpr SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderHapticFeedbackInteractionEffect", modifiers: "&&", def_value: None }]
constexpr SliderHapticFeedbackInteractionEffect(SliderHapticFeedbackInteractionEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderHapticFeedbackInteractionEffect(void* ptr) noexcept : GlobalNamespace::SliderInteractionEffect(ptr) {
}


  constexpr SliderHapticFeedbackInteractionEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderHapticFeedbackInteractionEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderHapticFeedbackInteractionEffect& operator=(SliderHapticFeedbackInteractionEffect&& o) noexcept = default;
  constexpr SliderHapticFeedbackInteractionEffect& operator=(SliderHapticFeedbackInteractionEffect const& o) noexcept = default;
                


// Fields

 Libraries::HM::HMLib::VR::HapticPresetSO __declspec(property(get=__get__hapticPreset, put=__set__hapticPreset))  _hapticPreset;

constexpr void __set__hapticPreset(Libraries::HM::HMLib::VR::HapticPresetSO value) ;

constexpr Libraries::HM::HMLib::VR::HapticPresetSO __get__hapticPreset() const;

 GlobalNamespace::HapticFeedbackManager __declspec(property(get=__get__hapticFeedbackManager, put=__set__hapticFeedbackManager))  _hapticFeedbackManager;

constexpr void __set__hapticFeedbackManager(GlobalNamespace::HapticFeedbackManager value) ;

constexpr GlobalNamespace::HapticFeedbackManager __get__hapticFeedbackManager() const;

 GlobalNamespace::IGamePause __declspec(property(get=__get__gamePause, put=__set__gamePause))  _gamePause;

constexpr void __set__gamePause(GlobalNamespace::IGamePause value) ;

constexpr GlobalNamespace::IGamePause __get__gamePause() const;

/// @brief Field kVibrationSaberInteractionParamThreshold offset 0
static constexpr float_t  kVibrationSaberInteractionParamThreshold{0.2};

 GlobalNamespace::SaberType __declspec(property(get=__get__saberType, put=__set__saberType))  _saberType;

constexpr void __set__saberType(GlobalNamespace::SaberType value) ;

constexpr GlobalNamespace::SaberType __get__saberType() const;


// Methods

/// @brief Method Start addr 0x2249fd8 size 0x40 virtual true final false
 void Start() ;

/// @brief Method Update addr 0x224a120 size 0xd4 virtual false final false
 void Update() ;

/// @brief Method StartEffect addr 0x224a250 size 0x48 virtual true final false
 void StartEffect(float_t saberInteractionParam) ;

/// @brief Method EndEffect addr 0x224a298 size 0xc virtual true final false
 void EndEffect() ;

/// @brief Method Vibrate addr 0x224a210 size 0x40 virtual false final false
 void Vibrate() ;

// Ctor Parameters []
explicit SliderHapticFeedbackInteractionEffect() ;

/// @brief Method .ctor addr 0x224a2a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderHapticFeedbackInteractionEffect);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderHapticFeedbackInteractionEffect, "", "SliderHapticFeedbackInteractionEffect");
