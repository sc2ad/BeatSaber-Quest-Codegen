// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: Reflect
  class Reflect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Internal::Reflect);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Internal::Reflect*, "NUnit.Framework.Internal", "Reflect");
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Reflect
  // [TokenAttribute] Offset: FFFFFFFF
  class Reflect : public ::Il2CppObject {
    public:
    // Nested type: ::NUnit::Framework::Internal::Reflect::BaseTypesFirstComparer
    class BaseTypesFirstComparer;
    // Nested type: ::NUnit::Framework::Internal::Reflect::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Get static field: static private readonly System.Reflection.BindingFlags AllMembers
    static ::System::Reflection::BindingFlags _get_AllMembers();
    // Set static field: static private readonly System.Reflection.BindingFlags AllMembers
    static void _set_AllMembers(::System::Reflection::BindingFlags value);
    // Get static field: static private readonly System.Type[] EmptyTypes
    static ::ArrayW<::System::Type*> _get_EmptyTypes();
    // Set static field: static private readonly System.Type[] EmptyTypes
    static void _set_EmptyTypes(::ArrayW<::System::Type*> value);
    // [DebuggerBrowsableAttribute] Offset: 0x1236354
    // Get static field: static private System.Func`2<System.Func`1<System.Object>,System.Object> <MethodCallWrapper>k__BackingField
    static ::System::Func_2<::System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* _get_$MethodCallWrapper$k__BackingField();
    // Set static field: static private System.Func`2<System.Func`1<System.Object>,System.Object> <MethodCallWrapper>k__BackingField
    static void _set_$MethodCallWrapper$k__BackingField(::System::Func_2<::System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* value);
    // [DebuggerBrowsableAttribute] Offset: 0x1236390
    // Get static field: static private System.Func`3<System.Type,System.Object[],System.Object> <ConstructorCallWrapper>k__BackingField
    static ::System::Func_3<::System::Type*, ::ArrayW<::Il2CppObject*>, ::Il2CppObject*>* _get_$ConstructorCallWrapper$k__BackingField();
    // Set static field: static private System.Func`3<System.Type,System.Object[],System.Object> <ConstructorCallWrapper>k__BackingField
    static void _set_$ConstructorCallWrapper$k__BackingField(::System::Func_3<::System::Type*, ::ArrayW<::Il2CppObject*>, ::Il2CppObject*>* value);
    // static public System.Func`2<System.Func`1<System.Object>,System.Object> get_MethodCallWrapper()
    // Offset: 0x28B63F8
    static ::System::Func_2<::System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* get_MethodCallWrapper();
    // static public System.Func`3<System.Type,System.Object[],System.Object> get_ConstructorCallWrapper()
    // Offset: 0x28B6460
    static ::System::Func_3<::System::Type*, ::ArrayW<::Il2CppObject*>, ::Il2CppObject*>* get_ConstructorCallWrapper();
    // static private System.Void .cctor()
    // Offset: 0x28B64C8
    static void _cctor();
    // static public System.Reflection.MethodInfo[] GetMethodsWithAttribute(System.Type fixtureType, System.Type attributeType, System.Boolean inherit)
    // Offset: 0x28B5B08
    static ::ArrayW<::System::Reflection::MethodInfo*> GetMethodsWithAttribute(::System::Type* fixtureType, ::System::Type* attributeType, bool inherit);
    // static public System.Boolean HasMethodWithAttribute(System.Type fixtureType, System.Type attributeType)
    // Offset: 0x28B5CBC
    static bool HasMethodWithAttribute(::System::Type* fixtureType, ::System::Type* attributeType);
    // static public System.Object Construct(System.Type type)
    // Offset: 0x28B5DC4
    static ::Il2CppObject* Construct(::System::Type* type);
    // static public System.Object Construct(System.Type type, System.Object[] arguments)
    // Offset: 0x28B5FA8
    static ::Il2CppObject* Construct(::System::Type* type, ::ArrayW<::Il2CppObject*> arguments);
    // static System.Type[] GetTypeArray(System.Object[] objects)
    // Offset: 0x28B6234
    static ::ArrayW<::System::Type*> GetTypeArray(::ArrayW<::Il2CppObject*> objects);
    // static public System.Object InvokeMethod(System.Reflection.MethodInfo method, System.Object fixture)
    // Offset: 0x28B6378
    static ::Il2CppObject* InvokeMethod(::System::Reflection::MethodInfo* method, ::Il2CppObject* fixture);
    // static public System.Object InvokeMethod(System.Reflection.MethodInfo method, System.Object fixture, params System.Object[] args)
    // Offset: 0x28B41E0
    static ::Il2CppObject* InvokeMethod(::System::Reflection::MethodInfo* method, ::Il2CppObject* fixture, ::ArrayW<::Il2CppObject*> args);
  }; // NUnit.Framework.Internal.Reflect
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::get_MethodCallWrapper
// Il2CppName: get_MethodCallWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::System::Func_1<::Il2CppObject*>*, ::Il2CppObject*>* (*)()>(&NUnit::Framework::Internal::Reflect::get_MethodCallWrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "get_MethodCallWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::get_ConstructorCallWrapper
// Il2CppName: get_ConstructorCallWrapper
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_3<::System::Type*, ::ArrayW<::Il2CppObject*>, ::Il2CppObject*>* (*)()>(&NUnit::Framework::Internal::Reflect::get_ConstructorCallWrapper)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "get_ConstructorCallWrapper", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&NUnit::Framework::Internal::Reflect::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::GetMethodsWithAttribute
// Il2CppName: GetMethodsWithAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MethodInfo*> (*)(::System::Type*, ::System::Type*, bool)>(&NUnit::Framework::Internal::Reflect::GetMethodsWithAttribute)> {
  static const MethodInfo* get() {
    static auto* fixtureType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* inherit = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "GetMethodsWithAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixtureType, attributeType, inherit});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::HasMethodWithAttribute
// Il2CppName: HasMethodWithAttribute
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*, ::System::Type*)>(&NUnit::Framework::Internal::Reflect::HasMethodWithAttribute)> {
  static const MethodInfo* get() {
    static auto* fixtureType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* attributeType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "HasMethodWithAttribute", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fixtureType, attributeType});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*)>(&NUnit::Framework::Internal::Reflect::Construct)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::Construct
// Il2CppName: Construct
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Type*, ::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::Reflect::Construct)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* arguments = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "Construct", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, arguments});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::GetTypeArray
// Il2CppName: GetTypeArray
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Type*> (*)(::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::Reflect::GetTypeArray)> {
  static const MethodInfo* get() {
    static auto* objects = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "GetTypeArray", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objects});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::InvokeMethod
// Il2CppName: InvokeMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Reflection::MethodInfo*, ::Il2CppObject*)>(&NUnit::Framework::Internal::Reflect::InvokeMethod)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* fixture = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "InvokeMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, fixture});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Internal::Reflect::InvokeMethod
// Il2CppName: InvokeMethod
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::System::Reflection::MethodInfo*, ::Il2CppObject*, ::ArrayW<::Il2CppObject*>)>(&NUnit::Framework::Internal::Reflect::InvokeMethod)> {
  static const MethodInfo* get() {
    static auto* method = &::il2cpp_utils::GetClassFromName("System.Reflection", "MethodInfo")->byval_arg;
    static auto* fixture = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* args = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Internal::Reflect*), "InvokeMethod", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{method, fixture, args});
  }
};
