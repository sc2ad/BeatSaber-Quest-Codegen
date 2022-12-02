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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ObstacleControllerBase
  class ObstacleControllerBase;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ObstacleControllerBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ObstacleControllerBase*, "", "ObstacleControllerBase");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: ObstacleControllerBase
  // [TokenAttribute] Offset: FFFFFFFF
  class ObstacleControllerBase : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Action`1<ObstacleControllerBase> didInitEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* didInitEvent;
    // Field size check
    static_assert(sizeof(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>*) == 0x8);
    // private System.Action`2<ObstacleControllerBase,System.Single> didStartDissolvingEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>* didStartDissolvingEvent;
    // Field size check
    static_assert(sizeof(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action`1<ObstacleControllerBase> didInitEvent
    [[deprecated("Use field access instead!")]] ::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>*& dyn_didInitEvent();
    // Get instance field reference: private System.Action`2<ObstacleControllerBase,System.Single> didStartDissolvingEvent
    [[deprecated("Use field access instead!")]] ::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>*& dyn_didStartDissolvingEvent();
    // public System.Void add_didInitEvent(System.Action`1<ObstacleControllerBase> value)
    // Offset: 0x154C184
    void add_didInitEvent(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* value);
    // public System.Void remove_didInitEvent(System.Action`1<ObstacleControllerBase> value)
    // Offset: 0x154C228
    void remove_didInitEvent(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>* value);
    // public System.Void add_didStartDissolvingEvent(System.Action`2<ObstacleControllerBase,System.Single> value)
    // Offset: 0x154C2CC
    void add_didStartDissolvingEvent(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>* value);
    // public System.Void remove_didStartDissolvingEvent(System.Action`2<ObstacleControllerBase,System.Single> value)
    // Offset: 0x154C370
    void remove_didStartDissolvingEvent(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>* value);
    // protected System.Void .ctor()
    // Offset: 0x154BF58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObstacleControllerBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ObstacleControllerBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObstacleControllerBase*, creationType>()));
    }
    // protected System.Void InvokeDidInitEvent(ObstacleControllerBase obstacleController)
    // Offset: 0x154B950
    void InvokeDidInitEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController);
    // protected System.Void InvokeDidStartDissolvingEvent(ObstacleControllerBase obstacleController, System.Single duration)
    // Offset: 0x154C03C
    void InvokeDidStartDissolvingEvent(::GlobalNamespace::ObstacleControllerBase* obstacleController, float duration);
  }; // ObstacleControllerBase
  #pragma pack(pop)
  static check_size<sizeof(ObstacleControllerBase), 32 + sizeof(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>*)> __GlobalNamespace_ObstacleControllerBaseSizeCheck;
  static_assert(sizeof(ObstacleControllerBase) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ObstacleControllerBase::add_didInitEvent
// Il2CppName: add_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleControllerBase::*)(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>*)>(&GlobalNamespace::ObstacleControllerBase::add_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleControllerBase*), "add_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleControllerBase::remove_didInitEvent
// Il2CppName: remove_didInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleControllerBase::*)(::System::Action_1<::GlobalNamespace::ObstacleControllerBase*>*)>(&GlobalNamespace::ObstacleControllerBase::remove_didInitEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleControllerBase*), "remove_didInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleControllerBase::add_didStartDissolvingEvent
// Il2CppName: add_didStartDissolvingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleControllerBase::*)(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>*)>(&GlobalNamespace::ObstacleControllerBase::add_didStartDissolvingEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleControllerBase*), "add_didStartDissolvingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleControllerBase::remove_didStartDissolvingEvent
// Il2CppName: remove_didStartDissolvingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleControllerBase::*)(::System::Action_2<::GlobalNamespace::ObstacleControllerBase*, float>*)>(&GlobalNamespace::ObstacleControllerBase::remove_didStartDissolvingEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase"), ::il2cpp_utils::GetClassFromName("System", "Single")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleControllerBase*), "remove_didStartDissolvingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleControllerBase::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::ObstacleControllerBase::InvokeDidInitEvent
// Il2CppName: InvokeDidInitEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleControllerBase::*)(::GlobalNamespace::ObstacleControllerBase*)>(&GlobalNamespace::ObstacleControllerBase::InvokeDidInitEvent)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleControllerBase*), "InvokeDidInitEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ObstacleControllerBase::InvokeDidStartDissolvingEvent
// Il2CppName: InvokeDidStartDissolvingEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ObstacleControllerBase::*)(::GlobalNamespace::ObstacleControllerBase*, float)>(&GlobalNamespace::ObstacleControllerBase::InvokeDidStartDissolvingEvent)> {
  static const MethodInfo* get() {
    static auto* obstacleController = &::il2cpp_utils::GetClassFromName("", "ObstacleControllerBase")->byval_arg;
    static auto* duration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ObstacleControllerBase*), "InvokeDidStartDissolvingEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obstacleController, duration});
  }
};
