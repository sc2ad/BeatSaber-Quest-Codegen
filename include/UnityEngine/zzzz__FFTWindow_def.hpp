#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct FFTWindow;
}
// Type: UnityEngine::FFTWindow
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15600))
// CS Name: UnityEngine.FFTWindow
struct CORDL_TYPE FFTWindow : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr FFTWindow(int32_t value__) noexcept;


                    constexpr FFTWindow(FFTWindow const&) = default;
                    constexpr FFTWindow(FFTWindow&&) = default;
                    constexpr FFTWindow& operator=(FFTWindow const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr FFTWindow& operator=(FFTWindow&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit FFTWindow(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __FFTWindow_Unwrapped : int32_t {
__Rectangular = 0,
__Triangle = 1,
__Hamming = 2,
__Hanning = 3,
__Blackman = 4,
__BlackmanHarris = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __FFTWindow_Unwrapped () const noexcept {
return std::bit_cast<__FFTWindow_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Rectangular offset 0
static UnityEngine::FFTWindow const Rectangular;

/// @brief Field Triangle offset 0
static UnityEngine::FFTWindow const Triangle;

/// @brief Field Hamming offset 0
static UnityEngine::FFTWindow const Hamming;

/// @brief Field Hanning offset 0
static UnityEngine::FFTWindow const Hanning;

/// @brief Field Blackman offset 0
static UnityEngine::FFTWindow const Blackman;

/// @brief Field BlackmanHarris offset 0
static UnityEngine::FFTWindow const BlackmanHarris;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::FFTWindow, "UnityEngine", "FFTWindow");
