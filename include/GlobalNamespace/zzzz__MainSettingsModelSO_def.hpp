#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class LanguageSO;
}
namespace GlobalNamespace {
class Vector3SO;
}
namespace GlobalNamespace {
class BoolSO;
}
namespace GlobalNamespace {
class StringSO;
}
namespace GlobalNamespace {
class Vector2IntSO;
}
namespace GlobalNamespace {
class ISaveData;
}
namespace GlobalNamespace {
class FloatSO;
}
namespace GlobalNamespace {
class IntSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MainSettingsModelSO__WindowMode;
}
namespace GlobalNamespace {
class GlobalNamespace__MainSettingsModelSO__Config;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Type: ::WindowMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4453))
// CS Name: MainSettingsModelSO::WindowMode
struct CORDL_TYPE GlobalNamespace__MainSettingsModelSO__WindowMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MainSettingsModelSO__WindowMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MainSettingsModelSO__WindowMode(GlobalNamespace__MainSettingsModelSO__WindowMode const&) = default;
                    constexpr GlobalNamespace__MainSettingsModelSO__WindowMode(GlobalNamespace__MainSettingsModelSO__WindowMode&&) = default;
                    constexpr GlobalNamespace__MainSettingsModelSO__WindowMode& operator=(GlobalNamespace__MainSettingsModelSO__WindowMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MainSettingsModelSO__WindowMode& operator=(GlobalNamespace__MainSettingsModelSO__WindowMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MainSettingsModelSO__WindowMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MainSettingsModelSO__WindowMode_Unwrapped : int32_t {
__Windowed = 0,
__Fullscreen = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MainSettingsModelSO__WindowMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MainSettingsModelSO__WindowMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Windowed offset 0
static GlobalNamespace::GlobalNamespace__MainSettingsModelSO__WindowMode const Windowed;

/// @brief Field Fullscreen offset 0
static GlobalNamespace::GlobalNamespace__MainSettingsModelSO__WindowMode const Fullscreen;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Config
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4454))
// CS Name: MainSettingsModelSO::Config
class CORDL_TYPE GlobalNamespace__MainSettingsModelSO__Config : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xe8};

