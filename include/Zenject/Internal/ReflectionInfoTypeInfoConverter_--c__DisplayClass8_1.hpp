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
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*, "Zenject.Internal", "ReflectionInfoTypeInfoConverter/<>c__DisplayClass8_1");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass8_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1 : public ::Il2CppObject {
    public:
    public:
    // public System.Object injectable
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* injectable;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public System.Object injectable
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_injectable();
    // Get instance field reference: public System.Object value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_value();
    // public System.Void .ctor()
    // Offset: 0x1CB273C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*, creationType>()));
    }
    // System.Void <GetOnlyPropertySetter>b__3(System.Reflection.FieldInfo f)
    // Offset: 0x1CB2900
    void $GetOnlyPropertySetter$b__3(::System::Reflection::FieldInfo* f);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1CB2924
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1CB2980
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.Internal.ReflectionInfoTypeInfoConverter/Zenject.Internal.<>c__DisplayClass8_1
  #pragma pack(pop)
  static check_size<sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1), 24 + sizeof(::Il2CppObject*)> __Zenject_Internal_ReflectionInfoTypeInfoConverter_$$c__DisplayClass8_1SizeCheck;
  static_assert(sizeof(ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::$GetOnlyPropertySetter$b__3
// Il2CppName: <GetOnlyPropertySetter>b__3
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::*)(::System::Reflection::FieldInfo*)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::$GetOnlyPropertySetter$b__3)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System.Reflection", "FieldInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*), "<GetOnlyPropertySetter>b__3", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionInfoTypeInfoConverter::$$c__DisplayClass8_1*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
