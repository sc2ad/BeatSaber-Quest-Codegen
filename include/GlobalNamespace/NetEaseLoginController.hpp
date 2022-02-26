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
  // Forward declaring type: MenuScenesTransitionSetupDataSO
  class MenuScenesTransitionSetupDataSO;
  // Forward declaring type: GameScenesManager
  class GameScenesManager;
  // Forward declaring type: NetEaseManager
  class NetEaseManager;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetEaseLoginController
  class NetEaseLoginController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::NetEaseLoginController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetEaseLoginController*, "", "NetEaseLoginController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: NetEaseLoginController
  // [TokenAttribute] Offset: FFFFFFFF
  class NetEaseLoginController : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::NetEaseLoginController::$Start$d__3
    class $Start$d__3;
    // Nested type: ::GlobalNamespace::NetEaseLoginController::$LoginAsync$d__4
    struct $LoginAsync$d__4;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private MenuScenesTransitionSetupDataSO _arcadeMenuTransitionSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MenuScenesTransitionSetupDataSO* arcadeMenuTransitionSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MenuScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0x123AD74
    // private GameScenesManager _gameScenesManager
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::GameScenesManager* gameScenesManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameScenesManager*) == 0x8);
    // [InjectAttribute] Offset: 0x123AD84
    // private NetEaseManager _netEaseManager
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::NetEaseManager* netEaseManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::NetEaseManager*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private MenuScenesTransitionSetupDataSO _arcadeMenuTransitionSetupData
    ::GlobalNamespace::MenuScenesTransitionSetupDataSO*& dyn__arcadeMenuTransitionSetupData();
    // Get instance field reference: private GameScenesManager _gameScenesManager
    ::GlobalNamespace::GameScenesManager*& dyn__gameScenesManager();
    // Get instance field reference: private NetEaseManager _netEaseManager
    ::GlobalNamespace::NetEaseManager*& dyn__netEaseManager();
    // protected System.Collections.IEnumerator Start()
    // Offset: 0x2B22560
    ::System::Collections::IEnumerator* Start();
    // private System.Void LoginAsync()
    // Offset: 0x2B225FC
    void LoginAsync();
    // public System.Void .ctor()
    // Offset: 0x2B226BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NetEaseLoginController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::NetEaseLoginController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NetEaseLoginController*, creationType>()));
    }
  }; // NetEaseLoginController
  #pragma pack(pop)
  static check_size<sizeof(NetEaseLoginController), 40 + sizeof(::GlobalNamespace::NetEaseManager*)> __GlobalNamespace_NetEaseLoginControllerSizeCheck;
  static_assert(sizeof(NetEaseLoginController) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLoginController::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (GlobalNamespace::NetEaseLoginController::*)()>(&GlobalNamespace::NetEaseLoginController::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLoginController*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLoginController::LoginAsync
// Il2CppName: LoginAsync
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::NetEaseLoginController::*)()>(&GlobalNamespace::NetEaseLoginController::LoginAsync)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::NetEaseLoginController*), "LoginAsync", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::NetEaseLoginController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
