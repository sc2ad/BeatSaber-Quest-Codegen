// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPoolablePacket
  class IPoolablePacket;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ThreadStaticPacketPool`1<T>
  template<typename T>
  class ThreadStaticPacketPool_1;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ThreadStaticPacketPool_1, "", "ThreadStaticPacketPool`1");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: ThreadStaticPacketPool`1
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename T>
  class ThreadStaticPacketPool_1 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static private PacketPool`1<T> _pool
    static ::GlobalNamespace::PacketPool_1<T>* _get__pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ThreadStaticPacketPool_1::_get__pool");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::GlobalNamespace::PacketPool_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ThreadStaticPacketPool_1<T>*>::get(), "_pool"));
    }
    // Autogenerated static field setter
    // Set static field: static private PacketPool`1<T> _pool
    static void _set__pool(::GlobalNamespace::PacketPool_1<T>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ThreadStaticPacketPool_1::_set__pool");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ThreadStaticPacketPool_1<T>*>::get(), "_pool", value));
    }
    // static public PacketPool`1<T> get_pool()
    // Offset: 0xFFFFFFFF
    static ::GlobalNamespace::PacketPool_1<T>* get_pool() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ThreadStaticPacketPool_1::get_pool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ThreadStaticPacketPool_1<T>*>::get(), "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::GlobalNamespace::PacketPool_1<T>*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
  }; // ThreadStaticPacketPool`1
  // Could not write size check! Type: ThreadStaticPacketPool`1 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
