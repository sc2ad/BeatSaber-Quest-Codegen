#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaLogLevel;
}
// Type: UnityEngine.Yoga::YogaLogLevel
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15390))
// CS Name: UnityEngine.Yoga.YogaLogLevel
struct CORDL_TYPE YogaLogLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaLogLevel(int32_t value__) noexcept;


                    constexpr YogaLogLevel(YogaLogLevel const&) = default;
                    constexpr YogaLogLevel(YogaLogLevel&&) = default;
                    constexpr YogaLogLevel& operator=(YogaLogLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaLogLevel& operator=(YogaLogLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaLogLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaLogLevel_Unwrapped : int32_t {
__Error = 0,
__Warn = 1,
__Info = 2,
__Debug = 3,
__Verbose = 4,
__Fatal = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaLogLevel_Unwrapped () const noexcept {
return std::bit_cast<__YogaLogLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Error offset 0
static UnityEngine::Yoga::YogaLogLevel const Error;

/// @brief Field Warn offset 0
static UnityEngine::Yoga::YogaLogLevel const Warn;

/// @brief Field Info offset 0
static UnityEngine::Yoga::YogaLogLevel const Info;

/// @brief Field Debug offset 0
static UnityEngine::Yoga::YogaLogLevel const Debug;

/// @brief Field Verbose offset 0
static UnityEngine::Yoga::YogaLogLevel const Verbose;

/// @brief Field Fatal offset 0
static UnityEngine::Yoga::YogaLogLevel const Fatal;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaLogLevel, "UnityEngine.Yoga", "YogaLogLevel");
