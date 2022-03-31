// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionAssemblySelectionBinder
#include "Zenject/ConventionAssemblySelectionBinder.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0*, "Zenject", "ConventionAssemblySelectionBinder/<>c__DisplayClass12_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionAssemblySelectionBinder/Zenject.<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class ConventionAssemblySelectionBinder::$$c__DisplayClass12_0 : public ::Il2CppObject {
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
    // public System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> assemblies
    // Size: 0x8
    // Offset: 0x10
    ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* assemblies;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*) == 0x8);
    public:
    // Creating conversion operator: operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*
    constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*() const noexcept {
      return assemblies;
    }
    // Get instance field reference: public System.Collections.Generic.IEnumerable`1<System.Reflection.Assembly> assemblies
    ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*& dyn_assemblies();
    // System.Boolean <FromAssemblies>b__0(System.Reflection.Assembly assembly)
    // Offset: 0x1739590
    bool $FromAssemblies$b__0(::System::Reflection::Assembly* assembly);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x17395F0
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x173964C
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x17392BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionAssemblySelectionBinder::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionAssemblySelectionBinder::$$c__DisplayClass12_0*, creationType>()));
    }
  }; // Zenject.ConventionAssemblySelectionBinder/Zenject.<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(ConventionAssemblySelectionBinder::$$c__DisplayClass12_0), 16 + sizeof(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*)> __Zenject_ConventionAssemblySelectionBinder_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(ConventionAssemblySelectionBinder::$$c__DisplayClass12_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::$FromAssemblies$b__0
// Il2CppName: <FromAssemblies>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::*)(::System::Reflection::Assembly*)>(&Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::$FromAssemblies$b__0)> {
  static const MethodInfo* get() {
    static auto* assembly = &::il2cpp_utils::GetClassFromName("System.Reflection", "Assembly")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0*), "<FromAssemblies>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{assembly});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::ConventionAssemblySelectionBinder::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
