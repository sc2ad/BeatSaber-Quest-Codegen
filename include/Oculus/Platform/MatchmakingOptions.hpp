// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: RoomJoinPolicy
  struct RoomJoinPolicy;
}
// Completed forward declares
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Forward declaring type: MatchmakingOptions
  class MatchmakingOptions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Oculus::Platform::MatchmakingOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MatchmakingOptions*, "Oculus.Platform", "MatchmakingOptions");
// Type namespace: Oculus.Platform
namespace Oculus::Platform {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Oculus.Platform.MatchmakingOptions
  // [TokenAttribute] Offset: FFFFFFFF
  class MatchmakingOptions : public ::Il2CppObject {
    public:
    public:
    // private System.IntPtr Handle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr Handle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    public:
    // Creating conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept {
      return Handle;
    }
    // Get instance field reference: private System.IntPtr Handle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_Handle();
    // public System.Void .ctor()
    // Offset: 0x19EF370
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MatchmakingOptions* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Oculus::Platform::MatchmakingOptions::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MatchmakingOptions*, creationType>()));
    }
    // public System.Void SetCreateRoomDataStore(System.String key, System.String value)
    // Offset: 0x19EF3E8
    void SetCreateRoomDataStore(::StringW key, ::StringW value);
    // public System.Void ClearCreateRoomDataStore()
    // Offset: 0x19EF46C
    void ClearCreateRoomDataStore();
    // public System.Void SetCreateRoomJoinPolicy(Oculus.Platform.RoomJoinPolicy value)
    // Offset: 0x19EF4D8
    void SetCreateRoomJoinPolicy(::Oculus::Platform::RoomJoinPolicy value);
    // public System.Void SetCreateRoomMaxUsers(System.UInt32 value)
    // Offset: 0x19EF554
    void SetCreateRoomMaxUsers(uint value);
    // public System.Void AddEnqueueAdditionalUser(System.UInt64 userID)
    // Offset: 0x19EF5D0
    void AddEnqueueAdditionalUser(uint64_t userID);
    // public System.Void ClearEnqueueAdditionalUsers()
    // Offset: 0x19EF64C
    void ClearEnqueueAdditionalUsers();
    // public System.Void SetEnqueueDataSettings(System.String key, System.Int32 value)
    // Offset: 0x19EF6B8
    void SetEnqueueDataSettings(::StringW key, int value);
    // public System.Void SetEnqueueDataSettings(System.String key, System.Double value)
    // Offset: 0x19EF73C
    void SetEnqueueDataSettings(::StringW key, double value);
    // public System.Void SetEnqueueDataSettings(System.String key, System.String value)
    // Offset: 0x19EF7C8
    void SetEnqueueDataSettings(::StringW key, ::StringW value);
    // public System.Void ClearEnqueueDataSettings()
    // Offset: 0x19EF84C
    void ClearEnqueueDataSettings();
    // public System.Void SetEnqueueIsDebug(System.Boolean value)
    // Offset: 0x19EF8B8
    void SetEnqueueIsDebug(bool value);
    // public System.Void SetEnqueueQueryKey(System.String value)
    // Offset: 0x19EF934
    void SetEnqueueQueryKey(::StringW value);
    // static public System.IntPtr op_Explicit(Oculus.Platform.MatchmakingOptions options)
    // Offset: 0x19EE304
    // ABORTED: conflicts with another method.  explicit operator ::System::IntPtr();
    // protected override System.Void Finalize()
    // Offset: 0x19EF9B0
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // Oculus.Platform.MatchmakingOptions
  #pragma pack(pop)
  static check_size<sizeof(MatchmakingOptions), 16 + sizeof(::System::IntPtr)> __Oculus_Platform_MatchmakingOptionsSizeCheck;
  static_assert(sizeof(MatchmakingOptions) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetCreateRoomDataStore
// Il2CppName: SetCreateRoomDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(::StringW, ::StringW)>(&Oculus::Platform::MatchmakingOptions::SetCreateRoomDataStore)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetCreateRoomDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::ClearCreateRoomDataStore
// Il2CppName: ClearCreateRoomDataStore
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)()>(&Oculus::Platform::MatchmakingOptions::ClearCreateRoomDataStore)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "ClearCreateRoomDataStore", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetCreateRoomJoinPolicy
// Il2CppName: SetCreateRoomJoinPolicy
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(::Oculus::Platform::RoomJoinPolicy)>(&Oculus::Platform::MatchmakingOptions::SetCreateRoomJoinPolicy)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("Oculus.Platform", "RoomJoinPolicy")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetCreateRoomJoinPolicy", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetCreateRoomMaxUsers
// Il2CppName: SetCreateRoomMaxUsers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(uint)>(&Oculus::Platform::MatchmakingOptions::SetCreateRoomMaxUsers)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetCreateRoomMaxUsers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::AddEnqueueAdditionalUser
// Il2CppName: AddEnqueueAdditionalUser
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(uint64_t)>(&Oculus::Platform::MatchmakingOptions::AddEnqueueAdditionalUser)> {
  static const MethodInfo* get() {
    static auto* userID = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "AddEnqueueAdditionalUser", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{userID});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::ClearEnqueueAdditionalUsers
// Il2CppName: ClearEnqueueAdditionalUsers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)()>(&Oculus::Platform::MatchmakingOptions::ClearEnqueueAdditionalUsers)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "ClearEnqueueAdditionalUsers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetEnqueueDataSettings
// Il2CppName: SetEnqueueDataSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(::StringW, int)>(&Oculus::Platform::MatchmakingOptions::SetEnqueueDataSettings)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetEnqueueDataSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetEnqueueDataSettings
// Il2CppName: SetEnqueueDataSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(::StringW, double)>(&Oculus::Platform::MatchmakingOptions::SetEnqueueDataSettings)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Double")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetEnqueueDataSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetEnqueueDataSettings
// Il2CppName: SetEnqueueDataSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(::StringW, ::StringW)>(&Oculus::Platform::MatchmakingOptions::SetEnqueueDataSettings)> {
  static const MethodInfo* get() {
    static auto* key = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetEnqueueDataSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{key, value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::ClearEnqueueDataSettings
// Il2CppName: ClearEnqueueDataSettings
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)()>(&Oculus::Platform::MatchmakingOptions::ClearEnqueueDataSettings)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "ClearEnqueueDataSettings", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetEnqueueIsDebug
// Il2CppName: SetEnqueueIsDebug
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(bool)>(&Oculus::Platform::MatchmakingOptions::SetEnqueueIsDebug)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetEnqueueIsDebug", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::SetEnqueueQueryKey
// Il2CppName: SetEnqueueQueryKey
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)(::StringW)>(&Oculus::Platform::MatchmakingOptions::SetEnqueueQueryKey)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "SetEnqueueQueryKey", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::operator ::System::IntPtr
// Il2CppName: op_Explicit
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: Oculus::Platform::MatchmakingOptions::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Oculus::Platform::MatchmakingOptions::*)()>(&Oculus::Platform::MatchmakingOptions::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Oculus::Platform::MatchmakingOptions*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
