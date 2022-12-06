// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IPoolableSerializable
#include "GlobalNamespace/IPoolableSerializable.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: PoolableSerializable
  class PoolableSerializable;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PoolableSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PoolableSerializable*, "", "PoolableSerializable");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: PoolableSerializable
  // [TokenAttribute] Offset: FFFFFFFF
  class PoolableSerializable : public ::Il2CppObject/*, public ::GlobalNamespace::IPoolableSerializable*/ {
    public:
    // Nested type: ::GlobalNamespace::PoolableSerializable::Pool
    class Pool;
    public:
    // private System.Int32 _referenceCount
    // Size: 0x4
    // Offset: 0x10
    int referenceCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IPoolableSerializable
    operator ::GlobalNamespace::IPoolableSerializable() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPoolableSerializable*>(this);
    }
    // Creating interface conversion operator: i_IPoolableSerializable
    inline ::GlobalNamespace::IPoolableSerializable* i_IPoolableSerializable() noexcept {
      return reinterpret_cast<::GlobalNamespace::IPoolableSerializable*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return referenceCount;
    }
    // static field const value: static private System.Int32 kPoolSize
    static constexpr const int kPoolSize = 32;
    // Get static field: static private System.Int32 kPoolSize
    static int _get_kPoolSize();
    // Set static field: static private System.Int32 kPoolSize
    static void _set_kPoolSize(int value);
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,PoolableSerializable/Pool> _pools
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::PoolableSerializable::Pool*>* _get__pools();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,PoolableSerializable/Pool> _pools
    static void _set__pools(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::PoolableSerializable::Pool*>* value);
    // Get instance field reference: private System.Int32 _referenceCount
    [[deprecated("Use field access instead!")]] int& dyn__referenceCount();
    // protected System.Void .ctor()
    // Offset: 0x29F6C88
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PoolableSerializable* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PoolableSerializable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PoolableSerializable*, creationType>()));
    }
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x29F8508
    static void NoDomainReloadInit();
    // public System.Void Retain()
    // Offset: 0x29F81CC
    void Retain();
    // public System.Void Release()
    // Offset: 0x29F810C
    void Release();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);
    // static public T Obtain()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Obtain() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PoolableSerializable::Obtain");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "PoolableSerializable", "Obtain", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static private System.Void Release(IPoolableSerializable t)
    // Offset: 0x29F8558
    static void Release(::GlobalNamespace::IPoolableSerializable* t);
  }; // PoolableSerializable
  #pragma pack(pop)
  static check_size<sizeof(PoolableSerializable), 16 + sizeof(int)> __GlobalNamespace_PoolableSerializableSizeCheck;
  static_assert(sizeof(PoolableSerializable) == 0x14);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::NoDomainReloadInit
// Il2CppName: NoDomainReloadInit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::PoolableSerializable::NoDomainReloadInit)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoolableSerializable*), "NoDomainReloadInit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::Retain
// Il2CppName: Retain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)()>(&GlobalNamespace::PoolableSerializable::Retain)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoolableSerializable*), "Retain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)()>(&GlobalNamespace::PoolableSerializable::Release)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoolableSerializable*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::Serialize
// Il2CppName: Serialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(&GlobalNamespace::PoolableSerializable::Serialize)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoolableSerializable*), "Serialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::Deserialize
// Il2CppName: Deserialize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::PoolableSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(&GlobalNamespace::PoolableSerializable::Deserialize)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoolableSerializable*), "Deserialize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::Obtain
// Il2CppName: Obtain
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::PoolableSerializable::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IPoolableSerializable*)>(&GlobalNamespace::PoolableSerializable::Release)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("", "IPoolableSerializable")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PoolableSerializable*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