virtual ~GlobalNamespace__MainSettingsModelSO__Config() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainSettingsModelSO__Config", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MainSettingsModelSO__Config(GlobalNamespace__MainSettingsModelSO__Config const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainSettingsModelSO__Config", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MainSettingsModelSO__Config(GlobalNamespace__MainSettingsModelSO__Config&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MainSettingsModelSO__Config(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MainSettingsModelSO__Config& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MainSettingsModelSO__Config& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MainSettingsModelSO__Config& operator=(GlobalNamespace__MainSettingsModelSO__Config&& o) noexcept = default;
  constexpr GlobalNamespace__MainSettingsModelSO__Config& operator=(GlobalNamespace__MainSettingsModelSO__Config const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 int32_t __declspec(property(get=__get_windowResolutionWidth, put=__set_windowResolutionWidth))  windowResolutionWidth;

constexpr void __set_windowResolutionWidth(int32_t value) ;

constexpr int32_t __get_windowResolutionWidth() const;

 int32_t __declspec(property(get=__get_windowResolutionHeight, put=__set_windowResolutionHeight))  windowResolutionHeight;

constexpr void __set_windowResolutionHeight(int32_t value) ;

constexpr int32_t __get_windowResolutionHeight() const;

 int32_t __declspec(property(get=__get_editorResolutionWidth, put=__set_editorResolutionWidth))  editorResolutionWidth;

constexpr void __set_editorResolutionWidth(int32_t value) ;

constexpr int32_t __get_editorResolutionWidth() const;

 int32_t __declspec(property(get=__get_editorResolutionHeight, put=__set_editorResolutionHeight))  editorResolutionHeight;

constexpr void __set_editorResolutionHeight(int32_t value) ;

constexpr int32_t __get_editorResolutionHeight() const;

 GlobalNamespace::GlobalNamespace__MainSettingsModelSO__WindowMode __declspec(property(get=__get_windowMode, put=__set_windowMode))  windowMode;

constexpr void __set_windowMode(GlobalNamespace::GlobalNamespace__MainSettingsModelSO__WindowMode value) ;

constexpr GlobalNamespace::GlobalNamespace__MainSettingsModelSO__WindowMode __get_windowMode() const;

 float_t __declspec(property(get=__get_vrResolutionScale, put=__set_vrResolutionScale))  vrResolutionScale;

constexpr void __set_vrResolutionScale(float_t value) ;

constexpr float_t __get_vrResolutionScale() const;

 float_t __declspec(property(get=__get_menuVRResolutionScaleMultiplier, put=__set_menuVRResolutionScaleMultiplier))  menuVRResolutionScaleMultiplier;

constexpr void __set_menuVRResolutionScaleMultiplier(float_t value) ;

constexpr float_t __get_menuVRResolutionScaleMultiplier() const;

 bool __declspec(property(get=__get_useFixedFoveatedRenderingDuringGameplay, put=__set_useFixedFoveatedRenderingDuringGameplay))  useFixedFoveatedRenderingDuringGameplay;

constexpr void __set_useFixedFoveatedRenderingDuringGameplay(bool value) ;

constexpr bool __get_useFixedFoveatedRenderingDuringGameplay() const;

 int32_t __declspec(property(get=__get_antiAliasingLevel, put=__set_antiAliasingLevel))  antiAliasingLevel;

constexpr void __set_antiAliasingLevel(int32_t value) ;

constexpr int32_t __get_antiAliasingLevel() const;

 int32_t __declspec(property(get=__get_mirrorGraphicsSettings, put=__set_mirrorGraphicsSettings))  mirrorGraphicsSettings;

constexpr void __set_mirrorGraphicsSettings(int32_t value) ;

constexpr int32_t __get_mirrorGraphicsSettings() const;

 int32_t __declspec(property(get=__get_mainEffectGraphicsSettings, put=__set_mainEffectGraphicsSettings))  mainEffectGraphicsSettings;

constexpr void __set_mainEffectGraphicsSettings(int32_t value) ;

constexpr int32_t __get_mainEffectGraphicsSettings() const;

 int32_t __declspec(property(get=__get_bloomGraphicsSettings, put=__set_bloomGraphicsSettings))  bloomGraphicsSettings;

constexpr void __set_bloomGraphicsSettings(int32_t value) ;

constexpr int32_t __get_bloomGraphicsSettings() const;

 int32_t __declspec(property(get=__get_smokeGraphicsSettings, put=__set_smokeGraphicsSettings))  smokeGraphicsSettings;

constexpr void __set_smokeGraphicsSettings(int32_t value) ;

constexpr int32_t __get_smokeGraphicsSettings() const;

 bool __declspec(property(get=__get_burnMarkTrailsEnabled, put=__set_burnMarkTrailsEnabled))  burnMarkTrailsEnabled;

constexpr void __set_burnMarkTrailsEnabled(bool value) ;

constexpr bool __get_burnMarkTrailsEnabled() const;

 bool __declspec(property(get=__get_screenDisplacementEffectsEnabled, put=__set_screenDisplacementEffectsEnabled))  screenDisplacementEffectsEnabled;

constexpr void __set_screenDisplacementEffectsEnabled(bool value) ;

constexpr bool __get_screenDisplacementEffectsEnabled() const;

 float_t __declspec(property(get=__get_roomCenterX, put=__set_roomCenterX))  roomCenterX;

constexpr void __set_roomCenterX(float_t value) ;

constexpr float_t __get_roomCenterX() const;

 float_t __declspec(property(get=__get_roomCenterY, put=__set_roomCenterY))  roomCenterY;

constexpr void __set_roomCenterY(float_t value) ;

constexpr float_t __get_roomCenterY() const;

 float_t __declspec(property(get=__get_roomCenterZ, put=__set_roomCenterZ))  roomCenterZ;

constexpr void __set_roomCenterZ(float_t value) ;

constexpr float_t __get_roomCenterZ() const;

 float_t __declspec(property(get=__get_roomRotation, put=__set_roomRotation))  roomRotation;

constexpr void __set_roomRotation(float_t value) ;

constexpr float_t __get_roomRotation() const;

 float_t __declspec(property(get=__get_controllerPositionX, put=__set_controllerPositionX))  controllerPositionX;

constexpr void __set_controllerPositionX(float_t value) ;

constexpr float_t __get_controllerPositionX() const;

 float_t __declspec(property(get=__get_controllerPositionY, put=__set_controllerPositionY))  controllerPositionY;

constexpr void __set_controllerPositionY(float_t value) ;

constexpr float_t __get_controllerPositionY() const;

 float_t __declspec(property(get=__get_controllerPositionZ, put=__set_controllerPositionZ))  controllerPositionZ;

constexpr void __set_controllerPositionZ(float_t value) ;

constexpr float_t __get_controllerPositionZ() const;

 float_t __declspec(property(get=__get_controllerRotationX, put=__set_controllerRotationX))  controllerRotationX;

constexpr void __set_controllerRotationX(float_t value) ;

constexpr float_t __get_controllerRotationX() const;

 float_t __declspec(property(get=__get_controllerRotationY, put=__set_controllerRotationY))  controllerRotationY;

constexpr void __set_controllerRotationY(float_t value) ;

constexpr float_t __get_controllerRotationY() const;

 float_t __declspec(property(get=__get_controllerRotationZ, put=__set_controllerRotationZ))  controllerRotationZ;

constexpr void __set_controllerRotationZ(float_t value) ;

constexpr float_t __get_controllerRotationZ() const;

 int32_t __declspec(property(get=__get_smoothCameraEnabled, put=__set_smoothCameraEnabled))  smoothCameraEnabled;

constexpr void __set_smoothCameraEnabled(int32_t value) ;

constexpr int32_t __get_smoothCameraEnabled() const;

 float_t __declspec(property(get=__get_smoothCameraFieldOfView, put=__set_smoothCameraFieldOfView))  smoothCameraFieldOfView;

constexpr void __set_smoothCameraFieldOfView(float_t value) ;

constexpr float_t __get_smoothCameraFieldOfView() const;

 float_t __declspec(property(get=__get_smoothCameraThirdPersonPositionX, put=__set_smoothCameraThirdPersonPositionX))  smoothCameraThirdPersonPositionX;

constexpr void __set_smoothCameraThirdPersonPositionX(float_t value) ;

constexpr float_t __get_smoothCameraThirdPersonPositionX() const;

 float_t __declspec(property(get=__get_smoothCameraThirdPersonPositionY, put=__set_smoothCameraThirdPersonPositionY))  smoothCameraThirdPersonPositionY;

constexpr void __set_smoothCameraThirdPersonPositionY(float_t value) ;

constexpr float_t __get_smoothCameraThirdPersonPositionY() const;

 float_t __declspec(property(get=__get_smoothCameraThirdPersonPositionZ, put=__set_smoothCameraThirdPersonPositionZ))  smoothCameraThirdPersonPositionZ;

constexpr void __set_smoothCameraThirdPersonPositionZ(float_t value) ;

constexpr float_t __get_smoothCameraThirdPersonPositionZ() const;

 float_t __declspec(property(get=__get_smoothCameraThirdPersonEulerAnglesX, put=__set_smoothCameraThirdPersonEulerAnglesX))  smoothCameraThirdPersonEulerAnglesX;

constexpr void __set_smoothCameraThirdPersonEulerAnglesX(float_t value) ;

constexpr float_t __get_smoothCameraThirdPersonEulerAnglesX() const;

 float_t __declspec(property(get=__get_smoothCameraThirdPersonEulerAnglesY, put=__set_smoothCameraThirdPersonEulerAnglesY))  smoothCameraThirdPersonEulerAnglesY;

constexpr void __set_smoothCameraThirdPersonEulerAnglesY(float_t value) ;

constexpr float_t __get_smoothCameraThirdPersonEulerAnglesY() const;

 float_t __declspec(property(get=__get_smoothCameraThirdPersonEulerAnglesZ, put=__set_smoothCameraThirdPersonEulerAnglesZ))  smoothCameraThirdPersonEulerAnglesZ;

constexpr void __set_smoothCameraThirdPersonEulerAnglesZ(float_t value) ;

constexpr float_t __get_smoothCameraThirdPersonEulerAnglesZ() const;

 int32_t __declspec(property(get=__get_smoothCameraThirdPersonEnabled, put=__set_smoothCameraThirdPersonEnabled))  smoothCameraThirdPersonEnabled;

constexpr void __set_smoothCameraThirdPersonEnabled(int32_t value) ;

constexpr int32_t __get_smoothCameraThirdPersonEnabled() const;

 float_t __declspec(property(get=__get_smoothCameraRotationSmooth, put=__set_smoothCameraRotationSmooth))  smoothCameraRotationSmooth;

constexpr void __set_smoothCameraRotationSmooth(float_t value) ;

constexpr float_t __get_smoothCameraRotationSmooth() const;

 float_t __declspec(property(get=__get_smoothCameraPositionSmooth, put=__set_smoothCameraPositionSmooth))  smoothCameraPositionSmooth;

constexpr void __set_smoothCameraPositionSmooth(float_t value) ;

constexpr float_t __get_smoothCameraPositionSmooth() const;

 bool __declspec(property(get=__get_useCustomServerEnvironment, put=__set_useCustomServerEnvironment))  useCustomServerEnvironment;

constexpr void __set_useCustomServerEnvironment(bool value) ;

constexpr bool __get_useCustomServerEnvironment() const;

 bool __declspec(property(get=__get_forceGameLiftServerEnvironment, put=__set_forceGameLiftServerEnvironment))  forceGameLiftServerEnvironment;

constexpr void __set_forceGameLiftServerEnvironment(bool value) ;

constexpr bool __get_forceGameLiftServerEnvironment() const;

 ::StringW __declspec(property(get=__get_customServerHostName, put=__set_customServerHostName))  customServerHostName;

constexpr void __set_customServerHostName(::StringW value) ;

constexpr ::StringW __get_customServerHostName() const;

 float_t __declspec(property(get=__get_volume, put=__set_volume))  volume;

constexpr void __set_volume(float_t value) ;

constexpr float_t __get_volume() const;

 float_t __declspec(property(get=__get_ambientVolumeScale, put=__set_ambientVolumeScale))  ambientVolumeScale;

constexpr void __set_ambientVolumeScale(float_t value) ;

constexpr float_t __get_ambientVolumeScale() const;

 bool __declspec(property(get=__get_controllersRumbleEnabled, put=__set_controllersRumbleEnabled))  controllersRumbleEnabled;

constexpr void __set_controllersRumbleEnabled(bool value) ;

constexpr bool __get_controllersRumbleEnabled() const;

 int32_t __declspec(property(get=__get_enableAlphaFeatures, put=__set_enableAlphaFeatures))  enableAlphaFeatures;

constexpr void __set_enableAlphaFeatures(int32_t value) ;

constexpr int32_t __get_enableAlphaFeatures() const;

 int32_t __declspec(property(get=__get_pauseButtonPressDurationLevel, put=__set_pauseButtonPressDurationLevel))  pauseButtonPressDurationLevel;

constexpr void __set_pauseButtonPressDurationLevel(int32_t value) ;

constexpr int32_t __get_pauseButtonPressDurationLevel() const;

 int32_t __declspec(property(get=__get_maxShockwaveParticles, put=__set_maxShockwaveParticles))  maxShockwaveParticles;

constexpr void __set_maxShockwaveParticles(int32_t value) ;

constexpr int32_t __get_maxShockwaveParticles() const;

 bool __declspec(property(get=__get_overrideAudioLatency, put=__set_overrideAudioLatency))  overrideAudioLatency;

constexpr void __set_overrideAudioLatency(bool value) ;

constexpr bool __get_overrideAudioLatency() const;

 float_t __declspec(property(get=__get_audioLatency, put=__set_audioLatency))  audioLatency;

constexpr void __set_audioLatency(float_t value) ;

constexpr float_t __get_audioLatency() const;

 int32_t __declspec(property(get=__get_maxNumberOfCutSoundEffects, put=__set_maxNumberOfCutSoundEffects))  maxNumberOfCutSoundEffects;

constexpr void __set_maxNumberOfCutSoundEffects(int32_t value) ;

constexpr int32_t __get_maxNumberOfCutSoundEffects() const;

 ::StringW __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(::StringW value) ;

constexpr ::StringW __get_language() const;

 bool __declspec(property(get=__get_enableFPSCounter, put=__set_enableFPSCounter))  enableFPSCounter;

constexpr void __set_enableFPSCounter(bool value) ;

constexpr bool __get_enableFPSCounter() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MainSettingsModelSO__Config() ;

/// @brief Method .ctor addr 0x21f0700 size 0x12c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MainSettingsModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4455))
// CS Name: MainSettingsModelSO
class CORDL_TYPE MainSettingsModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using Config = GlobalNamespace::GlobalNamespace__MainSettingsModelSO__Config;

using WindowMode = GlobalNamespace::GlobalNamespace__MainSettingsModelSO__WindowMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x158};

virtual ~MainSettingsModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelSO", modifiers: " const&", def_value: None }]
constexpr MainSettingsModelSO(MainSettingsModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainSettingsModelSO", modifiers: "&&", def_value: None }]
constexpr MainSettingsModelSO(MainSettingsModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainSettingsModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr MainSettingsModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainSettingsModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainSettingsModelSO& operator=(MainSettingsModelSO&& o) noexcept = default;
  constexpr MainSettingsModelSO& operator=(MainSettingsModelSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::FloatSO __declspec(property(get=__get_vrResolutionScale, put=__set_vrResolutionScale))  vrResolutionScale;

constexpr void __set_vrResolutionScale(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_vrResolutionScale() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_menuVRResolutionScaleMultiplier, put=__set_menuVRResolutionScaleMultiplier))  menuVRResolutionScaleMultiplier;

constexpr void __set_menuVRResolutionScaleMultiplier(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_menuVRResolutionScaleMultiplier() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_useFixedFoveatedRenderingDuringGameplay, put=__set_useFixedFoveatedRenderingDuringGameplay))  useFixedFoveatedRenderingDuringGameplay;

constexpr void __set_useFixedFoveatedRenderingDuringGameplay(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_useFixedFoveatedRenderingDuringGameplay() const;

 GlobalNamespace::Vector2IntSO __declspec(property(get=__get_windowResolution, put=__set_windowResolution))  windowResolution;

constexpr void __set_windowResolution(GlobalNamespace::Vector2IntSO value) ;

constexpr GlobalNamespace::Vector2IntSO __get_windowResolution() const;

 GlobalNamespace::Vector2IntSO __declspec(property(get=__get_editorWindowResolution, put=__set_editorWindowResolution))  editorWindowResolution;

constexpr void __set_editorWindowResolution(GlobalNamespace::Vector2IntSO value) ;

constexpr GlobalNamespace::Vector2IntSO __get_editorWindowResolution() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_fullscreen, put=__set_fullscreen))  fullscreen;

constexpr void __set_fullscreen(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_fullscreen() const;

 GlobalNamespace::IntSO __declspec(property(get=__get_antiAliasingLevel, put=__set_antiAliasingLevel))  antiAliasingLevel;

constexpr void __set_antiAliasingLevel(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get_antiAliasingLevel() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_volume, put=__set_volume))  volume;

constexpr void __set_volume(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_volume() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_ambientVolumeScale, put=__set_ambientVolumeScale))  ambientVolumeScale;

constexpr void __set_ambientVolumeScale(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_ambientVolumeScale() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_controllersRumbleEnabled, put=__set_controllersRumbleEnabled))  controllersRumbleEnabled;

