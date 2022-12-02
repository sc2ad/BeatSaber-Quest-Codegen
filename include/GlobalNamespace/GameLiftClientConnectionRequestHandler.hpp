// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: IConnectionRequestHandler
#include "GlobalNamespace/IConnectionRequestHandler.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: GameLiftClientConnectionRequestHandler
  class GameLiftClientConnectionRequestHandler;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::GameLiftClientConnectionRequestHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameLiftClientConnectionRequestHandler*, "", "GameLiftClientConnectionRequestHandler");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: GameLiftClientConnectionRequestHandler
  // [TokenAttribute] Offset: FFFFFFFF
  class GameLiftClientConnectionRequestHandler : public ::Il2CppObject/*, public ::GlobalNamespace::IConnectionRequestHandler*/ {
    public:
    public:
    // private System.String <playerSessionId>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::StringW playerSessionId;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Creating interface conversion operator: operator ::GlobalNamespace::IConnectionRequestHandler
    operator ::GlobalNamespace::IConnectionRequestHandler() noexcept {
      return *reinterpret_cast<::GlobalNamespace::IConnectionRequestHandler*>(this);
    }
    // Creating interface conversion operator: i_IConnectionRequestHandler
    inline ::GlobalNamespace::IConnectionRequestHandler* i_IConnectionRequestHandler() noexcept {
      return reinterpret_cast<::GlobalNamespace::IConnectionRequestHandler*>(this);
    }
    // Creating conversion operator: operator ::StringW
    constexpr operator ::StringW() const noexcept {
      return playerSessionId;
    }
    // Get instance field reference: private System.String <playerSessionId>k__BackingField
    [[deprecated("Use field access instead!")]] ::StringW& dyn_$playerSessionId$k__BackingField();
    // public System.String get_playerSessionId()
    // Offset: 0x16CA594
    ::StringW get_playerSessionId();
    // public System.Void set_playerSessionId(System.String value)
    // Offset: 0x16CA59C
    void set_playerSessionId(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x16CA62C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameLiftClientConnectionRequestHandler* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::GameLiftClientConnectionRequestHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameLiftClientConnectionRequestHandler*, creationType>()));
    }
    // public System.Void GetConnectionMessage(LiteNetLib.Utils.NetDataWriter writer, System.String userId, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x16CA5A4
    void GetConnectionMessage(::LiteNetLib::Utils::NetDataWriter* writer, ::StringW userId, ::StringW userName, bool isConnectionOwner);
    // public System.Boolean ValidateConnectionMessage(LiteNetLib.Utils.NetDataReader reader, out System.String userId, out System.String userName, out System.Boolean isConnectionOwner)
    // Offset: 0x16CA618
    bool ValidateConnectionMessage(::LiteNetLib::Utils::NetDataReader* reader, ByRef<::StringW> userId, ByRef<::StringW> userName, ByRef<bool> isConnectionOwner);
  }; // GameLiftClientConnectionRequestHandler
  #pragma pack(pop)
  static check_size<sizeof(GameLiftClientConnectionRequestHandler), 16 + sizeof(::StringW)> __GlobalNamespace_GameLiftClientConnectionRequestHandlerSizeCheck;
  static_assert(sizeof(GameLiftClientConnectionRequestHandler) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientConnectionRequestHandler::get_playerSessionId
// Il2CppName: get_playerSessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (GlobalNamespace::GameLiftClientConnectionRequestHandler::*)()>(&GlobalNamespace::GameLiftClientConnectionRequestHandler::get_playerSessionId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientConnectionRequestHandler*), "get_playerSessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientConnectionRequestHandler::set_playerSessionId
// Il2CppName: set_playerSessionId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(::StringW)>(&GlobalNamespace::GameLiftClientConnectionRequestHandler::set_playerSessionId)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientConnectionRequestHandler*), "set_playerSessionId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientConnectionRequestHandler::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientConnectionRequestHandler::GetConnectionMessage
// Il2CppName: GetConnectionMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataWriter*, ::StringW, ::StringW, bool)>(&GlobalNamespace::GameLiftClientConnectionRequestHandler::GetConnectionMessage)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataWriter")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientConnectionRequestHandler*), "GetConnectionMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, userId, userName, isConnectionOwner});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::GameLiftClientConnectionRequestHandler::ValidateConnectionMessage
// Il2CppName: ValidateConnectionMessage
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::GameLiftClientConnectionRequestHandler::*)(::LiteNetLib::Utils::NetDataReader*, ByRef<::StringW>, ByRef<::StringW>, ByRef<bool>)>(&GlobalNamespace::GameLiftClientConnectionRequestHandler::ValidateConnectionMessage)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NetDataReader")->byval_arg;
    static auto* userId = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* userName = &::il2cpp_utils::GetClassFromName("System", "String")->this_arg;
    static auto* isConnectionOwner = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::GameLiftClientConnectionRequestHandler*), "ValidateConnectionMessage", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader, userId, userName, isConnectionOwner});
  }
};
