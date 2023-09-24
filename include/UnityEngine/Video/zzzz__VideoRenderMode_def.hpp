#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Video {
struct VideoRenderMode;
}
// Type: UnityEngine.Video::VideoRenderMode
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15909))
// CS Name: UnityEngine.Video.VideoRenderMode
struct CORDL_TYPE VideoRenderMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoRenderMode(int32_t value__) noexcept;


                    constexpr VideoRenderMode(VideoRenderMode const&) = default;
                    constexpr VideoRenderMode(VideoRenderMode&&) = default;
                    constexpr VideoRenderMode& operator=(VideoRenderMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VideoRenderMode& operator=(VideoRenderMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VideoRenderMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VideoRenderMode_Unwrapped : int32_t {
__CameraFarPlane = 0,
__CameraNearPlane = 1,
__RenderTexture = 2,
__MaterialOverride = 3,
__APIOnly = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoRenderMode_Unwrapped () const noexcept {
return std::bit_cast<__VideoRenderMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CameraFarPlane offset 0
static UnityEngine::Video::VideoRenderMode const CameraFarPlane;

/// @brief Field CameraNearPlane offset 0
static UnityEngine::Video::VideoRenderMode const CameraNearPlane;

/// @brief Field RenderTexture offset 0
static UnityEngine::Video::VideoRenderMode const RenderTexture;

/// @brief Field MaterialOverride offset 0
static UnityEngine::Video::VideoRenderMode const MaterialOverride;

/// @brief Field APIOnly offset 0
static UnityEngine::Video::VideoRenderMode const APIOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Video::VideoRenderMode, "UnityEngine.Video", "VideoRenderMode");
