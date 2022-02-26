// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: Stopwatch
  class Stopwatch;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Diagnostics::Stopwatch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Stopwatch*, "System.Diagnostics", "Stopwatch");
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x21
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.Stopwatch
  // [TokenAttribute] Offset: FFFFFFFF
  class Stopwatch : public ::Il2CppObject {
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
    // private System.Int64 elapsed
    // Size: 0x8
    // Offset: 0x10
    int64_t elapsed;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 started
    // Size: 0x8
    // Offset: 0x18
    int64_t started;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Boolean is_running
    // Size: 0x1
    // Offset: 0x20
    bool is_running;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Get static field: static public readonly System.Int64 Frequency
    static int64_t _get_Frequency();
    // Set static field: static public readonly System.Int64 Frequency
    static void _set_Frequency(int64_t value);
    // Get static field: static public readonly System.Boolean IsHighResolution
    static bool _get_IsHighResolution();
    // Set static field: static public readonly System.Boolean IsHighResolution
    static void _set_IsHighResolution(bool value);
    // Get instance field reference: private System.Int64 elapsed
    int64_t& dyn_elapsed();
    // Get instance field reference: private System.Int64 started
    int64_t& dyn_started();
    // Get instance field reference: private System.Boolean is_running
    bool& dyn_is_running();
    // public System.TimeSpan get_Elapsed()
    // Offset: 0x1ED9DF8
    ::System::TimeSpan get_Elapsed();
    // public System.Int64 get_ElapsedMilliseconds()
    // Offset: 0x1ED9F94
    int64_t get_ElapsedMilliseconds();
    // public System.Int64 get_ElapsedTicks()
    // Offset: 0x1ED9F14
    int64_t get_ElapsedTicks();
    // public System.Boolean get_IsRunning()
    // Offset: 0x1EDA0B4
    bool get_IsRunning();
    // static private System.Void .cctor()
    // Offset: 0x1EDA238
    static void _cctor();
    // static public System.Int64 GetTimestamp()
    // Offset: 0x1ED9DEC
    static int64_t GetTimestamp();
    // public System.Void Reset()
    // Offset: 0x1EDA0BC
    void Reset();
    // public System.Void Start()
    // Offset: 0x1EDA0C8
    void Start();
    // public System.Void Stop()
    // Offset: 0x1EDA140
    void Stop();
    // public System.Void Restart()
    // Offset: 0x1EDA1C8
    void Restart();
    // public System.Void .ctor()
    // Offset: 0x1ED9DF0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stopwatch* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Diagnostics::Stopwatch::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stopwatch*, creationType>()));
    }
  }; // System.Diagnostics.Stopwatch
  #pragma pack(pop)
  static check_size<sizeof(Stopwatch), 32 + sizeof(bool)> __System_Diagnostics_StopwatchSizeCheck;
  static_assert(sizeof(Stopwatch) == 0x21);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::get_Elapsed
// Il2CppName: get_Elapsed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::get_Elapsed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "get_Elapsed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::get_ElapsedMilliseconds
// Il2CppName: get_ElapsedMilliseconds
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::get_ElapsedMilliseconds)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "get_ElapsedMilliseconds", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::get_ElapsedTicks
// Il2CppName: get_ElapsedTicks
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::get_ElapsedTicks)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "get_ElapsedTicks", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::get_IsRunning
// Il2CppName: get_IsRunning
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::get_IsRunning)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "get_IsRunning", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&System::Diagnostics::Stopwatch::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::GetTimestamp
// Il2CppName: GetTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (*)()>(&System::Diagnostics::Stopwatch::GetTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "GetTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::Stop
// Il2CppName: Stop
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::Stop)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "Stop", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::Restart
// Il2CppName: Restart
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Diagnostics::Stopwatch::*)()>(&System::Diagnostics::Stopwatch::Restart)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Diagnostics::Stopwatch*), "Restart", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Diagnostics::Stopwatch::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
