// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
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
  // Forward declaring type: IConnectionRequestHandler
  class IConnectionRequestHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::IConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConnectionRequestHandler*, "", "IConnectionRequestHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: IConnectionRequestHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class IConnectionRequestHandler {
    public:
    // public System.Void GetConnectionMessage(LiteNetLib.Utils.NetDataWriter writer, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0xFFFFFFFFFFFFFFFF
    void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner);
    // public System.Boolean ValidateConnectionMessage(LiteNetLib.Utils.NetDataReader reader, out System.String userId, out System.String userName, out System.Boolean isConnectionOwner)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner);
  }; // IConnectionRequestHandler
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::IConnectionRequestHandler::GetConnectionMessage
// Il2CppName: GetConnectionMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::IConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool)>(&GlobalNamespace::IConnectionRequestHandler::GetConnectionMessage)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionRequestHandler*), "GetConnectionMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, userId, userName, isConnectionOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::IConnectionRequestHandler::ValidateConnectionMessage
// Il2CppName: ValidateConnectionMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::IConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataReader*, ByRef<::StringW>, ByRef<::StringW>, ByRef<bool>)>(&GlobalNamespace::IConnectionRequestHandler::ValidateConnectionMessage)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::IConnectionRequestHandler*), "ValidateConnectionMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, userId, userName, isConnectionOwner});
  }
};
