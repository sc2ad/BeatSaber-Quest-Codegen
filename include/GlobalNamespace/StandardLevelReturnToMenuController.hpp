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
  // Forward declaring type: StandardLevelScenesTransitionSetupDataSO
  class StandardLevelScenesTransitionSetupDataSO;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelReturnToMenuController
  class StandardLevelReturnToMenuController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelReturnToMenuController*, "", "StandardLevelReturnToMenuController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelReturnToMenuController
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelReturnToMenuController : public ::UnityEngine::MonoBehaviour/*, public ::GlobalNamespace::IReturnToMenuController*/ {
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
    // private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO* standardLevelSceneSetupData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*) == 0x8);
    // [InjectAttribute] Offset: 0x12533B4
    // private PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IReturnToMenuController
    operator ::GlobalNamespace::IReturnToMenuController() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IReturnToMenuController*>(this);
    }
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private StandardLevelScenesTransitionSetupDataSO _standardLevelSceneSetupData
    ::GlobalNamespace::StandardLevelScenesTransitionSetupDataSO*& dyn__standardLevelSceneSetupData();
    // Get instance field reference: private PrepareLevelCompletionResults _prepareLevelCompletionResults
    ::GlobalNamespace::PrepareLevelCompletionResults*& dyn__prepareLevelCompletionResults();
    // public System.Void ReturnToMenu()
    // Offset: 0x13359C4
    void ReturnToMenu();
    // public System.Void .ctor()
    // Offset: 0x1335A0C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelReturnToMenuController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelReturnToMenuController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelReturnToMenuController*, creationType>()));
    }
  }; // StandardLevelReturnToMenuController
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelReturnToMenuController), 32 + sizeof(::GlobalNamespace::PrepareLevelCompletionResults*)> __GlobalNamespace_StandardLevelReturnToMenuControllerSizeCheck;
  static_assert(sizeof(StandardLevelReturnToMenuController) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelReturnToMenuController::ReturnToMenu
// Il2CppName: ReturnToMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelReturnToMenuController::*)()>(&GlobalNamespace::StandardLevelReturnToMenuController::ReturnToMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelReturnToMenuController*), "ReturnToMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelReturnToMenuController::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
