// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Reflection.MethodAttributes
#include "System/Reflection/MethodAttributes.hpp"
// Including type: System.Reflection.MethodImplAttributes
#include "System/Reflection/MethodImplAttributes.hpp"
// Including type: System.Reflection.CallingConventions
#include "System/Reflection/CallingConventions.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MonoMethodInfo
  struct MonoMethodInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoMethodInfo, "System.Reflection", "MonoMethodInfo");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoMethodInfo
  // [TokenAttribute] Offset: FFFFFFFF
  struct MonoMethodInfo/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Type parent
    // Size: 0x8
    // Offset: 0x0
    ::System::Type* parent;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // private System.Type ret
    // Size: 0x8
    // Offset: 0x8
    ::System::Type* ret;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // System.Reflection.MethodAttributes attrs
    // Size: 0x4
    // Offset: 0x10
    ::System::Reflection::MethodAttributes attrs;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodAttributes) == 0x4);
    // System.Reflection.MethodImplAttributes iattrs
    // Size: 0x4
    // Offset: 0x14
    ::System::Reflection::MethodImplAttributes iattrs;
    // Field size check
    static_assert(sizeof(::System::Reflection::MethodImplAttributes) == 0x4);
    // private System.Reflection.CallingConventions callconv
    // Size: 0x4
    // Offset: 0x18
    ::System::Reflection::CallingConventions callconv;
    // Field size check
    static_assert(sizeof(::System::Reflection::CallingConventions) == 0x4);
    public:
    // Creating value type constructor for type: MonoMethodInfo
    constexpr MonoMethodInfo(::System::Type* parent_ = {}, ::System::Type* ret_ = {}, ::System::Reflection::MethodAttributes attrs_ = {}, ::System::Reflection::MethodImplAttributes iattrs_ = {}, ::System::Reflection::CallingConventions callconv_ = {}) noexcept : parent{parent_}, ret{ret_}, attrs{attrs_}, iattrs{iattrs_}, callconv{callconv_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Type parent
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_parent();
    // Get instance field reference: private System.Type ret
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_ret();
    // Get instance field reference: System.Reflection.MethodAttributes attrs
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodAttributes& dyn_attrs();
    // Get instance field reference: System.Reflection.MethodImplAttributes iattrs
    [[deprecated("Use field access instead!")]] ::System::Reflection::MethodImplAttributes& dyn_iattrs();
    // Get instance field reference: private System.Reflection.CallingConventions callconv
    [[deprecated("Use field access instead!")]] ::System::Reflection::CallingConventions& dyn_callconv();
    // static private System.Void get_method_info(System.IntPtr handle, out System.Reflection.MonoMethodInfo info)
    // Offset: 0x1DFB008
    static void get_method_info(::System::IntPtr handle, ByRef<::System::Reflection::MonoMethodInfo> info);
    // static private System.Int32 get_method_attributes(System.IntPtr handle)
    // Offset: 0x1DFB00C
    static int get_method_attributes(::System::IntPtr handle);
    // static System.Reflection.MonoMethodInfo GetMethodInfo(System.IntPtr handle)
    // Offset: 0x1DFA908
    static ::System::Reflection::MonoMethodInfo GetMethodInfo(::System::IntPtr handle);
    // static System.Type GetDeclaringType(System.IntPtr handle)
    // Offset: 0x1DF9110
    static ::System::Type* GetDeclaringType(::System::IntPtr handle);
    // static System.Type GetReturnType(System.IntPtr handle)
    // Offset: 0x1DFA1AC
    static ::System::Type* GetReturnType(::System::IntPtr handle);
    // static System.Reflection.MethodAttributes GetAttributes(System.IntPtr handle)
    // Offset: 0x1DF9048
    static ::System::Reflection::MethodAttributes GetAttributes(::System::IntPtr handle);
    // static System.Reflection.CallingConventions GetCallingConvention(System.IntPtr handle)
    // Offset: 0x1DF907C
    static ::System::Reflection::CallingConventions GetCallingConvention(::System::IntPtr handle);
    // static System.Reflection.MethodImplAttributes GetMethodImplementationFlags(System.IntPtr handle)
    // Offset: 0x1DF8804
    static ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags(::System::IntPtr handle);
    // static private System.Reflection.ParameterInfo[] get_parameter_info(System.IntPtr handle, System.Reflection.MemberInfo member)
    // Offset: 0x1DFB010
    static ::ArrayW<::System::Reflection::ParameterInfo*> get_parameter_info(::System::IntPtr handle, ::System::Reflection::MemberInfo* member);
    // static System.Reflection.ParameterInfo[] GetParametersInfo(System.IntPtr handle, System.Reflection.MemberInfo member)
    // Offset: 0x1DF883C
    static ::ArrayW<::System::Reflection::ParameterInfo*> GetParametersInfo(::System::IntPtr handle, ::System::Reflection::MemberInfo* member);
  }; // System.Reflection.MonoMethodInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoMethodInfo), 24 + sizeof(::System::Reflection::CallingConventions)> __System_Reflection_MonoMethodInfoSizeCheck;
  static_assert(sizeof(MonoMethodInfo) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::get_method_info
// Il2CppName: get_method_info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ByRef<::System::Reflection::MonoMethodInfo>)>(&System::Reflection::MonoMethodInfo::get_method_info)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoMethodInfo")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "get_method_info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, info});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::get_method_attributes
// Il2CppName: get_method_attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::System::IntPtr)>(&System::Reflection::MonoMethodInfo::get_method_attributes)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "get_method_attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::GetMethodInfo
// Il2CppName: GetMethodInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MonoMethodInfo (*)(::System::IntPtr)>(&System::Reflection::MonoMethodInfo::GetMethodInfo)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "GetMethodInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::GetDeclaringType
// Il2CppName: GetDeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::IntPtr)>(&System::Reflection::MonoMethodInfo::GetDeclaringType)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "GetDeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::GetReturnType
// Il2CppName: GetReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::IntPtr)>(&System::Reflection::MonoMethodInfo::GetReturnType)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "GetReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::GetAttributes
// Il2CppName: GetAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodAttributes (*)(::System::IntPtr)>(&System::Reflection::MonoMethodInfo::GetAttributes)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "GetAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::GetCallingConvention
// Il2CppName: GetCallingConvention
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::CallingConventions (*)(::System::IntPtr)>(&System::Reflection::MonoMethodInfo::GetCallingConvention)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "GetCallingConvention", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::GetMethodImplementationFlags
// Il2CppName: GetMethodImplementationFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodImplAttributes (*)(::System::IntPtr)>(&System::Reflection::MonoMethodInfo::GetMethodImplementationFlags)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "GetMethodImplementationFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::get_parameter_info
// Il2CppName: get_parameter_info
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::IntPtr, ::System::Reflection::MemberInfo*)>(&System::Reflection::MonoMethodInfo::get_parameter_info)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "get_parameter_info", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, member});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethodInfo::GetParametersInfo
// Il2CppName: GetParametersInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (*)(::System::IntPtr, ::System::Reflection::MemberInfo*)>(&System::Reflection::MonoMethodInfo::GetParametersInfo)> {
  static const MethodInfo* get() {
    static auto* handle = &::il2cpp_utils::GetClassFromName("System", "IntPtr")->byval_arg;
    static auto* member = &::il2cpp_utils::GetClassFromName("System.Reflection", "MemberInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethodInfo), "GetParametersInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{handle, member});
  }
};
