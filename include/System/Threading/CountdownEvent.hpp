// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEventSlim
  class ManualResetEventSlim;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: CountdownEvent
  class CountdownEvent;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::CountdownEvent);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::CountdownEvent*, "System.Threading", "CountdownEvent");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.CountdownEvent
  // [TokenAttribute] Offset: FFFFFFFF
  // [DebuggerDisplayAttribute] Offset: 106F060
  // [ComVisibleAttribute] Offset: 106F060
  class CountdownEvent : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // private System.Int32 m_initialCount
    // Size: 0x4
    // Offset: 0x10
    int m_initialCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 m_currentCount
    // Size: 0x4
    // Offset: 0x14
    int m_currentCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Threading.ManualResetEventSlim m_event
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::ManualResetEventSlim* m_event;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEventSlim*) == 0x8);
    // private System.Boolean m_disposed
    // Size: 0x1
    // Offset: 0x20
    bool m_disposed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private System.Int32 m_initialCount
    [[deprecated("Use field access instead!")]] int& dyn_m_initialCount();
    // Get instance field reference: private System.Int32 m_currentCount
    [[deprecated("Use field access instead!")]] int& dyn_m_currentCount();
    // Get instance field reference: private System.Threading.ManualResetEventSlim m_event
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEventSlim*& dyn_m_event();
    // Get instance field reference: private System.Boolean m_disposed
    [[deprecated("Use field access instead!")]] bool& dyn_m_disposed();
    // public System.Int32 get_CurrentCount()
    // Offset: 0x229B80C
    int get_CurrentCount();
    // public System.Void .ctor(System.Int32 initialCount)
    // Offset: 0x229B6DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CountdownEvent* New_ctor(int initialCount) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::CountdownEvent::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CountdownEvent*, creationType>(initialCount)));
    }
    // public System.Void Dispose()
    // Offset: 0x229B830
    void Dispose();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x229B8AC
    void Dispose(bool disposing);
    // public System.Boolean Signal()
    // Offset: 0x229B964
    bool Signal();
    // private System.Void ThrowIfDisposed()
    // Offset: 0x229BA4C
    void ThrowIfDisposed();
  }; // System.Threading.CountdownEvent
  #pragma pack(pop)
  static check_size<sizeof(CountdownEvent), 32 + sizeof(bool)> __System_Threading_CountdownEventSizeCheck;
  static_assert(sizeof(CountdownEvent) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::CountdownEvent::get_CurrentCount
// Il2CppName: get_CurrentCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Threading::CountdownEvent::*)()>(&System::Threading::CountdownEvent::get_CurrentCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CountdownEvent*), "get_CurrentCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CountdownEvent::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::CountdownEvent::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CountdownEvent::*)()>(&System::Threading::CountdownEvent::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CountdownEvent*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CountdownEvent::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CountdownEvent::*)(bool)>(&System::Threading::CountdownEvent::Dispose)> {
  static const MethodInfo* get() {
    static auto* disposing = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CountdownEvent*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{disposing});
  }
};
// Writing MetadataGetter for method: System::Threading::CountdownEvent::Signal
// Il2CppName: Signal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::CountdownEvent::*)()>(&System::Threading::CountdownEvent::Signal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CountdownEvent*), "Signal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::CountdownEvent::ThrowIfDisposed
// Il2CppName: ThrowIfDisposed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Threading::CountdownEvent::*)()>(&System::Threading::CountdownEvent::ThrowIfDisposed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::CountdownEvent*), "ThrowIfDisposed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
