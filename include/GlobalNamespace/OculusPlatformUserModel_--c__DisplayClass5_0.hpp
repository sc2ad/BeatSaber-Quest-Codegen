// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OculusPlatformUserModel
#include "GlobalNamespace/OculusPlatformUserModel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0*, "", "OculusPlatformUserModel/<>c__DisplayClass5_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OculusPlatformUserModel/<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class OculusPlatformUserModel::$$c__DisplayClass5_0 : public ::Il2CppObject {
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
    // public System.Int32 requests
    // Size: 0x4
    // Offset: 0x10
    int requests;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean success
    // Size: 0x1
    // Offset: 0x14
    bool success;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: success and: userNames
    char __padding1[0x3] = {};
    // public System.String[] userNames
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<::StringW> userNames;
    // Field size check
    static_assert(sizeof(::ArrayW<::StringW>) == 0x8);
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IReadOnlyList`1<System.String>> tcs
    // Size: 0x8
    // Offset: 0x20
    ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>* tcs;
    // Field size check
    static_assert(sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*) == 0x8);
    public:
    // Get instance field reference: public System.Int32 requests
    int& dyn_requests();
    // Get instance field reference: public System.Boolean success
    bool& dyn_success();
    // Get instance field reference: public System.String[] userNames
    ::ArrayW<::StringW>& dyn_userNames();
    // Get instance field reference: public System.Threading.Tasks.TaskCompletionSource`1<System.Collections.Generic.IReadOnlyList`1<System.String>> tcs
    ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*& dyn_tcs();
    // System.Void <GetUserNamesForUserIds>g__Fetch|0(System.Int32 index, System.UInt64 platformId)
    // Offset: 0x2BB9718
    void $GetUserNamesForUserIds$g__Fetch_0(int index, uint64_t platformId);
    // public System.Void .ctor()
    // Offset: 0x2BB9710
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OculusPlatformUserModel::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OculusPlatformUserModel::$$c__DisplayClass5_0*, creationType>()));
    }
  }; // OculusPlatformUserModel/<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(OculusPlatformUserModel::$$c__DisplayClass5_0), 32 + sizeof(::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::StringW>*>*)> __GlobalNamespace_OculusPlatformUserModel_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(OculusPlatformUserModel::$$c__DisplayClass5_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0::$GetUserNamesForUserIds$g__Fetch_0
// Il2CppName: <GetUserNamesForUserIds>g__Fetch|0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0::*)(int, uint64_t)>(&GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0::$GetUserNamesForUserIds$g__Fetch_0)> {
  static const MethodInfo* get() {
    static auto* index = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* platformId = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0*), "<GetUserNamesForUserIds>g__Fetch|0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{index, platformId});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OculusPlatformUserModel::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
