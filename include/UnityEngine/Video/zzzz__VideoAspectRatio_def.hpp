#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Video {
struct VideoAspectRatio;
}
// Type: UnityEngine.Video::VideoAspectRatio
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15911))
// CS Name: UnityEngine.Video.VideoAspectRatio
struct CORDL_TYPE VideoAspectRatio : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoAspectRatio(int32_t value__) noexcept;


                    constexpr VideoAspectRatio(VideoAspectRatio const&) = default;
                    constexpr VideoAspectRatio(VideoAspectRatio&&) = default;
                    constexpr VideoAspectRatio& operator=(VideoAspectRatio const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VideoAspectRatio& operator=(VideoAspectRatio&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VideoAspectRatio(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VideoAspectRatio_Unwrapped : int32_t {
__NoScaling = 0,
__FitVertically = 1,
__FitHorizontally = 2,
__FitInside = 3,
__FitOutside = 4,
__Stretch = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoAspectRatio_Unwrapped () const noexcept {
return std::bit_cast<__VideoAspectRatio_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoScaling offset 0
static UnityEngine::Video::VideoAspectRatio const NoScaling;

/// @brief Field FitVertically offset 0
static UnityEngine::Video::VideoAspectRatio const FitVertically;

/// @brief Field FitHorizontally offset 0
static UnityEngine::Video::VideoAspectRatio const FitHorizontally;

/// @brief Field FitInside offset 0
static UnityEngine::Video::VideoAspectRatio const FitInside;

/// @brief Field FitOutside offset 0
static UnityEngine::Video::VideoAspectRatio const FitOutside;

/// @brief Field Stretch offset 0
static UnityEngine::Video::VideoAspectRatio const Stretch;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Video::VideoAspectRatio, "UnityEngine.Video", "VideoAspectRatio");
