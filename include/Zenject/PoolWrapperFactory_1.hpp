// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IMemoryPool`1<TValue>
  template<typename TValue>
  class IMemoryPool_1;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: PoolWrapperFactory`1<T>
  template<typename T>
  class PoolWrapperFactory_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolWrapperFactory_1, "Zenject", "PoolWrapperFactory`1");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PoolWrapperFactory`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class PoolWrapperFactory_1 : public ::Il2CppObject/*, public ::Zenject::IFactory_1<T>*/ {
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
    // private readonly Zenject.IMemoryPool`1<T> _pool
    // Size: 0x8
    // Offset: 0x0
    ::Zenject::IMemoryPool_1<T>* pool;
    // Field size check
    static_assert(sizeof(::Zenject::IMemoryPool_1<T>*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::Zenject::IFactory_1<T>
    operator ::Zenject::IFactory_1<T>() noexcept {
      return *reinterpret_cast<::Zenject::IFactory_1<T>*>(this);
    }
    // Creating conversion operator: operator ::Zenject::IMemoryPool_1<T>*
    constexpr operator ::Zenject::IMemoryPool_1<T>*() const noexcept {
      return pool;
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly Zenject.IMemoryPool`1<T> _pool
    ::Zenject::IMemoryPool_1<T>*& dyn__pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_1::dyn__pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_pool"))->offset;
      return *reinterpret_cast<::Zenject::IMemoryPool_1<T>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public System.Void .ctor(Zenject.IMemoryPool`1<T> pool)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolWrapperFactory_1<T>* New_ctor(::Zenject::IMemoryPool_1<T>* pool) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolWrapperFactory_1<T>*, creationType>(pool)));
    }
    // public T Create()
    // Offset: 0xFFFFFFFF
    T Create() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_1::Create");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(this, ___internal__method);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_1::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolWrapperFactory_1<T>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::PoolWrapperFactory_1::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PoolWrapperFactory_1<T>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // Zenject.PoolWrapperFactory`1
  // Could not write size check! Type: Zenject.PoolWrapperFactory`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
