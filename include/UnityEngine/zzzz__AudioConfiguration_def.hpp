#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Forward declare root types
namespace UnityEngine {
struct AudioConfiguration;
}
// Type: UnityEngine::AudioConfiguration
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15599))
// CS Name: UnityEngine.AudioConfiguration
struct CORDL_TYPE AudioConfiguration : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: None }, CppParam { name: "dspBufferSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "sampleRate", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numRealVoices", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numVirtualVoices", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AudioConfiguration(::UnityEngine::AudioSpeakerMode speakerMode, int32_t dspBufferSize, int32_t sampleRate, int32_t numRealVoices, int32_t numVirtualVoices) noexcept;


                    constexpr AudioConfiguration(AudioConfiguration const&) = default;
                    constexpr AudioConfiguration(AudioConfiguration&&) = default;
                    constexpr AudioConfiguration& operator=(AudioConfiguration const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AudioConfiguration& operator=(AudioConfiguration&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x14};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AudioConfiguration(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::AudioSpeakerMode __declspec(property(get=__get_speakerMode, put=__set_speakerMode))  speakerMode;

constexpr void __set_speakerMode(::UnityEngine::AudioSpeakerMode value) ;

constexpr ::UnityEngine::AudioSpeakerMode __get_speakerMode() const;

 int32_t __declspec(property(get=__get_dspBufferSize, put=__set_dspBufferSize))  dspBufferSize;

constexpr void __set_dspBufferSize(int32_t value) ;

constexpr int32_t __get_dspBufferSize() const;

 int32_t __declspec(property(get=__get_sampleRate, put=__set_sampleRate))  sampleRate;

constexpr void __set_sampleRate(int32_t value) ;

constexpr int32_t __get_sampleRate() const;

 int32_t __declspec(property(get=__get_numRealVoices, put=__set_numRealVoices))  numRealVoices;

constexpr void __set_numRealVoices(int32_t value) ;

constexpr int32_t __get_numRealVoices() const;

 int32_t __declspec(property(get=__get_numVirtualVoices, put=__set_numVirtualVoices))  numVirtualVoices;

constexpr void __set_numVirtualVoices(int32_t value) ;

constexpr int32_t __get_numVirtualVoices() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioConfiguration, "UnityEngine", "AudioConfiguration");
