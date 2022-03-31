// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Net.TimerThread
#include "System/Net/TimerThread.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::TimerThread::Timer);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::TimerThread::Timer*, "System.Net", "TimerThread/Timer");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.TimerThread/System.Net.Timer
  // [TokenAttribute] Offset: FFFFFFFF
  class TimerThread::Timer : public ::Il2CppObject/*, public ::System::IDisposable*/ {
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
    // private readonly System.Int32 m_StartTimeMilliseconds
    // Size: 0x4
    // Offset: 0x10
    int m_StartTimeMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly System.Int32 m_DurationMilliseconds
    // Size: 0x4
    // Offset: 0x14
    int m_DurationMilliseconds;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly System.Int32 m_StartTimeMilliseconds
    int& dyn_m_StartTimeMilliseconds();
    // Get instance field reference: private readonly System.Int32 m_DurationMilliseconds
    int& dyn_m_DurationMilliseconds();
    // System.Void .ctor(System.Int32 durationMilliseconds)
    // Offset: 0x1B14FEC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TimerThread::Timer* New_ctor(int durationMilliseconds) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::TimerThread::Timer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TimerThread::Timer*, creationType>(durationMilliseconds)));
    }
    // System.Boolean Cancel()
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool Cancel();
    // public System.Void Dispose()
    // Offset: 0x1B15024
    void Dispose();
  }; // System.Net.TimerThread/System.Net.Timer
  #pragma pack(pop)
  static check_size<sizeof(TimerThread::Timer), 20 + sizeof(int)> __System_Net_TimerThread_TimerSizeCheck;
  static_assert(sizeof(TimerThread::Timer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::Cancel
// Il2CppName: Cancel
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::Cancel)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "Cancel", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::TimerThread::Timer::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::TimerThread::Timer::*)()>(&System::Net::TimerThread::Timer::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::TimerThread::Timer*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
