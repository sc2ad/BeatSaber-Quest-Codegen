// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IReturnToMenuController
  class IReturnToMenuController;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IReturnToMenuController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IReturnToMenuController*, "", "IReturnToMenuController");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IReturnToMenuController
  // [TokenAttribute] Offset: FFFFFFFF
  class IReturnToMenuController {
    public:
    // public System.Void ReturnToMenu()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void ReturnToMenu();
  }; // IReturnToMenuController
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IReturnToMenuController::ReturnToMenu
// Il2CppName: ReturnToMenu
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IReturnToMenuController::*)()>(&GlobalNamespace::IReturnToMenuController::ReturnToMenu)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IReturnToMenuController*), "ReturnToMenu", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
