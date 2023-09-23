#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
struct Mathf;
}
// Type: UnityEngine::Mathf
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10194))
// CS Name: UnityEngine.Mathf
struct CORDL_TYPE Mathf : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations

                    constexpr Mathf(Mathf const&) = default;
                    constexpr Mathf(Mathf&&) = default;
                    constexpr Mathf& operator=(Mathf const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Mathf& operator=(Mathf&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Mathf(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static float_t __declspec(property(get=__get_Epsilon, put=__set_Epsilon))  Epsilon;

static void __set_Epsilon(float_t value) ;

static float_t __get_Epsilon() ;


// Methods

/// @brief Method IsPowerOfTwo addr 0x2b66128 size 0x3c virtual false final false
static bool IsPowerOfTwo(int32_t value) ;

/// @brief Method NextPowerOfTwo addr 0x2b66164 size 0x3c virtual false final false
static int32_t NextPowerOfTwo(int32_t value) ;

/// @brief Method GammaToLinearSpace addr 0x2b6488c size 0x38 virtual false final false
static float_t GammaToLinearSpace(float_t value) ;

/// @brief Method LinearToGammaSpace addr 0x2b661a0 size 0x38 virtual false final false
static float_t LinearToGammaSpace(float_t value) ;

/// @brief Method CorrelatedColorTemperatureToRGB addr 0x2b661d8 size 0x58 virtual false final false
static UnityEngine::Color CorrelatedColorTemperatureToRGB(float_t kelvin) ;

/// @brief Method Sin addr 0x2b6627c size 0x64 virtual false final false
static float_t Sin(float_t f) ;

/// @brief Method Cos addr 0x2b662e0 size 0x64 virtual false final false
static float_t Cos(float_t f) ;

/// @brief Method Tan addr 0x2b66344 size 0x64 virtual false final false
static float_t Tan(float_t f) ;

/// @brief Method Asin addr 0x2b663a8 size 0x64 virtual false final false
static float_t Asin(float_t f) ;

/// @brief Method Acos addr 0x2b6640c size 0x64 virtual false final false
static float_t Acos(float_t f) ;

/// @brief Method Atan addr 0x2b66470 size 0x64 virtual false final false
static float_t Atan(float_t f) ;

/// @brief Method Atan2 addr 0x2b664d4 size 0x6c virtual false final false
static float_t Atan2(float_t y, float_t x) ;

/// @brief Method Sqrt addr 0x2b66540 size 0x5c virtual false final false
static float_t Sqrt(float_t f) ;

/// @brief Method Abs addr 0x2b6659c size 0x5c virtual false final false
static float_t Abs(float_t f) ;

/// @brief Method Abs addr 0x2b665f8 size 0x58 virtual false final false
static int32_t Abs(int32_t value) ;

/// @brief Method Min addr 0x2b66650 size 0xc virtual false final false
static float_t Min(float_t a, float_t b) ;

/// @brief Method Min addr 0x2b6665c size 0x50 virtual false final false
static float_t Min(::ArrayW<float_t> values) ;

/// @brief Method Min addr 0x2b666ac size 0xc virtual false final false
static int32_t Min(int32_t a, int32_t b) ;

/// @brief Method Max addr 0x2b666b8 size 0xc virtual false final false
static float_t Max(float_t a, float_t b) ;

/// @brief Method Max addr 0x2b666c4 size 0x50 virtual false final false
static float_t Max(::ArrayW<float_t> values) ;

/// @brief Method Max addr 0x2b66714 size 0xc virtual false final false
static int32_t Max(int32_t a, int32_t b) ;

/// @brief Method Pow addr 0x2b66720 size 0x70 virtual false final false
static float_t Pow(float_t f, float_t p) ;

/// @brief Method Log addr 0x2b66790 size 0x70 virtual false final false
static float_t Log(float_t f, float_t p) ;

/// @brief Method Log addr 0x2b66800 size 0x64 virtual false final false
static float_t Log(float_t f) ;

/// @brief Method Log10 addr 0x2b66864 size 0x64 virtual false final false
static float_t Log10(float_t f) ;

/// @brief Method Ceil addr 0x2b668c8 size 0x5c virtual false final false
static float_t Ceil(float_t f) ;

/// @brief Method Floor addr 0x2b66924 size 0x5c virtual false final false
static float_t Floor(float_t f) ;

/// @brief Method Round addr 0x2b66980 size 0xc8 virtual false final false
static float_t Round(float_t f) ;

/// @brief Method CeilToInt addr 0x2b66a48 size 0x74 virtual false final false
static int32_t CeilToInt(float_t f) ;

/// @brief Method FloorToInt addr 0x2b66abc size 0x74 virtual false final false
static int32_t FloorToInt(float_t f) ;

/// @brief Method RoundToInt addr 0x2b66b30 size 0xdc virtual false final false
static int32_t RoundToInt(float_t f) ;

/// @brief Method Sign addr 0x2b66c0c size 0x14 virtual false final false
static float_t Sign(float_t f) ;

/// @brief Method Clamp addr 0x2b66c20 size 0x1c virtual false final false
static float_t Clamp(float_t value, float_t min, float_t max) ;

/// @brief Method Clamp addr 0x2b66c3c size 0x1c virtual false final false
static int32_t Clamp(int32_t value, int32_t min, int32_t max) ;

/// @brief Method Clamp01 addr 0x2b66c58 size 0x1c virtual false final false
static float_t Clamp01(float_t value) ;

/// @brief Method Lerp addr 0x2b66c74 size 0x24 virtual false final false
static float_t Lerp(float_t a, float_t b, float_t t) ;

/// @brief Method LerpUnclamped addr 0x2b66c98 size 0x10 virtual false final false
static float_t LerpUnclamped(float_t a, float_t b, float_t t) ;

/// @brief Method MoveTowards addr 0x2b66ca8 size 0x30 virtual false final false
static float_t MoveTowards(float_t current, float_t target, float_t maxDelta) ;

/// @brief Method Approximately addr 0x2b66cd8 size 0x90 virtual false final false
static bool Approximately(float_t a, float_t b) ;

/// @brief Method SmoothDamp addr 0x2b66d68 size 0x50 virtual false final false
static float_t SmoothDamp(float_t current, float_t target, ByRef<float_t> currentVelocity, float_t smoothTime) ;

/// @brief Method SmoothDamp addr 0x2b66db8 size 0xcc virtual false final false
static float_t SmoothDamp(float_t current, float_t target, ByRef<float_t> currentVelocity, float_t smoothTime, float_t maxSpeed, float_t deltaTime) ;

/// @brief Method Repeat addr 0x2b66e84 size 0x28 virtual false final false
static float_t Repeat(float_t t, float_t length) ;

/// @brief Method InverseLerp addr 0x2b66eac size 0x30 virtual false final false
static float_t InverseLerp(float_t a, float_t b, float_t value) ;

/// @brief Method DeltaAngle addr 0x2b66edc size 0x4c virtual false final false
static float_t DeltaAngle(float_t current, float_t target) ;

/// @brief Method CorrelatedColorTemperatureToRGB_Injected addr 0x2b66230 size 0x4c virtual false final false
static void CorrelatedColorTemperatureToRGB_Injected(float_t kelvin, ByRef<UnityEngine::Color> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Mathf, "UnityEngine", "Mathf");
