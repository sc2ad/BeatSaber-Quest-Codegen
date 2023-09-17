#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Timeline {
struct StandardFrameRates;
}
// Type: UnityEngine.Timeline::StandardFrameRates
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14152))
// CS Name: UnityEngine.Timeline.StandardFrameRates
struct CORDL_TYPE StandardFrameRates : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StandardFrameRates(int32_t value__) noexcept;


                    constexpr StandardFrameRates(StandardFrameRates const&) = default;
                    constexpr StandardFrameRates(StandardFrameRates&&) = default;
                    constexpr StandardFrameRates& operator=(StandardFrameRates const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr StandardFrameRates& operator=(StandardFrameRates&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit StandardFrameRates(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __StandardFrameRates_Unwrapped : int32_t {
__Fps24 = 0,
__Fps23_97 = 1,
__Fps25 = 2,
__Fps30 = 3,
__Fps29_97 = 4,
__Fps50 = 5,
__Fps60 = 6,
__Fps59_94 = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __StandardFrameRates_Unwrapped () const noexcept {
return std::bit_cast<__StandardFrameRates_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Fps24 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps24;

/// @brief Field Fps23_97 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps23_97;

/// @brief Field Fps25 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps25;

/// @brief Field Fps30 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps30;

/// @brief Field Fps29_97 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps29_97;

/// @brief Field Fps50 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps50;

/// @brief Field Fps60 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps60;

/// @brief Field Fps59_94 offset 0
static ::UnityEngine::Timeline::StandardFrameRates const Fps59_94;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::StandardFrameRates, "UnityEngine.Timeline", "StandardFrameRates");
