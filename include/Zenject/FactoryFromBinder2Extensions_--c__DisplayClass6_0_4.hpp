// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder2Extensions
#include "Zenject/FactoryFromBinder2Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`3<TParam1, TParam2, TParam3>
  template<typename TParam1, typename TParam2, typename TParam3>
  class IPoolable_3;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`4<TParam1, TParam2, TParam3, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class MemoryPool_4;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4, "Zenject", "FactoryFromBinder2Extensions/<>c__DisplayClass6_0`4");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder2Extensions/Zenject.<>c__DisplayClass6_0`4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
  class FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4 : public ::Il2CppObject {
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
    // public System.Guid poolId
    // Size: 0x10
    // Offset: 0x0
    ::System::Guid poolId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Creating conversion operator: operator ::System::Guid
    constexpr operator ::System::Guid() const noexcept {
      return poolId;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Guid poolId
    ::System::Guid& dyn_poolId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4::dyn_poolId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "poolId"))->offset;
      return *reinterpret_cast<::System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Zenject.IProvider <FromPoolableMemoryPool>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::IProvider* $FromPoolableMemoryPool$b__0(::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4::<FromPoolableMemoryPool>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromPoolableMemoryPool>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder2Extensions/Zenject.<>c__DisplayClass6_0`4
  // Could not write size check! Type: Zenject.FactoryFromBinder2Extensions/Zenject.<>c__DisplayClass6_0`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
