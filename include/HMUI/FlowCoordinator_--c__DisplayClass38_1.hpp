// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
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
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.FlowCoordinator/HMUI.<>c__DisplayClass38_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FlowCoordinator::$$c__DisplayClass38_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public HMUI.ViewController topViewController
    // Size: 0x8
    // Offset: 0x10
    HMUI::ViewController* topViewController;
    // Field size check
    static_assert(sizeof(HMUI::ViewController*) == 0x8);
    // public HMUI.FlowCoordinator/HMUI.<>c__DisplayClass38_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    HMUI::FlowCoordinator::$$c__DisplayClass38_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(HMUI::FlowCoordinator::$$c__DisplayClass38_0*) == 0x8);
    public:
    // Get instance field reference: public HMUI.ViewController topViewController
    HMUI::ViewController*& dyn_topViewController();
    // Get instance field reference: public HMUI.FlowCoordinator/HMUI.<>c__DisplayClass38_0 CS$<>8__locals1
    HMUI::FlowCoordinator::$$c__DisplayClass38_0*& dyn_CS$$$8__locals1();
    // System.Void <PresentViewController>b__0()
    // Offset: 0x1489508
    void $PresentViewController$b__0();
    // public System.Void .ctor()
    // Offset: 0x148862C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlowCoordinator::$$c__DisplayClass38_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::FlowCoordinator::$$c__DisplayClass38_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlowCoordinator::$$c__DisplayClass38_1*, creationType>()));
    }
  }; // HMUI.FlowCoordinator/HMUI.<>c__DisplayClass38_1
  #pragma pack(pop)
  static check_size<sizeof(FlowCoordinator::$$c__DisplayClass38_1), 24 + sizeof(HMUI::FlowCoordinator::$$c__DisplayClass38_0*)> __HMUI_FlowCoordinator_$$c__DisplayClass38_1SizeCheck;
  static_assert(sizeof(FlowCoordinator::$$c__DisplayClass38_1) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::FlowCoordinator::$$c__DisplayClass38_1*, "HMUI", "FlowCoordinator/<>c__DisplayClass38_1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::FlowCoordinator::$$c__DisplayClass38_1::$PresentViewController$b__0
// Il2CppName: <PresentViewController>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::FlowCoordinator::$$c__DisplayClass38_1::*)()>(&HMUI::FlowCoordinator::$$c__DisplayClass38_1::$PresentViewController$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::FlowCoordinator::$$c__DisplayClass38_1*), "<PresentViewController>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::FlowCoordinator::$$c__DisplayClass38_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
