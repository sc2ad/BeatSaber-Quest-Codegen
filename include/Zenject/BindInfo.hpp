// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.BindingInheritanceMethods
#include "Zenject/BindingInheritanceMethods.hpp"
// Including type: Zenject.InvalidBindResponses
#include "Zenject/InvalidBindResponses.hpp"
// Including type: Zenject.ToChoices
#include "Zenject/ToChoices.hpp"
// Including type: Zenject.ScopeTypes
#include "Zenject/ScopeTypes.hpp"
// Including type: Zenject.TypeValuePair
#include "Zenject/TypeValuePair.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
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
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindingCondition
  class BindingCondition;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::BindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::BindInfo*, "Zenject", "BindInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.BindInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class BindInfo : public ::Il2CppObject/*, public ::System::IDisposable*/ {
    public:
    public:
    // public System.Boolean MarkAsCreationBinding
    // Size: 0x1
    // Offset: 0x10
    bool MarkAsCreationBinding;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean MarkAsUniqueSingleton
    // Size: 0x1
    // Offset: 0x11
    bool MarkAsUniqueSingleton;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: MarkAsUniqueSingleton and: ConcreteIdentifier
    char __padding1[0x6] = {};
    // public System.Object ConcreteIdentifier
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* ConcreteIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Boolean SaveProvider
    // Size: 0x1
    // Offset: 0x20
    bool SaveProvider;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean OnlyBindIfNotBound
    // Size: 0x1
    // Offset: 0x21
    bool OnlyBindIfNotBound;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean RequireExplicitScope
    // Size: 0x1
    // Offset: 0x22
    bool RequireExplicitScope;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: RequireExplicitScope and: Identifier
    char __padding5[0x5] = {};
    // public System.Object Identifier
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppObject* Identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly System.Collections.Generic.List`1<System.Type> ContractTypes
    // Size: 0x8
    // Offset: 0x30
    ::System::Collections::Generic::List_1<::System::Type*>* ContractTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Type*>*) == 0x8);
    // public Zenject.BindingInheritanceMethods BindingInheritanceMethod
    // Size: 0x4
    // Offset: 0x38
    ::Zenject::BindingInheritanceMethods BindingInheritanceMethod;
    // Field size check
    static_assert(sizeof(::Zenject::BindingInheritanceMethods) == 0x4);
    // public Zenject.InvalidBindResponses InvalidBindResponse
    // Size: 0x4
    // Offset: 0x3C
    ::Zenject::InvalidBindResponses InvalidBindResponse;
    // Field size check
    static_assert(sizeof(::Zenject::InvalidBindResponses) == 0x4);
    // public System.Boolean NonLazy
    // Size: 0x1
    // Offset: 0x40
    bool NonLazy;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: NonLazy and: Condition
    char __padding10[0x7] = {};
    // public Zenject.BindingCondition Condition
    // Size: 0x8
    // Offset: 0x48
    ::Zenject::BindingCondition* Condition;
    // Field size check
    static_assert(sizeof(::Zenject::BindingCondition*) == 0x8);
    // public Zenject.ToChoices ToChoice
    // Size: 0x4
    // Offset: 0x50
    ::Zenject::ToChoices ToChoice;
    // Field size check
    static_assert(sizeof(::Zenject::ToChoices) == 0x4);
    // Padding between fields: ToChoice and: ContextInfo
    char __padding12[0x4] = {};
    // public System.String ContextInfo
    // Size: 0x8
    // Offset: 0x58
    ::StringW ContextInfo;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Collections.Generic.List`1<System.Type> ToTypes
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::List_1<::System::Type*>* ToTypes;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::System::Type*>*) == 0x8);
    // public Zenject.ScopeTypes Scope
    // Size: 0x4
    // Offset: 0x68
    ::Zenject::ScopeTypes Scope;
    // Field size check
    static_assert(sizeof(::Zenject::ScopeTypes) == 0x4);
    // Padding between fields: Scope and: Arguments
    char __padding15[0x4] = {};
    // public readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> Arguments
    // Size: 0x8
    // Offset: 0x70
    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* Arguments;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*) == 0x8);
    // public System.Action`2<Zenject.InjectContext,System.Object> InstantiatedCallback
    // Size: 0x8
    // Offset: 0x78
    ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>* InstantiatedCallback;
    // Field size check
    static_assert(sizeof(::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: public System.Boolean MarkAsCreationBinding
    [[deprecated("Use field access instead!")]] bool& dyn_MarkAsCreationBinding();
    // Get instance field reference: public System.Boolean MarkAsUniqueSingleton
    [[deprecated("Use field access instead!")]] bool& dyn_MarkAsUniqueSingleton();
    // Get instance field reference: public System.Object ConcreteIdentifier
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_ConcreteIdentifier();
    // Get instance field reference: public System.Boolean SaveProvider
    [[deprecated("Use field access instead!")]] bool& dyn_SaveProvider();
    // Get instance field reference: public System.Boolean OnlyBindIfNotBound
    [[deprecated("Use field access instead!")]] bool& dyn_OnlyBindIfNotBound();
    // Get instance field reference: public System.Boolean RequireExplicitScope
    [[deprecated("Use field access instead!")]] bool& dyn_RequireExplicitScope();
    // Get instance field reference: public System.Object Identifier
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn_Identifier();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<System.Type> ContractTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Type*>*& dyn_ContractTypes();
    // Get instance field reference: public Zenject.BindingInheritanceMethods BindingInheritanceMethod
    [[deprecated("Use field access instead!")]] ::Zenject::BindingInheritanceMethods& dyn_BindingInheritanceMethod();
    // Get instance field reference: public Zenject.InvalidBindResponses InvalidBindResponse
    [[deprecated("Use field access instead!")]] ::Zenject::InvalidBindResponses& dyn_InvalidBindResponse();
    // Get instance field reference: public System.Boolean NonLazy
    [[deprecated("Use field access instead!")]] bool& dyn_NonLazy();
    // Get instance field reference: public Zenject.BindingCondition Condition
    [[deprecated("Use field access instead!")]] ::Zenject::BindingCondition*& dyn_Condition();
    // Get instance field reference: public Zenject.ToChoices ToChoice
    [[deprecated("Use field access instead!")]] ::Zenject::ToChoices& dyn_ToChoice();
    // Get instance field reference: public System.String ContextInfo
    [[deprecated("Use field access instead!")]] ::StringW& dyn_ContextInfo();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<System.Type> ToTypes
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::System::Type*>*& dyn_ToTypes();
    // Get instance field reference: public Zenject.ScopeTypes Scope
    [[deprecated("Use field access instead!")]] ::Zenject::ScopeTypes& dyn_Scope();
    // Get instance field reference: public readonly System.Collections.Generic.List`1<Zenject.TypeValuePair> Arguments
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& dyn_Arguments();
    // Get instance field reference: public System.Action`2<Zenject.InjectContext,System.Object> InstantiatedCallback
    [[deprecated("Use field access instead!")]] ::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*& dyn_InstantiatedCallback();
    // public System.Void .ctor()
    // Offset: 0x17B31C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BindInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::BindInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BindInfo*, creationType>()));
    }
    // public System.Void Dispose()
    // Offset: 0x17B333C
    void Dispose();
    // public System.Void SetContextInfo(System.String contextInfo)
    // Offset: 0x17B33A4
    void SetContextInfo(::StringW contextInfo);
    // public System.Void Reset()
    // Offset: 0x17B3284
    void Reset();
  }; // Zenject.BindInfo
  #pragma pack(pop)
  static check_size<sizeof(BindInfo), 120 + sizeof(::System::Action_2<::Zenject::InjectContext*, ::Il2CppObject*>*)> __Zenject_BindInfoSizeCheck;
  static_assert(sizeof(BindInfo) == 0x80);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::BindInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::BindInfo::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindInfo::*)()>(&Zenject::BindInfo::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindInfo*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::BindInfo::SetContextInfo
// Il2CppName: SetContextInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindInfo::*)(::StringW)>(&Zenject::BindInfo::SetContextInfo)> {
  static const MethodInfo* get() {
    static auto* contextInfo = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindInfo*), "SetContextInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{contextInfo});
  }
};
// Writing MetadataGetter for method: Zenject::BindInfo::Reset
// Il2CppName: Reset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::BindInfo::*)()>(&Zenject::BindInfo::Reset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::BindInfo*), "Reset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
