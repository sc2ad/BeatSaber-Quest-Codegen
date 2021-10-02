// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: LiteNetLib.NatPunchModule
#include "LiteNetLib/NatPunchModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: LiteNetLib
namespace LiteNetLib {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: LiteNetLib.NatPunchModule/LiteNetLib.NatIntroduceRequestPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NatPunchModule::NatIntroduceRequestPacket : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Net.IPEndPoint <Internal>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    System::Net::IPEndPoint* Internal;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.String <Token>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* Token;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    public:
    // Get instance field reference: private System.Net.IPEndPoint <Internal>k__BackingField
    System::Net::IPEndPoint*& dyn_$Internal$k__BackingField();
    // Get instance field reference: private System.String <Token>k__BackingField
    ::Il2CppString*& dyn_$Token$k__BackingField();
    // public System.Net.IPEndPoint get_Internal()
    // Offset: 0x1DD5880
    System::Net::IPEndPoint* get_Internal();
    // public System.Void set_Internal(System.Net.IPEndPoint value)
    // Offset: 0x1DD5888
    void set_Internal(System::Net::IPEndPoint* value);
    // public System.String get_Token()
    // Offset: 0x1DD5890
    ::Il2CppString* get_Token();
    // public System.Void set_Token(System.String value)
    // Offset: 0x1DD5898
    void set_Token(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0x1DD5150
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NatPunchModule::NatIntroduceRequestPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NatPunchModule::NatIntroduceRequestPacket*, creationType>()));
    }
  }; // LiteNetLib.NatPunchModule/LiteNetLib.NatIntroduceRequestPacket
  #pragma pack(pop)
  static check_size<sizeof(NatPunchModule::NatIntroduceRequestPacket), 24 + sizeof(::Il2CppString*)> __LiteNetLib_NatPunchModule_NatIntroduceRequestPacketSizeCheck;
  static_assert(sizeof(NatPunchModule::NatIntroduceRequestPacket) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*, "LiteNetLib", "NatPunchModule/NatIntroduceRequestPacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::get_Internal
// Il2CppName: get_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Net::IPEndPoint* (LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::*)()>(&LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::get_Internal)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*), "get_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::set_Internal
// Il2CppName: set_Internal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::*)(System::Net::IPEndPoint*)>(&LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::set_Internal)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System.Net", "IPEndPoint")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*), "set_Internal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::get_Token
// Il2CppName: get_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::*)()>(&LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::get_Token)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*), "get_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::set_Token
// Il2CppName: set_Token
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::*)(::Il2CppString*)>(&LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::set_Token)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::NatPunchModule::NatIntroduceRequestPacket*), "set_Token", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::NatPunchModule::NatIntroduceRequestPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