constexpr void __set_controllersRumbleEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_controllersRumbleEnabled() const;

 GlobalNamespace::Vector3SO __declspec(property(get=__get_roomCenter, put=__set_roomCenter))  roomCenter;

constexpr void __set_roomCenter(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get_roomCenter() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_roomRotation, put=__set_roomRotation))  roomRotation;

constexpr void __set_roomRotation(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_roomRotation() const;

 GlobalNamespace::Vector3SO __declspec(property(get=__get_controllerPosition, put=__set_controllerPosition))  controllerPosition;

constexpr void __set_controllerPosition(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get_controllerPosition() const;

 GlobalNamespace::Vector3SO __declspec(property(get=__get_controllerRotation, put=__set_controllerRotation))  controllerRotation;

constexpr void __set_controllerRotation(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get_controllerRotation() const;

 GlobalNamespace::IntSO __declspec(property(get=__get_mirrorGraphicsSettings, put=__set_mirrorGraphicsSettings))  mirrorGraphicsSettings;

constexpr void __set_mirrorGraphicsSettings(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get_mirrorGraphicsSettings() const;

 GlobalNamespace::IntSO __declspec(property(get=__get_mainEffectGraphicsSettings, put=__set_mainEffectGraphicsSettings))  mainEffectGraphicsSettings;

constexpr void __set_mainEffectGraphicsSettings(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get_mainEffectGraphicsSettings() const;

 GlobalNamespace::IntSO __declspec(property(get=__get_bloomPrePassGraphicsSettings, put=__set_bloomPrePassGraphicsSettings))  bloomPrePassGraphicsSettings;

constexpr void __set_bloomPrePassGraphicsSettings(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get_bloomPrePassGraphicsSettings() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_smokeGraphicsSettings, put=__set_smokeGraphicsSettings))  smokeGraphicsSettings;

constexpr void __set_smokeGraphicsSettings(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_smokeGraphicsSettings() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_enableAlphaFeatures, put=__set_enableAlphaFeatures))  enableAlphaFeatures;

constexpr void __set_enableAlphaFeatures(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_enableAlphaFeatures() const;

 GlobalNamespace::IntSO __declspec(property(get=__get_pauseButtonPressDurationLevel, put=__set_pauseButtonPressDurationLevel))  pauseButtonPressDurationLevel;

constexpr void __set_pauseButtonPressDurationLevel(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get_pauseButtonPressDurationLevel() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_burnMarkTrailsEnabled, put=__set_burnMarkTrailsEnabled))  burnMarkTrailsEnabled;

constexpr void __set_burnMarkTrailsEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_burnMarkTrailsEnabled() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_screenDisplacementEffectsEnabled, put=__set_screenDisplacementEffectsEnabled))  screenDisplacementEffectsEnabled;

constexpr void __set_screenDisplacementEffectsEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_screenDisplacementEffectsEnabled() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_smoothCameraEnabled, put=__set_smoothCameraEnabled))  smoothCameraEnabled;

