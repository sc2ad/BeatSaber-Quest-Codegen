// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: SongPreviewPlayer
#include "GlobalNamespace/SongPreviewPlayer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*, "", "SongPreviewPlayer/AudioSourceVolumeController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: SongPreviewPlayer/AudioSourceVolumeController
  // [TokenAttribute] Offset: FFFFFFFF
  class SongPreviewPlayer::AudioSourceVolumeController : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly UnityEngine.AudioSource audioSource
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // private System.Single <maxVolume>k__BackingField
    // Size: 0x4
    // Offset: 0x18
    float maxVolume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _volume
    // Size: 0x4
    // Offset: 0x1C
    float volume;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Get instance field reference: public readonly UnityEngine.AudioSource audioSource
    ::UnityEngine::AudioSource*& dyn_audioSource();
    // Get instance field reference: private System.Single <maxVolume>k__BackingField
    float& dyn_$maxVolume$k__BackingField();
    // Get instance field reference: private System.Single _volume
    float& dyn__volume();
    // public System.Single get_volume()
    // Offset: 0x13D3AF4
    float get_volume();
    // public System.Void set_volume(System.Single value)
    // Offset: 0x13D315C
    void set_volume(float value);
    // public System.Single get_maxVolume()
    // Offset: 0x13D3AFC
    float get_maxVolume();
    // public System.Void set_maxVolume(System.Single value)
    // Offset: 0x13D3B04
    void set_maxVolume(float value);
    // public System.Void .ctor(UnityEngine.AudioSource audioSource)
    // Offset: 0x13D2C7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SongPreviewPlayer::AudioSourceVolumeController* New_ctor(::UnityEngine::AudioSource* audioSource) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SongPreviewPlayer::AudioSourceVolumeController*, creationType>(audioSource)));
    }
  }; // SongPreviewPlayer/AudioSourceVolumeController
  #pragma pack(pop)
  static check_size<sizeof(SongPreviewPlayer::AudioSourceVolumeController), 28 + sizeof(float)> __GlobalNamespace_SongPreviewPlayer_AudioSourceVolumeControllerSizeCheck;
  static_assert(sizeof(SongPreviewPlayer::AudioSourceVolumeController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::get_volume
// Il2CppName: get_volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::*)()>(&GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::get_volume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*), "get_volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::set_volume
// Il2CppName: set_volume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::*)(float)>(&GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::set_volume)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*), "set_volume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::get_maxVolume
// Il2CppName: get_maxVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::*)()>(&GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::get_maxVolume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*), "get_maxVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::set_maxVolume
// Il2CppName: set_maxVolume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::*)(float)>(&GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::set_maxVolume)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController*), "set_maxVolume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SongPreviewPlayer::AudioSourceVolumeController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
