#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Video {
struct VideoAudioOutputMode;
}
// Type: UnityEngine.Video::VideoAudioOutputMode
namespace UnityEngine::Video {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15915))
// CS Name: UnityEngine.Video.VideoAudioOutputMode
struct CORDL_TYPE VideoAudioOutputMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VideoAudioOutputMode(int32_t value__) noexcept;


                    constexpr VideoAudioOutputMode(VideoAudioOutputMode const&) = default;
                    constexpr VideoAudioOutputMode(VideoAudioOutputMode&&) = default;
                    constexpr VideoAudioOutputMode& operator=(VideoAudioOutputMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VideoAudioOutputMode& operator=(VideoAudioOutputMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VideoAudioOutputMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __VideoAudioOutputMode_Unwrapped : int32_t {
__None = 0,
__AudioSource = 1,
__Direct = 2,
__APIOnly = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __VideoAudioOutputMode_Unwrapped () const noexcept {
return std::bit_cast<__VideoAudioOutputMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::Video::VideoAudioOutputMode const None;

/// @brief Field AudioSource offset 0
static UnityEngine::Video::VideoAudioOutputMode const AudioSource;

/// @brief Field Direct offset 0
static UnityEngine::Video::VideoAudioOutputMode const Direct;

/// @brief Field APIOnly offset 0
static UnityEngine::Video::VideoAudioOutputMode const APIOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Video
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Video::VideoAudioOutputMode, "UnityEngine.Video", "VideoAudioOutputMode");
