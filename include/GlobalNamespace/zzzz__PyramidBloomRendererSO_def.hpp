#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__PyramidBloomRendererSO__Pass;
}
namespace GlobalNamespace {
class PyramidBloomRendererSO;
}
namespace GlobalNamespace {
struct GlobalNamespace__PyramidBloomRendererSO__Level;
}
// Type: ::Pass
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14608))
// CS Name: PyramidBloomRendererSO::Pass
struct CORDL_TYPE GlobalNamespace__PyramidBloomRendererSO__Pass : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PyramidBloomRendererSO__Pass(int32_t value__) noexcept;


                    constexpr GlobalNamespace__PyramidBloomRendererSO__Pass(GlobalNamespace__PyramidBloomRendererSO__Pass const&) = default;
                    constexpr GlobalNamespace__PyramidBloomRendererSO__Pass(GlobalNamespace__PyramidBloomRendererSO__Pass&&) = default;
                    constexpr GlobalNamespace__PyramidBloomRendererSO__Pass& operator=(GlobalNamespace__PyramidBloomRendererSO__Pass const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PyramidBloomRendererSO__Pass& operator=(GlobalNamespace__PyramidBloomRendererSO__Pass&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PyramidBloomRendererSO__Pass(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__PyramidBloomRendererSO__Pass_Unwrapped : int32_t {
__Prefilter13 = 0,
__Prefilter4 = 1,
__Downsample13 = 2,
__Downsample4 = 3,
__DownsampleBilinearGamma = 4,
__UpsampleTent = 5,
__UpsampleBox = 6,
__UpsampleTentGamma = 7,
__UpsampleBoxGamma = 8,
__Bilinear = 9,
__BilinearGamma = 10,
__UpsampleTentAndReinhardToneMapping = 11,
__UpsampleTentAndACESToneMapping = 12,
__UpsampleTentAndACESToneMappingGlobalIntensity = 13,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__PyramidBloomRendererSO__Pass_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__PyramidBloomRendererSO__Pass_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Prefilter13 offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const Prefilter13;

/// @brief Field Prefilter4 offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const Prefilter4;

/// @brief Field Downsample13 offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const Downsample13;

/// @brief Field Downsample4 offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const Downsample4;

/// @brief Field DownsampleBilinearGamma offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const DownsampleBilinearGamma;

/// @brief Field UpsampleTent offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const UpsampleTent;

/// @brief Field UpsampleBox offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const UpsampleBox;

/// @brief Field UpsampleTentGamma offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const UpsampleTentGamma;

/// @brief Field UpsampleBoxGamma offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const UpsampleBoxGamma;

/// @brief Field Bilinear offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const Bilinear;

/// @brief Field BilinearGamma offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const BilinearGamma;

/// @brief Field UpsampleTentAndReinhardToneMapping offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const UpsampleTentAndReinhardToneMapping;

/// @brief Field UpsampleTentAndACESToneMapping offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const UpsampleTentAndACESToneMapping;

/// @brief Field UpsampleTentAndACESToneMappingGlobalIntensity offset 0
static GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass const UpsampleTentAndACESToneMappingGlobalIntensity;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Level
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14609))
// CS Name: PyramidBloomRendererSO::Level
struct CORDL_TYPE GlobalNamespace__PyramidBloomRendererSO__Level : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "down", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: None }, CppParam { name: "up", ty: "UnityEngine::RenderTexture", modifiers: "", def_value: None }]
constexpr GlobalNamespace__PyramidBloomRendererSO__Level(UnityEngine::RenderTexture down, UnityEngine::RenderTexture up) noexcept;


                    constexpr GlobalNamespace__PyramidBloomRendererSO__Level(GlobalNamespace__PyramidBloomRendererSO__Level const&) = default;
                    constexpr GlobalNamespace__PyramidBloomRendererSO__Level(GlobalNamespace__PyramidBloomRendererSO__Level&&) = default;
                    constexpr GlobalNamespace__PyramidBloomRendererSO__Level& operator=(GlobalNamespace__PyramidBloomRendererSO__Level const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__PyramidBloomRendererSO__Level& operator=(GlobalNamespace__PyramidBloomRendererSO__Level&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PyramidBloomRendererSO__Level(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::RenderTexture __declspec(property(get=__get_down, put=__set_down))  down;

constexpr void __set_down(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_down() const;

 UnityEngine::RenderTexture __declspec(property(get=__get_up, put=__set_up))  up;

constexpr void __set_up(UnityEngine::RenderTexture value) ;

constexpr UnityEngine::RenderTexture __get_up() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PyramidBloomRendererSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14610))
// CS Name: PyramidBloomRendererSO
class CORDL_TYPE PyramidBloomRendererSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using Level = GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level;

using Pass = GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~PyramidBloomRendererSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "PyramidBloomRendererSO", modifiers: " const&", def_value: None }]
constexpr PyramidBloomRendererSO(PyramidBloomRendererSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PyramidBloomRendererSO", modifiers: "&&", def_value: None }]
constexpr PyramidBloomRendererSO(PyramidBloomRendererSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PyramidBloomRendererSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr PyramidBloomRendererSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PyramidBloomRendererSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PyramidBloomRendererSO& operator=(PyramidBloomRendererSO&& o) noexcept = default;
  constexpr PyramidBloomRendererSO& operator=(PyramidBloomRendererSO const& o) noexcept = default;
                


// Fields

 UnityEngine::Shader __declspec(property(get=__get__shader, put=__set__shader))  _shader;

constexpr void __set__shader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__shader() const;

 UnityEngine::Material __declspec(property(get=__get__material, put=__set__material))  _material;

constexpr void __set__material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__material() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level> __declspec(property(get=__get__pyramid, put=__set__pyramid))  _pyramid;

constexpr void __set__pyramid(::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level> __get__pyramid() const;

/// @brief Field kMaxPyramidSize offset 0
static constexpr int32_t  kMaxPyramidSize{16};

static int32_t __declspec(property(get=__get__bloomTexID, put=__set__bloomTexID))  _bloomTexID;

static void __set__bloomTexID(int32_t value) ;

static int32_t __get__bloomTexID() ;

static int32_t __declspec(property(get=__get__globalIntensityTex, put=__set__globalIntensityTex))  _globalIntensityTex;

static void __set__globalIntensityTex(int32_t value) ;

static int32_t __get__globalIntensityTex() ;

static int32_t __declspec(property(get=__get__autoExposureLimitID, put=__set__autoExposureLimitID))  _autoExposureLimitID;

static void __set__autoExposureLimitID(int32_t value) ;

static int32_t __get__autoExposureLimitID() ;

static int32_t __declspec(property(get=__get__sampleScaleID, put=__set__sampleScaleID))  _sampleScaleID;

static void __set__sampleScaleID(int32_t value) ;

static int32_t __get__sampleScaleID() ;

static int32_t __declspec(property(get=__get__combineSrcID, put=__set__combineSrcID))  _combineSrcID;

static void __set__combineSrcID(int32_t value) ;

static int32_t __get__combineSrcID() ;

static int32_t __declspec(property(get=__get__combineDstID, put=__set__combineDstID))  _combineDstID;

static void __set__combineDstID(int32_t value) ;

static int32_t __get__combineDstID() ;

static int32_t __declspec(property(get=__get__alphaWeightsID, put=__set__alphaWeightsID))  _alphaWeightsID;

static void __set__alphaWeightsID(int32_t value) ;

static int32_t __get__alphaWeightsID() ;

 ::StringW __declspec(property(get=__get_kIsScreenspaceEffectKeyword, put=__set_kIsScreenspaceEffectKeyword))  kIsScreenspaceEffectKeyword;

constexpr void __set_kIsScreenspaceEffectKeyword(::StringW value) ;

constexpr ::StringW __get_kIsScreenspaceEffectKeyword() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;


// Methods

/// @brief Method OnEnable addr 0x1f8f3c4 size 0x110 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f8f4d4 size 0x24 virtual false final false
 void OnDisable() ;

/// @brief Method RenderBloom addr 0x1f8f4f8 size 0x84 virtual false final false
 void RenderBloom(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, float_t radius, bool alphaWeights, bool betterQuality, bool gammaCorrection) ;

/// @brief Method RenderBloom addr 0x1f8f57c size 0x800 virtual false final false
 void RenderBloom(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, float_t radius, float_t intensity, float_t autoExposureLimit, float_t downIntensityOffset, bool uniformPyramidWeights, bool downsampleOnFirstPass, float_t pyramidWeightsParam, float_t alphaWeights, float_t firstUpsampleBrightness, float_t finalUpsampleBrightness, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass preFilterPass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass downsamplePass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass upsamplePass, GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass finalUpsamplePass, bool isScreenspaceEffect) ;

// Ctor Parameters []
explicit PyramidBloomRendererSO() ;

/// @brief Method .ctor addr 0x1f8fd7c size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Pass, "", "PyramidBloomRendererSO/Pass");
NEED_NO_BOX(GlobalNamespace::PyramidBloomRendererSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PyramidBloomRendererSO, "", "PyramidBloomRendererSO");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PyramidBloomRendererSO__Level, "", "PyramidBloomRendererSO/Level");