constexpr void __set_smoothCameraEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_smoothCameraEnabled() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_smoothCameraFieldOfView, put=__set_smoothCameraFieldOfView))  smoothCameraFieldOfView;

constexpr void __set_smoothCameraFieldOfView(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_smoothCameraFieldOfView() const;

 GlobalNamespace::Vector3SO __declspec(property(get=__get_smoothCameraThirdPersonPosition, put=__set_smoothCameraThirdPersonPosition))  smoothCameraThirdPersonPosition;

constexpr void __set_smoothCameraThirdPersonPosition(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get_smoothCameraThirdPersonPosition() const;

 GlobalNamespace::Vector3SO __declspec(property(get=__get_smoothCameraThirdPersonEulerAngles, put=__set_smoothCameraThirdPersonEulerAngles))  smoothCameraThirdPersonEulerAngles;

constexpr void __set_smoothCameraThirdPersonEulerAngles(GlobalNamespace::Vector3SO value) ;

constexpr GlobalNamespace::Vector3SO __get_smoothCameraThirdPersonEulerAngles() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_smoothCameraThirdPersonEnabled, put=__set_smoothCameraThirdPersonEnabled))  smoothCameraThirdPersonEnabled;

constexpr void __set_smoothCameraThirdPersonEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_smoothCameraThirdPersonEnabled() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_smoothCameraRotationSmooth, put=__set_smoothCameraRotationSmooth))  smoothCameraRotationSmooth;

