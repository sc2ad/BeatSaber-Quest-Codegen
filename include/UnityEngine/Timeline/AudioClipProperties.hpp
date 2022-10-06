// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.Playables.PlayableBehaviour
#include "UnityEngine/Playables/PlayableBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: AudioClipProperties
  class AudioClipProperties;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::UnityEngine::Timeline::AudioClipProperties);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::AudioClipProperties*, "UnityEngine.Timeline", "AudioClipProperties");
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AudioClipProperties
  // [TokenAttribute] Offset: FFFFFFFF
  // [NotKeyableAttribute] Offset: 10B9E70
  class AudioClipProperties : public ::UnityEngine::Playables::PlayableBehaviour {
    public:
    public:
    // [RangeAttribute] Offset: 0x10BB050
    // public System.Single volume
    // Size: 0x4
    // Offset: 0x10
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return volume;
    }
    // Get instance field reference: public System.Single volume
    [[deprecated("Use field access instead!")]] float& dyn_volume();
    // public System.Void .ctor()
    // Offset: 0x1E0D160
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipProperties* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::UnityEngine::Timeline::AudioClipProperties::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipProperties*, creationType>()));
    }
  }; // UnityEngine.Timeline.AudioClipProperties
  #pragma pack(pop)
  static check_size<sizeof(AudioClipProperties), 16 + sizeof(float)> __UnityEngine_Timeline_AudioClipPropertiesSizeCheck;
  static_assert(sizeof(AudioClipProperties) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Timeline::AudioClipProperties::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
