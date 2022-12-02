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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPacketPool
  class IPacketPool;
  // Forward declaring type: IRemoteProcedureCall
  class IRemoteProcedureCall;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: RpcPool
  class RpcPool;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::RpcPool);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RpcPool*, "", "RpcPool");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: RpcPool
  // [TokenAttribute] Offset: FFFFFFFF
  class RpcPool : public ::Il2CppObject {
    public:
    // Get static field: static private System.Collections.Generic.Dictionary`2<System.Type,IPacketPool> _pools
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>* _get__pools();
    // Set static field: static private System.Collections.Generic.Dictionary`2<System.Type,IPacketPool> _pools
    static void _set__pools(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::IPacketPool*>* value);
    // static public T Obtain()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static T Obtain() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IRemoteProcedureCall>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RpcPool::Obtain");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "RpcPool", "Obtain", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodRethrow<T, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void Fill()
    // Offset: 0xFFFFFFFFFFFFFFFF
    template<class T>
    static void Fill() {
      static_assert(std::is_convertible_v<std::remove_pointer_t<T>, ::GlobalNamespace::IRemoteProcedureCall>);
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::RpcPool::Fill");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("", "RpcPool", "Fill", std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::std::vector<const Il2CppType*>{})));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      ::il2cpp_utils::RunMethodRethrow<void, false>(static_cast<Il2CppObject*>(nullptr), ___generic__method);
    }
    // static public System.Void Release(IRemoteProcedureCall t)
    // Offset: 0x26CB98C
    static void Release(::GlobalNamespace::IRemoteProcedureCall* t);
  }; // RpcPool
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::RpcPool::Obtain
// Il2CppName: Obtain
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::RpcPool::Fill
// Il2CppName: Fill
// Cannot write MetadataGetter for generic methods!
// Writing MetadataGetter for method: GlobalNamespace::RpcPool::Release
// Il2CppName: Release
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IRemoteProcedureCall*)>(&GlobalNamespace::RpcPool::Release)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("", "IRemoteProcedureCall")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::RpcPool*), "Release", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
