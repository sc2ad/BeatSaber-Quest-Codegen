// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.FlowCoordinator
#include "HMUI/FlowCoordinator.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::FlowCoordinator::$$c__DisplayClass35_0);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::FlowCoordinator::$$c__DisplayClass35_0*, "HMUI", "FlowCoordinator/<>c__DisplayClass35_0");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.FlowCoordinator/HMUI.<>c__DisplayClass35_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FlowCoordinator::$$c__DisplayClass35_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Action finishedCallback
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* finishedCallback;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // public HMUI.FlowCoordinator flowCoordinator
    // Size: 0x8
    // Offset: 0x18
    ::HMUI::FlowCoordinator* flowCoordinator;
    // Field size check
    static_assert(sizeof(::HMUI::FlowCoordinator*) == 0x8);
    // public HMUI.FlowCoordinator <>4__this
    // Size: 0x8
    // Offset: 0x20
    ::HMUI::FlowCoordinator* $$4__this;
    // Field size check
    static_assert(sizeof(::HMUI::FlowCoordinator*) == 0x8);
    public:
    // Get instance field reference: public System.Action finishedCallback
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_finishedCallback();
    // Get instance field reference: public HMUI.FlowCoordinator flowCoordinator
    [[deprecated("Use field access instead!")]] ::HMUI::FlowCoordinator*& dyn_flowCoordinator();
    // Get instance field reference: public HMUI.FlowCoordinator <>4__this
    [[deprecated("Use field access instead!")]] ::HMUI::FlowCoordinator*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x174B8E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FlowCoordinator::$$c__DisplayClass35_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::FlowCoordinator::$$c__DisplayClass35_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FlowCoordinator::$$c__DisplayClass35_0*, creationType>()));
    }
    // System.Void <PresentFlowCoordinator>b__1()
    // Offset: 0x174CDDC
    void $PresentFlowCoordinator$b__1();
    // System.Void <PresentFlowCoordinator>b__0()
    // Offset: 0x174CE5C
    void $PresentFlowCoordinator$b__0();
  }; // HMUI.FlowCoordinator/HMUI.<>c__DisplayClass35_0
  #pragma pack(pop)
  static check_size<sizeof(FlowCoordinator::$$c__DisplayClass35_0), 32 + sizeof(::HMUI::FlowCoordinator*)> __HMUI_FlowCoordinator_$$c__DisplayClass35_0SizeCheck;
  static_assert(sizeof(FlowCoordinator::$$c__DisplayClass35_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::FlowCoordinator::$$c__DisplayClass35_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HMUI::FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__1
// Il2CppName: <PresentFlowCoordinator>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::FlowCoordinator::$$c__DisplayClass35_0::*)()>(&HMUI::FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__1)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::FlowCoordinator::$$c__DisplayClass35_0*), "<PresentFlowCoordinator>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__0
// Il2CppName: <PresentFlowCoordinator>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::FlowCoordinator::$$c__DisplayClass35_0::*)()>(&HMUI::FlowCoordinator::$$c__DisplayClass35_0::$PresentFlowCoordinator$b__0)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::FlowCoordinator::$$c__DisplayClass35_0*), "<PresentFlowCoordinator>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
