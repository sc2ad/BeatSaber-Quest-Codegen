#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct MixedLightingMode;
}
namespace UnityEngine {
struct LightmapsMode;
}
namespace UnityEngine::Rendering {
struct UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes;
}
namespace UnityEngine {
struct LightmapBakeType;
}
namespace UnityEngine::Rendering {
struct UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes;
}
namespace UnityEngine::Rendering {
struct UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes;
}
namespace UnityEngine::Rendering {
class SupportedRenderingFeatures;
}
// Type: ::ReflectionProbeModes
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10297))
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures::ReflectionProbeModes
struct CORDL_TYPE UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes(int32_t value__) noexcept;


                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes(UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes const&) = default;
                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes(UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes&&) = default;
                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes& operator=(UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes& operator=(UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes_Unwrapped : int32_t {
__None = 0,
__Rotation = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes const None;

/// @brief Field Rotation offset 0
static UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes const Rotation;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
// Type: ::LightmapMixedBakeModes
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10298))
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures::LightmapMixedBakeModes
struct CORDL_TYPE UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes(int32_t value__) noexcept;


                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes(UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes const&) = default;
                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes(UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes&&) = default;
                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes& operator=(UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes& operator=(UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes_Unwrapped : int32_t {
__None = 0,
__IndirectOnly = 1,
__Subtractive = 2,
__Shadowmask = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes const None;

/// @brief Field IndirectOnly offset 0
static UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes const IndirectOnly;

/// @brief Field Subtractive offset 0
static UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes const Subtractive;

/// @brief Field Shadowmask offset 0
static UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes const Shadowmask;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
// Type: UnityEngine.Rendering::SupportedRenderingFeatures
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10299))
// CS Name: UnityEngine.Rendering.SupportedRenderingFeatures
class CORDL_TYPE SupportedRenderingFeatures : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using LightmapMixedBakeModes = UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes;

using ReflectionProbeModes = UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SupportedRenderingFeatures() = default;

// Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: " const&", def_value: None }]
constexpr SupportedRenderingFeatures(SupportedRenderingFeatures const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SupportedRenderingFeatures", modifiers: "&&", def_value: None }]
constexpr SupportedRenderingFeatures(SupportedRenderingFeatures&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SupportedRenderingFeatures(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SupportedRenderingFeatures& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SupportedRenderingFeatures& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SupportedRenderingFeatures& operator=(SupportedRenderingFeatures&& o) noexcept = default;
  constexpr SupportedRenderingFeatures& operator=(SupportedRenderingFeatures const& o) noexcept = default;
                


// Fields

static UnityEngine::Rendering::SupportedRenderingFeatures __declspec(property(get=__get_s_Active, put=__set_s_Active))  s_Active;

static void __set_s_Active(UnityEngine::Rendering::SupportedRenderingFeatures value) ;

static UnityEngine::Rendering::SupportedRenderingFeatures __get_s_Active() ;

 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes __declspec(property(get=__get__reflectionProbeModes_k__BackingField, put=__set__reflectionProbeModes_k__BackingField))  _reflectionProbeModes_k__BackingField;

constexpr void __set__reflectionProbeModes_k__BackingField(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes value) ;

constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes __get__reflectionProbeModes_k__BackingField() const;

 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes __declspec(property(get=__get__defaultMixedLightingModes_k__BackingField, put=__set__defaultMixedLightingModes_k__BackingField))  _defaultMixedLightingModes_k__BackingField;

constexpr void __set__defaultMixedLightingModes_k__BackingField(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes value) ;

constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes __get__defaultMixedLightingModes_k__BackingField() const;

 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes __declspec(property(get=__get__mixedLightingModes_k__BackingField, put=__set__mixedLightingModes_k__BackingField))  _mixedLightingModes_k__BackingField;

constexpr void __set__mixedLightingModes_k__BackingField(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes value) ;

constexpr UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes __get__mixedLightingModes_k__BackingField() const;

 UnityEngine::LightmapBakeType __declspec(property(get=__get__lightmapBakeTypes_k__BackingField, put=__set__lightmapBakeTypes_k__BackingField))  _lightmapBakeTypes_k__BackingField;

constexpr void __set__lightmapBakeTypes_k__BackingField(UnityEngine::LightmapBakeType value) ;

constexpr UnityEngine::LightmapBakeType __get__lightmapBakeTypes_k__BackingField() const;

 UnityEngine::LightmapsMode __declspec(property(get=__get__lightmapsModes_k__BackingField, put=__set__lightmapsModes_k__BackingField))  _lightmapsModes_k__BackingField;

constexpr void __set__lightmapsModes_k__BackingField(UnityEngine::LightmapsMode value) ;

constexpr UnityEngine::LightmapsMode __get__lightmapsModes_k__BackingField() const;

 bool __declspec(property(get=__get__enlightenLightmapper_k__BackingField, put=__set__enlightenLightmapper_k__BackingField))  _enlightenLightmapper_k__BackingField;

constexpr void __set__enlightenLightmapper_k__BackingField(bool value) ;

constexpr bool __get__enlightenLightmapper_k__BackingField() const;

 bool __declspec(property(get=__get__enlighten_k__BackingField, put=__set__enlighten_k__BackingField))  _enlighten_k__BackingField;

constexpr void __set__enlighten_k__BackingField(bool value) ;

constexpr bool __get__enlighten_k__BackingField() const;

 bool __declspec(property(get=__get__lightProbeProxyVolumes_k__BackingField, put=__set__lightProbeProxyVolumes_k__BackingField))  _lightProbeProxyVolumes_k__BackingField;

constexpr void __set__lightProbeProxyVolumes_k__BackingField(bool value) ;

constexpr bool __get__lightProbeProxyVolumes_k__BackingField() const;

 bool __declspec(property(get=__get__motionVectors_k__BackingField, put=__set__motionVectors_k__BackingField))  _motionVectors_k__BackingField;

constexpr void __set__motionVectors_k__BackingField(bool value) ;

constexpr bool __get__motionVectors_k__BackingField() const;

 bool __declspec(property(get=__get__receiveShadows_k__BackingField, put=__set__receiveShadows_k__BackingField))  _receiveShadows_k__BackingField;

constexpr void __set__receiveShadows_k__BackingField(bool value) ;

constexpr bool __get__receiveShadows_k__BackingField() const;

 bool __declspec(property(get=__get__reflectionProbes_k__BackingField, put=__set__reflectionProbes_k__BackingField))  _reflectionProbes_k__BackingField;

constexpr void __set__reflectionProbes_k__BackingField(bool value) ;

constexpr bool __get__reflectionProbes_k__BackingField() const;

 bool __declspec(property(get=__get__reflectionProbesBlendDistance_k__BackingField, put=__set__reflectionProbesBlendDistance_k__BackingField))  _reflectionProbesBlendDistance_k__BackingField;

constexpr void __set__reflectionProbesBlendDistance_k__BackingField(bool value) ;

constexpr bool __get__reflectionProbesBlendDistance_k__BackingField() const;

 bool __declspec(property(get=__get__rendererPriority_k__BackingField, put=__set__rendererPriority_k__BackingField))  _rendererPriority_k__BackingField;

constexpr void __set__rendererPriority_k__BackingField(bool value) ;

constexpr bool __get__rendererPriority_k__BackingField() const;

 bool __declspec(property(get=__get__rendersUIOverlay_k__BackingField, put=__set__rendersUIOverlay_k__BackingField))  _rendersUIOverlay_k__BackingField;

constexpr void __set__rendersUIOverlay_k__BackingField(bool value) ;

constexpr bool __get__rendersUIOverlay_k__BackingField() const;

 bool __declspec(property(get=__get__overridesEnvironmentLighting_k__BackingField, put=__set__overridesEnvironmentLighting_k__BackingField))  _overridesEnvironmentLighting_k__BackingField;

constexpr void __set__overridesEnvironmentLighting_k__BackingField(bool value) ;

constexpr bool __get__overridesEnvironmentLighting_k__BackingField() const;

 bool __declspec(property(get=__get__overridesFog_k__BackingField, put=__set__overridesFog_k__BackingField))  _overridesFog_k__BackingField;

constexpr void __set__overridesFog_k__BackingField(bool value) ;

constexpr bool __get__overridesFog_k__BackingField() const;

 bool __declspec(property(get=__get__overridesRealtimeReflectionProbes_k__BackingField, put=__set__overridesRealtimeReflectionProbes_k__BackingField))  _overridesRealtimeReflectionProbes_k__BackingField;

constexpr void __set__overridesRealtimeReflectionProbes_k__BackingField(bool value) ;

constexpr bool __get__overridesRealtimeReflectionProbes_k__BackingField() const;

 bool __declspec(property(get=__get__overridesOtherLightingSettings_k__BackingField, put=__set__overridesOtherLightingSettings_k__BackingField))  _overridesOtherLightingSettings_k__BackingField;

constexpr void __set__overridesOtherLightingSettings_k__BackingField(bool value) ;

constexpr bool __get__overridesOtherLightingSettings_k__BackingField() const;

 bool __declspec(property(get=__get__editableMaterialRenderQueue_k__BackingField, put=__set__editableMaterialRenderQueue_k__BackingField))  _editableMaterialRenderQueue_k__BackingField;

constexpr void __set__editableMaterialRenderQueue_k__BackingField(bool value) ;

constexpr bool __get__editableMaterialRenderQueue_k__BackingField() const;

 bool __declspec(property(get=__get__overridesLODBias_k__BackingField, put=__set__overridesLODBias_k__BackingField))  _overridesLODBias_k__BackingField;

constexpr void __set__overridesLODBias_k__BackingField(bool value) ;

constexpr bool __get__overridesLODBias_k__BackingField() const;

 bool __declspec(property(get=__get__overridesMaximumLODLevel_k__BackingField, put=__set__overridesMaximumLODLevel_k__BackingField))  _overridesMaximumLODLevel_k__BackingField;

constexpr void __set__overridesMaximumLODLevel_k__BackingField(bool value) ;

constexpr bool __get__overridesMaximumLODLevel_k__BackingField() const;

 bool __declspec(property(get=__get__rendererProbes_k__BackingField, put=__set__rendererProbes_k__BackingField))  _rendererProbes_k__BackingField;

constexpr void __set__rendererProbes_k__BackingField(bool value) ;

constexpr bool __get__rendererProbes_k__BackingField() const;

 bool __declspec(property(get=__get__particleSystemInstancing_k__BackingField, put=__set__particleSystemInstancing_k__BackingField))  _particleSystemInstancing_k__BackingField;

constexpr void __set__particleSystemInstancing_k__BackingField(bool value) ;

constexpr bool __get__particleSystemInstancing_k__BackingField() const;

 bool __declspec(property(get=__get__autoAmbientProbeBaking_k__BackingField, put=__set__autoAmbientProbeBaking_k__BackingField))  _autoAmbientProbeBaking_k__BackingField;

constexpr void __set__autoAmbientProbeBaking_k__BackingField(bool value) ;

constexpr bool __get__autoAmbientProbeBaking_k__BackingField() const;

 bool __declspec(property(get=__get__autoDefaultReflectionProbeBaking_k__BackingField, put=__set__autoDefaultReflectionProbeBaking_k__BackingField))  _autoDefaultReflectionProbeBaking_k__BackingField;

constexpr void __set__autoDefaultReflectionProbeBaking_k__BackingField(bool value) ;

constexpr bool __get__autoDefaultReflectionProbeBaking_k__BackingField() const;

 bool __declspec(property(get=__get__overridesShadowmask_k__BackingField, put=__set__overridesShadowmask_k__BackingField))  _overridesShadowmask_k__BackingField;

constexpr void __set__overridesShadowmask_k__BackingField(bool value) ;

constexpr bool __get__overridesShadowmask_k__BackingField() const;

 ::StringW __declspec(property(get=__get__overrideShadowmaskMessage_k__BackingField, put=__set__overrideShadowmaskMessage_k__BackingField))  _overrideShadowmaskMessage_k__BackingField;

constexpr void __set__overrideShadowmaskMessage_k__BackingField(::StringW value) ;

constexpr ::StringW __get__overrideShadowmaskMessage_k__BackingField() const;


// Properties

static UnityEngine::Rendering::SupportedRenderingFeatures __declspec(property(get=get_active, put=set_active))  active;

 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes __declspec(property(get=get_defaultMixedLightingModes))  defaultMixedLightingModes;

 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes __declspec(property(get=get_mixedLightingModes))  mixedLightingModes;

 UnityEngine::LightmapBakeType __declspec(property(get=get_lightmapBakeTypes))  lightmapBakeTypes;

 UnityEngine::LightmapsMode __declspec(property(get=get_lightmapsModes))  lightmapsModes;

 bool __declspec(property(get=get_enlightenLightmapper))  enlightenLightmapper;

 bool __declspec(property(get=get_enlighten))  enlighten;

 bool __declspec(property(get=get_rendersUIOverlay))  rendersUIOverlay;

 bool __declspec(property(get=get_autoAmbientProbeBaking))  autoAmbientProbeBaking;

 bool __declspec(property(get=get_autoDefaultReflectionProbeBaking))  autoDefaultReflectionProbeBaking;


// Methods

/// @brief Method get_active addr 0x2b76270 size 0xa8 virtual false final false
static UnityEngine::Rendering::SupportedRenderingFeatures get_active() ;

/// @brief Method set_active addr 0x2b74ee0 size 0x5c virtual false final false
static void set_active(UnityEngine::Rendering::SupportedRenderingFeatures value) ;

/// @brief Method get_defaultMixedLightingModes addr 0x2b76318 size 0x8 virtual false final false
 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes get_defaultMixedLightingModes() ;

/// @brief Method get_mixedLightingModes addr 0x2b76320 size 0x8 virtual false final false
 UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes get_mixedLightingModes() ;

/// @brief Method get_lightmapBakeTypes addr 0x2b76328 size 0x8 virtual false final false
 UnityEngine::LightmapBakeType get_lightmapBakeTypes() ;

/// @brief Method get_lightmapsModes addr 0x2b76330 size 0x8 virtual false final false
 UnityEngine::LightmapsMode get_lightmapsModes() ;

/// @brief Method get_enlightenLightmapper addr 0x2b76338 size 0x8 virtual false final false
 bool get_enlightenLightmapper() ;

/// @brief Method get_enlighten addr 0x2b76340 size 0x8 virtual false final false
 bool get_enlighten() ;

/// @brief Method get_rendersUIOverlay addr 0x2b76348 size 0x8 virtual false final false
 bool get_rendersUIOverlay() ;

/// @brief Method get_autoAmbientProbeBaking addr 0x2b76350 size 0x8 virtual false final false
 bool get_autoAmbientProbeBaking() ;

/// @brief Method get_autoDefaultReflectionProbeBaking addr 0x2b76358 size 0x8 virtual false final false
 bool get_autoDefaultReflectionProbeBaking() ;

/// @brief Method FallbackMixedLightingModeByRef addr 0x2b76360 size 0x134 virtual false final false
static void FallbackMixedLightingModeByRef(::cordl_internals::intptr_t fallbackModePtr) ;

/// @brief Method IsMixedLightingModeSupported addr 0x2b76494 size 0x6c virtual false final false
static bool IsMixedLightingModeSupported(UnityEngine::MixedLightingMode mixedMode) ;

/// @brief Method IsMixedLightingModeSupportedByRef addr 0x2b76500 size 0x108 virtual false final false
static void IsMixedLightingModeSupportedByRef(UnityEngine::MixedLightingMode mixedMode, ::cordl_internals::intptr_t isSupportedPtr) ;

/// @brief Method IsLightmapBakeTypeSupported addr 0x2b76608 size 0x6c virtual false final false
static bool IsLightmapBakeTypeSupported(UnityEngine::LightmapBakeType bakeType) ;

/// @brief Method IsLightmapBakeTypeSupportedByRef addr 0x2b76674 size 0xf0 virtual false final false
static void IsLightmapBakeTypeSupportedByRef(UnityEngine::LightmapBakeType bakeType, ::cordl_internals::intptr_t isSupportedPtr) ;

/// @brief Method IsLightmapsModeSupportedByRef addr 0x2b76764 size 0x8c virtual false final false
static void IsLightmapsModeSupportedByRef(UnityEngine::LightmapsMode mode, ::cordl_internals::intptr_t isSupportedPtr) ;

/// @brief Method IsLightmapperSupportedByRef addr 0x2b767f0 size 0x84 virtual false final false
static void IsLightmapperSupportedByRef(int32_t lightmapper, ::cordl_internals::intptr_t isSupportedPtr) ;

/// @brief Method IsUIOverlayRenderedBySRP addr 0x2b76874 size 0x78 virtual false final false
static void IsUIOverlayRenderedBySRP(::cordl_internals::intptr_t isSupportedPtr) ;

/// @brief Method IsAutoAmbientProbeBakingSupported addr 0x2b768ec size 0x78 virtual false final false
static void IsAutoAmbientProbeBakingSupported(::cordl_internals::intptr_t isSupportedPtr) ;

/// @brief Method IsAutoDefaultReflectionProbeBakingSupported addr 0x2b76964 size 0x78 virtual false final false
static void IsAutoDefaultReflectionProbeBakingSupported(::cordl_internals::intptr_t isSupportedPtr) ;

/// @brief Method FallbackLightmapperByRef addr 0x2b769dc size 0x1c virtual false final false
static void FallbackLightmapperByRef(::cordl_internals::intptr_t lightmapperPtr) ;

static UnityEngine::Rendering::SupportedRenderingFeatures New_ctor() ;

/// @brief Method .ctor addr 0x2b74e50 size 0x90 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__LightmapMixedBakeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/LightmapMixedBakeModes");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::UnityEngine__Rendering__SupportedRenderingFeatures__ReflectionProbeModes, "UnityEngine.Rendering", "SupportedRenderingFeatures/ReflectionProbeModes");
NEED_NO_BOX(UnityEngine::Rendering::SupportedRenderingFeatures);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SupportedRenderingFeatures, "UnityEngine.Rendering", "SupportedRenderingFeatures");
