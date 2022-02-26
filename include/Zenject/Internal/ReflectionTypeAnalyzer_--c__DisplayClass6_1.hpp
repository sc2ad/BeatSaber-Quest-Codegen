// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeAnalyzer
#include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_1");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass6_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ReflectionTypeAnalyzer::$$c__DisplayClass6_1 : public ::Il2CppObject {
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
    // public System.Reflection.FieldInfo x
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::FieldInfo* x;
    // Field size check
    static_assert(sizeof(::System::Reflection::FieldInfo*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::FieldInfo*
    constexpr operator ::System::Reflection::FieldInfo*() const noexcept {
      return x;
    }
    // Get instance field reference: public System.Reflection.FieldInfo x
    ::System::Reflection::FieldInfo*& dyn_x();
    // System.Boolean <GetFieldInfos>b__2(System.Type a)
    // Offset: 0x1B074A0
    bool $GetFieldInfos$b__2(::System::Type* a);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1B07578
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1B075D4
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1B06620
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeAnalyzer::$$c__DisplayClass6_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeAnalyzer::$$c__DisplayClass6_1*, creationType>()));
    }
  }; // Zenject.Internal.ReflectionTypeAnalyzer/Zenject.Internal.<>c__DisplayClass6_1
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass6_1), 16 + sizeof(::System::Reflection::FieldInfo*)> __Zenject_Internal_ReflectionTypeAnalyzer_$$c__DisplayClass6_1SizeCheck;
  static_assert(sizeof(ReflectionTypeAnalyzer::$$c__DisplayClass6_1) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::$GetFieldInfos$b__2
// Il2CppName: <GetFieldInfos>b__2
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::*)(::System::Type*)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::$GetFieldInfos$b__2)> {
  static const MethodInfo* get() {
    static auto* a = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1*), "<GetFieldInfos>b__2", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{a});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeAnalyzer::$$c__DisplayClass6_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
