// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_0");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass7_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionTypeAnalyzer::$$c__DisplayClass7_0 : public ::Il2CppObject {
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
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* type;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public System.Func`2<System.Reflection.ParameterInfo,Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo> <>9__2
    // Size: 0x8
    // Offset: 0x18
    ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>* $$9__2;
    // Field size check
    static_assert(sizeof(::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>*) == 0x8);
    public:
    // Get instance field reference: public System.Type type
    ::System::Type*& dyn_type();
    // Get instance field reference: public System.Func`2<System.Reflection.ParameterInfo,Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo> <>9__2
    ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>*& dyn_$$9__2();
    // Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo <GetMethodInfos>b__2(System.Reflection.ParameterInfo x)
    // Offset: 0x1B07734
    ::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* $GetMethodInfos$b__2(::System::Reflection::ParameterInfo* x);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1B077AC
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1B07808
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1B05B90
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass7_0), 24 + sizeof(::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*>*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass7_0) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::$GetMethodInfos$b__2
// Il2CppName: <GetMethodInfos>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo* (Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::*)(::System::Reflection::ParameterInfo*)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::$GetMethodInfos$b__2)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System.Reflection", "ParameterInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0*), "<GetMethodInfos>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass7_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
