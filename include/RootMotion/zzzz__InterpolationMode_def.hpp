#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace RootMotion {
struct InterpolationMode;
}
// Type: RootMotion::InterpolationMode
namespace RootMotion {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12435))
// CS Name: RootMotion.InterpolationMode
struct CORDL_TYPE InterpolationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InterpolationMode(int32_t value__) noexcept;


                    constexpr InterpolationMode(InterpolationMode const&) = default;
                    constexpr InterpolationMode(InterpolationMode&&) = default;
                    constexpr InterpolationMode& operator=(InterpolationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InterpolationMode& operator=(InterpolationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InterpolationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __InterpolationMode_Unwrapped : int32_t {
__None = 0,
__InOutCubic = 1,
__InOutQuintic = 2,
__InOutSine = 3,
__InQuintic = 4,
__InQuartic = 5,
__InCubic = 6,
__InQuadratic = 7,
__InElastic = 8,
__InElasticSmall = 9,
__InElasticBig = 10,
__InSine = 11,
__InBack = 12,
__OutQuintic = 13,
__OutQuartic = 14,
__OutCubic = 15,
__OutInCubic = 16,
__OutInQuartic = 17,
__OutElastic = 18,
__OutElasticSmall = 19,
__OutElasticBig = 20,
__OutSine = 21,
__OutBack = 22,
__OutBackCubic = 23,
__OutBackQuartic = 24,
__BackInCubic = 25,
__BackInQuartic = 26,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InterpolationMode_Unwrapped () const noexcept {
return std::bit_cast<__InterpolationMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static RootMotion::InterpolationMode const None;

/// @brief Field InOutCubic offset 0
static RootMotion::InterpolationMode const InOutCubic;

/// @brief Field InOutQuintic offset 0
static RootMotion::InterpolationMode const InOutQuintic;

/// @brief Field InOutSine offset 0
static RootMotion::InterpolationMode const InOutSine;

/// @brief Field InQuintic offset 0
static RootMotion::InterpolationMode const InQuintic;

/// @brief Field InQuartic offset 0
static RootMotion::InterpolationMode const InQuartic;

/// @brief Field InCubic offset 0
static RootMotion::InterpolationMode const InCubic;

/// @brief Field InQuadratic offset 0
static RootMotion::InterpolationMode const InQuadratic;

/// @brief Field InElastic offset 0
static RootMotion::InterpolationMode const InElastic;

/// @brief Field InElasticSmall offset 0
static RootMotion::InterpolationMode const InElasticSmall;

/// @brief Field InElasticBig offset 0
static RootMotion::InterpolationMode const InElasticBig;

/// @brief Field InSine offset 0
static RootMotion::InterpolationMode const InSine;

/// @brief Field InBack offset 0
static RootMotion::InterpolationMode const InBack;

/// @brief Field OutQuintic offset 0
static RootMotion::InterpolationMode const OutQuintic;

/// @brief Field OutQuartic offset 0
static RootMotion::InterpolationMode const OutQuartic;

/// @brief Field OutCubic offset 0
static RootMotion::InterpolationMode const OutCubic;

/// @brief Field OutInCubic offset 0
static RootMotion::InterpolationMode const OutInCubic;

/// @brief Field OutInQuartic offset 0
static RootMotion::InterpolationMode const OutInQuartic;

/// @brief Field OutElastic offset 0
static RootMotion::InterpolationMode const OutElastic;

/// @brief Field OutElasticSmall offset 0
static RootMotion::InterpolationMode const OutElasticSmall;

/// @brief Field OutElasticBig offset 0
static RootMotion::InterpolationMode const OutElasticBig;

/// @brief Field OutSine offset 0
static RootMotion::InterpolationMode const OutSine;

/// @brief Field OutBack offset 0
static RootMotion::InterpolationMode const OutBack;

/// @brief Field OutBackCubic offset 0
static RootMotion::InterpolationMode const OutBackCubic;

/// @brief Field OutBackQuartic offset 0
static RootMotion::InterpolationMode const OutBackQuartic;

/// @brief Field BackInCubic offset 0
static RootMotion::InterpolationMode const BackInCubic;

/// @brief Field BackInQuartic offset 0
static RootMotion::InterpolationMode const BackInQuartic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def RootMotion
DEFINE_IL2CPP_ARG_TYPE(RootMotion::InterpolationMode, "RootMotion", "InterpolationMode");
