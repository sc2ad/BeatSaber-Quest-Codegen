#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Type: UnityEngine::AudioSpeakerMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15597))
// CS Name: UnityEngine.AudioSpeakerMode
struct CORDL_TYPE AudioSpeakerMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioSpeakerMode(int32_t value__) noexcept;


                    constexpr AudioSpeakerMode(AudioSpeakerMode const&) = default;
                    constexpr AudioSpeakerMode(AudioSpeakerMode&&) = default;
                    constexpr AudioSpeakerMode& operator=(AudioSpeakerMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AudioSpeakerMode& operator=(AudioSpeakerMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AudioSpeakerMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AudioSpeakerMode_Unwrapped : int32_t {
__Raw = 0,
__Mono = 1,
__Stereo = 2,
__Quad = 3,
__Surround = 4,
__Mode5point1 = 5,
__Mode7point1 = 6,
__Prologic = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioSpeakerMode_Unwrapped () const noexcept {
return std::bit_cast<__AudioSpeakerMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Raw offset 0
static UnityEngine::AudioSpeakerMode const Raw;

/// @brief Field Mono offset 0
static UnityEngine::AudioSpeakerMode const Mono;

/// @brief Field Stereo offset 0
static UnityEngine::AudioSpeakerMode const Stereo;

/// @brief Field Quad offset 0
static UnityEngine::AudioSpeakerMode const Quad;

/// @brief Field Surround offset 0
static UnityEngine::AudioSpeakerMode const Surround;

/// @brief Field Mode5point1 offset 0
static UnityEngine::AudioSpeakerMode const Mode5point1;

/// @brief Field Mode7point1 offset 0
static UnityEngine::AudioSpeakerMode const Mode7point1;

/// @brief Field Prologic offset 0
static UnityEngine::AudioSpeakerMode const Prologic;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioSpeakerMode, "UnityEngine", "AudioSpeakerMode");
