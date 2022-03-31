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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLeaderboardPanelItem
  class MultiplayerLeaderboardPanelItem;
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLeaderboardPanelController
  class MultiplayerLeaderboardPanelController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeaderboardPanelController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeaderboardPanelController*, "", "MultiplayerLeaderboardPanelController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLeaderboardPanelController
  // [TokenAttribute] Offset: FFFFFFFF
  class MultiplayerLeaderboardPanelController : public ::UnityEngine::MonoBehaviour {
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
    // private MultiplayerLeaderboardPanelItem[] _items
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*> items;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>) == 0x8);
    // [InjectAttribute] Offset: 0x1252534
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MultiplayerScoreProvider*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MultiplayerLeaderboardPanelItem[] _items
    ::ArrayW<::GlobalNamespace::MultiplayerLeaderboardPanelItem*>& dyn__items();
    // Get instance field reference: private readonly MultiplayerScoreProvider _scoreProvider
    ::GlobalNamespace::MultiplayerScoreProvider*& dyn__scoreProvider();
    // protected System.Void Start()
    // Offset: 0x13F5AE0
    void Start();
    // protected System.Void Update()
    // Offset: 0x13F5B84
    void Update();
    // public System.Void .ctor()
    // Offset: 0x13F6118
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLeaderboardPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MultiplayerLeaderboardPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLeaderboardPanelController*, creationType>()));
    }
  }; // MultiplayerLeaderboardPanelController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLeaderboardPanelController), 32 + sizeof(::GlobalNamespace::MultiplayerScoreProvider*)> __GlobalNamespace_MultiplayerLeaderboardPanelControllerSizeCheck;
  static_assert(sizeof(MultiplayerLeaderboardPanelController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&GlobalNamespace::MultiplayerLeaderboardPanelController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeaderboardPanelController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MultiplayerLeaderboardPanelController::*)()>(&GlobalNamespace::MultiplayerLeaderboardPanelController::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MultiplayerLeaderboardPanelController*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MultiplayerLeaderboardPanelController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
