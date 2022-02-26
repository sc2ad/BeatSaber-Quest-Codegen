// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionBindInfo
#include "Zenject/ConventionBindInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConventionBindInfo::$$c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionBindInfo::$$c__DisplayClass6_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass6_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionBindInfo/Zenject.<>c__DisplayClass6_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConventionBindInfo::$$c__DisplayClass6_0 : public ::Il2CppObject {
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
    // public System.Reflection.Assembly assembly
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::Assembly* assembly;
    // Field size check
    static_assert(sizeof(::System::Reflection::Assembly*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Reflection::Assembly*
    constexpr operator ::System::Reflection::Assembly*() const noexcept {
      return assembly;
    }
    // Get instance field reference: public System.Reflection.Assembly assembly
    ::System::Reflection::Assembly*& dyn_assembly();
    // System.Boolean <ShouldIncludeAssembly>b__0(System.Func`2<System.Reflection.Assembly,System.Boolean> predicate)
    // Offset: 0x16DF81C
    bool $ShouldIncludeAssembly$b__0(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x16DF884
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x16DF8E0
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x16DF5D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionBindInfo::$$c__DisplayClass6_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionBindInfo::$$c__DisplayClass6_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionBindInfo::$$c__DisplayClass6_0*, creationType>()));
    }
  }; // Zenject.ConventionBindInfo/Zenject.<>c__DisplayClass6_0
  #pragma pack(pop)
  static check_size<sizeof(ConventionBindInfo::$$c__DisplayClass6_0), 16 + sizeof(::System::Reflection::Assembly*)> __Zenject_ConventionBindInfo_$$c__DisplayClass6_0SizeCheck;
  static_assert(sizeof(ConventionBindInfo::$$c__DisplayClass6_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass6_0::$ShouldIncludeAssembly$b__0
// Il2CppName: <ShouldIncludeAssembly>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionBindInfo::$$c__DisplayClass6_0::*)(::System::Func_2<::System::Reflection::Assembly*, bool>*)>(&Zenject::ConventionBindInfo::$$c__DisplayClass6_0::$ShouldIncludeAssembly$b__0)> {
  static const MethodInfo* get() {
    static auto* predicate = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Func`2"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly"), ::il2cpp_utils::GetClassFromName("System", "Boolean")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo::$$c__DisplayClass6_0*), "<ShouldIncludeAssembly>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{predicate});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass6_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ConventionBindInfo::$$c__DisplayClass6_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo::$$c__DisplayClass6_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass6_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ConventionBindInfo::$$c__DisplayClass6_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionBindInfo::$$c__DisplayClass6_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionBindInfo::$$c__DisplayClass6_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
