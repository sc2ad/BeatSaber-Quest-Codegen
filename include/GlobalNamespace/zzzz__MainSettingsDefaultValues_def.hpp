#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsDefaultValues;
}
// Type: ::MainSettingsDefaultValues
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4452))
// CS Name: MainSettingsDefaultValues
class CORDL_TYPE MainSettingsDefaultValues : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MainSettingsDefaultValues() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsDefaultValues", modifiers: " const&", def_value: None }]
constexpr MainSettingsDefaultValues(MainSettingsDefaultValues const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsDefaultValues", modifiers: "&&", def_value: None }]
constexpr MainSettingsDefaultValues(MainSettingsDefaultValues&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainSettingsDefaultValues(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MainSettingsDefaultValues& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainSettingsDefaultValues& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainSettingsDefaultValues& operator=(MainSettingsDefaultValues&& o) noexcept = default;
  constexpr MainSettingsDefaultValues& operator=(MainSettingsDefaultValues const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultRoomCenterX offset 0
static constexpr float_t  kDefaultRoomCenterX{0};

/// @brief Field kDefaultRoomCenterY offset 0
static constexpr float_t  kDefaultRoomCenterY{0};

/// @brief Field kDefaultRoomCenterZ offset 0
static constexpr float_t  kDefaultRoomCenterZ{0};

/// @brief Field kDefaultControllerPositionX offset 0
static constexpr float_t  kDefaultControllerPositionX{0};

/// @brief Field kDefaultControllerPositionY offset 0
static constexpr float_t  kDefaultControllerPositionY{0};

/// @brief Field kDefaultControllerPositionZ offset 0
static constexpr float_t  kDefaultControllerPositionZ{0};

/// @brief Field kDefaultControllerRotationX offset 0
static constexpr float_t  kDefaultControllerRotationX{0};

/// @brief Field kDefaultControllerRotationY offset 0
static constexpr float_t  kDefaultControllerRotationY{0};

/// @brief Field kDefaultControllerRotationZ offset 0
static constexpr float_t  kDefaultControllerRotationZ{0};

/// @brief Field kDefaultWindowResolutionWidth offset 0
static constexpr int32_t  kDefaultWindowResolutionWidth{1920};

/// @brief Field kDefaultWindowResolutionHeight offset 0
static constexpr int32_t  kDefaultWindowResolutionHeight{1080};

static int32_t __declspec(property(get=__get_kDefaultMirrorGraphicsSettings, put=__set_kDefaultMirrorGraphicsSettings))  kDefaultMirrorGraphicsSettings;

static void __set_kDefaultMirrorGraphicsSettings(int32_t value) ;

static int32_t __get_kDefaultMirrorGraphicsSettings() ;

/// @brief Field kDefaultMainEffectGraphicsSettings offset 0
static constexpr int32_t  kDefaultMainEffectGraphicsSettings{0};

/// @brief Field kDefaultBloomGraphicsSettings offset 0
static constexpr int32_t  kDefaultBloomGraphicsSettings{0};

/// @brief Field kDefaultSmokeGraphicsSettings offset 0
static constexpr bool  kDefaultSmokeGraphicsSettings{false};

/// @brief Field kDefaultAntiAliasingLevel offset 0
static constexpr int32_t  kDefaultAntiAliasingLevel{4};

/// @brief Field kDefaultVrResolutionScale offset 0
static constexpr float_t  kDefaultVrResolutionScale{1};

/// @brief Field kDefaultMenuVRResolutionScaleMultiplier offset 0
static constexpr float_t  kDefaultMenuVRResolutionScaleMultiplier{1.2};

/// @brief Field kDefaultUseFixedFoveatedRenderingDuringGameplay offset 0
static constexpr bool  kDefaultUseFixedFoveatedRenderingDuringGameplay{true};

/// @brief Field kDefaultBurnMarkTrailsEnabled offset 0
static constexpr bool  kDefaultBurnMarkTrailsEnabled{false};

/// @brief Field kDefaultScreenDisplacementEffectsEnabled offset 0
static constexpr bool  kDefaultScreenDisplacementEffectsEnabled{false};

/// @brief Field kDefaultAudioLatency offset 0
static constexpr float_t  kDefaultAudioLatency{0.09};

/// @brief Field kMaxShockwaveParticles offset 0
static constexpr int32_t  kMaxShockwaveParticles{0};

/// @brief Field kMaxNumberOfCutSoundEffects offset 0
static constexpr int32_t  kMaxNumberOfCutSoundEffects{16};

/// @brief Field kCreateScreenshotDuringTheGame offset 0
static constexpr bool  kCreateScreenshotDuringTheGame{false};

/// @brief Field kSystemLanguageSerializedName offset 0
static constexpr ::ConstString  kSystemLanguageSerializedName{u"SystemLanguage"};

/// @brief Field kDefaultPauseButtonPressDurationLevel offset 0
static constexpr int32_t  kDefaultPauseButtonPressDurationLevel{0};


// Methods

/// @brief Method SetFixedDefaultValues addr 0x21ef7e4 size 0x154 virtual false final false
static void SetFixedDefaultValues(::GlobalNamespace::MainSettingsModelSO mainSettingsModel) ;

// Ctor Parameters []
explicit MainSettingsDefaultValues() ;

/// @brief Method .ctor addr 0x21ef938 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsDefaultValues);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsDefaultValues, "", "MainSettingsDefaultValues");
