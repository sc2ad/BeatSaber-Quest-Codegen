// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Security.AccessControl.NativeObjectSecurity
#include "System/Security/AccessControl/NativeObjectSecurity.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode*, "System.Security.AccessControl", "NativeObjectSecurity/ExceptionFromErrorCode");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.NativeObjectSecurity/System.Security.AccessControl.ExceptionFromErrorCode
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeObjectSecurity::ExceptionFromErrorCode : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1B9E77C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeObjectSecurity::ExceptionFromErrorCode* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeObjectSecurity::ExceptionFromErrorCode*, creationType>(object, method)));
    }
    // public System.Exception Invoke(System.Int32 errorCode, System.String name, System.Runtime.InteropServices.SafeHandle handle, System.Object context)
    // Offset: 0x1B9E78C
    ::System::Exception* Invoke(int errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::Il2CppObject* context);
    // public System.IAsyncResult BeginInvoke(System.Int32 errorCode, System.String name, System.Runtime.InteropServices.SafeHandle handle, System.Object context, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1B9F460
    ::System::IAsyncResult* BeginInvoke(int errorCode, ::StringW name, ::System::Runtime::InteropServices::SafeHandle* handle, ::Il2CppObject* context, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Exception EndInvoke(System.IAsyncResult result)
    // Offset: 0x1B9F50C
    ::System::Exception* EndInvoke(::System::IAsyncResult* result);
  }; // System.Security.AccessControl.NativeObjectSecurity/System.Security.AccessControl.ExceptionFromErrorCode
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::*)(int, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::Il2CppObject*)>(&System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::Invoke)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode, name, handle, context});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::*)(int, ::StringW, ::System::Runtime::InteropServices::SafeHandle*, ::Il2CppObject*, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* errorCode = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* handle = &::il2cpp_utils::GetClassFromName("System.Runtime.InteropServices", "SafeHandle")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{errorCode, name, handle, context, callback, object});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Exception* (System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::*)(::System::IAsyncResult*)>(&System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::NativeObjectSecurity::ExceptionFromErrorCode*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{result});
  }
};
