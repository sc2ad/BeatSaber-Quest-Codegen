// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: UnityEngine.AudioSpeakerMode
#include "UnityEngine/AudioSpeakerMode.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x14
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.AudioConfiguration
  // [TokenAttribute] Offset: FFFFFFFF
  struct AudioConfiguration/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public UnityEngine.AudioSpeakerMode speakerMode
    // Size: 0x4
    // Offset: 0x0
    UnityEngine::AudioSpeakerMode speakerMode;
    // Field size check
    static_assert(sizeof(UnityEngine::AudioSpeakerMode) == 0x4);
    // public System.Int32 dspBufferSize
    // Size: 0x4
    // Offset: 0x4
    int dspBufferSize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 sampleRate
    // Size: 0x4
    // Offset: 0x8
    int sampleRate;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numRealVoices
    // Size: 0x4
    // Offset: 0xC
    int numRealVoices;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 numVirtualVoices
    // Size: 0x4
    // Offset: 0x10
    int numVirtualVoices;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: AudioConfiguration
    constexpr AudioConfiguration(UnityEngine::AudioSpeakerMode speakerMode_ = {}, int dspBufferSize_ = {}, int sampleRate_ = {}, int numRealVoices_ = {}, int numVirtualVoices_ = {}) noexcept : speakerMode{speakerMode_}, dspBufferSize{dspBufferSize_}, sampleRate{sampleRate_}, numRealVoices{numRealVoices_}, numVirtualVoices{numVirtualVoices_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public UnityEngine.AudioSpeakerMode speakerMode
    UnityEngine::AudioSpeakerMode& dyn_speakerMode();
    // Get instance field reference: public System.Int32 dspBufferSize
    int& dyn_dspBufferSize();
    // Get instance field reference: public System.Int32 sampleRate
    int& dyn_sampleRate();
    // Get instance field reference: public System.Int32 numRealVoices
    int& dyn_numRealVoices();
    // Get instance field reference: public System.Int32 numVirtualVoices
    int& dyn_numVirtualVoices();
  }; // UnityEngine.AudioConfiguration
  #pragma pack(pop)
  static check_size<sizeof(AudioConfiguration), 16 + sizeof(int)> __UnityEngine_AudioConfigurationSizeCheck;
  static_assert(sizeof(AudioConfiguration) == 0x14);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioConfiguration, "UnityEngine", "AudioConfiguration");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
