// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IGamePause
#include "GlobalNamespace/IGamePause.hpp"
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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: MockPause
  class MockPause;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::MockPause);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MockPause*, "", "MockPause");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: MockPause
  // [TokenAttribute] Offset: FFFFFFFF
  class MockPause : public ::Il2CppObject/*, public ::GlobalNamespace::IGamePause*/ {
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
    // private System.Action didPauseEvent
    // Size: 0x8
    // Offset: 0x10
    ::System::Action* didPauseEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action willResumeEvent
    // Size: 0x8
    // Offset: 0x18
    ::System::Action* willResumeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Action didResumeEvent
    // Size: 0x8
    // Offset: 0x20
    ::System::Action* didResumeEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IGamePause
    operator ::GlobalNamespace::IGamePause() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IGamePause*>(this);
    }
    // Get instance field reference: private System.Action didPauseEvent
    ::System::Action*& dyn_didPauseEvent();
    // Get instance field reference: private System.Action willResumeEvent
    ::System::Action*& dyn_willResumeEvent();
    // Get instance field reference: private System.Action didResumeEvent
    ::System::Action*& dyn_didResumeEvent();
    // public System.Boolean get_isPaused()
    // Offset: 0x13C5C6C
    bool get_isPaused();
    // public System.Void add_didPauseEvent(System.Action value)
    // Offset: 0x13C5C74
    void add_didPauseEvent(::System::Action* value);
    // public System.Void remove_didPauseEvent(System.Action value)
    // Offset: 0x13C5D18
    void remove_didPauseEvent(::System::Action* value);
    // public System.Void add_willResumeEvent(System.Action value)
    // Offset: 0x13C5DBC
    void add_willResumeEvent(::System::Action* value);
    // public System.Void remove_willResumeEvent(System.Action value)
    // Offset: 0x13C5E60
    void remove_willResumeEvent(::System::Action* value);
    // public System.Void add_didResumeEvent(System.Action value)
    // Offset: 0x13C5F04
    void add_didResumeEvent(::System::Action* value);
    // public System.Void remove_didResumeEvent(System.Action value)
    // Offset: 0x13C5FA8
    void remove_didResumeEvent(::System::Action* value);
    // public System.Void Pause()
    // Offset: 0x13C604C
    void Pause();
    // public System.Void WillResume()
    // Offset: 0x13C60AC
    void WillResume();
    // public System.Void Resume()
    // Offset: 0x13C610C
    void Resume();
    // public System.Void .ctor()
    // Offset: 0x13C616C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MockPause* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::MockPause::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MockPause*, creationType>()));
    }
  }; // MockPause
  #pragma pack(pop)
  static check_size<sizeof(MockPause), 32 + sizeof(::System::Action*)> __GlobalNamespace_MockPauseSizeCheck;
  static_assert(sizeof(MockPause) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MockPause::get_isPaused
// Il2CppName: get_isPaused
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::MockPause::*)()>(&GlobalNamespace::MockPause::get_isPaused)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "get_isPaused", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::add_didPauseEvent
// Il2CppName: add_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)(::System::Action*)>(&GlobalNamespace::MockPause::add_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "add_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::remove_didPauseEvent
// Il2CppName: remove_didPauseEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)(::System::Action*)>(&GlobalNamespace::MockPause::remove_didPauseEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "remove_didPauseEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::add_willResumeEvent
// Il2CppName: add_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)(::System::Action*)>(&GlobalNamespace::MockPause::add_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "add_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::remove_willResumeEvent
// Il2CppName: remove_willResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)(::System::Action*)>(&GlobalNamespace::MockPause::remove_willResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "remove_willResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::add_didResumeEvent
// Il2CppName: add_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)(::System::Action*)>(&GlobalNamespace::MockPause::add_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "add_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::remove_didResumeEvent
// Il2CppName: remove_didResumeEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)(::System::Action*)>(&GlobalNamespace::MockPause::remove_didResumeEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "remove_didResumeEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::Pause
// Il2CppName: Pause
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)()>(&GlobalNamespace::MockPause::Pause)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "Pause", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::WillResume
// Il2CppName: WillResume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)()>(&GlobalNamespace::MockPause::WillResume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "WillResume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::Resume
// Il2CppName: Resume
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::MockPause::*)()>(&GlobalNamespace::MockPause::Resume)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::MockPause*), "Resume", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::MockPause::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
