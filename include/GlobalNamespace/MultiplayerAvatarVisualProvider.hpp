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
  // Forward declaring type: AvatarVisualController
  class AvatarVisualController;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerAvatarVisualProvider
  class MultiplayerAvatarVisualProvider;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerAvatarVisualProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerAvatarVisualProvider*, "", "MultiplayerAvatarVisualProvider");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerAvatarVisualProvider
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerAvatarVisualProvider : public ::UnityEngine::MonoBehaviour {
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
    // private AvatarVisualController _avatarVisualController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::AvatarVisualController* avatarVisualController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::AvatarVisualController*) == 0x8);
    // [InjectAttribute] Offset: 0x124B4A8
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IConnectedPlayer*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private AvatarVisualController _avatarVisualController
    ::GlobalNamespace::AvatarVisualController*& dyn__avatarVisualController();
    // Get instance field reference: private readonly IConnectedPlayer _connectedPlayer
    ::GlobalNamespace::IConnectedPlayer*& dyn__connectedPlayer();
    // protected System.Void Start()
    // Offset: 0x13CBDA0
    void Start();
    // public System.Void .ctor()
    // Offset: 0x13CBEA0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerAvatarVisualProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerAvatarVisualProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerAvatarVisualProvider*, creationType>()));
    }
  }; // MultiplayerAvatarVisualProvider
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerAvatarVisualProvider), 32 + sizeof(::GlobalNamespace::IConnectedPlayer*)> __GlobalNamespace_MultiplayerAvatarVisualProviderSizeCheck;
  static_assert(sizeof(MultiplayerAvatarVisualProvider) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarVisualProvider::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerAvatarVisualProvider::*)()>(&GlobalNamespace::MultiplayerAvatarVisualProvider::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerAvatarVisualProvider*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerAvatarVisualProvider::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