constexpr void __set_smoothCameraRotationSmooth(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_smoothCameraRotationSmooth() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_smoothCameraPositionSmooth, put=__set_smoothCameraPositionSmooth))  smoothCameraPositionSmooth;

constexpr void __set_smoothCameraPositionSmooth(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_smoothCameraPositionSmooth() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_overrideAudioLatency, put=__set_overrideAudioLatency))  overrideAudioLatency;

constexpr void __set_overrideAudioLatency(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_overrideAudioLatency() const;

 GlobalNamespace::FloatSO __declspec(property(get=__get_audioLatency, put=__set_audioLatency))  audioLatency;

constexpr void __set_audioLatency(GlobalNamespace::FloatSO value) ;

constexpr GlobalNamespace::FloatSO __get_audioLatency() const;

 GlobalNamespace::IntSO __declspec(property(get=__get_maxShockwaveParticles, put=__set_maxShockwaveParticles))  maxShockwaveParticles;

constexpr void __set_maxShockwaveParticles(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get_maxShockwaveParticles() const;

 GlobalNamespace::IntSO __declspec(property(get=__get_maxNumberOfCutSoundEffects, put=__set_maxNumberOfCutSoundEffects))  maxNumberOfCutSoundEffects;

constexpr void __set_maxNumberOfCutSoundEffects(GlobalNamespace::IntSO value) ;

constexpr GlobalNamespace::IntSO __get_maxNumberOfCutSoundEffects() const;

 GlobalNamespace::LanguageSO __declspec(property(get=__get_language, put=__set_language))  language;

constexpr void __set_language(GlobalNamespace::LanguageSO value) ;

constexpr GlobalNamespace::LanguageSO __get_language() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_useCustomServerEnvironment, put=__set_useCustomServerEnvironment))  useCustomServerEnvironment;

