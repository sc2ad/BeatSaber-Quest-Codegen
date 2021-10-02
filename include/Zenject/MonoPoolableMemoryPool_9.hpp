// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.MemoryPool`9
#include "Zenject/MemoryPool_9.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: IPoolable`8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8>
  class IPoolable_8;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MonoPoolableMemoryPool`9
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7, typename TParam8, typename TValue>
  class MonoPoolableMemoryPool_9 : public Zenject::MemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue> {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private UnityEngine.Transform _originalParent
    // Size: 0x8
    // Offset: 0x0
    UnityEngine::Transform* originalParent;
    // Field size check
    static_assert(sizeof(UnityEngine::Transform*) == 0x8);
    public:
    // Creating conversion operator: operator UnityEngine::Transform*
    constexpr operator UnityEngine::Transform*() const noexcept {
      return originalParent;
    }
    // Autogenerated instance field getter
    // Get instance field: private UnityEngine.Transform _originalParent
    UnityEngine::Transform*& dyn__originalParent() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoPoolableMemoryPool_9::dyn__originalParent");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_originalParent"))->offset;
      return *reinterpret_cast<UnityEngine::Transform**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // protected System.Void OnCreated(TValue item)
    // Offset: 0xFFFFFFFF
    void OnCreated(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoPoolableMemoryPool_9::OnCreated");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnCreated", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, item);
    }
    // protected System.Void OnDestroyed(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDestroyed(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoPoolableMemoryPool_9::OnDestroyed");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDestroyed", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, item);
    }
    // protected System.Void OnDespawned(TValue item)
    // Offset: 0xFFFFFFFF
    void OnDespawned(TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoPoolableMemoryPool_9::OnDespawned");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "OnDespawned", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, item);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`9
    // Base method: System.Void MemoryPool_9::.ctor()
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoPoolableMemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoPoolableMemoryPool_9::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoPoolableMemoryPool_9<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7, TParam8, TValue>*, creationType>()));
    }
    // protected override System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPool`9
    // Base method: System.Void MemoryPool_9::Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item)
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7, TParam8 p8, TValue item) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoPoolableMemoryPool_9::Reinitialize");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Reinitialize", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(p1), ::il2cpp_utils::ExtractType(p2), ::il2cpp_utils::ExtractType(p3), ::il2cpp_utils::ExtractType(p4), ::il2cpp_utils::ExtractType(p5), ::il2cpp_utils::ExtractType(p6), ::il2cpp_utils::ExtractType(p7), ::il2cpp_utils::ExtractType(p8), ::il2cpp_utils::ExtractType(item)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, p1, p2, p3, p4, p5, p6, p7, p8, item);
    }
  }; // Zenject.MonoPoolableMemoryPool`9
  // Could not write size check! Type: Zenject.MonoPoolableMemoryPool`9 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoPoolableMemoryPool_9, "Zenject", "MonoPoolableMemoryPool`9");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
