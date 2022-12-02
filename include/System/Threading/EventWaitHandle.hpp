// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Threading.WaitHandle
#include "System/Threading/WaitHandle.hpp"
// Including type: System.Threading.EventResetMode
#include "System/Threading/EventResetMode.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Forward declaring type: EventWaitHandle
  class EventWaitHandle;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Threading::EventWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::EventWaitHandle*, "System.Threading", "EventWaitHandle");
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x29
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.EventWaitHandle
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 106F338
  class EventWaitHandle : public ::System::Threading::WaitHandle {
    public:
    // public System.Void .ctor(System.Boolean initialState, System.Threading.EventResetMode mode)
    // Offset: 0x229B0F8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventWaitHandle* New_ctor(bool initialState, ::System::Threading::EventResetMode mode) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::EventWaitHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventWaitHandle*, creationType>(initialState, mode)));
    }
    // public System.Void .ctor(System.Boolean initialState, System.Threading.EventResetMode mode, System.String name)
    // Offset: 0x229DF68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EventWaitHandle* New_ctor(bool initialState, ::System::Threading::EventResetMode mode, ::StringW name) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Threading::EventWaitHandle::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EventWaitHandle*, creationType>(initialState, mode, name)));
    }
    // public System.Boolean Reset()
    // Offset: 0x229E230
    bool Reset();
    // public System.Boolean Set()
    // Offset: 0x229CE5C
    bool Set();
  }; // System.Threading.EventWaitHandle
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Threading::EventWaitHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::EventWaitHandle::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Threading::EventWaitHandle::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::EventWaitHandle::*)()>(&System::Threading::EventWaitHandle::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::EventWaitHandle*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Threading::EventWaitHandle::Set
// Il2CppName: Set
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Threading::EventWaitHandle::*)()>(&System::Threading::EventWaitHandle::Set)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Threading::EventWaitHandle*), "Set", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
