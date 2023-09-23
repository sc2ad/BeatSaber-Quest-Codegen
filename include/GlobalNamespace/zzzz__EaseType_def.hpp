#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct EaseType;
}
// Type: ::EaseType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15928))
// CS Name: EaseType
struct CORDL_TYPE EaseType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EaseType(int32_t value__) noexcept;


                    constexpr EaseType(EaseType const&) = default;
                    constexpr EaseType(EaseType&&) = default;
                    constexpr EaseType& operator=(EaseType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EaseType& operator=(EaseType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EaseType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EaseType_Unwrapped : int32_t {
__None = 0,
__Linear = 1,
__InSine = 2,
__OutSine = 3,
__InOutSine = 4,
__InQuad = 5,
__OutQuad = 6,
__InOutQuad = 7,
__InCubic = 8,
__OutCubic = 9,
__InOutCubic = 10,
__InQuart = 11,
__OutQuart = 12,
__InOutQuart = 13,
__InQuint = 14,
__OutQuint = 15,
__InOutQuint = 16,
__InExpo = 17,
__OutExpo = 18,
__InOutExpo = 19,
__InCirc = 20,
__OutCirc = 21,
__InOutCirc = 22,
__InBack = 23,
__OutBack = 24,
__InOutBack = 25,
__InElastic = 26,
__OutElastic = 27,
__InOutElastic = 28,
__InBounce = 29,
__OutBounce = 30,
__InOutBounce = 31,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EaseType_Unwrapped () const noexcept {
return std::bit_cast<__EaseType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::EaseType const None;

/// @brief Field Linear offset 0
static GlobalNamespace::EaseType const Linear;

/// @brief Field InSine offset 0
static GlobalNamespace::EaseType const InSine;

/// @brief Field OutSine offset 0
static GlobalNamespace::EaseType const OutSine;

/// @brief Field InOutSine offset 0
static GlobalNamespace::EaseType const InOutSine;

/// @brief Field InQuad offset 0
static GlobalNamespace::EaseType const InQuad;

/// @brief Field OutQuad offset 0
static GlobalNamespace::EaseType const OutQuad;

/// @brief Field InOutQuad offset 0
static GlobalNamespace::EaseType const InOutQuad;

/// @brief Field InCubic offset 0
static GlobalNamespace::EaseType const InCubic;

/// @brief Field OutCubic offset 0
static GlobalNamespace::EaseType const OutCubic;

/// @brief Field InOutCubic offset 0
static GlobalNamespace::EaseType const InOutCubic;

/// @brief Field InQuart offset 0
static GlobalNamespace::EaseType const InQuart;

/// @brief Field OutQuart offset 0
static GlobalNamespace::EaseType const OutQuart;

/// @brief Field InOutQuart offset 0
static GlobalNamespace::EaseType const InOutQuart;

/// @brief Field InQuint offset 0
static GlobalNamespace::EaseType const InQuint;

/// @brief Field OutQuint offset 0
static GlobalNamespace::EaseType const OutQuint;

/// @brief Field InOutQuint offset 0
static GlobalNamespace::EaseType const InOutQuint;

/// @brief Field InExpo offset 0
static GlobalNamespace::EaseType const InExpo;

/// @brief Field OutExpo offset 0
static GlobalNamespace::EaseType const OutExpo;

/// @brief Field InOutExpo offset 0
static GlobalNamespace::EaseType const InOutExpo;

/// @brief Field InCirc offset 0
static GlobalNamespace::EaseType const InCirc;

/// @brief Field OutCirc offset 0
static GlobalNamespace::EaseType const OutCirc;

/// @brief Field InOutCirc offset 0
static GlobalNamespace::EaseType const InOutCirc;

/// @brief Field InBack offset 0
static GlobalNamespace::EaseType const InBack;

/// @brief Field OutBack offset 0
static GlobalNamespace::EaseType const OutBack;

/// @brief Field InOutBack offset 0
static GlobalNamespace::EaseType const InOutBack;

/// @brief Field InElastic offset 0
static GlobalNamespace::EaseType const InElastic;

/// @brief Field OutElastic offset 0
static GlobalNamespace::EaseType const OutElastic;

/// @brief Field InOutElastic offset 0
static GlobalNamespace::EaseType const InOutElastic;

/// @brief Field InBounce offset 0
static GlobalNamespace::EaseType const InBounce;

/// @brief Field OutBounce offset 0
static GlobalNamespace::EaseType const OutBounce;

/// @brief Field InOutBounce offset 0
static GlobalNamespace::EaseType const InOutBounce;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EaseType, "", "EaseType");
