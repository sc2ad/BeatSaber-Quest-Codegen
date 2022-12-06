// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IReturnToMenuController
#include "GlobalNamespace/IReturnToMenuController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TutorialScenesTransitionSetupDataSO
  class TutorialScenesTransitionSetupDataSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TutorialReturnToMenuController
  class TutorialReturnToMenuController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TutorialReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TutorialReturnToMenuController*, "", "TutorialReturnToMenuController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: TutorialReturnToMenuController
  // [TokenAttribute] Offset: FFFFFFFF
  class TutorialReturnToMenuController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IReturnToMenuController*/ {
    public:
    public:
    // private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::TutorialScenesTransitionSetupDataSO* tutorialSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IReturnToMenuController
    operator ::GlobalNamespace::IReturnToMenuController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Creating interface conversion operator: i_IReturnToMenuController
    inline ::GlobalNamespace::IReturnToMenuController* i_IReturnToMenuController() noexcept {
      return reinterpret_cast<::GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TutorialScenesTransitionSetupDataSO _tutorialSceneSetupData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::TutorialScenesTransitionSetupDataSO*& dyn__tutorialSceneSetupData();
    // public System.Void .ctor()
    // Offset: 0x13BE134
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TutorialReturnToMenuController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TutorialReturnToMenuController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TutorialReturnToMenuController*, creationType>()));
    }
    // public System.Void ReturnToMenu()
    // Offset: 0x13BE118
    void ReturnToMenu();
  }; // TutorialReturnToMenuController
  #pragma pack(pop)
  static check_size<sizeof(TutorialReturnToMenuController), 24 + sizeof(::GlobalNamespace::TutorialScenesTransitionSetupDataSO*)> __GlobalNamespace_TutorialReturnToMenuControllerSizeCheck;
  static_assert(sizeof(TutorialReturnToMenuController) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TutorialReturnToMenuController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu
// Il2CppName: ReturnToMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TutorialReturnToMenuController::*)()>(&GlobalNamespace::TutorialReturnToMenuController::ReturnToMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TutorialReturnToMenuController*), "ReturnToMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
