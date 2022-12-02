// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionInfoTypeInfoConverter
#include "Zenject/Internal/ReflectionInfoTypeInfoConverter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass9_0");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass9_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0 : public ::Il2CppObject {
    public:
    public:
    // public System.Reflection.FieldInfo fieldInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::FieldInfo* fieldInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    // public System.Reflection.PropertyInfo propInfo
    // Size: 0x8
    // Offset: 0x18
    ::System::Reflection::PropertyInfo* propInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::PropertyInfo*) == 0x8);
    public:
    // Get instance field reference: public System.Reflection.FieldInfo fieldInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::FieldInfo*& dyn_fieldInfo();
    // Get instance field reference: public System.Reflection.PropertyInfo propInfo
    [[deprecated("Use field access instead!")]] ::System::Reflection::PropertyInfo*& dyn_propInfo();
    // public System.Void .ctor()
    // Offset: 0x1CB1F24
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*, creationType>()));
    }
    // System.Void <GetSetter>b__0(System.Object injectable, System.Object value)
    // Offset: 0x1CB2AE0
    void $GetSetter$b__0(::Il2CppObject* injectable, ::Il2CppObject* value);
    // System.Void <GetSetter>b__1(System.Object injectable, System.Object value)
    // Offset: 0x1CB2AFC
    void $GetSetter$b__1(::Il2CppObject* injectable, ::Il2CppObject* value);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CB2B24
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CB2B80
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass9_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0), 24 + sizeof(::System::Reflection::PropertyInfo*)> __Zenject_Internal_ReflectionInfoTypeInfoConverter_$$c__DisplayClass9_0SizeCheck;
  static_assert(sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__0
// Il2CppName: <GetSetter>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__0)> {
  static const MethodInfo* get() {
    static auto* injectable = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*), "<GetSetter>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectable, value});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__1
// Il2CppName: <GetSetter>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::*)(::Il2CppObject*, ::Il2CppObject*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::$GetSetter$b__1)> {
  static const MethodInfo* get() {
    static auto* injectable = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*), "<GetSetter>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{injectable, value});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass9_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
