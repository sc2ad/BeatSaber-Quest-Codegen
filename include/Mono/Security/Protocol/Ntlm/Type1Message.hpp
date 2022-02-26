// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: Type1Message
  class Type1Message;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type1Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type1Message*, "Mono.Security.Protocol.Ntlm", "Type1Message");
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type1Message
  // [TokenAttribute] Offset: FFFFFFFF
  class Type1Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
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
    // private System.String _host
    // Size: 0x8
    // Offset: 0x18
    ::StringW host;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _domain
    // Size: 0x8
    // Offset: 0x20
    ::StringW domain;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    public:
    // Get instance field reference: private System.String _host
    ::StringW& dyn__host();
    // Get instance field reference: private System.String _domain
    ::StringW& dyn__domain();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x22D133C
    void set_Domain(::StringW value);
    // public System.Void set_Host(System.String value)
    // Offset: 0x22D13C4
    void set_Host(::StringW value);
    // public System.Void .ctor()
    // Offset: 0x22D12A8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type1Message* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Ntlm::Type1Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type1Message*, creationType>()));
    }
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x22D144C
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::ArrayW<uint8_t> message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x22D1540
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::ArrayW<uint8_t> GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type1Message
  #pragma pack(pop)
  static check_size<sizeof(Type1Message), 32 + sizeof(::StringW)> __Mono_Security_Protocol_Ntlm_Type1MessageSizeCheck;
  static_assert(sizeof(Type1Message) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::set_Domain
// Il2CppName: set_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type1Message::set_Domain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "set_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::set_Host
// Il2CppName: set_Host
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type1Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type1Message::set_Host)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "set_Host", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type1Message::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::Type1Message::Decode)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type1Message::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type1Message::*)()>(&Mono::Security::Protocol::Ntlm::Type1Message::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type1Message*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
