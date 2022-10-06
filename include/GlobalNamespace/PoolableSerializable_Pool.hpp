// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PoolableSerializable
#include "GlobalNamespace/PoolableSerializable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPoolableSerializable
  class IPoolableSerializable;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PoolableSerializable::Pool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoolableSerializable::Pool*, "", "PoolableSerializable/Pool");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PoolableSerializable/Pool
  // [TokenAttribute] Offset: FFFFFFFF
  class PoolableSerializable::Pool : public ::Il2CppObject {
    public:
    public:
    // public readonly IPoolableSerializable[] pool
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<::GlobalNamespace::IPoolableSerializable*> pool;
    // Field size check
    static_assert(sizeof(::ArrayW<::GlobalNamespace::IPoolableSerializable*>) == 0x8);
    // public System.Int32 count
    // Size: 0x4
    // Offset: 0x18
    int count;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Get instance field reference: public readonly IPoolableSerializable[] pool
    [[deprecated("Use field access instead!")]] ::ArrayW<::GlobalNamespace::IPoolableSerializable*>& dyn_pool();
    // Get instance field reference: public System.Int32 count
    [[deprecated("Use field access instead!")]] int& dyn_count();
    // public System.Void .ctor()
    // Offset: 0x29D0A74
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableSerializable::Pool* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PoolableSerializable::Pool::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableSerializable::Pool*, creationType>()));
    }
  }; // PoolableSerializable/Pool
  #pragma pack(pop)
  static check_size<sizeof(PoolableSerializable::Pool), 24 + sizeof(int)> __GlobalNamespace_PoolableSerializable_PoolSizeCheck;
  static_assert(sizeof(PoolableSerializable::Pool) == 0x1C);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::Pool::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
