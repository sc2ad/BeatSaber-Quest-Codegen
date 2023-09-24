#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioMixerUpdateMode;
}
// Type: UnityEngine.Audio::AudioMixerUpdateMode
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15615))
// CS Name: UnityEngine.Audio.AudioMixerUpdateMode
struct CORDL_TYPE AudioMixerUpdateMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioMixerUpdateMode(int32_t value__) noexcept;


                    constexpr AudioMixerUpdateMode(AudioMixerUpdateMode const&) = default;
                    constexpr AudioMixerUpdateMode(AudioMixerUpdateMode&&) = default;
                    constexpr AudioMixerUpdateMode& operator=(AudioMixerUpdateMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AudioMixerUpdateMode& operator=(AudioMixerUpdateMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AudioMixerUpdateMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AudioMixerUpdateMode_Unwrapped : int32_t {
__Normal = 0,
__UnscaledTime = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AudioMixerUpdateMode_Unwrapped () const noexcept {
return std::bit_cast<__AudioMixerUpdateMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static UnityEngine::Audio::AudioMixerUpdateMode const Normal;

/// @brief Field UnscaledTime offset 0
static UnityEngine::Audio::AudioMixerUpdateMode const UnscaledTime;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Audio::AudioMixerUpdateMode, "UnityEngine.Audio", "AudioMixerUpdateMode");
