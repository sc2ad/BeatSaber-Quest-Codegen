// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.PrefabResourceBindingFinalizer
#include "Zenject/PrefabResourceBindingFinalizer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*, "Zenject", "PrefabResourceBindingFinalizer/<>c__DisplayClass5_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabResourceBindingFinalizer/Zenject.<>c__DisplayClass5_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class PrefabResourceBindingFinalizer::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    public:
    // public Zenject.PrefabResourceBindingFinalizer <>4__this
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::PrefabResourceBindingFinalizer* $$4__this;
    // Field size check
    static_assert(sizeof(::Zenject::PrefabResourceBindingFinalizer*) == 0x8);
    // public Zenject.DiContainer container
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // public System.Collections.Generic.List`1<System.Type> concreteTypes
    // Size: 0x8
    // Offset: 0x20
    ::System::Collections::Generic::List_1<::System::Type*>* concreteTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Type*>*) == 0x8);
    public:
    // Get instance field reference: public Zenject.PrefabResourceBindingFinalizer <>4__this
    [[deprecated("Use field access instead!")]] ::Zenject::PrefabResourceBindingFinalizer*& dyn_$$4__this();
    // Get instance field reference: public Zenject.DiContainer container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn_container();
    // Get instance field reference: public System.Collections.Generic.List`1<System.Type> concreteTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Type*>*& dyn_concreteTypes();
    // public System.Void .ctor()
    // Offset: 0x1C46AD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabResourceBindingFinalizer::$$c__DisplayClass5_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*, creationType>()));
    }
    // Zenject.IProvider <FinalizeBindingConcrete>b__0(Zenject.DiContainer _, System.Type concreteType)
    // Offset: 0x1C46AF0
    ::Zenject::IProvider* $FinalizeBindingConcrete$b__0(::Zenject::DiContainer* _, ::System::Type* concreteType);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1C46C04
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1C46C60
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.PrefabResourceBindingFinalizer/Zenject.<>c__DisplayClass5_0
  #pragma pack(pop)
  static check_size<sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass5_0), 32 + sizeof(::System::Collections::Generic::List_1<::System::Type*>*)> __Zenject_PrefabResourceBindingFinalizer_$$c__DisplayClass5_0SizeCheck;
  static_assert(sizeof(PrefabResourceBindingFinalizer::$$c__DisplayClass5_0) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::$FinalizeBindingConcrete$b__0
// Il2CppName: <FinalizeBindingConcrete>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::IProvider* (Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::*)(::Zenject::DiContainer*, ::System::Type*)>(&Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::$FinalizeBindingConcrete$b__0)> {
  static const MethodInfo* get() {
    static auto* _ = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer")->byval_arg;
    static auto* concreteType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*), "<FinalizeBindingConcrete>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{_, concreteType});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::PrefabResourceBindingFinalizer::$$c__DisplayClass5_0*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
