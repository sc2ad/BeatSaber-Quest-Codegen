// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Forward declaring type: HttpStreamAsyncResult
  class HttpStreamAsyncResult;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Net::HttpStreamAsyncResult);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpStreamAsyncResult*, "System.Net", "HttpStreamAsyncResult");
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.HttpStreamAsyncResult
  // [TokenAttribute] Offset: FFFFFFFF
  class HttpStreamAsyncResult : public ::Il2CppObject/*, public ::System::IAsyncResult*/ {
    public:
    public:
    // private System.Object locker
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* locker;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Threading.ManualResetEvent handle
    // Size: 0x8
    // Offset: 0x18
    ::System::Threading::ManualResetEvent* handle;
    // Field size check
    static_assert(sizeof(::System::Threading::ManualResetEvent*) == 0x8);
    // private System.Boolean completed
    // Size: 0x1
    // Offset: 0x20
    bool completed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: completed and: Buffer
    char __padding2[0x7] = {};
    // System.Byte[] Buffer
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<uint8_t> Buffer;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // System.Int32 Offset
    // Size: 0x4
    // Offset: 0x30
    int Offset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.Int32 Count
    // Size: 0x4
    // Offset: 0x34
    int Count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // System.AsyncCallback Callback
    // Size: 0x8
    // Offset: 0x38
    ::System::AsyncCallback* Callback;
    // Field size check
    static_assert(sizeof(::System::AsyncCallback*) == 0x8);
    // System.Object State
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppObject* State;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // System.Int32 SynchRead
    // Size: 0x4
    // Offset: 0x48
    int SynchRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: SynchRead and: Error
    char __padding8[0x4] = {};
    // System.Exception Error
    // Size: 0x8
    // Offset: 0x50
    ::System::Exception* Error;
    // Field size check
    static_assert(sizeof(::System::Exception*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IAsyncResult
    operator ::System::IAsyncResult() noexcept {
      return *reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Creating interface conversion operator: i_IAsyncResult
    inline ::System::IAsyncResult* i_IAsyncResult() noexcept {
      return reinterpret_cast<::System::IAsyncResult*>(this);
    }
    // Get instance field reference: private System.Object locker
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_locker();
    // Get instance field reference: private System.Threading.ManualResetEvent handle
    [[deprecated("Use field access instead!")]] ::System::Threading::ManualResetEvent*& dyn_handle();
    // Get instance field reference: private System.Boolean completed
    [[deprecated("Use field access instead!")]] bool& dyn_completed();
    // Get instance field reference: System.Byte[] Buffer
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_Buffer();
    // Get instance field reference: System.Int32 Offset
    [[deprecated("Use field access instead!")]] int& dyn_Offset();
    // Get instance field reference: System.Int32 Count
    [[deprecated("Use field access instead!")]] int& dyn_Count();
    // Get instance field reference: System.AsyncCallback Callback
    [[deprecated("Use field access instead!")]] ::System::AsyncCallback*& dyn_Callback();
    // Get instance field reference: System.Object State
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_State();
    // Get instance field reference: System.Int32 SynchRead
    [[deprecated("Use field access instead!")]] int& dyn_SynchRead();
    // Get instance field reference: System.Exception Error
    [[deprecated("Use field access instead!")]] ::System::Exception*& dyn_Error();
    // public System.Object get_AsyncState()
    // Offset: 0x1ACCF98
    ::Il2CppObject* get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1ACCFA0
    ::System::Threading::WaitHandle* get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1ACD090
    bool get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1ACD0A4
    bool get_IsCompleted();
    // public System.Void .ctor()
    // Offset: 0x1ACD138
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HttpStreamAsyncResult* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Net::HttpStreamAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HttpStreamAsyncResult*, creationType>()));
    }
    // public System.Void Complete(System.Exception e)
    // Offset: 0x1ACCEC4
    void Complete(::System::Exception* e);
    // public System.Void Complete()
    // Offset: 0x1ACCECC
    void Complete();
  }; // System.Net.HttpStreamAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(HttpStreamAsyncResult), 80 + sizeof(::System::Exception*)> __System_Net_HttpStreamAsyncResultSizeCheck;
  static_assert(sizeof(HttpStreamAsyncResult) == 0x58);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_AsyncState
// Il2CppName: get_AsyncState
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_AsyncState)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_AsyncState", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_AsyncWaitHandle
// Il2CppName: get_AsyncWaitHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::WaitHandle* (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_AsyncWaitHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_AsyncWaitHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_CompletedSynchronously
// Il2CppName: get_CompletedSynchronously
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_CompletedSynchronously)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_CompletedSynchronously", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::get_IsCompleted
// Il2CppName: get_IsCompleted
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::get_IsCompleted)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "get_IsCompleted", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpStreamAsyncResult::*)(::System::Exception*)>(&System::Net::HttpStreamAsyncResult::Complete)> {
  static const MethodInfo* get() {
    static auto* e = &::il2cpp_utils::GetClassFromName("System", "Exception")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{e});
  }
};
// Writing MetadataGetter for method: System::Net::HttpStreamAsyncResult::Complete
// Il2CppName: Complete
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Net::HttpStreamAsyncResult::*)()>(&System::Net::HttpStreamAsyncResult::Complete)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Net::HttpStreamAsyncResult*), "Complete", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
