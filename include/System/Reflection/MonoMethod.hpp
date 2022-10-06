// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.RuntimeMethodInfo
#include "System/Reflection/RuntimeMethodInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Skipping declaration: MethodBase because it is already included!
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: PInvokeAttributes
  struct PInvokeAttributes;
  // Skipping declaration: MethodInfo because it is already included!
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Forward declaring type: MonoMethod
  class MonoMethod;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::MonoMethod);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::MonoMethod*, "System.Reflection", "MonoMethod");
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoMethod
  // [TokenAttribute] Offset: FFFFFFFF
  class MonoMethod : public ::System::Reflection::RuntimeMethodInfo {
    public:
    public:
    // System.IntPtr mhandle
    // Size: 0x8
    // Offset: 0x10
    ::System::IntPtr mhandle;
    // Field size check
    static_assert(sizeof(::System::IntPtr) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x18
    ::StringW name;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Type reftype
    // Size: 0x8
    // Offset: 0x20
    ::System::Type* reftype;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    public:
    // Get instance field reference: System.IntPtr mhandle
    [[deprecated("Use field access instead!")]] ::System::IntPtr& dyn_mhandle();
    // Get instance field reference: private System.String name
    [[deprecated("Use field access instead!")]] ::StringW& dyn_name();
    // Get instance field reference: private System.Type reftype
    [[deprecated("Use field access instead!")]] ::System::Type*& dyn_reftype();
    // static System.String get_name(System.Reflection.MethodBase method)
    // Offset: 0x1DD0048
    static ::StringW get_name(::System::Reflection::MethodBase* method);
    // static System.Reflection.MonoMethod get_base_method(System.Reflection.MonoMethod method, System.Boolean definition)
    // Offset: 0x1DD1048
    static ::System::Reflection::MonoMethod* get_base_method(::System::Reflection::MonoMethod* method, bool definition);
    // System.Object InternalInvoke(System.Object obj, System.Object[] parameters, out System.Exception exc)
    // Offset: 0x1DD11B8
    ::Il2CppObject* InternalInvoke(::Il2CppObject* obj, ::ArrayW<::Il2CppObject*> parameters, ByRef<::System::Exception*> exc);
    // static System.Void ConvertValues(System.Reflection.Binder binder, System.Object[] args, System.Reflection.ParameterInfo[] pinfo, System.Globalization.CultureInfo culture, System.Reflection.BindingFlags invokeAttr)
    // Offset: 0x1DCFA6C
    static void ConvertValues(::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> args, ::ArrayW<::System::Reflection::ParameterInfo*> pinfo, ::System::Globalization::CultureInfo* culture, ::System::Reflection::BindingFlags invokeAttr);
    // System.Void GetPInvoke(out System.Reflection.PInvokeAttributes flags, out System.String entryPoint, out System.String dllName)
    // Offset: 0x1DD1674
    void GetPInvoke(ByRef<::System::Reflection::PInvokeAttributes> flags, ByRef<::StringW> entryPoint, ByRef<::StringW> dllName);
    // System.Object[] GetPseudoCustomAttributes()
    // Offset: 0x1DD1678
    ::ArrayW<::Il2CppObject*> GetPseudoCustomAttributes();
    // private System.Reflection.MethodInfo MakeGenericMethod_impl(System.Type[] types)
    // Offset: 0x1DD1D50
    ::System::Reflection::MethodInfo* MakeGenericMethod_impl(::ArrayW<::System::Type*> types);
    // private System.Reflection.MethodInfo GetGenericMethodDefinition_impl()
    // Offset: 0x1DD1D58
    ::System::Reflection::MethodInfo* GetGenericMethodDefinition_impl();
    // static private System.Int32 get_core_clr_security_level()
    // Offset: 0x1DD1EDC
    static int get_core_clr_security_level();
    // public override System.Type get_ReturnType()
    // Offset: 0x1DD1060
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Type MethodInfo::get_ReturnType()
    ::System::Type* get_ReturnType();
    // public override System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0x1DD145C
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.RuntimeMethodHandle MethodBase::get_MethodHandle()
    ::System::RuntimeMethodHandle get_MethodHandle();
    // public override System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0x1DD1464
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodAttributes MethodBase::get_Attributes()
    ::System::Reflection::MethodAttributes get_Attributes();
    // public override System.Reflection.CallingConventions get_CallingConvention()
    // Offset: 0x1DD146C
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.CallingConventions MethodBase::get_CallingConvention()
    ::System::Reflection::CallingConventions get_CallingConvention();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1DD149C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    ::System::Type* get_ReflectedType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x1DD14A4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    ::System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x1DD14D4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::StringW get_Name();
    // public override System.Boolean get_IsGenericMethodDefinition()
    // Offset: 0x1DD1DEC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsGenericMethodDefinition()
    bool get_IsGenericMethodDefinition();
    // public override System.Boolean get_IsGenericMethod()
    // Offset: 0x1DD1DF0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsGenericMethod()
    bool get_IsGenericMethod();
    // public override System.Boolean get_ContainsGenericParameters()
    // Offset: 0x1DD1DF4
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public override System.Boolean get_IsSecurityCritical()
    // Offset: 0x1DD1EE4
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsSecurityCritical()
    bool get_IsSecurityCritical();
    // System.Void .ctor()
    // Offset: 0x1DD1038
    // Implemented from: System.Reflection.RuntimeMethodInfo
    // Base method: System.Void RuntimeMethodInfo::.ctor()
    // Base method: System.Void MethodInfo::.ctor()
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoMethod* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Reflection::MonoMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoMethod*, creationType>()));
    }
    // public override System.Reflection.MethodInfo GetBaseDefinition()
    // Offset: 0x1DD1050
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetBaseDefinition()
    ::System::Reflection::MethodInfo* GetBaseDefinition();
    // override System.Reflection.MethodInfo GetBaseMethod()
    // Offset: 0x1DD1058
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetBaseMethod()
    ::System::Reflection::MethodInfo* GetBaseMethod();
    // public override System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0x1DD10BC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodImplAttributes MethodBase::GetMethodImplementationFlags()
    ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public override System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0x1DD10EC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParameters()
    ::ArrayW<::System::Reflection::ParameterInfo*> GetParameters();
    // override System.Reflection.ParameterInfo[] GetParametersInternal()
    // Offset: 0x1DD1184
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParametersInternal()
    ::ArrayW<::System::Reflection::ParameterInfo*> GetParametersInternal();
    // override System.Int32 GetParametersCount()
    // Offset: 0x1DD1190
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetParametersCount()
    int GetParametersCount();
    // public override System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x1DD11BC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Object MethodBase::Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::Il2CppObject* obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::ArrayW<::Il2CppObject*> parameters, ::System::Globalization::CultureInfo* culture);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1DD14FC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x1DD157C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1DD15F4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] methodInstantiation)
    // Offset: 0x1DD1A28
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::MakeGenericMethod(params System.Type[] methodInstantiation)
    ::System::Reflection::MethodInfo* MakeGenericMethod(::ArrayW<::System::Type*> methodInstantiation);
    // public override System.Type[] GetGenericArguments()
    // Offset: 0x1DD1D54
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Type[] MethodInfo::GetGenericArguments()
    ::ArrayW<::System::Type*> GetGenericArguments();
    // public override System.Reflection.MethodInfo GetGenericMethodDefinition()
    // Offset: 0x1DD1D5C
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetGenericMethodDefinition()
    ::System::Reflection::MethodInfo* GetGenericMethodDefinition();
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x1DD1ED4
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    ::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
  }; // System.Reflection.MonoMethod
  #pragma pack(pop)
  static check_size<sizeof(MonoMethod), 32 + sizeof(::System::Type*)> __System_Reflection_MonoMethodSizeCheck;
  static_assert(sizeof(MonoMethod) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_name
// Il2CppName: get_name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Reflection::MethodBase*)>(&System::Reflection::MonoMethod::get_name)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodBase")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_base_method
// Il2CppName: get_base_method
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MonoMethod* (*)(::System::Reflection::MonoMethod*, bool)>(&System::Reflection::MonoMethod::get_base_method)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MonoMethod")->byval_arg;
    static auto* definition = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_base_method", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, definition});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::InternalInvoke
// Il2CppName: InternalInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoMethod::*)(::Il2CppObject*, ::ArrayW<::Il2CppObject*>, ByRef<::System::Exception*>)>(&System::Reflection::MonoMethod::InternalInvoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* exc = &::il2cpp_utils::GetClassFromName("System", "Exception")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "InternalInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, parameters, exc});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::ConvertValues
// Il2CppName: ConvertValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::ArrayW<::System::Reflection::ParameterInfo*>, ::System::Globalization::CultureInfo*, ::System::Reflection::BindingFlags)>(&System::Reflection::MonoMethod::ConvertValues)> {
  static const MethodInfo* get() {
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* pinfo = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "ConvertValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{binder, args, pinfo, culture, invokeAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetPInvoke
// Il2CppName: GetPInvoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (System::Reflection::MonoMethod::*)(ByRef<::System::Reflection::PInvokeAttributes>, ByRef<::StringW>, ByRef<::StringW>)>(&System::Reflection::MonoMethod::GetPInvoke)> {
  static const MethodInfo* get() {
    static auto* flags = &::il2cpp_utils::GetClassFromName("System.Reflection", "PInvokeAttributes")->this_arg;
    static auto* entryPoint = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* dllName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetPInvoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{flags, entryPoint, dllName});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetPseudoCustomAttributes
// Il2CppName: GetPseudoCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetPseudoCustomAttributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetPseudoCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::MakeGenericMethod_impl
// Il2CppName: MakeGenericMethod_impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MonoMethod::*)(::ArrayW<::System::Type*>)>(&System::Reflection::MonoMethod::MakeGenericMethod_impl)> {
  static const MethodInfo* get() {
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "MakeGenericMethod_impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{types});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetGenericMethodDefinition_impl
// Il2CppName: GetGenericMethodDefinition_impl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetGenericMethodDefinition_impl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetGenericMethodDefinition_impl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_core_clr_security_level
// Il2CppName: get_core_clr_security_level
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)()>(&System::Reflection::MonoMethod::get_core_clr_security_level)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_core_clr_security_level", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_ReturnType
// Il2CppName: get_ReturnType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_ReturnType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_ReturnType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_MethodHandle
// Il2CppName: get_MethodHandle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeMethodHandle (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_MethodHandle)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_MethodHandle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_Attributes
// Il2CppName: get_Attributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodAttributes (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_Attributes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_Attributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_CallingConvention
// Il2CppName: get_CallingConvention
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::CallingConventions (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_CallingConvention)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_CallingConvention", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_ReflectedType
// Il2CppName: get_ReflectedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_ReflectedType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_ReflectedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_DeclaringType
// Il2CppName: get_DeclaringType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_DeclaringType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_DeclaringType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_IsGenericMethodDefinition
// Il2CppName: get_IsGenericMethodDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_IsGenericMethodDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_IsGenericMethodDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_IsGenericMethod
// Il2CppName: get_IsGenericMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_IsGenericMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_IsGenericMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_ContainsGenericParameters
// Il2CppName: get_ContainsGenericParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_ContainsGenericParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_ContainsGenericParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::get_IsSecurityCritical
// Il2CppName: get_IsSecurityCritical
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::get_IsSecurityCritical)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "get_IsSecurityCritical", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetBaseDefinition
// Il2CppName: GetBaseDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetBaseDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetBaseDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetBaseMethod
// Il2CppName: GetBaseMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetBaseMethod)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetBaseMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetMethodImplementationFlags
// Il2CppName: GetMethodImplementationFlags
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodImplAttributes (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetMethodImplementationFlags)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetMethodImplementationFlags", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetParameters
// Il2CppName: GetParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetParametersInternal
// Il2CppName: GetParametersInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ParameterInfo*> (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetParametersInternal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetParametersInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetParametersCount
// Il2CppName: GetParametersCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetParametersCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetParametersCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::MonoMethod::*)(::Il2CppObject*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::Il2CppObject*>, ::System::Globalization::CultureInfo*)>(&System::Reflection::MonoMethod::Invoke)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* parameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, invokeAttr, binder, parameters, culture});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::MonoMethod::*)(::System::Type*, bool)>(&System::Reflection::MonoMethod::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoMethod::*)(bool)>(&System::Reflection::MonoMethod::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::MonoMethod::*)(::System::Type*, bool)>(&System::Reflection::MonoMethod::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::MakeGenericMethod
// Il2CppName: MakeGenericMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MonoMethod::*)(::ArrayW<::System::Type*>)>(&System::Reflection::MonoMethod::MakeGenericMethod)> {
  static const MethodInfo* get() {
    static auto* methodInstantiation = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "MakeGenericMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{methodInstantiation});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetGenericArguments
// Il2CppName: GetGenericArguments
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetGenericArguments)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetGenericArguments", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetGenericMethodDefinition
// Il2CppName: GetGenericMethodDefinition
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetGenericMethodDefinition)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetGenericMethodDefinition", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::MonoMethod::GetCustomAttributesData
// Il2CppName: GetCustomAttributesData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IList_1<::System::Reflection::CustomAttributeData*>* (System::Reflection::MonoMethod::*)()>(&System::Reflection::MonoMethod::GetCustomAttributesData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::MonoMethod*), "GetCustomAttributesData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
