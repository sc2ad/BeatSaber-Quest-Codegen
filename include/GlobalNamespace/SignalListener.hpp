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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: Signal
  class Signal;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityEvent
  class UnityEvent;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: SignalListener
  class SignalListener;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::SignalListener);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SignalListener*, "", "SignalListener");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: SignalListener
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalListener : public ::UnityEngine::MonoBehaviour {
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
    // private Signal _signal
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::Signal* signal;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Signal*) == 0x8);
    // private UnityEngine.Events.UnityEvent _unityEvent
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Events::UnityEvent* unityEvent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Events::UnityEvent*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private Signal _signal
    ::GlobalNamespace::Signal*& dyn__signal();
    // Get instance field reference: private UnityEngine.Events.UnityEvent _unityEvent
    ::UnityEngine::Events::UnityEvent*& dyn__unityEvent();
    // protected System.Void OnEnable()
    // Offset: 0x299CD7C
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0x299CE10
    void OnDisable();
    // private System.Void HandleEvent()
    // Offset: 0x299CE98
    void HandleEvent();
    // public System.Void .ctor()
    // Offset: 0x299CEB4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalListener* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::SignalListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalListener*, creationType>()));
    }
  }; // SignalListener
  #pragma pack(pop)
  static check_size<sizeof(SignalListener), 32 + sizeof(::UnityEngine::Events::UnityEvent*)> __GlobalNamespace_SignalListenerSizeCheck;
  static_assert(sizeof(SignalListener) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::SignalListener::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalListener::*)()>(&GlobalNamespace::SignalListener::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SignalListener*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SignalListener::OnDisable
// Il2CppName: OnDisable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalListener::*)()>(&GlobalNamespace::SignalListener::OnDisable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SignalListener*), "OnDisable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SignalListener::HandleEvent
// Il2CppName: HandleEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::SignalListener::*)()>(&GlobalNamespace::SignalListener::HandleEvent)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::SignalListener*), "HandleEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::SignalListener::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
