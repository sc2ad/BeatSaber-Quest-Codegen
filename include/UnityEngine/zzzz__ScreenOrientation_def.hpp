#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct ScreenOrientation;
}
// Type: UnityEngine::ScreenOrientation
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10054))
// CS Name: UnityEngine.ScreenOrientation
struct CORDL_TYPE ScreenOrientation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ScreenOrientation(int32_t value__) noexcept;


                    constexpr ScreenOrientation(ScreenOrientation const&) = default;
                    constexpr ScreenOrientation(ScreenOrientation&&) = default;
                    constexpr ScreenOrientation& operator=(ScreenOrientation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ScreenOrientation& operator=(ScreenOrientation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ScreenOrientation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ScreenOrientation_Unwrapped : int32_t {
__Unknown = 0,
__Landscape = 3,
__Portrait = 1,
__PortraitUpsideDown = 2,
__LandscapeLeft = 3,
__LandscapeRight = 4,
__AutoRotation = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ScreenOrientation_Unwrapped () const noexcept {
return std::bit_cast<__ScreenOrientation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::ScreenOrientation const Unknown;

/// @brief Field Landscape offset 0
static UnityEngine::ScreenOrientation const Landscape;

/// @brief Field Portrait offset 0
static UnityEngine::ScreenOrientation const Portrait;

/// @brief Field PortraitUpsideDown offset 0
static UnityEngine::ScreenOrientation const PortraitUpsideDown;

/// @brief Field LandscapeLeft offset 0
static UnityEngine::ScreenOrientation const LandscapeLeft;

/// @brief Field LandscapeRight offset 0
static UnityEngine::ScreenOrientation const LandscapeRight;

/// @brief Field AutoRotation offset 0
static UnityEngine::ScreenOrientation const AutoRotation;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScreenOrientation, "UnityEngine", "ScreenOrientation");