constexpr void __set_useCustomServerEnvironment(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_useCustomServerEnvironment() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_forceGameLiftServerEnvironment, put=__set_forceGameLiftServerEnvironment))  forceGameLiftServerEnvironment;

constexpr void __set_forceGameLiftServerEnvironment(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_forceGameLiftServerEnvironment() const;

 GlobalNamespace::StringSO __declspec(property(get=__get_customServerHostName, put=__set_customServerHostName))  customServerHostName;

constexpr void __set_customServerHostName(GlobalNamespace::StringSO value) ;

constexpr GlobalNamespace::StringSO __get_customServerHostName() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_enableFPSCounter, put=__set_enableFPSCounter))  enableFPSCounter;

constexpr void __set_enableFPSCounter(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_enableFPSCounter() const;

 GlobalNamespace::BoolSO __declspec(property(get=__get_depthTextureEnabled, put=__set_depthTextureEnabled))  depthTextureEnabled;

constexpr void __set_depthTextureEnabled(GlobalNamespace::BoolSO value) ;

constexpr GlobalNamespace::BoolSO __get_depthTextureEnabled() const;

 bool __declspec(property(get=__get__createScreenshotDuringTheGame_k__BackingField, put=__set__createScreenshotDuringTheGame_k__BackingField))  _createScreenshotDuringTheGame_k__BackingField;

constexpr void __set__createScreenshotDuringTheGame_k__BackingField(bool value) ;

constexpr bool __get__createScreenshotDuringTheGame_k__BackingField() const;

/// @brief Field kDefaultPlayerHeight offset 0
static constexpr float_t  kDefaultPlayerHeight{1.8};

/// @brief Field kHeadPosToPlayerHeightOffset offset 0
static constexpr float_t  kHeadPosToPlayerHeightOffset{0.1};

/// @brief Field kFileName offset 0
static constexpr ::ConstString  kFileName{u"settings.cfg"};

/// @brief Field kTempFileName offset 0
static constexpr ::ConstString  kTempFileName{u"settings.cfg.tmp"};

/// @brief Field kBackupFileName offset 0
static constexpr ::ConstString  kBackupFileName{u"settings.cfg.bak"};

/// @brief Field kCurrentVersion offset 0
static constexpr ::ConstString  kCurrentVersion{u"2.0.0"};

/// @brief Field kControllersPositionOffsetLimit offset 0
static constexpr float_t  kControllersPositionOffsetLimit{0.1};

/// @brief Field kControllersRotationOffsetLimit offset 0
static constexpr float_t  kControllersRotationOffsetLimit{180};

 bool __declspec(property(get=__get__playingForTheFirstTime_k__BackingField, put=__set__playingForTheFirstTime_k__BackingField))  _playingForTheFirstTime_k__BackingField;

constexpr void __set__playingForTheFirstTime_k__BackingField(bool value) ;

constexpr bool __get__playingForTheFirstTime_k__BackingField() const;

 bool __declspec(property(get=__get__playingForTheFirstTimeChecked, put=__set__playingForTheFirstTimeChecked))  _playingForTheFirstTimeChecked;

constexpr void __set__playingForTheFirstTimeChecked(bool value) ;

constexpr bool __get__playingForTheFirstTimeChecked() const;

 bool __declspec(property(get=__get__isLoaded, put=__set__isLoaded))  _isLoaded;

constexpr void __set__isLoaded(bool value) ;

constexpr bool __get__isLoaded() const;


// Properties

 bool __declspec(property(get=get_createScreenshotDuringTheGame, put=set_createScreenshotDuringTheGame))  createScreenshotDuringTheGame;

 bool __declspec(property(get=get_playingForTheFirstTime, put=set_playingForTheFirstTime))  playingForTheFirstTime;


// Methods

/// @brief Method get_createScreenshotDuringTheGame addr 0x21ef9bc size 0x8 virtual false final false
 bool get_createScreenshotDuringTheGame() ;

/// @brief Method set_createScreenshotDuringTheGame addr 0x21ef9c4 size 0xc virtual false final false
 void set_createScreenshotDuringTheGame(bool value) ;

/// @brief Method get_playingForTheFirstTime addr 0x21ef9d0 size 0x8 virtual false final false
 bool get_playingForTheFirstTime() ;

/// @brief Method set_playingForTheFirstTime addr 0x21ef9d8 size 0xc virtual false final false
 void set_playingForTheFirstTime(bool value) ;

/// @brief Method Initialize addr 0x21ef9e4 size 0x100 virtual false final false
 void Initialize(GlobalNamespace::ISaveData saveData) ;

/// @brief Method Save addr 0x21f013c size 0x47c virtual false final false
 void Save(GlobalNamespace::ISaveData saveData) ;

/// @brief Method Load addr 0x21efae4 size 0x658 virtual false final false
 void Load(GlobalNamespace::ISaveData saveData, bool forced) ;

/// @brief Method __DeleteSettingsFiles addr 0x21f05b8 size 0x140 virtual false final false
 void __DeleteSettingsFiles() ;

// Ctor Parameters []
explicit MainSettingsModelSO() ;

/// @brief Method .ctor addr 0x21f06f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MainSettingsModelSO__WindowMode, "", "MainSettingsModelSO/WindowMode");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MainSettingsModelSO__Config);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MainSettingsModelSO__Config, "", "MainSettingsModelSO/Config");
NEED_NO_BOX(GlobalNamespace::MainSettingsModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainSettingsModelSO, "", "MainSettingsModelSO");
