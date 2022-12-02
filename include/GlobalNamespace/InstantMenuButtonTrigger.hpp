// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ITickable
#include "Zenject/ITickable.hpp"
// Including type: IMenuButtonTrigger
#include "GlobalNamespace/IMenuButtonTrigger.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: VRControllersInputManager
  class VRControllersInputManager;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: InstantMenuButtonTrigger
  class InstantMenuButtonTrigger;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::InstantMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstantMenuButtonTrigger*, "", "InstantMenuButtonTrigger");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: InstantMenuButtonTrigger
  // [TokenAttribute] Offset: FFFFFFFF
  class InstantMenuButtonTrigger : public ::Il2CppObject/*, public ::Zenject::ITickable, public ::GlobalNamespace::IMenuButtonTrigger*/ {
    public:
    public:
    // [InjectAttribute] Offset: 0x1116A58
    // private readonly VRControllersInputManager _vrControllersInputManager
    // Size: 0x8
    // Offset: 0x10
    ::GlobalNamespace::VRControllersInputManager* vrControllersInputManager;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::VRControllersInputManager*) == 0x8);
    // private System.Action menuButtonTriggeredEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* menuButtonTriggeredEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::ITickable
    operator ::Zenject::ITickable() noexcept {
      return *reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: i_ITickable
    inline ::Zenject::ITickable* i_ITickable() noexcept {
      return reinterpret_cast<::Zenject::ITickable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IMenuButtonTrigger
    operator ::GlobalNamespace::IMenuButtonTrigger() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IMenuButtonTrigger*>(this);
    }
    // Creating interface conversion operator: i_IMenuButtonTrigger
    inline ::GlobalNamespace::IMenuButtonTrigger* i_IMenuButtonTrigger() noexcept {
      return reinterpret_cast<::GlobalNamespace::IMenuButtonTrigger*>(this);
    }
    // Get instance field reference: private readonly VRControllersInputManager _vrControllersInputManager
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::VRControllersInputManager*& dyn__vrControllersInputManager();
    // Get instance field reference: private System.Action menuButtonTriggeredEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_menuButtonTriggeredEvent();
    // public System.Void add_menuButtonTriggeredEvent(System.Action value)
    // Offset: 0x13F5DA8
    void add_menuButtonTriggeredEvent(::System::Action* value);
    // public System.Void remove_menuButtonTriggeredEvent(System.Action value)
    // Offset: 0x13F5E4C
    void remove_menuButtonTriggeredEvent(::System::Action* value);
    // public System.Void .ctor()
    // Offset: 0x13F5F3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InstantMenuButtonTrigger* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::InstantMenuButtonTrigger::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InstantMenuButtonTrigger*, creationType>()));
    }
    // public System.Void Tick()
    // Offset: 0x13F5EF0
    void Tick();
  }; // InstantMenuButtonTrigger
  #pragma pack(pop)
  static check_size<sizeof(InstantMenuButtonTrigger), 24 + sizeof(::System::Action*)> __GlobalNamespace_InstantMenuButtonTriggerSizeCheck;
  static_assert(sizeof(InstantMenuButtonTrigger) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::InstantMenuButtonTrigger::add_menuButtonTriggeredEvent
// Il2CppName: add_menuButtonTriggeredEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantMenuButtonTrigger::*)(::System::Action*)>(&GlobalNamespace::InstantMenuButtonTrigger::add_menuButtonTriggeredEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InstantMenuButtonTrigger*), "add_menuButtonTriggeredEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InstantMenuButtonTrigger::remove_menuButtonTriggeredEvent
// Il2CppName: remove_menuButtonTriggeredEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantMenuButtonTrigger::*)(::System::Action*)>(&GlobalNamespace::InstantMenuButtonTrigger::remove_menuButtonTriggeredEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InstantMenuButtonTrigger*), "remove_menuButtonTriggeredEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::InstantMenuButtonTrigger::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::InstantMenuButtonTrigger::Tick
// Il2CppName: Tick
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::InstantMenuButtonTrigger::*)()>(&GlobalNamespace::InstantMenuButtonTrigger::Tick)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::InstantMenuButtonTrigger*), "Tick", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
