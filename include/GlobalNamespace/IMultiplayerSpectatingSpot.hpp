// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerObservable
  class IMultiplayerObservable;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSpectatingSpot
  class IMultiplayerSpectatingSpot;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IMultiplayerSpectatingSpot);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerSpectatingSpot*, "", "IMultiplayerSpectatingSpot");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IMultiplayerSpectatingSpot
  // [TokenAttribute] Offset: FFFFFFFF
  class IMultiplayerSpectatingSpot {
    public:
    // public System.Boolean get_isMain()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isMain();
    // public IMultiplayerObservable get_observable()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::GlobalNamespace::IMultiplayerObservable* get_observable();
    // public UnityEngine.Transform get_transform()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::UnityEngine::Transform* get_transform();
    // public System.String get_spotName()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW get_spotName();
    // public System.Void add_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void remove_hasBeenRemovedEvent(System.Action`1<IMultiplayerSpectatingSpot> value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_hasBeenRemovedEvent(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>* value);
    // public System.Void SetIsObserved(System.Boolean isObserved)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void SetIsObserved(bool isObserved);
  }; // IMultiplayerSpectatingSpot
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_isMain
// Il2CppName: get_isMain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_isMain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_isMain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_observable
// Il2CppName: get_observable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IMultiplayerObservable* (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_observable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_observable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_transform
// Il2CppName: get_transform
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Transform* (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_transform)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_transform", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::get_spotName
// Il2CppName: get_spotName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::IMultiplayerSpectatingSpot::*)()>(&GlobalNamespace::IMultiplayerSpectatingSpot::get_spotName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "get_spotName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::add_hasBeenRemovedEvent
// Il2CppName: add_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerSpectatingSpot::*)(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::IMultiplayerSpectatingSpot::add_hasBeenRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "add_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::remove_hasBeenRemovedEvent
// Il2CppName: remove_hasBeenRemovedEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerSpectatingSpot::*)(::System::Action_1<::GlobalNamespace::IMultiplayerSpectatingSpot*>*)>(&GlobalNamespace::IMultiplayerSpectatingSpot::remove_hasBeenRemovedEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "IMultiplayerSpectatingSpot")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "remove_hasBeenRemovedEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IMultiplayerSpectatingSpot::SetIsObserved
// Il2CppName: SetIsObserved
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IMultiplayerSpectatingSpot::*)(bool)>(&GlobalNamespace::IMultiplayerSpectatingSpot::SetIsObserved)> {
  static const MethodInfo* get() {
    static auto* isObserved = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IMultiplayerSpectatingSpot*), "SetIsObserved", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{isObserved});
  }
};
