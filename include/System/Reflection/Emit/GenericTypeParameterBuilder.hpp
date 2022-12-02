// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.TypeInfo
#include "System/Reflection/TypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: Module
  class Module;
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Skipping declaration: BindingFlags because it is already included!
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Type because it is already included!
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Forward declaring type: GenericTypeParameterBuilder
  class GenericTypeParameterBuilder;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Reflection::Emit::GenericTypeParameterBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::GenericTypeParameterBuilder*, "System.Reflection.Emit", "GenericTypeParameterBuilder");
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Reflection.Emit.GenericTypeParameterBuilder
  // [TokenAttribute] Offset: FFFFFFFF
  class GenericTypeParameterBuilder : public ::System::Reflection::TypeInfo {
    public:
    // public override System.Reflection.Assembly get_Assembly()
    // Offset: 0x22EA5A0
    // Implemented from: System.Type
    // Base method: System.Reflection.Assembly Type::get_Assembly()
    ::System::Reflection::Assembly* get_Assembly();
    // public override System.String get_AssemblyQualifiedName()
    // Offset: 0x22EA5FC
    // Implemented from: System.Type
    // Base method: System.String Type::get_AssemblyQualifiedName()
    ::StringW get_AssemblyQualifiedName();
    // public override System.Type get_BaseType()
    // Offset: 0x22EA658
    // Implemented from: System.Type
    // Base method: System.Type Type::get_BaseType()
    ::System::Type* get_BaseType();
    // public override System.String get_FullName()
    // Offset: 0x22EA6B4
    // Implemented from: System.Type
    // Base method: System.String Type::get_FullName()
    ::StringW get_FullName();
    // public override System.Guid get_GUID()
    // Offset: 0x22EA710
    // Implemented from: System.Type
    // Base method: System.Guid Type::get_GUID()
    ::System::Guid get_GUID();
    // public override System.Reflection.Module get_Module()
    // Offset: 0x22EA76C
    // Implemented from: System.Type
    // Base method: System.Reflection.Module Type::get_Module()
    ::System::Reflection::Module* get_Module();
    // public override System.String get_Name()
    // Offset: 0x22EA7C8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::StringW get_Name();
    // public override System.String get_Namespace()
    // Offset: 0x22EA824
    // Implemented from: System.Type
    // Base method: System.String Type::get_Namespace()
    ::StringW get_Namespace();
    // public override System.Type get_UnderlyingSystemType()
    // Offset: 0x22EA8DC
    // Implemented from: System.Type
    // Base method: System.Type Type::get_UnderlyingSystemType()
    ::System::Type* get_UnderlyingSystemType();
    // public override System.Type GetElementType()
    // Offset: 0x22EA880
    // Implemented from: System.Type
    // Base method: System.Type Type::GetElementType()
    ::System::Type* GetElementType();
    // protected override System.Reflection.TypeAttributes GetAttributeFlagsImpl()
    // Offset: 0x22EA91C
    // Implemented from: System.Type
    // Base method: System.Reflection.TypeAttributes Type::GetAttributeFlagsImpl()
    ::System::Reflection::TypeAttributes GetAttributeFlagsImpl();
    // protected override System.Reflection.ConstructorInfo GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x22EA95C
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo Type::GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);
    // public override System.Reflection.ConstructorInfo[] GetConstructors(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x22EA99C
    // Implemented from: System.Type
    // Base method: System.Reflection.ConstructorInfo[] Type::GetConstructors(System.Reflection.BindingFlags bindingAttr)
    ::ArrayW<::System::Reflection::ConstructorInfo*> GetConstructors(::System::Reflection::BindingFlags bindingAttr);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x22EA9DC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x22EAA1C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::ArrayW<::Il2CppObject*> GetCustomAttributes(::System::Type* attributeType, bool inherit);
    // public override System.Reflection.EventInfo GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x22EAA5C
    // Implemented from: System.Type
    // Base method: System.Reflection.EventInfo Type::GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    ::System::Reflection::EventInfo* GetEvent(::StringW name, ::System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x22EAA9C
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo Type::GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    ::System::Reflection::FieldInfo* GetField(::StringW name, ::System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.FieldInfo[] GetFields(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x22EAADC
    // Implemented from: System.Type
    // Base method: System.Reflection.FieldInfo[] Type::GetFields(System.Reflection.BindingFlags bindingAttr)
    ::ArrayW<::System::Reflection::FieldInfo*> GetFields(::System::Reflection::BindingFlags bindingAttr);
    // public override System.Type[] GetInterfaces()
    // Offset: 0x22EAB1C
    // Implemented from: System.Type
    // Base method: System.Type[] Type::GetInterfaces()
    ::ArrayW<::System::Type*> GetInterfaces();
    // protected override System.Reflection.MethodInfo GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x22EAB5C
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo Type::GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    ::System::Reflection::MethodInfo* GetMethodImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Reflection::CallingConventions callConvention, ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);
    // public override System.Reflection.MethodInfo[] GetMethods(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x22EAB9C
    // Implemented from: System.Type
    // Base method: System.Reflection.MethodInfo[] Type::GetMethods(System.Reflection.BindingFlags bindingAttr)
    ::ArrayW<::System::Reflection::MethodInfo*> GetMethods(::System::Reflection::BindingFlags bindingAttr);
    // public override System.Type GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x22EABDC
    // Implemented from: System.Type
    // Base method: System.Type Type::GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    ::System::Type* GetNestedType(::StringW name, ::System::Reflection::BindingFlags bindingAttr);
    // public override System.Reflection.PropertyInfo[] GetProperties(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x22EAC1C
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo[] Type::GetProperties(System.Reflection.BindingFlags bindingAttr)
    ::ArrayW<::System::Reflection::PropertyInfo*> GetProperties(::System::Reflection::BindingFlags bindingAttr);
    // protected override System.Reflection.PropertyInfo GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x22EAC5C
    // Implemented from: System.Type
    // Base method: System.Reflection.PropertyInfo Type::GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW name, ::System::Reflection::BindingFlags bindingAttr, ::System::Reflection::Binder* binder, ::System::Type* returnType, ::ArrayW<::System::Type*> types, ::ArrayW<::System::Reflection::ParameterModifier> modifiers);
    // protected override System.Boolean HasElementTypeImpl()
    // Offset: 0x22EAC9C
    // Implemented from: System.Type
    // Base method: System.Boolean Type::HasElementTypeImpl()
    bool HasElementTypeImpl();
    // public override System.Object InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    // Offset: 0x22EACDC
    // Implemented from: System.Type
    // Base method: System.Object Type::InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    ::Il2CppObject* InvokeMember(::StringW name, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder, ::Il2CppObject* target, ::ArrayW<::Il2CppObject*> args, ::ArrayW<::System::Reflection::ParameterModifier> modifiers, ::System::Globalization::CultureInfo* culture, ::ArrayW<::StringW> namedParameters);
    // protected override System.Boolean IsArrayImpl()
    // Offset: 0x22EAD1C
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsArrayImpl()
    bool IsArrayImpl();
    // protected override System.Boolean IsByRefImpl()
    // Offset: 0x22EAD5C
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsByRefImpl()
    bool IsByRefImpl();
    // protected override System.Boolean IsCOMObjectImpl()
    // Offset: 0x22EAD9C
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsCOMObjectImpl()
    bool IsCOMObjectImpl();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x22EADDC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(::System::Type* attributeType, bool inherit);
    // protected override System.Boolean IsPointerImpl()
    // Offset: 0x22EAE1C
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPointerImpl()
    bool IsPointerImpl();
    // protected override System.Boolean IsPrimitiveImpl()
    // Offset: 0x22EAE5C
    // Implemented from: System.Type
    // Base method: System.Boolean Type::IsPrimitiveImpl()
    bool IsPrimitiveImpl();
  }; // System.Reflection.Emit.GenericTypeParameterBuilder
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_Assembly
// Il2CppName: get_Assembly
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_Assembly)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_Assembly", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_AssemblyQualifiedName
// Il2CppName: get_AssemblyQualifiedName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_AssemblyQualifiedName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_AssemblyQualifiedName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_BaseType
// Il2CppName: get_BaseType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_BaseType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_BaseType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_FullName
// Il2CppName: get_FullName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_FullName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_FullName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_GUID
// Il2CppName: get_GUID
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_GUID)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_GUID", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_Module
// Il2CppName: get_Module
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_Module)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_Module", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_Name
// Il2CppName: get_Name
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_Name)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_Name", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_Namespace
// Il2CppName: get_Namespace
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_Namespace)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_Namespace", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::get_UnderlyingSystemType
// Il2CppName: get_UnderlyingSystemType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::get_UnderlyingSystemType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "get_UnderlyingSystemType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetElementType
// Il2CppName: GetElementType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetElementType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetElementType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetAttributeFlagsImpl
// Il2CppName: GetAttributeFlagsImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::TypeAttributes (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetAttributeFlagsImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetAttributeFlagsImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetConstructorImpl
// Il2CppName: GetConstructorImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::ConstructorInfo* (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetConstructorImpl)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* callConvention = &::il2cpp_utils::GetClassFromName("System.Reflection", "CallingConventions")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetConstructorImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr, binder, callConvention, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetConstructors
// Il2CppName: GetConstructors
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::ConstructorInfo*> (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::System::Reflection::BindingFlags)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetConstructors)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetConstructors", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::Emit::GenericTypeParameterBuilder::*)(bool)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetCustomAttributes
// Il2CppName: GetCustomAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::Il2CppObject*> (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::System::Type*, bool)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetCustomAttributes)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetCustomAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetEvent
// Il2CppName: GetEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::EventInfo* (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetEvent)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetField
// Il2CppName: GetField
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldInfo* (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetField)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetField", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetFields
// Il2CppName: GetFields
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::FieldInfo*> (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::System::Reflection::BindingFlags)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetFields)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetFields", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetInterfaces
// Il2CppName: GetInterfaces
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetInterfaces)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetInterfaces", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetMethodImpl
// Il2CppName: GetMethodImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MethodInfo* (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Reflection::CallingConventions, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetMethodImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* callConvention = &::il2cpp_utils::GetClassFromName("System.Reflection", "CallingConventions")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetMethodImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr, binder, callConvention, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetMethods
// Il2CppName: GetMethods
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::System::Reflection::BindingFlags)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetMethods)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetMethods", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetNestedType
// Il2CppName: GetNestedType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::StringW, ::System::Reflection::BindingFlags)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetNestedType)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetNestedType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetProperties
// Il2CppName: GetProperties
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::PropertyInfo*> (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::System::Reflection::BindingFlags)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetProperties)> {
  static const MethodInfo* get() {
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetProperties", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bindingAttr});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::GetPropertyImpl
// Il2CppName: GetPropertyImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::PropertyInfo* (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Type*, ::ArrayW<::System::Type*>, ::ArrayW<::System::Reflection::ParameterModifier>)>(&System::Reflection::Emit::GenericTypeParameterBuilder::GetPropertyImpl)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* bindingAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* returnType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* types = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Type"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "GetPropertyImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, bindingAttr, binder, returnType, types, modifiers});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::HasElementTypeImpl
// Il2CppName: HasElementTypeImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::HasElementTypeImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "HasElementTypeImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::InvokeMember
// Il2CppName: InvokeMember
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::StringW, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::Il2CppObject*, ::ArrayW<::Il2CppObject*>, ::ArrayW<::System::Reflection::ParameterModifier>, ::System::Globalization::CultureInfo*, ::ArrayW<::StringW>)>(&System::Reflection::Emit::GenericTypeParameterBuilder::InvokeMember)> {
  static const MethodInfo* get() {
    static auto* name = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* invokeAttr = &::il2cpp_utils::GetClassFromName("System.Reflection", "BindingFlags")->byval_arg;
    static auto* binder = &::il2cpp_utils::GetClassFromName("System.Reflection", "Binder")->byval_arg;
    static auto* target = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    static auto* modifiers = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterModifier"), 1)->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* namedParameters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "String"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "InvokeMember", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{name, invokeAttr, binder, target, args, modifiers, culture, namedParameters});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::IsArrayImpl
// Il2CppName: IsArrayImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::IsArrayImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "IsArrayImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::IsByRefImpl
// Il2CppName: IsByRefImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::IsByRefImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "IsByRefImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::IsCOMObjectImpl
// Il2CppName: IsCOMObjectImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::IsCOMObjectImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "IsCOMObjectImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::IsDefined
// Il2CppName: IsDefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::GenericTypeParameterBuilder::*)(::System::Type*, bool)>(&System::Reflection::Emit::GenericTypeParameterBuilder::IsDefined)> {
  static const MethodInfo* get() {
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "IsDefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributeType, inherit});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::IsPointerImpl
// Il2CppName: IsPointerImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::IsPointerImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "IsPointerImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Reflection::Emit::GenericTypeParameterBuilder::IsPrimitiveImpl
// Il2CppName: IsPrimitiveImpl
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Reflection::Emit::GenericTypeParameterBuilder::*)()>(&System::Reflection::Emit::GenericTypeParameterBuilder::IsPrimitiveImpl)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Reflection::Emit::GenericTypeParameterBuilder*), "IsPrimitiveImpl", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
