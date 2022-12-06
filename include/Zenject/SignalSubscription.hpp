// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IPoolable`2
#include "Zenject/IPoolable_2.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: Zenject.BindingId
#include "Zenject/BindingId.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalDeclaration
  class SignalDeclaration;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: SignalSubscription
  class SignalSubscription;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::SignalSubscription);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscription*, "Zenject", "SignalSubscription");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.SignalSubscription
  // [TokenAttribute] Offset: FFFFFFFF
  class SignalSubscription : public ::Il2CppObject/*, public ::Zenject::IPoolable_2<::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*>, public ::System::IDisposable*/ {
    public:
    // Nested type: ::Zenject::SignalSubscription::Pool
    class Pool;
    public:
    // private readonly Zenject.SignalSubscription/Zenject.Pool _pool
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::SignalSubscription::Pool* pool;
    // Field size check
    static_assert(sizeof(::Zenject::SignalSubscription::Pool*) == 0x8);
    // private System.Action`1<System.Object> _callback
    // Size: 0x8
    // Offset: 0x18
    ::System::Action_1<::Il2CppObject*>* callback;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Il2CppObject*>*) == 0x8);
    // private Zenject.SignalDeclaration _declaration
    // Size: 0x8
    // Offset: 0x20
    ::Zenject::SignalDeclaration* declaration;
    // Field size check
    static_assert(sizeof(::Zenject::SignalDeclaration*) == 0x8);
    // private Zenject.BindingId _signalId
    // Size: 0x10
    // Offset: 0x28
    ::Zenject::BindingId signalId;
    // Field size check
    static_assert(sizeof(::Zenject::BindingId) == 0x10);
    public:
    // Creating interface conversion operator: operator ::Zenject::IPoolable_2<::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*>
    operator ::Zenject::IPoolable_2<::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*>() noexcept {
      return *reinterpret_cast<::Zenject::IPoolable_2<::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*>*>(this);
    }
    // Creating interface conversion operator: i_SignalDeclaration
    inline ::Zenject::IPoolable_2<::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*>* i_SignalDeclaration() noexcept {
      return reinterpret_cast<::Zenject::IPoolable_2<::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IDisposable
    operator ::System::IDisposable() noexcept {
      return *reinterpret_cast<::System::IDisposable*>(this);
    }
    // Creating interface conversion operator: i_IDisposable
    inline ::System::IDisposable* i_IDisposable() noexcept {
      return reinterpret_cast<::System::IDisposable*>(this);
    }
    // Get instance field reference: private readonly Zenject.SignalSubscription/Zenject.Pool _pool
    [[deprecated("Use field access instead!")]] ::Zenject::SignalSubscription::Pool*& dyn__pool();
    // Get instance field reference: private System.Action`1<System.Object> _callback
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Il2CppObject*>*& dyn__callback();
    // Get instance field reference: private Zenject.SignalDeclaration _declaration
    [[deprecated("Use field access instead!")]] ::Zenject::SignalDeclaration*& dyn__declaration();
    // Get instance field reference: private Zenject.BindingId _signalId
    [[deprecated("Use field access instead!")]] ::Zenject::BindingId& dyn__signalId();
    // public Zenject.BindingId get_SignalId()
    // Offset: 0x1DB7038
    ::Zenject::BindingId get_SignalId();
    // public System.Void .ctor(Zenject.SignalSubscription/Zenject.Pool pool)
    // Offset: 0x1DB6FF4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SignalSubscription* New_ctor(::Zenject::SignalSubscription::Pool* pool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::SignalSubscription::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SignalSubscription*, creationType>(pool)));
    }
    // public System.Void OnSpawned(System.Action`1<System.Object> callback, Zenject.SignalDeclaration declaration)
    // Offset: 0x1DB7044
    void OnSpawned(::System::Action_1<::Il2CppObject*>* callback, ::Zenject::SignalDeclaration* declaration);
    // public System.Void OnDespawned()
    // Offset: 0x1DB7098
    void OnDespawned();
    // private System.Void SetDefaults()
    // Offset: 0x1DB7028
    void SetDefaults();
    // public System.Void Dispose()
    // Offset: 0x1DB32D8
    void Dispose();
    // public System.Void OnDeclarationDespawned()
    // Offset: 0x1DB5F28
    void OnDeclarationDespawned();
    // public System.Void Invoke(System.Object signal)
    // Offset: 0x1DB6128
    void Invoke(::Il2CppObject* signal);
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0x1DB70D0
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0);
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0x1DB71A0
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();
  }; // Zenject.SignalSubscription
  #pragma pack(pop)
  static check_size<sizeof(SignalSubscription), 40 + sizeof(::Zenject::BindingId)> __Zenject_SignalSubscriptionSizeCheck;
  static_assert(sizeof(SignalSubscription) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::SignalSubscription::get_SignalId
// Il2CppName: get_SignalId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::BindingId (Zenject::SignalSubscription::*)()>(&Zenject::SignalSubscription::get_SignalId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "get_SignalId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::SignalSubscription::OnSpawned
// Il2CppName: OnSpawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalSubscription::*)(::System::Action_1<::Il2CppObject*>*, ::Zenject::SignalDeclaration*)>(&Zenject::SignalSubscription::OnSpawned)> {
  static const MethodInfo* get() {
    static auto* callback = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Action`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "Object")})->byval_arg;
    static auto* declaration = &::il2cpp_utils::GetClassFromName("Zenject", "SignalDeclaration")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "OnSpawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{callback, declaration});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::OnDespawned
// Il2CppName: OnDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalSubscription::*)()>(&Zenject::SignalSubscription::OnDespawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "OnDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::SetDefaults
// Il2CppName: SetDefaults
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalSubscription::*)()>(&Zenject::SignalSubscription::SetDefaults)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "SetDefaults", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::Dispose
// Il2CppName: Dispose
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalSubscription::*)()>(&Zenject::SignalSubscription::Dispose)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "Dispose", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::OnDeclarationDespawned
// Il2CppName: OnDeclarationDespawned
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalSubscription::*)()>(&Zenject::SignalSubscription::OnDeclarationDespawned)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "OnDeclarationDespawned", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::Invoke
// Il2CppName: Invoke
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Zenject::SignalSubscription::*)(::Il2CppObject*)>(&Zenject::SignalSubscription::Invoke)> {
  static const MethodInfo* get() {
    static auto* signal = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "Invoke", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{signal});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::__zenCreate
// Il2CppName: __zenCreate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::ArrayW<::Il2CppObject*>)>(&Zenject::SignalSubscription::__zenCreate)> {
  static const MethodInfo* get() {
    static auto* P_0 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Object"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "__zenCreate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{P_0});
  }
};
// Writing MetadataGetter for method: Zenject::SignalSubscription::__zenCreateInjectTypeInfo
// Il2CppName: __zenCreateInjectTypeInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&Zenject::SignalSubscription::__zenCreateInjectTypeInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Zenject::SignalSubscription*), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
