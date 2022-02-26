// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
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
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::FromBinder::$$c__DisplayClass60_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FromBinder::$$c__DisplayClass60_1*, "Zenject", "FromBinder/<>c__DisplayClass60_1");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/Zenject.<>c__DisplayClass60_1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class FromBinder::$$c__DisplayClass60_1 : public ::Il2CppObject {
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
    // public System.Type concreteType
    // Size: 0x8
    // Offset: 0x10
    ::System::Type* concreteType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public Zenject.FromBinder/Zenject.<>c__DisplayClass60_0 CS$<>8__locals1
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::FromBinder::$$c__DisplayClass60_0* CS$$$8__locals1;
    // Field size check
    static_assert(sizeof(::Zenject::FromBinder::$$c__DisplayClass60_0*) == 0x8);
    public:
    // Get instance field reference: public System.Type concreteType
    ::System::Type*& dyn_concreteType();
    // Get instance field reference: public Zenject.FromBinder/Zenject.<>c__DisplayClass60_0 CS$<>8__locals1
    ::Zenject::FromBinder::$$c__DisplayClass60_0*& dyn_CS$$$8__locals1();
    // System.Collections.Generic.IEnumerable`1<System.Object> <FromComponentsInChildrenBase>b__1(Zenject.InjectContext ctx)
    // Offset: 0x1D33B88
    ::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* $FromComponentsInChildrenBase$b__1(::Zenject::InjectContext* ctx);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1D33DB4
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1D33E10
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
    // public System.Void .ctor()
    // Offset: 0x1D339C4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass60_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FromBinder::$$c__DisplayClass60_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass60_1*, creationType>()));
    }
  }; // Zenject.FromBinder/Zenject.<>c__DisplayClass60_1
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass60_1), 24 + sizeof(::Zenject::FromBinder::$$c__DisplayClass60_0*)> __Zenject_FromBinder_$$c__DisplayClass60_1SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass60_1) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass60_1::$FromComponentsInChildrenBase$b__1
// Il2CppName: <FromComponentsInChildrenBase>b__1
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::Il2CppObject*>* (Zenject::FromBinder::$$c__DisplayClass60_1::*)(::Zenject::InjectContext*)>(&Zenject::FromBinder::$$c__DisplayClass60_1::$FromComponentsInChildrenBase$b__1)> {
  static const MethodInfo* get() {
    static auto* ctx = &::il2cpp_utils::GetClassFromName("Zenject", "InjectContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass60_1*), "<FromComponentsInChildrenBase>b__1", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ctx});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass60_1::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::FromBinder::$$c__DisplayClass60_1::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass60_1*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass60_1::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::FromBinder::$$c__DisplayClass60_1::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::FromBinder::$$c__DisplayClass60_1*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::FromBinder::$$c__DisplayClass60_1::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
