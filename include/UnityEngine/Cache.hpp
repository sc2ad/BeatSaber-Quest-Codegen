// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cache
  struct Cache;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Cache, "UnityEngine", "Cache");
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Cache
  // [TokenAttribute] Offset: FFFFFFFF
  // [NativeHeaderAttribute] Offset: 11BE374
  // [StaticAccessorAttribute] Offset: 11BE374
  struct Cache/*, public ::System::ValueType, public ::System::IEquatable_1<::UnityEngine::Cache>*/ {
    public:
    public:
    // private System.Int32 m_Handle
    // Size: 0x4
    // Offset: 0x0
    int m_Handle;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: Cache
    constexpr Cache(int m_Handle_ = {}) noexcept : m_Handle{m_Handle_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<::UnityEngine::Cache>
    operator ::System::IEquatable_1<::UnityEngine::Cache>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<::UnityEngine::Cache>*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return m_Handle;
    }
    // Get instance field reference: private System.Int32 m_Handle
    int& dyn_m_Handle();
    // System.Int32 get_handle()
    // Offset: 0x1F28090
    int get_handle();
    // public System.Boolean get_valid()
    // Offset: 0x1F28138
    bool get_valid();
    // public System.String get_path()
    // Offset: 0x1F281B8
    ::StringW get_path();
    // public System.Void set_maximumAvailableStorageSpace(System.Int64 value)
    // Offset: 0x1F28238
    void set_maximumAvailableStorageSpace(int64_t value);
    // public System.Void set_expirationDelay(System.Int32 value)
    // Offset: 0x1F282D8
    void set_expirationDelay(int value);
    // public System.Boolean Equals(UnityEngine.Cache other)
    // Offset: 0x1F28128
    bool Equals(::UnityEngine::Cache other);
    // static System.Boolean Cache_IsValid(System.Int32 handle)
    // Offset: 0x1F28178
    static bool Cache_IsValid(int handle);
    // static System.String Cache_GetPath(System.Int32 handle)
    // Offset: 0x1F281F8
    static ::StringW Cache_GetPath(int handle);
    // static System.Void Cache_SetMaximumDiskSpaceAvailable(System.Int32 handle, System.Int64 value)
    // Offset: 0x1F28288
    static void Cache_SetMaximumDiskSpaceAvailable(int handle, int64_t value);
    // static System.Void Cache_SetExpirationDelay(System.Int32 handle, System.Int32 value)
    // Offset: 0x1F28328
    static void Cache_SetExpirationDelay(int handle, int value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1F28098
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object other)
    // Offset: 0x1F280A0
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object other)
    bool Equals(::Il2CppObject* other);
  }; // UnityEngine.Cache
  #pragma pack(pop)
  static check_size<sizeof(Cache), 0 + sizeof(int)> __UnityEngine_CacheSizeCheck;
  static_assert(sizeof(Cache) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: UnityEngine::Cache::get_handle
// Il2CppName: get_handle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Cache::*)()>(&UnityEngine::Cache::get_handle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "get_handle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::get_valid
// Il2CppName: get_valid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Cache::*)()>(&UnityEngine::Cache::get_valid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "get_valid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::get_path
// Il2CppName: get_path
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (UnityEngine::Cache::*)()>(&UnityEngine::Cache::get_path)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "get_path", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::set_maximumAvailableStorageSpace
// Il2CppName: set_maximumAvailableStorageSpace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cache::*)(int64_t)>(&UnityEngine::Cache::set_maximumAvailableStorageSpace)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "set_maximumAvailableStorageSpace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::set_expirationDelay
// Il2CppName: set_expirationDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Cache::*)(int)>(&UnityEngine::Cache::set_expirationDelay)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "set_expirationDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Cache::*)(::UnityEngine::Cache)>(&UnityEngine::Cache::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("UnityEngine", "Cache")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_IsValid
// Il2CppName: Cache_IsValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(int)>(&UnityEngine::Cache::Cache_IsValid)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "Cache_IsValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_GetPath
// Il2CppName: Cache_GetPath
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(int)>(&UnityEngine::Cache::Cache_GetPath)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "Cache_GetPath", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_SetMaximumDiskSpaceAvailable
// Il2CppName: Cache_SetMaximumDiskSpaceAvailable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int64_t)>(&UnityEngine::Cache::Cache_SetMaximumDiskSpaceAvailable)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "Cache_SetMaximumDiskSpaceAvailable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::Cache_SetExpirationDelay
// Il2CppName: Cache_SetExpirationDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int, int)>(&UnityEngine::Cache::Cache_SetExpirationDelay)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "Cache_SetExpirationDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, value});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (UnityEngine::Cache::*)()>(&UnityEngine::Cache::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: UnityEngine::Cache::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (UnityEngine::Cache::*)(::Il2CppObject*)>(&UnityEngine::Cache::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(UnityEngine::Cache), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
