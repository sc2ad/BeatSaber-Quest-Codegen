// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioSource
  class AudioSource;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerAvatarAudioController
  class MultiplayerAvatarAudioController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerAvatarAudioController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarAudioController*, "", "MultiplayerAvatarAudioController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerAvatarAudioController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerAvatarAudioController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::MultiplayerAvatarAudioController::$Start$d__4
    class $Start$d__4;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private UnityEngine.AudioSource _audioSource
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::AudioSource* audioSource;
    // Field size check
    static_assert(sizeof(::UnityEngine::AudioSource*) == 0x8);
    // [InjectOptionalAttribute] Offset: 0x123C634
    // private IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private UnityEngine.AudioSource _audioSource
    ::UnityEngine::AudioSource*& dyn__audioSource();
    // Get instance field reference: private IConnectedPlayer _connectedPlayer
    ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // public System.Void set_connectedPlayer(IConnectedPlayer value)
    // Offset: 0x1428608
    void set_connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x1428610
    ::System::Collections::IEnumerator* Start();
    // public System.Void .ctor()
    // Offset: 0x14286AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerAvatarAudioController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerAvatarAudioController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerAvatarAudioController*, creationType>()));
    }
  }; // MultiplayerAvatarAudioController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerAvatarAudioController), 32 + sizeof(::GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_MultiplayerAvatarAudioControllerSizeCheck;
  static_assert(sizeof(MultiplayerAvatarAudioController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarAudioController::set_connectedPlayer
// Il2CppName: set_connectedPlayer
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarAudioController::*)(::GlobalNamespace::IConnectedPlayer*)>(&GlobalNamespace::MultiplayerAvatarAudioController::set_connectedPlayer)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "IConnectedPlayer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarAudioController*), "set_connectedPlayer", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarAudioController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::MultiplayerAvatarAudioController::*)()>(&GlobalNamespace::MultiplayerAvatarAudioController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarAudioController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarAudioController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
