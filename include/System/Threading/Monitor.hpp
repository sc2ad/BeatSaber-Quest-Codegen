// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: Monitor
  class Monitor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::Monitor);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Monitor*, "System.Threading", "Monitor");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Monitor
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 11AAEE4
  class Monitor : public ::Il2CppObject {
    public:
    // static public System.Void Enter(System.Object obj)
    // Offset: 0x1DCBC0C
    static void Enter(::Il2CppObject* obj);
    // static public System.Void Enter(System.Object obj, ref System.Boolean lockTaken)
    // Offset: 0x1DCB248
    static void Enter(::Il2CppObject* obj, ByRef<bool> lockTaken);
    // static private System.Void ThrowLockTakenException()
    // Offset: 0x1DCBC10
    static void ThrowLockTakenException();
    // static public System.Void Exit(System.Object obj)
    // Offset: 0x1DCB268
    static void Exit(::Il2CppObject* obj);
    // static public System.Boolean Wait(System.Object obj, System.Int32 millisecondsTimeout, System.Boolean exitContext)
    // Offset: 0x1DCBCA8
    static bool Wait(::Il2CppObject* obj, int millisecondsTimeout, bool exitContext);
    // static public System.Boolean Wait(System.Object obj, System.Int32 millisecondsTimeout)
    // Offset: 0x1DCB944
    static bool Wait(::Il2CppObject* obj, int millisecondsTimeout);
    // static public System.Void Pulse(System.Object obj)
    // Offset: 0x1DCBE0C
    static void Pulse(::Il2CppObject* obj);
    // static public System.Void PulseAll(System.Object obj)
    // Offset: 0x1DCB408
    static void PulseAll(::Il2CppObject* obj);
    // static private System.Boolean Monitor_test_synchronised(System.Object obj)
    // Offset: 0x1DCBFA0
    static bool Monitor_test_synchronised(::Il2CppObject* obj);
    // static private System.Void Monitor_pulse(System.Object obj)
    // Offset: 0x1DCBFA4
    static void Monitor_pulse(::Il2CppObject* obj);
    // static private System.Void ObjPulse(System.Object obj)
    // Offset: 0x1DCBE90
    static void ObjPulse(::Il2CppObject* obj);
    // static private System.Void Monitor_pulse_all(System.Object obj)
    // Offset: 0x1DCBFDC
    static void Monitor_pulse_all(::Il2CppObject* obj);
    // static private System.Void ObjPulseAll(System.Object obj)
    // Offset: 0x1DCBF18
    static void ObjPulseAll(::Il2CppObject* obj);
    // static private System.Boolean Monitor_wait(System.Object obj, System.Int32 ms)
    // Offset: 0x1DCBFE0
    static bool Monitor_wait(::Il2CppObject* obj, int ms);
    // static private System.Boolean ObjWait(System.Boolean exitContext, System.Int32 millisecondsTimeout, System.Object obj)
    // Offset: 0x1DCBD40
    static bool ObjWait(bool exitContext, int millisecondsTimeout, ::Il2CppObject* obj);
    // static private System.Void try_enter_with_atomic_var(System.Object obj, System.Int32 millisecondsTimeout, ref System.Boolean lockTaken)
    // Offset: 0x1DCBFE4
    static void try_enter_with_atomic_var(::Il2CppObject* obj, int millisecondsTimeout, ByRef<bool> lockTaken);
    // static private System.Void ReliableEnterTimeout(System.Object obj, System.Int32 timeout, ref System.Boolean lockTaken)
    // Offset: 0x1DCBFE8
    static void ReliableEnterTimeout(::Il2CppObject* obj, int timeout, ByRef<bool> lockTaken);
    // static private System.Void ReliableEnter(System.Object obj, ref System.Boolean lockTaken)
    // Offset: 0x1DCBC9C
    static void ReliableEnter(::Il2CppObject* obj, ByRef<bool> lockTaken);
  }; // System.Threading.Monitor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::Monitor::Enter
// Il2CppName: Enter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::Enter)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Enter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Enter
// Il2CppName: Enter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ByRef<bool>)>(&System::Threading::Monitor::Enter)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Enter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, lockTaken});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::ThrowLockTakenException
// Il2CppName: ThrowLockTakenException
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Threading::Monitor::ThrowLockTakenException)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "ThrowLockTakenException", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Exit
// Il2CppName: Exit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::Exit)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Exit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, int, bool)>(&System::Threading::Monitor::Wait)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, millisecondsTimeout, exitContext});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Wait
// Il2CppName: Wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, int)>(&System::Threading::Monitor::Wait)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, millisecondsTimeout});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Pulse
// Il2CppName: Pulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::Pulse)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Pulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::PulseAll
// Il2CppName: PulseAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::PulseAll)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "PulseAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Monitor_test_synchronised
// Il2CppName: Monitor_test_synchronised
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&System::Threading::Monitor::Monitor_test_synchronised)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Monitor_test_synchronised", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Monitor_pulse
// Il2CppName: Monitor_pulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::Monitor_pulse)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Monitor_pulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::ObjPulse
// Il2CppName: ObjPulse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::ObjPulse)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "ObjPulse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Monitor_pulse_all
// Il2CppName: Monitor_pulse_all
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::Monitor_pulse_all)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Monitor_pulse_all", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::ObjPulseAll
// Il2CppName: ObjPulseAll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*)>(&System::Threading::Monitor::ObjPulseAll)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "ObjPulseAll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::Monitor_wait
// Il2CppName: Monitor_wait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, int)>(&System::Threading::Monitor::Monitor_wait)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* ms = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "Monitor_wait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, ms});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::ObjWait
// Il2CppName: ObjWait
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(bool, int, ::Il2CppObject*)>(&System::Threading::Monitor::ObjWait)> {
  static const MethodInfo* get() {
    static auto* exitContext = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "ObjWait", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{exitContext, millisecondsTimeout, obj});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::try_enter_with_atomic_var
// Il2CppName: try_enter_with_atomic_var
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, int, ByRef<bool>)>(&System::Threading::Monitor::try_enter_with_atomic_var)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* millisecondsTimeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "try_enter_with_atomic_var", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, millisecondsTimeout, lockTaken});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::ReliableEnterTimeout
// Il2CppName: ReliableEnterTimeout
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, int, ByRef<bool>)>(&System::Threading::Monitor::ReliableEnterTimeout)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* timeout = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "ReliableEnterTimeout", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, timeout, lockTaken});
  }
};
// Writing MetadataGetter for method: System::Threading::Monitor::ReliableEnter
// Il2CppName: ReliableEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Il2CppObject*, ByRef<bool>)>(&System::Threading::Monitor::ReliableEnter)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* lockTaken = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::Monitor*), "ReliableEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, lockTaken});
  }
};
