// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: PersistentSingleton`1
#include "GlobalNamespace/PersistentSingleton_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // WARNING Size may be invalid!
  // Autogenerated type: PS4Helper
  // [TokenAttribute] Offset: FFFFFFFF
  class PS4Helper : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::PS4Helper*> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Action didGoToBackgroundExecutionEvent
    // Size: 0x8
    // Offset: 0x18
    System::Action* didGoToBackgroundExecutionEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Action didGoToForegroundExecutionEvent
    // Size: 0x8
    // Offset: 0x20
    System::Action* didGoToForegroundExecutionEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _backgroundExecution
    // Size: 0x1
    // Offset: 0x28
    bool backgroundExecution;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Action didGoToBackgroundExecutionEvent
    System::Action*& dyn_didGoToBackgroundExecutionEvent();
    // Get instance field reference: private System.Action didGoToForegroundExecutionEvent
    System::Action*& dyn_didGoToForegroundExecutionEvent();
    // Get instance field reference: private System.Boolean _backgroundExecution
    bool& dyn__backgroundExecution();
    // public System.Void add_didGoToBackgroundExecutionEvent(System.Action value)
    // Offset: 0x1124898
    void add_didGoToBackgroundExecutionEvent(System::Action* value);
    // public System.Void remove_didGoToBackgroundExecutionEvent(System.Action value)
    // Offset: 0x112493C
    void remove_didGoToBackgroundExecutionEvent(System::Action* value);
    // public System.Void add_didGoToForegroundExecutionEvent(System.Action value)
    // Offset: 0x11249E0
    void add_didGoToForegroundExecutionEvent(System::Action* value);
    // public System.Void remove_didGoToForegroundExecutionEvent(System.Action value)
    // Offset: 0x1124A84
    void remove_didGoToForegroundExecutionEvent(System::Action* value);
    // protected System.Void Update()
    // Offset: 0x1124B28
    void Update();
    // public System.Void .ctor()
    // Offset: 0x1124B4C
    // Implemented from: PersistentSingleton`1
    // Base method: System.Void PersistentSingleton_1::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PS4Helper* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PS4Helper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PS4Helper*, creationType>()));
    }
  }; // PS4Helper
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4Helper*, "", "PS4Helper");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::add_didGoToBackgroundExecutionEvent
// Il2CppName: add_didGoToBackgroundExecutionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4Helper::*)(System::Action*)>(&GlobalNamespace::PS4Helper::add_didGoToBackgroundExecutionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4Helper*), "add_didGoToBackgroundExecutionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::remove_didGoToBackgroundExecutionEvent
// Il2CppName: remove_didGoToBackgroundExecutionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4Helper::*)(System::Action*)>(&GlobalNamespace::PS4Helper::remove_didGoToBackgroundExecutionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4Helper*), "remove_didGoToBackgroundExecutionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::add_didGoToForegroundExecutionEvent
// Il2CppName: add_didGoToForegroundExecutionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4Helper::*)(System::Action*)>(&GlobalNamespace::PS4Helper::add_didGoToForegroundExecutionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4Helper*), "add_didGoToForegroundExecutionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::remove_didGoToForegroundExecutionEvent
// Il2CppName: remove_didGoToForegroundExecutionEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4Helper::*)(System::Action*)>(&GlobalNamespace::PS4Helper::remove_didGoToForegroundExecutionEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4Helper*), "remove_didGoToForegroundExecutionEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PS4Helper::*)()>(&GlobalNamespace::PS4Helper::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PS4Helper*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PS4Helper::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
