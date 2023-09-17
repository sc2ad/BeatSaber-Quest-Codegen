#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIds_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__LightConstants__BakeId;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightWithIds__LightWithId;
}
namespace GlobalNamespace {
class BakedLightsNormalizer;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__LightmapLightWithIds__MixType;
}
namespace GlobalNamespace {
class LightmapLightWithIds;
}
namespace GlobalNamespace {
class ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId;
}
// Type: ::MixType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14695))
// CS Name: LightmapLightWithIds::MixType
struct CORDL_TYPE ____GlobalNamespace__LightmapLightWithIds__MixType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIds__MixType(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__LightmapLightWithIds__MixType(____GlobalNamespace__LightmapLightWithIds__MixType const&) = default;
                    constexpr ____GlobalNamespace__LightmapLightWithIds__MixType(____GlobalNamespace__LightmapLightWithIds__MixType&&) = default;
                    constexpr ____GlobalNamespace__LightmapLightWithIds__MixType& operator=(____GlobalNamespace__LightmapLightWithIds__MixType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__LightmapLightWithIds__MixType& operator=(____GlobalNamespace__LightmapLightWithIds__MixType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightmapLightWithIds__MixType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__LightmapLightWithIds__MixType_Unwrapped : int32_t {
__Maximum = 0,
__Sum = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__LightmapLightWithIds__MixType_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__LightmapLightWithIds__MixType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Maximum offset 0
static ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__MixType const Maximum;

/// @brief Field Sum offset 0
static ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__MixType const Sum;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightIntensitiesWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14704))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14696))
// CS Name: LightmapLightWithIds::LightIntensitiesWithId
class CORDL_TYPE ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId : public ::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId(____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId(____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId(void* ptr) noexcept : ::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId(ptr) {
}


  constexpr ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId& operator=(____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId&& o) noexcept = default;
  constexpr ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId& operator=(____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__probeHighlightsIntensityMultiplier, put=__set__probeHighlightsIntensityMultiplier))  _probeHighlightsIntensityMultiplier;

constexpr void __set__probeHighlightsIntensityMultiplier(float_t value) ;

constexpr float_t __get__probeHighlightsIntensityMultiplier() const;


// Properties

 float_t __declspec(property(get=get_intensity))  intensity;

 float_t __declspec(property(get=get_probeHighlightsIntensityMultiplier))  probeHighlightsIntensityMultiplier;


// Methods

/// @brief Method get_intensity addr 0x1f9d7f4 size 0x8 virtual false final false
 float_t get_intensity() ;

/// @brief Method get_probeHighlightsIntensityMultiplier addr 0x1f9d7fc size 0x8 virtual false final false
 float_t get_probeHighlightsIntensityMultiplier() ;

// Ctor Parameters [CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lightIntensity", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "probeMultiplier", ty: "float_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId(int32_t lightId, float_t lightIntensity, float_t probeMultiplier) ;

/// @brief Method .ctor addr 0x1f9d804 size 0x44 virtual false final false
 void _ctor(int32_t lightId, float_t lightIntensity, float_t probeMultiplier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightmapLightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14705))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14697))
