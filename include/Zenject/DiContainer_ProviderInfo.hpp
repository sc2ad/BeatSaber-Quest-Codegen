// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindingCondition
  class BindingCondition;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DiContainer::ProviderInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DiContainer::ProviderInfo*, "Zenject", "DiContainer/ProviderInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DiContainer/Zenject.ProviderInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class DiContainer::ProviderInfo : public ::Il2CppObject {
    public:
    public:
    // public readonly Zenject.DiContainer Container
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::DiContainer* Container;
    // Field size check
    static_assert(sizeof(::Zenject::DiContainer*) == 0x8);
    // public readonly System.Boolean NonLazy
    // Size: 0x1
    // Offset: 0x18
    bool NonLazy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: NonLazy and: Provider
    char __padding1[0x7] = {};
    // public readonly Zenject.IProvider Provider
    // Size: 0x8
    // Offset: 0x20
    ::Zenject::IProvider* Provider;
    // Field size check
    static_assert(sizeof(::Zenject::IProvider*) == 0x8);
    // public readonly Zenject.BindingCondition Condition
    // Size: 0x8
    // Offset: 0x28
    ::Zenject::BindingCondition* Condition;
    // Field size check
    static_assert(sizeof(::Zenject::BindingCondition*) == 0x8);
    public:
    // Get instance field reference: public readonly Zenject.DiContainer Container
    [[deprecated("Use field access instead!")]] ::Zenject::DiContainer*& dyn_Container();
    // Get instance field reference: public readonly System.Boolean NonLazy
    [[deprecated("Use field access instead!")]] bool& dyn_NonLazy();
    // Get instance field reference: public readonly Zenject.IProvider Provider
    [[deprecated("Use field access instead!")]] ::Zenject::IProvider*& dyn_Provider();
    // Get instance field reference: public readonly Zenject.BindingCondition Condition
    [[deprecated("Use field access instead!")]] ::Zenject::BindingCondition*& dyn_Condition();
    // public System.Void .ctor(Zenject.IProvider provider, Zenject.BindingCondition condition, System.Boolean nonLazy, Zenject.DiContainer container)
    // Offset: 0x1E51E20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::ProviderInfo* New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingCondition* condition, bool nonLazy, ::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DiContainer::ProviderInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::ProviderInfo*, creationType>(provider, condition, nonLazy, container)));
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1E51E74
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1E52008
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.DiContainer/Zenject.ProviderInfo
  #pragma pack(pop)
  static check_size<sizeof(DiContainer::ProviderInfo), 40 + sizeof(::Zenject::BindingCondition*)> __Zenject_DiContainer_ProviderInfoSizeCheck;
  static_assert(sizeof(DiContainer::ProviderInfo) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DiContainer::ProviderInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DiContainer::ProviderInfo::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::DiContainer::ProviderInfo::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::ProviderInfo*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::DiContainer::ProviderInfo::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::DiContainer::ProviderInfo::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::ProviderInfo*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
