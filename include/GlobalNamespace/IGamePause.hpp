// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IGamePause
  class IGamePause;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IGamePause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IGamePause*, "", "IGamePause");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IGamePause
  // [TokenAttribute] Offset: FFFFFFFF
  class IGamePause {
    public:
    // public System.Boolean get_isPaused()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool get_isPaused();
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_didPauseEvent(::System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_didPauseEvent(::System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_willResumeEvent(::System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_willResumeEvent(::System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void add_didResumeEvent(::System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void remove_didResumeEvent(::System::Action* value);
    // public System.Void Pause()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Pause();
    // public System.Void WillResume()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void WillResume();
    // public System.Void Resume()
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Resume();
  }; // IGamePause
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::get_isPaused
// Il2CppName: get_isPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IGamePause::*)()>(&GlobalNamespace::IGamePause::get_isPaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "get_isPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::add_didPauseEvent
// Il2CppName: add_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)(::System::Action*)>(&GlobalNamespace::IGamePause::add_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "add_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)(::System::Action*)>(&GlobalNamespace::IGamePause::remove_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "remove_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::add_willResumeEvent
// Il2CppName: add_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)(::System::Action*)>(&GlobalNamespace::IGamePause::add_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "add_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::remove_willResumeEvent
// Il2CppName: remove_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)(::System::Action*)>(&GlobalNamespace::IGamePause::remove_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "remove_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::add_didResumeEvent
// Il2CppName: add_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)(::System::Action*)>(&GlobalNamespace::IGamePause::add_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "add_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)(::System::Action*)>(&GlobalNamespace::IGamePause::remove_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "remove_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)()>(&GlobalNamespace::IGamePause::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::WillResume
// Il2CppName: WillResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)()>(&GlobalNamespace::IGamePause::WillResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "WillResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IGamePause::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IGamePause::*)()>(&GlobalNamespace::IGamePause::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IGamePause*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
