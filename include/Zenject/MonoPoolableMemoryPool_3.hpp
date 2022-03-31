// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPool`3
#include "Zenject/MemoryPool_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`2<TParam1, TParam2>
  template<typename TParam1, typename TParam2>
  class IPoolable_2;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: MonoPoolableMemoryPool`3<TParam1, TParam2, TValue>
  template<typename TParam1, typename TParam2, typename TValue>
  class MonoPoolableMemoryPool_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoPoolableMemoryPool_3, "Zenject", "MonoPoolableMemoryPool`3");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MonoPoolableMemoryPool`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TValue>
  class MonoPoolableMemoryPool_3 : public ::Zenject::MemoryPool_3<TParam1, TParam2, TValue> {
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
    // private UnityEngine.Transform _originalParent
    // Size: 0x8
    // Offset: 0x0
    ::UnityEngine::Transform* originalParent;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Creating conversion operator: operator ::UnityEngine::Transform*
    constexpr operator ::UnityEngine::Transform*() const noexcept {
      return originalParent;
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _originalParent
    ::UnityEngine::Transform*& dyn__originalParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::dyn__originalParent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_originalParent"))->offset;
      return *reinterpret_cast<::UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Void OnCreated(TValue item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnCreated(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::OnCreated");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnDestroyed(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::OnDestroyed");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroyed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void OnDespawned(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::OnDespawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Void MemoryPool_3::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoPoolableMemoryPool_3<TParam1, TParam2, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoPoolableMemoryPool_3<TParam1, TParam2, TValue>*, creationType>()));
    }
    // protected override System.Void Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Void MemoryPool_3::Reinitialize(TParam1 p1, TParam2 p2, TValue item)
    void Reinitialize(TParam1 p1, TParam2 p2, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(item)})));
      ::il2cpp_utils::RunMethodRethrow<void, false>(this, ___internal__method, p1, p2, item);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPool`3
    // Base method: System.Object MemoryPool_3::__zenCreate(System.Object[] P_0)
    // Base method: System.Object MemoryPoolBase_1::__zenCreate(System.Object[] P_0)
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoPoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: Zenject.MemoryPool`3
    // Base method: Zenject.InjectTypeInfo MemoryPool_3::__zenCreateInjectTypeInfo()
    // Base method: Zenject.InjectTypeInfo MemoryPoolBase_1::__zenCreateInjectTypeInfo()
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::MonoPoolableMemoryPool_3::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoPoolableMemoryPool_3<TParam1, TParam2, TValue>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.MonoPoolableMemoryPool`3
  // Could not write size check! Type: Zenject.MonoPoolableMemoryPool`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
