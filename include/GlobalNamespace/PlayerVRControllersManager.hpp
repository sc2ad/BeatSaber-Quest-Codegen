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
  // Forward declaring type: VRController
  class VRController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PlayerVRControllersManager
  class PlayerVRControllersManager;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PlayerVRControllersManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerVRControllersManager*, "", "PlayerVRControllersManager");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: PlayerVRControllersManager
  // [TokenAttribute] Offset: FFFFFFFF
  class PlayerVRControllersManager : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private VRController _leftHandVRController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::VRController* leftHandVRController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    // private VRController _rightHandVRController
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::VRController* rightHandVRController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private VRController _leftHandVRController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRController*& dyn__leftHandVRController();
    // Get instance field reference: private VRController _rightHandVRController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRController*& dyn__rightHandVRController();
    // public VRController get_leftHandVRController()
    // Offset: 0x1417970
    ::GlobalNamespace::VRController* get_leftHandVRController();
    // public VRController get_rightHandVRController()
    // Offset: 0x1417978
    ::GlobalNamespace::VRController* get_rightHandVRController();
    // public System.Void .ctor()
    // Offset: 0x14179C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerVRControllersManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PlayerVRControllersManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerVRControllersManager*, creationType>()));
    }
    // public System.Void DisableAllVRControllers()
    // Offset: 0x1417980
    void DisableAllVRControllers();
  }; // PlayerVRControllersManager
  #pragma pack(pop)
  static check_size<sizeof(PlayerVRControllersManager), 32 + sizeof(::GlobalNamespace::VRController*)> __GlobalNamespace_PlayerVRControllersManagerSizeCheck;
  static_assert(sizeof(PlayerVRControllersManager) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PlayerVRControllersManager::get_leftHandVRController
// Il2CppName: get_leftHandVRController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (GlobalNamespace::PlayerVRControllersManager::*)()>(&GlobalNamespace::PlayerVRControllersManager::get_leftHandVRController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerVRControllersManager*), "get_leftHandVRController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerVRControllersManager::get_rightHandVRController
// Il2CppName: get_rightHandVRController
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::VRController* (GlobalNamespace::PlayerVRControllersManager::*)()>(&GlobalNamespace::PlayerVRControllersManager::get_rightHandVRController)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerVRControllersManager*), "get_rightHandVRController", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PlayerVRControllersManager::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PlayerVRControllersManager::DisableAllVRControllers
// Il2CppName: DisableAllVRControllers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PlayerVRControllersManager::*)()>(&GlobalNamespace::PlayerVRControllersManager::DisableAllVRControllers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PlayerVRControllersManager*), "DisableAllVRControllers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
