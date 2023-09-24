#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class BufferedAudioStream;
}
// Type: ::BufferedAudioStream
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13157))
// CS Name: BufferedAudioStream
class CORDL_TYPE BufferedAudioStream : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BufferedAudioStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: " const&", def_value: None }]
constexpr BufferedAudioStream(BufferedAudioStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BufferedAudioStream", modifiers: "&&", def_value: None }]
constexpr BufferedAudioStream(BufferedAudioStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BufferedAudioStream(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BufferedAudioStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BufferedAudioStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BufferedAudioStream& operator=(BufferedAudioStream&& o) noexcept = default;
  constexpr BufferedAudioStream& operator=(BufferedAudioStream const& o) noexcept = default;
                


// Fields

/// @brief Field VerboseLogging offset 0
static constexpr bool  VerboseLogging{false};

 UnityEngine::AudioSource __declspec(property(get=__get_audio, put=__set_audio))  audio;

constexpr void __set_audio(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get_audio() const;

 ::ArrayW<float_t> __declspec(property(get=__get_audioBuffer, put=__set_audioBuffer))  audioBuffer;

constexpr void __set_audioBuffer(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_audioBuffer() const;

 int32_t __declspec(property(get=__get_writePos, put=__set_writePos))  writePos;

constexpr void __set_writePos(int32_t value) ;

constexpr int32_t __get_writePos() const;

/// @brief Field bufferLengthSeconds offset 0
static constexpr float_t  bufferLengthSeconds{0.25};

/// @brief Field sampleRate offset 0
static constexpr int32_t  sampleRate{48000};

/// @brief Field bufferSize offset 0
static constexpr int32_t  bufferSize{12000};

/// @brief Field playbackDelayTimeSeconds offset 0
static constexpr float_t  playbackDelayTimeSeconds{0.05};

 float_t __declspec(property(get=__get_playbackDelayRemaining, put=__set_playbackDelayRemaining))  playbackDelayRemaining;

constexpr void __set_playbackDelayRemaining(float_t value) ;

constexpr float_t __get_playbackDelayRemaining() const;

 float_t __declspec(property(get=__get_remainingBufferTime, put=__set_remainingBufferTime))  remainingBufferTime;

constexpr void __set_remainingBufferTime(float_t value) ;

constexpr float_t __get_remainingBufferTime() const;


// Methods

static GlobalNamespace::BufferedAudioStream New_ctor(UnityEngine::AudioSource audio) ;

/// @brief Method .ctor addr 0x2551c24 size 0xc4 virtual false final false
 void _ctor(UnityEngine::AudioSource audio) ;

/// @brief Method Update addr 0x2551d2c size 0x1d0 virtual false final false
 void Update() ;

/// @brief Method Stop addr 0x2551ce8 size 0x44 virtual false final false
 void Stop() ;

/// @brief Method AddData addr 0x2551efc size 0x11c virtual false final false
 void AddData(::ArrayW<float_t> samples) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BufferedAudioStream);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BufferedAudioStream, "", "BufferedAudioStream");
