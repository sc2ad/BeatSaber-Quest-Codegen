// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LevelCollectionNavigationController
#include "GlobalNamespace/LevelCollectionNavigationController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ViewController
  class ViewController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LevelCollectionNavigationController/<>c__DisplayClass55_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LevelCollectionNavigationController::$$c__DisplayClass55_0 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public LevelCollectionNavigationController <>4__this
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::LevelCollectionNavigationController* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::LevelCollectionNavigationController*) == 0x8);
    // public HMUI.ViewController viewController
    // Size: 0x8
    // Offset: 0x18
    HMUI::ViewController* viewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    public:
    // Get instance field reference: public LevelCollectionNavigationController <>4__this
    GlobalNamespace::LevelCollectionNavigationController*& dyn_$$4__this();
    // Get instance field reference: public HMUI.ViewController viewController
    HMUI::ViewController*& dyn_viewController();
    // System.Void <PresentDetailViewController>b__0()
    // Offset: 0x114E8A4
    void $PresentDetailViewController$b__0();
    // public System.Void .ctor()
    // Offset: 0x114E548
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LevelCollectionNavigationController::$$c__DisplayClass55_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass55_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LevelCollectionNavigationController::$$c__DisplayClass55_0*, creationType>()));
    }
  }; // LevelCollectionNavigationController/<>c__DisplayClass55_0
  #pragma pack(pop)
  static check_size<sizeof(LevelCollectionNavigationController::$$c__DisplayClass55_0), 24 + sizeof(HMUI::ViewController*)> __GlobalNamespace_LevelCollectionNavigationController_$$c__DisplayClass55_0SizeCheck;
  static_assert(sizeof(LevelCollectionNavigationController::$$c__DisplayClass55_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass55_0*, "", "LevelCollectionNavigationController/<>c__DisplayClass55_0");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass55_0::$PresentDetailViewController$b__0
// Il2CppName: <PresentDetailViewController>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass55_0::*)()>(&GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass55_0::$PresentDetailViewController$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass55_0*), "<PresentDetailViewController>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::LevelCollectionNavigationController::$$c__DisplayClass55_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