// CS Name: LightmapLightWithIds
class CORDL_TYPE LightmapLightWithIds : public ::GlobalNamespace::LightWithIds {
public:
// Declarations
using LightIntensitiesWithId = ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId;

using MixType = ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__MixType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~LightmapLightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds", modifiers: " const&", def_value: None }]
constexpr LightmapLightWithIds(LightmapLightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapLightWithIds", modifiers: "&&", def_value: None }]
constexpr LightmapLightWithIds(LightmapLightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmapLightWithIds(void* ptr) noexcept : ::GlobalNamespace::LightWithIds(ptr) {
}


  constexpr LightmapLightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmapLightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmapLightWithIds& operator=(LightmapLightWithIds&& o) noexcept = default;
  constexpr LightmapLightWithIds& operator=(LightmapLightWithIds const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId __declspec(property(get=__get__bakeId, put=__set__bakeId))  _bakeId;

constexpr void __set__bakeId(::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId __get__bakeId() const;

 float_t __declspec(property(get=__get__intensity, put=__set__intensity))  _intensity;

constexpr void __set__intensity(float_t value) ;

constexpr float_t __get__intensity() const;

 float_t __declspec(property(get=__get__probeIntensity, put=__set__probeIntensity))  _probeIntensity;

constexpr void __set__probeIntensity(float_t value) ;

constexpr float_t __get__probeIntensity() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId> __declspec(property(get=__get__lightIntensityData, put=__set__lightIntensityData))  _lightIntensityData;

constexpr void __set__lightIntensityData(::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId> __get__lightIntensityData() const;

 ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__MixType __declspec(property(get=__get__mixType, put=__set__mixType))  _mixType;

constexpr void __set__mixType(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__MixType value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__MixType __get__mixType() const;

 float_t __declspec(property(get=__get__normalizerWeight, put=__set__normalizerWeight))  _normalizerWeight;

constexpr void __set__normalizerWeight(float_t value) ;

constexpr float_t __get__normalizerWeight() const;

 ::GlobalNamespace::BakedLightsNormalizer __declspec(property(get=__get__bakedLightsNormalizer, put=__set__bakedLightsNormalizer))  _bakedLightsNormalizer;

constexpr void __set__bakedLightsNormalizer(::GlobalNamespace::BakedLightsNormalizer value) ;

constexpr ::GlobalNamespace::BakedLightsNormalizer __get__bakedLightsNormalizer() const;

 int32_t __declspec(property(get=__get__lightmapLightIdColorPropertyId, put=__set__lightmapLightIdColorPropertyId))  _lightmapLightIdColorPropertyId;

constexpr void __set__lightmapLightIdColorPropertyId(int32_t value) ;

constexpr int32_t __get__lightmapLightIdColorPropertyId() const;

 int32_t __declspec(property(get=__get__lightProbeLightIdColorPropertyId, put=__set__lightProbeLightIdColorPropertyId))  _lightProbeLightIdColorPropertyId;

constexpr void __set__lightProbeLightIdColorPropertyId(int32_t value) ;

constexpr int32_t __get__lightProbeLightIdColorPropertyId() const;

 bool __declspec(property(get=__get__initializedPropertyIds, put=__set__initializedPropertyIds))  _initializedPropertyIds;

constexpr void __set__initializedPropertyIds(bool value) ;

constexpr bool __get__initializedPropertyIds() const;

 bool __declspec(property(get=__get__initializedNormalizer, put=__set__initializedNormalizer))  _initializedNormalizer;

constexpr void __set__initializedNormalizer(bool value) ;

constexpr bool __get__initializedNormalizer() const;

 bool __declspec(property(get=__get__isNormalizerInScene, put=__set__isNormalizerInScene))  _isNormalizerInScene;

constexpr void __set__isNormalizerInScene(bool value) ;

constexpr bool __get__isNormalizerInScene() const;

 ::UnityEngine::Color __declspec(property(get=__get__calculatedColorPreNormalization, put=__set__calculatedColorPreNormalization))  _calculatedColorPreNormalization;

constexpr void __set__calculatedColorPreNormalization(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get__calculatedColorPreNormalization() const;


// Properties

 float_t __declspec(property(get=get_intensity, put=set_intensity))  intensity;

 float_t __declspec(property(get=get_normalizerWeight, put=set_normalizerWeight))  normalizerWeight;

 ::UnityEngine::Color __declspec(property(get=get_calculatedColorPreNormalization))  calculatedColorPreNormalization;

 ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId __declspec(property(get=get_bakeId))  bakeId;


// Methods

/// @brief Method get_intensity addr 0x1f9d1ac size 0x8 virtual false final false
 float_t get_intensity() ;

/// @brief Method set_intensity addr 0x1f9d1b4 size 0x8 virtual false final false
 void set_intensity(float_t value) ;

/// @brief Method get_normalizerWeight addr 0x1f9d1bc size 0x8 virtual false final false
 float_t get_normalizerWeight() ;

/// @brief Method set_normalizerWeight addr 0x1f9d1c4 size 0x8 virtual false final false
 void set_normalizerWeight(float_t value) ;

/// @brief Method get_calculatedColorPreNormalization addr 0x1f9d1cc size 0xc virtual false final false
 ::UnityEngine::Color get_calculatedColorPreNormalization() ;

/// @brief Method get_bakeId addr 0x1f9d1d8 size 0x8 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__LightConstants__BakeId get_bakeId() ;

/// @brief Method Awake addr 0x1f9d1e0 size 0x58 virtual true final false
 void Awake() ;

/// @brief Method ProcessNewColorData addr 0x1f9d438 size 0x39c virtual true final false
 void ProcessNewColorData() ;

/// @brief Method GetLightWithIds addr 0x1f9d7d4 size 0x8 virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::____GlobalNamespace__LightWithIds__LightWithId> GetLightWithIds() ;

/// @brief Method SetDataToShaders addr 0x1f9d3e4 size 0x54 virtual false final false
 void SetDataToShaders(::UnityEngine::Color lightmapColor, ::UnityEngine::Color probeColor) ;

/// @brief Method SetShaderProperties addr 0x1f9d2fc size 0xe8 virtual false final false
 void SetShaderProperties() ;

/// @brief Method GetBakedLightsNormalizer addr 0x1f9d270 size 0x8c virtual false final false
 void GetBakedLightsNormalizer() ;

// Ctor Parameters []
explicit LightmapLightWithIds() ;

/// @brief Method .ctor addr 0x1f9d7dc size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__MixType, "", "LightmapLightWithIds/MixType");
NEED_NO_BOX(::GlobalNamespace::LightmapLightWithIds);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapLightWithIds, "", "LightmapLightWithIds");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__LightmapLightWithIds__LightIntensitiesWithId, "", "LightmapLightWithIds/LightIntensitiesWithId");
