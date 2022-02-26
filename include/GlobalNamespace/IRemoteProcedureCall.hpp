// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.Utils.INetSerializable
#include "LiteNetLib/Utils/INetSerializable.hpp"
// Including type: IPoolablePacket
#include "GlobalNamespace/IPoolablePacket.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: IRemoteProcedureCall
  class IRemoteProcedureCall;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IRemoteProcedureCall);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRemoteProcedureCall*, "", "IRemoteProcedureCall");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IRemoteProcedureCall
  // [TokenAttribute] Offset: FFFFFFFF
  class IRemoteProcedureCall/*, public ::LiteNetLib::Utils::INetSerializable, public ::GlobalNamespace::IPoolablePacket*/ {
    public:
    // Creating interface conversion operator: operator ::LiteNetLib::Utils::INetSerializable
    operator ::LiteNetLib::Utils::INetSerializable() noexcept {
      return *reinterpret_cast<::LiteNetLib::Utils::INetSerializable*>(this);
    }
    // Creating interface conversion operator: operator ::GlobalNamespace::IPoolablePacket
    operator ::GlobalNamespace::IPoolablePacket() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IPoolablePacket*>(this);
    }
    // public System.Single get_syncTime()
    // Offset: 0xFFFFFFFF
    float get_syncTime();
  }; // IRemoteProcedureCall
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IRemoteProcedureCall::get_syncTime
// Il2CppName: get_syncTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::IRemoteProcedureCall::*)()>(&GlobalNamespace::IRemoteProcedureCall::get_syncTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IRemoteProcedureCall*), "get_syncTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
