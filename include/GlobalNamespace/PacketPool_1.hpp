// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: IPacketPool`1
#include "GlobalNamespace/IPacketPool_1.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: PacketPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class PacketPool_1 : public ::Il2CppObject/*, public GlobalNamespace::IPacketPool_1<T>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Int32 _clearCount
    // Size: 0x4
    // Offset: 0x0
    int clearCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _size
    // Size: 0x4
    // Offset: 0x0
    int size;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private readonly T[] _pool
    // Size: 0x8
    // Offset: 0x0
    ::ArrayW<T> pool;
    // Field size check
    static_assert(sizeof(::ArrayW<T>) == 0x8);
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IPacketPool_1<T>
    operator GlobalNamespace::IPacketPool_1<T>() noexcept {
      return *reinterpret_cast<GlobalNamespace::IPacketPool_1<T>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 kMaxPoolSize
    static int _get_kMaxPoolSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::_get_kMaxPoolSize");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PacketPool_1<T>*>::get(), "kMaxPoolSize"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 kMaxPoolSize
    static void _set_kMaxPoolSize(int value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::_set_kMaxPoolSize");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<PacketPool_1<T>*>::get(), "kMaxPoolSize", value));
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _clearCount
    int& dyn__clearCount() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::dyn__clearCount");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_clearCount"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private System.Int32 _size
    int& dyn__size() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::dyn__size");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_size"))->offset;
      return *reinterpret_cast<int*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Autogenerated instance field getter
    // Get instance field: private readonly T[] _pool
    ::ArrayW<T>& dyn__pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::dyn__pool");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "_pool"))->offset;
      return *reinterpret_cast<::ArrayW<T>*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // public T Obtain()
    // Offset: 0xFFFFFFFF
    T Obtain() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::Obtain");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Obtain", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<T, false>(___instance_arg, ___internal__method);
    }
    // public System.Void Release(T t)
    // Offset: 0xFFFFFFFF
    void Release(T t) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, t);
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::Clear");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Clear", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method);
    }
    // private System.Void IPacketPool.Release(System.Object o)
    // Offset: 0xFFFFFFFF
    void IPacketPool_Release(::Il2CppObject* o) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::IPacketPool.Release");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "IPacketPool.Release", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(o)})));
      auto ___instance_arg = this;
      ::il2cpp_utils::RunMethodThrow<void, false>(___instance_arg, ___internal__method, o);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PacketPool_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PacketPool_1<T>*, creationType>()));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PacketPool_1::GetHashCode");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<int, false>(___instance_arg, ___internal__method);
    }
  }; // PacketPool`1
  // Could not write size check! Type: PacketPool`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::PacketPool_1, "", "PacketPool`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
