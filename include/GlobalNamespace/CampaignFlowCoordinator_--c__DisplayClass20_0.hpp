// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: CampaignFlowCoordinator
#include "GlobalNamespace/CampaignFlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MissionHelpViewController
  class MissionHelpViewController;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0*, "", "CampaignFlowCoordinator/<>c__DisplayClass20_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: CampaignFlowCoordinator/<>c__DisplayClass20_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class CampaignFlowCoordinator::$$c__DisplayClass20_0 : public ::Il2CppObject {
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
    // public CampaignFlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::CampaignFlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::CampaignFlowCoordinator*) == 0x8);
    // public MissionHelpViewController viewController
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::MissionHelpViewController* viewController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::MissionHelpViewController*) == 0x8);
    public:
    // Get instance field reference: public CampaignFlowCoordinator <>4__this
    ::GlobalNamespace::CampaignFlowCoordinator*& dyn_$$4__this();
    // Get instance field reference: public MissionHelpViewController viewController
    ::GlobalNamespace::MissionHelpViewController*& dyn_viewController();
    // System.Void <HandleMissionHelpViewControllerDidFinish>b__0()
    // Offset: 0x13525EC
    void $HandleMissionHelpViewControllerDidFinish$b__0();
    // public System.Void .ctor()
    // Offset: 0x1352114
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CampaignFlowCoordinator::$$c__DisplayClass20_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CampaignFlowCoordinator::$$c__DisplayClass20_0*, creationType>()));
    }
  }; // CampaignFlowCoordinator/<>c__DisplayClass20_0
  #pragma pack(pop)
  static check_size<sizeof(CampaignFlowCoordinator::$$c__DisplayClass20_0), 24 + sizeof(::GlobalNamespace::MissionHelpViewController*)> __GlobalNamespace_CampaignFlowCoordinator_$$c__DisplayClass20_0SizeCheck;
  static_assert(sizeof(CampaignFlowCoordinator::$$c__DisplayClass20_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::$HandleMissionHelpViewControllerDidFinish$b__0
// Il2CppName: <HandleMissionHelpViewControllerDidFinish>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::*)()>(&GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::$HandleMissionHelpViewControllerDidFinish$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0*), "<HandleMissionHelpViewControllerDidFinish>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::CampaignFlowCoordinator::$$c__DisplayClass20_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
