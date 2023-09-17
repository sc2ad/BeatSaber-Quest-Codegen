#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class MainEffectSO;
}
namespace GlobalNamespace {
class MirrorRendererGraphicsSettingsPresets;
}
namespace GlobalNamespace {
class MainEffectGraphicsSettingsPresetsSO;
}
namespace GlobalNamespace {
class BakedLightDataLoader;
}
namespace GlobalNamespace {
class BakedReflectionProbe;
}
namespace GlobalNamespace {
class LightmapLightsWithIds;
}
namespace GlobalNamespace {
class FakeMirrorObjectsInstaller;
}
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
namespace GlobalNamespace {
class BloomPrePassGraphicsSettingsPresetsSO;
}
namespace UnityEngine {
class Material;
}
namespace GlobalNamespace {
class MainEffectContainerSO;
}
namespace GlobalNamespace {
class MirrorRendererSO;
}
namespace GlobalNamespace {
class FakeMirrorSettings;
}
namespace GlobalNamespace {
class MainSettingsModelSO;
}
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class LightBakingPersistentSettingsSO;
}
// Type: ::LightBakingPersistentSettingsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5949))
// CS Name: LightBakingPersistentSettingsSO
class CORDL_TYPE LightBakingPersistentSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~LightBakingPersistentSettingsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightBakingPersistentSettingsSO", modifiers: " const&", def_value: None }]
constexpr LightBakingPersistentSettingsSO(LightBakingPersistentSettingsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightBakingPersistentSettingsSO", modifiers: "&&", def_value: None }]
constexpr LightBakingPersistentSettingsSO(LightBakingPersistentSettingsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightBakingPersistentSettingsSO(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr LightBakingPersistentSettingsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightBakingPersistentSettingsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightBakingPersistentSettingsSO& operator=(LightBakingPersistentSettingsSO&& o) noexcept = default;
  constexpr LightBakingPersistentSettingsSO& operator=(LightBakingPersistentSettingsSO const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__reflectionsCount, put=__set__reflectionsCount))  _reflectionsCount;

constexpr void __set__reflectionsCount(int32_t value) ;

constexpr int32_t __get__reflectionsCount() const;

 ::GlobalNamespace::BloomPrePassEffectSO __declspec(property(get=__get__bloomPrePassEffectToneMappingOff, put=__set__bloomPrePassEffectToneMappingOff))  _bloomPrePassEffectToneMappingOff;

constexpr void __set__bloomPrePassEffectToneMappingOff(::GlobalNamespace::BloomPrePassEffectSO value) ;

constexpr ::GlobalNamespace::BloomPrePassEffectSO __get__bloomPrePassEffectToneMappingOff() const;

 ::GlobalNamespace::MainEffectSO __declspec(property(get=__get__mainEffectForBaking, put=__set__mainEffectForBaking))  _mainEffectForBaking;

constexpr void __set__mainEffectForBaking(::GlobalNamespace::MainEffectSO value) ;

constexpr ::GlobalNamespace::MainEffectSO __get__mainEffectForBaking() const;

 float_t __declspec(property(get=__get__colorFromSchemeAlpha, put=__set__colorFromSchemeAlpha))  _colorFromSchemeAlpha;

constexpr void __set__colorFromSchemeAlpha(float_t value) ;

constexpr float_t __get__colorFromSchemeAlpha() const;

 ::ArrayW<::UnityEngine::Color> __declspec(property(get=__get__bakedLightEditorColors, put=__set__bakedLightEditorColors))  _bakedLightEditorColors;

constexpr void __set__bakedLightEditorColors(::ArrayW<::UnityEngine::Color> value) ;

constexpr ::ArrayW<::UnityEngine::Color> __get__bakedLightEditorColors() const;

 ::GlobalNamespace::MainSettingsModelSO __declspec(property(get=__get__mainSettingsModel, put=__set__mainSettingsModel))  _mainSettingsModel;

constexpr void __set__mainSettingsModel(::GlobalNamespace::MainSettingsModelSO value) ;

constexpr ::GlobalNamespace::MainSettingsModelSO __get__mainSettingsModel() const;

 ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets __declspec(property(get=__get__mirrorRendererGraphicsSettingsPresets, put=__set__mirrorRendererGraphicsSettingsPresets))  _mirrorRendererGraphicsSettingsPresets;

constexpr void __set__mirrorRendererGraphicsSettingsPresets(::GlobalNamespace::MirrorRendererGraphicsSettingsPresets value) ;

constexpr ::GlobalNamespace::MirrorRendererGraphicsSettingsPresets __get__mirrorRendererGraphicsSettingsPresets() const;

 ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO __declspec(property(get=__get__mainEffectGraphicsSettingsPresets, put=__set__mainEffectGraphicsSettingsPresets))  _mainEffectGraphicsSettingsPresets;

constexpr void __set__mainEffectGraphicsSettingsPresets(::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO value) ;

constexpr ::GlobalNamespace::MainEffectGraphicsSettingsPresetsSO __get__mainEffectGraphicsSettingsPresets() const;

 ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO __declspec(property(get=__get__bloomPrePassGraphicsSettingsPresets, put=__set__bloomPrePassGraphicsSettingsPresets))  _bloomPrePassGraphicsSettingsPresets;

constexpr void __set__bloomPrePassGraphicsSettingsPresets(::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO value) ;

constexpr ::GlobalNamespace::BloomPrePassGraphicsSettingsPresetsSO __get__bloomPrePassGraphicsSettingsPresets() const;

 ::GlobalNamespace::MirrorRendererSO __declspec(property(get=__get__mirrorRenderer, put=__set__mirrorRenderer))  _mirrorRenderer;

constexpr void __set__mirrorRenderer(::GlobalNamespace::MirrorRendererSO value) ;

constexpr ::GlobalNamespace::MirrorRendererSO __get__mirrorRenderer() const;

 ::GlobalNamespace::MainEffectContainerSO __declspec(property(get=__get__mainEffectContainer, put=__set__mainEffectContainer))  _mainEffectContainer;

constexpr void __set__mainEffectContainer(::GlobalNamespace::MainEffectContainerSO value) ;

constexpr ::GlobalNamespace::MainEffectContainerSO __get__mainEffectContainer() const;

 ::GlobalNamespace::BloomPrePassEffectContainerSO __declspec(property(get=__get__bloomPrePassEffectContainer, put=__set__bloomPrePassEffectContainer))  _bloomPrePassEffectContainer;

constexpr void __set__bloomPrePassEffectContainer(::GlobalNamespace::BloomPrePassEffectContainerSO value) ;

constexpr ::GlobalNamespace::BloomPrePassEffectContainerSO __get__bloomPrePassEffectContainer() const;

 ::GlobalNamespace::BakedLightDataLoader __declspec(property(get=__get__bakedLightDataLoaderPrefab, put=__set__bakedLightDataLoaderPrefab))  _bakedLightDataLoaderPrefab;

constexpr void __set__bakedLightDataLoaderPrefab(::GlobalNamespace::BakedLightDataLoader value) ;

constexpr ::GlobalNamespace::BakedLightDataLoader __get__bakedLightDataLoaderPrefab() const;

 ::GlobalNamespace::BakedReflectionProbe __declspec(property(get=__get__bakedReflectionProbePrefab, put=__set__bakedReflectionProbePrefab))  _bakedReflectionProbePrefab;

constexpr void __set__bakedReflectionProbePrefab(::GlobalNamespace::BakedReflectionProbe value) ;

constexpr ::GlobalNamespace::BakedReflectionProbe __get__bakedReflectionProbePrefab() const;

 ::GlobalNamespace::LightmapLightsWithIds __declspec(property(get=__get__lightmapLightsWithIds, put=__set__lightmapLightsWithIds))  _lightmapLightsWithIds;

constexpr void __set__lightmapLightsWithIds(::GlobalNamespace::LightmapLightsWithIds value) ;

constexpr ::GlobalNamespace::LightmapLightsWithIds __get__lightmapLightsWithIds() const;

 ::GlobalNamespace::FakeMirrorObjectsInstaller __declspec(property(get=__get__fakeMirrorObjectsInstallerPrefab, put=__set__fakeMirrorObjectsInstallerPrefab))  _fakeMirrorObjectsInstallerPrefab;

constexpr void __set__fakeMirrorObjectsInstallerPrefab(::GlobalNamespace::FakeMirrorObjectsInstaller value) ;

constexpr ::GlobalNamespace::FakeMirrorObjectsInstaller __get__fakeMirrorObjectsInstallerPrefab() const;

 ::GlobalNamespace::FakeMirrorSettings __declspec(property(get=__get__fakeMirrorSettingsPrefab, put=__set__fakeMirrorSettingsPrefab))  _fakeMirrorSettingsPrefab;

constexpr void __set__fakeMirrorSettingsPrefab(::GlobalNamespace::FakeMirrorSettings value) ;

constexpr ::GlobalNamespace::FakeMirrorSettings __get__fakeMirrorSettingsPrefab() const;

 ::UnityEngine::Material __declspec(property(get=__get__defaultDepthOnlyWriteMaterialForFakeMirror, put=__set__defaultDepthOnlyWriteMaterialForFakeMirror))  _defaultDepthOnlyWriteMaterialForFakeMirror;

constexpr void __set__defaultDepthOnlyWriteMaterialForFakeMirror(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get__defaultDepthOnlyWriteMaterialForFakeMirror() const;

/// @brief Field kDefaultMirrorGraphicsSettings offset 0
static constexpr int32_t  kDefaultMirrorGraphicsSettings{0};

/// @brief Field kDefaultMainEffectGraphicsSettings offset 0
static constexpr int32_t  kDefaultMainEffectGraphicsSettings{1};

/// @brief Field kDefaultAntiAliasingLevel offset 0
static constexpr int32_t  kDefaultAntiAliasingLevel{8};

/// @brief Field kDefaultVrResolutionScale offset 0
static constexpr float_t  kDefaultVrResolutionScale{1};

/// @brief Field kDefaultMenuVRResolutionScaleMultiplier offset 0
static constexpr float_t  kDefaultMenuVRResolutionScaleMultiplier{1};

/// @brief Field kDefaultUseFixedFoveatedRenderingDuringGameplay offset 0
static constexpr bool  kDefaultUseFixedFoveatedRenderingDuringGameplay{false};

/// @brief Field kDefaultBurnMarkTrailsEnabled offset 0
static constexpr bool  kDefaultBurnMarkTrailsEnabled{true};

/// @brief Field kDefaultScreenDisplacementEffectsEnabled offset 0
static constexpr bool  kDefaultScreenDisplacementEffectsEnabled{true};


// Properties

 int32_t __declspec(property(get=get_reflectionsCount, put=set_reflectionsCount))  reflectionsCount;

 float_t __declspec(property(get=get_colorFromSchemeAlpha, put=set_colorFromSchemeAlpha))  colorFromSchemeAlpha;

 ::ArrayW<::UnityEngine::Color> __declspec(property(get=get_bakedLightEditorColors))  bakedLightEditorColors;

 ::UnityEngine::Material __declspec(property(get=get_defaultDepthOnlyWriteMaterialForFakeMirror))  defaultDepthOnlyWriteMaterialForFakeMirror;

 bool __declspec(property(get=get_mainEffectForBakingIsOn, put=set_mainEffectForBakingIsOn))  mainEffectForBakingIsOn;

 ::GlobalNamespace::BakedLightDataLoader __declspec(property(get=get_bakedLightDataLoaderPrefab))  bakedLightDataLoaderPrefab;

 ::GlobalNamespace::BakedReflectionProbe __declspec(property(get=get_bakedReflectionProbePrefab))  bakedReflectionProbePrefab;

 ::GlobalNamespace::LightmapLightsWithIds __declspec(property(get=get_lightmapLightsWithIds))  lightmapLightsWithIds;

 ::GlobalNamespace::FakeMirrorObjectsInstaller __declspec(property(get=get_fakeMirrorObjectsInstallerPrefab))  fakeMirrorObjectsInstallerPrefab;

 ::GlobalNamespace::FakeMirrorSettings __declspec(property(get=get_fakeMirrorSettingsPrefab))  fakeMirrorSettingsPrefab;


// Methods

/// @brief Method get_reflectionsCount addr 0x219c43c size 0x8 virtual false final false
 int32_t get_reflectionsCount() ;

/// @brief Method set_reflectionsCount addr 0x219c444 size 0x8 virtual false final false
 void set_reflectionsCount(int32_t value) ;

/// @brief Method get_colorFromSchemeAlpha addr 0x219c44c size 0x8 virtual false final false
 float_t get_colorFromSchemeAlpha() ;

/// @brief Method set_colorFromSchemeAlpha addr 0x219c454 size 0x8 virtual false final false
 void set_colorFromSchemeAlpha(float_t value) ;

/// @brief Method get_bakedLightEditorColors addr 0x219c45c size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::Color> get_bakedLightEditorColors() ;

/// @brief Method get_defaultDepthOnlyWriteMaterialForFakeMirror addr 0x219c464 size 0x8 virtual false final false
 ::UnityEngine::Material get_defaultDepthOnlyWriteMaterialForFakeMirror() ;

/// @brief Method get_mainEffectForBakingIsOn addr 0x219c46c size 0x70 virtual false final false
 bool get_mainEffectForBakingIsOn() ;

/// @brief Method set_mainEffectForBakingIsOn addr 0x219c4dc size 0xb0 virtual false final false
 void set_mainEffectForBakingIsOn(bool value) ;

/// @brief Method get_bakedLightDataLoaderPrefab addr 0x219c58c size 0x8 virtual false final false
 ::GlobalNamespace::BakedLightDataLoader get_bakedLightDataLoaderPrefab() ;

/// @brief Method get_bakedReflectionProbePrefab addr 0x219c594 size 0x8 virtual false final false
 ::GlobalNamespace::BakedReflectionProbe get_bakedReflectionProbePrefab() ;

/// @brief Method get_lightmapLightsWithIds addr 0x219c59c size 0x8 virtual false final false
 ::GlobalNamespace::LightmapLightsWithIds get_lightmapLightsWithIds() ;

/// @brief Method get_fakeMirrorObjectsInstallerPrefab addr 0x219c5a4 size 0x8 virtual false final false
 ::GlobalNamespace::FakeMirrorObjectsInstaller get_fakeMirrorObjectsInstallerPrefab() ;

/// @brief Method get_fakeMirrorSettingsPrefab addr 0x219c5ac size 0x8 virtual false final false
 ::GlobalNamespace::FakeMirrorSettings get_fakeMirrorSettingsPrefab() ;

/// @brief Method SetGraphicsSettingsForBaking addr 0x219c5b4 size 0x254 virtual false final false
 void SetGraphicsSettingsForBaking() ;

/// @brief Method SetPlatformGraphics addr 0x219c8b8 size 0x2c4 virtual false final false
 void SetPlatformGraphics() ;

/// @brief Method SetToneMappingOn addr 0x219c808 size 0xb0 virtual false final false
 void SetToneMappingOn(bool isOn) ;

/// @brief Method IsToneMappingOn addr 0x219cb7c size 0x34 virtual false final false
 bool IsToneMappingOn() ;

// Ctor Parameters []
explicit LightBakingPersistentSettingsSO() ;

/// @brief Method .ctor addr 0x219cbb0 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightBakingPersistentSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightBakingPersistentSettingsSO, "", "LightBakingPersistentSettingsSO");
