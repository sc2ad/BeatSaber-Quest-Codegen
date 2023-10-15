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
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::AccessControl
namespace System::Security::AccessControl {
  // Forward declaring type: SecurityInfos
  struct SecurityInfos;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall*, "System.Security.AccessControl", "NativeObjectSecurity/GetSecurityInfoNativeCall");
// Type namespace: System.Security.AccessControl
namespace System::Security::AccessControl {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.AccessControl.NativeObjectSecurity/System.Security.AccessControl.GetSecurityInfoNativeCall
  // [TokenAttribute] Offset: FFFFFFFF
  class NativeObjectSecurity::GetSecurityInfoNativeCall : public ::System::MulticastDelegate {
    public:
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x1BE7A80
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NativeObjectSecurity::GetSecurityInfoNativeCall* New_ctor(::Il2CppObject* object, ::System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NativeObjectSecurity::GetSecurityInfoNativeCall*, creationType>(object, method)));
    }
    // public System.Int32 Invoke(System.Security.AccessControl.SecurityInfos securityInfos, out System.IntPtr owner, out System.IntPtr group, out System.IntPtr dacl, out System.IntPtr sacl, out System.IntPtr descriptor)
    // Offset: 0x1BE7C10
    int Invoke(::System::Security::AccessControl::SecurityInfos securityInfos, ByRef<::System::IntPtr> owner, ByRef<::System::IntPtr> group, ByRef<::System::IntPtr> dacl, ByRef<::System::IntPtr> sacl, ByRef<::System::IntPtr> descriptor);
    // public System.IAsyncResult BeginInvoke(System.Security.AccessControl.SecurityInfos securityInfos, out System.IntPtr owner, out System.IntPtr group, out System.IntPtr dacl, out System.IntPtr sacl, out System.IntPtr descriptor, System.AsyncCallback callback, System.Object object)
    // Offset: 0x1BE8454
    ::System::IAsyncResult* BeginInvoke(::System::Security::AccessControl::SecurityInfos securityInfos, ByRef<::System::IntPtr> owner, ByRef<::System::IntPtr> group, ByRef<::System::IntPtr> dacl, ByRef<::System::IntPtr> sacl, ByRef<::System::IntPtr> descriptor, ::System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Int32 EndInvoke(out System.IntPtr owner, out System.IntPtr group, out System.IntPtr dacl, out System.IntPtr sacl, out System.IntPtr descriptor, System.IAsyncResult result)
    // Offset: 0x1BE8578
    int EndInvoke(ByRef<::System::IntPtr> owner, ByRef<::System::IntPtr> group, ByRef<::System::IntPtr> dacl, ByRef<::System::IntPtr> sacl, ByRef<::System::IntPtr> descriptor, ::System::IAsyncResult* result);
  }; // System.Security.AccessControl.NativeObjectSecurity/System.Security.AccessControl.GetSecurityInfoNativeCall
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::*)(::System::Security::AccessControl::SecurityInfos, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>)>(&System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::Invoke)> {
  static const MethodInfo* get() {
    static auto* securityInfos = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "SecurityInfos")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* dacl = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* sacl = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{securityInfos, owner, group, dacl, sacl, descriptor});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::BeginInvoke
// Il2CppName: BeginInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::*)(::System::Security::AccessControl::SecurityInfos, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ::System::AsyncCallback*, ::Il2CppObject*)>(&System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::BeginInvoke)> {
  static const MethodInfo* get() {
    static auto* securityInfos = &::il2cpp_utils::GetClassFromName("System.Security.AccessControl", "SecurityInfos")->byval_arg;
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* dacl = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* sacl = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* callback = &::il2cpp_utils::GetClassFromName("System", "AsyncCallback")->byval_arg;
    static auto* object = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall*), "BeginInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{securityInfos, owner, group, dacl, sacl, descriptor, callback, object});
  }
};
// Writing MetadataGetter for method: System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::EndInvoke
// Il2CppName: EndInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::*)(ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ByRef<::System::IntPtr>, ::System::IAsyncResult*)>(&System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall::EndInvoke)> {
  static const MethodInfo* get() {
    static auto* owner = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* group = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* dacl = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* sacl = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* descriptor = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->this_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "IAsyncResult")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Security::AccessControl::NativeObjectSecurity::GetSecurityInfoNativeCall*), "EndInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{owner, group, dacl, sacl, descriptor, result});
  }
};