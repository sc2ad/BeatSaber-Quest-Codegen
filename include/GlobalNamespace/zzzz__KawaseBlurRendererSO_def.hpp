#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__KawaseBlurRendererSO__Pass;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace GlobalNamespace {
class GlobalNamespace__KawaseBlurRendererSO__BloomKernel;
}
namespace GlobalNamespace {
struct GlobalNamespace__KawaseBlurRendererSO__KernelSize;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct GlobalNamespace__KawaseBlurRendererSO__WeightsType;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__KawaseBlurRendererSO__KernelSize;
}
namespace GlobalNamespace {
struct GlobalNamespace__KawaseBlurRendererSO__Pass;
}
namespace GlobalNamespace {
struct GlobalNamespace__KawaseBlurRendererSO__WeightsType;
}
namespace GlobalNamespace {
class GlobalNamespace__KawaseBlurRendererSO__BloomKernel;
}
namespace GlobalNamespace {
class KawaseBlurRendererSO;
}
// Type: ::KernelSize
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14664))
// CS Name: KawaseBlurRendererSO::KernelSize
struct CORDL_TYPE GlobalNamespace__KawaseBlurRendererSO__KernelSize : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__KawaseBlurRendererSO__KernelSize(int32_t value__) noexcept;


                    constexpr GlobalNamespace__KawaseBlurRendererSO__KernelSize(GlobalNamespace__KawaseBlurRendererSO__KernelSize const&) = default;
                    constexpr GlobalNamespace__KawaseBlurRendererSO__KernelSize(GlobalNamespace__KawaseBlurRendererSO__KernelSize&&) = default;
                    constexpr GlobalNamespace__KawaseBlurRendererSO__KernelSize& operator=(GlobalNamespace__KawaseBlurRendererSO__KernelSize const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__KawaseBlurRendererSO__KernelSize& operator=(GlobalNamespace__KawaseBlurRendererSO__KernelSize&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__KawaseBlurRendererSO__KernelSize(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__KawaseBlurRendererSO__KernelSize_Unwrapped : int32_t {
__Kernel7 = 0,
__Kernel15 = 1,
__Kernel23 = 2,
__Kernel35 = 3,
__Kernel63 = 4,
__Kernel127 = 5,
__Kernel135 = 6,
__Kernel143 = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__KawaseBlurRendererSO__KernelSize_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__KawaseBlurRendererSO__KernelSize_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Kernel7 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel7;

/// @brief Field Kernel15 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel15;

/// @brief Field Kernel23 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel23;

/// @brief Field Kernel35 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel35;

/// @brief Field Kernel63 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel63;

/// @brief Field Kernel127 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel127;

/// @brief Field Kernel135 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel135;

/// @brief Field Kernel143 offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize const Kernel143;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::WeightsType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14665))
// CS Name: KawaseBlurRendererSO::WeightsType
struct CORDL_TYPE GlobalNamespace__KawaseBlurRendererSO__WeightsType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__KawaseBlurRendererSO__WeightsType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__KawaseBlurRendererSO__WeightsType(GlobalNamespace__KawaseBlurRendererSO__WeightsType const&) = default;
                    constexpr GlobalNamespace__KawaseBlurRendererSO__WeightsType(GlobalNamespace__KawaseBlurRendererSO__WeightsType&&) = default;
                    constexpr GlobalNamespace__KawaseBlurRendererSO__WeightsType& operator=(GlobalNamespace__KawaseBlurRendererSO__WeightsType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__KawaseBlurRendererSO__WeightsType& operator=(GlobalNamespace__KawaseBlurRendererSO__WeightsType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__KawaseBlurRendererSO__WeightsType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__KawaseBlurRendererSO__WeightsType_Unwrapped : int32_t {
__None = 0,
__AlphaWeights = 1,
__AlphaAndDepthWeights = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__KawaseBlurRendererSO__WeightsType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__KawaseBlurRendererSO__WeightsType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType const None;

/// @brief Field AlphaWeights offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType const AlphaWeights;

/// @brief Field AlphaAndDepthWeights offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType const AlphaAndDepthWeights;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BloomKernel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14666))
// CS Name: KawaseBlurRendererSO::BloomKernel
class CORDL_TYPE GlobalNamespace__KawaseBlurRendererSO__BloomKernel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__KawaseBlurRendererSO__BloomKernel() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__KawaseBlurRendererSO__BloomKernel", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__KawaseBlurRendererSO__BloomKernel(GlobalNamespace__KawaseBlurRendererSO__BloomKernel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__KawaseBlurRendererSO__BloomKernel", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__KawaseBlurRendererSO__BloomKernel(GlobalNamespace__KawaseBlurRendererSO__BloomKernel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__KawaseBlurRendererSO__BloomKernel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__KawaseBlurRendererSO__BloomKernel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__KawaseBlurRendererSO__BloomKernel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__KawaseBlurRendererSO__BloomKernel& operator=(GlobalNamespace__KawaseBlurRendererSO__BloomKernel&& o) noexcept = default;
  constexpr GlobalNamespace__KawaseBlurRendererSO__BloomKernel& operator=(GlobalNamespace__KawaseBlurRendererSO__BloomKernel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize __declspec(property(get=__get_kernelSize, put=__set_kernelSize))  kernelSize;

constexpr void __set_kernelSize(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize value) ;

constexpr GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize __get_kernelSize() const;

 int32_t __declspec(property(get=__get_sharedPartWithNext, put=__set_sharedPartWithNext))  sharedPartWithNext;

constexpr void __set_sharedPartWithNext(int32_t value) ;

constexpr int32_t __get_sharedPartWithNext() const;


// Methods

static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel New_ctor() ;

/// @brief Method .ctor addr 0x1f9a564 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pass
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14667))
// CS Name: KawaseBlurRendererSO::Pass
struct CORDL_TYPE GlobalNamespace__KawaseBlurRendererSO__Pass : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__KawaseBlurRendererSO__Pass(int32_t value__) noexcept;


                    constexpr GlobalNamespace__KawaseBlurRendererSO__Pass(GlobalNamespace__KawaseBlurRendererSO__Pass const&) = default;
                    constexpr GlobalNamespace__KawaseBlurRendererSO__Pass(GlobalNamespace__KawaseBlurRendererSO__Pass&&) = default;
                    constexpr GlobalNamespace__KawaseBlurRendererSO__Pass& operator=(GlobalNamespace__KawaseBlurRendererSO__Pass const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__KawaseBlurRendererSO__Pass& operator=(GlobalNamespace__KawaseBlurRendererSO__Pass&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__KawaseBlurRendererSO__Pass(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__KawaseBlurRendererSO__Pass_Unwrapped : int32_t {
__AlphaWeights = 0,
__Blur = 1,
__BlurAndAdd = 2,
__BlurWithAlphaWeights = 3,
__AlphaAndDepthWeights = 4,
__BlurGamma = 5,
__BlurGammaAndAdd = 6,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__KawaseBlurRendererSO__Pass_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__KawaseBlurRendererSO__Pass_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AlphaWeights offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass const AlphaWeights;

/// @brief Field Blur offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass const Blur;

/// @brief Field BlurAndAdd offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass const BlurAndAdd;

/// @brief Field BlurWithAlphaWeights offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass const BlurWithAlphaWeights;

/// @brief Field AlphaAndDepthWeights offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass const AlphaAndDepthWeights;

/// @brief Field BlurGamma offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass const BlurGamma;

/// @brief Field BlurGammaAndAdd offset 0
static GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass const BlurGammaAndAdd;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::KawaseBlurRendererSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14668))
// CS Name: KawaseBlurRendererSO
class CORDL_TYPE KawaseBlurRendererSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using Pass = GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass;

using BloomKernel = GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel;

using WeightsType = GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType;

using KernelSize = GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~KawaseBlurRendererSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "KawaseBlurRendererSO", modifiers: " const&", def_value: None }]
constexpr KawaseBlurRendererSO(KawaseBlurRendererSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KawaseBlurRendererSO", modifiers: "&&", def_value: None }]
constexpr KawaseBlurRendererSO(KawaseBlurRendererSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KawaseBlurRendererSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr KawaseBlurRendererSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KawaseBlurRendererSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KawaseBlurRendererSO& operator=(KawaseBlurRendererSO&& o) noexcept = default;
  constexpr KawaseBlurRendererSO& operator=(KawaseBlurRendererSO const& o) noexcept = default;
                


// Fields

 UnityEngine::Shader __declspec(property(get=__get__kawaseBlurShader, put=__set__kawaseBlurShader))  _kawaseBlurShader;

constexpr void __set__kawaseBlurShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__kawaseBlurShader() const;

 UnityEngine::Shader __declspec(property(get=__get__additiveShader, put=__set__additiveShader))  _additiveShader;

constexpr void __set__additiveShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__additiveShader() const;

 UnityEngine::Shader __declspec(property(get=__get__tintShader, put=__set__tintShader))  _tintShader;

constexpr void __set__tintShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get__tintShader() const;

 UnityEngine::Material __declspec(property(get=__get__kawaseBlurMaterial, put=__set__kawaseBlurMaterial))  _kawaseBlurMaterial;

constexpr void __set__kawaseBlurMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__kawaseBlurMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__additiveMaterial, put=__set__additiveMaterial))  _additiveMaterial;

constexpr void __set__additiveMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__additiveMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__tintMaterial, put=__set__tintMaterial))  _tintMaterial;

constexpr void __set__tintMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__tintMaterial() const;

 UnityEngine::Material __declspec(property(get=__get__commandBuffersMaterial, put=__set__commandBuffersMaterial))  _commandBuffersMaterial;

constexpr void __set__commandBuffersMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get__commandBuffersMaterial() const;

 ::ArrayW<::ArrayW<int32_t>> __declspec(property(get=__get__kernels, put=__set__kernels))  _kernels;

constexpr void __set__kernels(::ArrayW<::ArrayW<int32_t>> value) ;

constexpr ::ArrayW<::ArrayW<int32_t>> __get__kernels() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel> __declspec(property(get=__get__bloomKernels, put=__set__bloomKernels))  _bloomKernels;

constexpr void __set__bloomKernels(::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel> __get__bloomKernels() const;

 ::ArrayW<UnityEngine::RenderTexture> __declspec(property(get=__get__blurTextures, put=__set__blurTextures))  _blurTextures;

constexpr void __set__blurTextures(::ArrayW<UnityEngine::RenderTexture> value) ;

constexpr ::ArrayW<UnityEngine::RenderTexture> __get__blurTextures() const;

/// @brief Field kMaxBloomIterations offset 0
static constexpr int32_t  kMaxBloomIterations{5};

static ::ArrayW<::ArrayW<float_t>> __declspec(property(get=__get_kBloomIterationWeights, put=__set_kBloomIterationWeights))  kBloomIterationWeights;

static void __set_kBloomIterationWeights(::ArrayW<::ArrayW<float_t>> value) ;

static ::ArrayW<::ArrayW<float_t>> __get_kBloomIterationWeights() ;

static int32_t __declspec(property(get=__get__offsetID, put=__set__offsetID))  _offsetID;

static void __set__offsetID(int32_t value) ;

static int32_t __get__offsetID() ;

static int32_t __declspec(property(get=__get__boostID, put=__set__boostID))  _boostID;

static void __set__boostID(int32_t value) ;

static int32_t __get__boostID() ;

static int32_t __declspec(property(get=__get__additiveAlphaID, put=__set__additiveAlphaID))  _additiveAlphaID;

static void __set__additiveAlphaID(int32_t value) ;

static int32_t __get__additiveAlphaID() ;

static int32_t __declspec(property(get=__get__alphaID, put=__set__alphaID))  _alphaID;

static void __set__alphaID(int32_t value) ;

static int32_t __get__alphaID() ;

static int32_t __declspec(property(get=__get__tintColorID, put=__set__tintColorID))  _tintColorID;

static void __set__tintColorID(int32_t value) ;

static int32_t __get__tintColorID() ;

static int32_t __declspec(property(get=__get__alphaWeightsID, put=__set__alphaWeightsID))  _alphaWeightsID;

static void __set__alphaWeightsID(int32_t value) ;

static int32_t __get__alphaWeightsID() ;

static int32_t __declspec(property(get=__get__tempTexture0ID, put=__set__tempTexture0ID))  _tempTexture0ID;

static void __set__tempTexture0ID(int32_t value) ;

static int32_t __get__tempTexture0ID() ;

static int32_t __declspec(property(get=__get__tempTexture1ID, put=__set__tempTexture1ID))  _tempTexture1ID;

static void __set__tempTexture1ID(int32_t value) ;

static int32_t __get__tempTexture1ID() ;


// Methods

/// @brief Method GetBlurKernel addr 0x1f99fc0 size 0x1fc virtual false final false
 ::ArrayW<int32_t> GetBlurKernel(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize) ;

/// @brief Method OnEnable addr 0x1f9a1bc size 0x3a8 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f9a56c size 0x3c virtual false final false
 void OnDisable() ;

/// @brief Method Bloom addr 0x1f9a5a8 size 0x48c virtual false final false
 void Bloom(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, int32_t iterationsStart, int32_t iterations, float_t boost, float_t alphaWeights, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType blurStartWeightsType, ::ArrayW<float_t> bloomIterationWeights) ;

/// @brief Method DoubleBlur addr 0x1f9aedc size 0x264 virtual false final false
 void DoubleBlur(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize0, float_t boost0, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize1, float_t boost1, float_t secondBlurAlpha, int32_t downsample, bool gammaCorrection) ;

/// @brief Method Blur addr 0x1f9b140 size 0xbc virtual false final false
 UnityEngine::Texture2D Blur(UnityEngine::Texture src, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize, int32_t downsample) ;

/// @brief Method Blur addr 0x1f9b1fc size 0x88 virtual false final false
 void Blur(UnityEngine::Texture src, UnityEngine::RenderTexture dest, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize, float_t boost, int32_t downsample) ;

/// @brief Method Blur addr 0x1f9aa34 size 0x4a8 virtual false final false
 void Blur(UnityEngine::Texture src, UnityEngine::RenderTexture dest, ::ArrayW<int32_t> kernel, float_t boost, int32_t downsample, int32_t startIdx, int32_t length, float_t alphaWeights, float_t additiveAlpha, bool additivelyBlendToDest, bool gammaCorrection, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType blurStartWeightsType) ;

/// @brief Method AlphaWeights addr 0x1f9b284 size 0xd0 virtual false final false
 void AlphaWeights(UnityEngine::RenderTexture src, UnityEngine::RenderTexture dest) ;

/// @brief Method CreateBlurCommandBuffer addr 0x1f9b354 size 0x310 virtual false final false
 UnityEngine::Rendering::CommandBuffer CreateBlurCommandBuffer(int32_t width, int32_t height, ::StringW globalTextureName, GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize kernelSize, float_t boost) ;

static GlobalNamespace::KawaseBlurRendererSO New_ctor() ;

/// @brief Method .ctor addr 0x1f9b664 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__KernelSize, "", "KawaseBlurRendererSO/KernelSize");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__Pass, "", "KawaseBlurRendererSO/Pass");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__WeightsType, "", "KawaseBlurRendererSO/WeightsType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__KawaseBlurRendererSO__BloomKernel, "", "KawaseBlurRendererSO/BloomKernel");
NEED_NO_BOX(GlobalNamespace::KawaseBlurRendererSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::KawaseBlurRendererSO, "", "KawaseBlurRendererSO");
