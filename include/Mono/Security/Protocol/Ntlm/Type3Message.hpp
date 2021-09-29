// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
// Including type: Mono.Security.Protocol.Ntlm.NtlmAuthLevel
#include "Mono/Security/Protocol/Ntlm/NtlmAuthLevel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: Type2Message
  class Type2Message;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type3Message
  // [TokenAttribute] Offset: FFFFFFFF
  class Type3Message : public Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    // private Mono.Security.Protocol.Ntlm.NtlmAuthLevel _level
    // Size: 0x4
    // Offset: 0x18
    Mono::Security::Protocol::Ntlm::NtlmAuthLevel level;
    // Field size check
    static_assert(sizeof(Mono::Security::Protocol::Ntlm::NtlmAuthLevel) == 0x4);
    // Padding between fields: level and: challenge
    char __padding0[0x4] = {};
    // private System.Byte[] _challenge
    // Size: 0x8
    // Offset: 0x20
    ::ArrayWrapper<uint8_t> challenge;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private System.String _host
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* host;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _domain
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* domain;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _username
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* username;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _password
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private Mono.Security.Protocol.Ntlm.Type2Message _type2
    // Size: 0x8
    // Offset: 0x48
    Mono::Security::Protocol::Ntlm::Type2Message* type2;
    // Field size check
    static_assert(sizeof(Mono::Security::Protocol::Ntlm::Type2Message*) == 0x8);
    // private System.Byte[] _lm
    // Size: 0x8
    // Offset: 0x50
    ::ArrayWrapper<uint8_t> lm;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // private System.Byte[] _nt
    // Size: 0x8
    // Offset: 0x58
    ::ArrayWrapper<uint8_t> nt;
    // Field size check
    static_assert(sizeof(::ArrayWrapper<uint8_t>) == 0x8);
    // Creating value type constructor for type: Type3Message
    Type3Message(Mono::Security::Protocol::Ntlm::NtlmAuthLevel level_ = {}, ::ArrayWrapper<uint8_t> challenge_ = {}, ::Il2CppString* host_ = {}, ::Il2CppString* domain_ = {}, ::Il2CppString* username_ = {}, ::Il2CppString* password_ = {}, Mono::Security::Protocol::Ntlm::Type2Message* type2_ = {}, ::ArrayWrapper<uint8_t> lm_ = {}, ::ArrayWrapper<uint8_t> nt_ = {}) noexcept : level{level_}, challenge{challenge_}, host{host_}, domain{domain_}, username{username_}, password{password_}, type2{type2_}, lm{lm_}, nt{nt_} {}
    // Get instance field reference: private Mono.Security.Protocol.Ntlm.NtlmAuthLevel _level
    Mono::Security::Protocol::Ntlm::NtlmAuthLevel& dyn__level();
    // Get instance field reference: private System.Byte[] _challenge
    ::ArrayWrapper<uint8_t>& dyn__challenge();
    // Get instance field reference: private System.String _host
    ::Il2CppString*& dyn__host();
    // Get instance field reference: private System.String _domain
    ::Il2CppString*& dyn__domain();
    // Get instance field reference: private System.String _username
    ::Il2CppString*& dyn__username();
    // Get instance field reference: private System.String _password
    ::Il2CppString*& dyn__password();
    // Get instance field reference: private Mono.Security.Protocol.Ntlm.Type2Message _type2
    Mono::Security::Protocol::Ntlm::Type2Message*& dyn__type2();
    // Get instance field reference: private System.Byte[] _lm
    ::ArrayWrapper<uint8_t>& dyn__lm();
    // Get instance field reference: private System.Byte[] _nt
    ::ArrayWrapper<uint8_t>& dyn__nt();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x1FA5490
    void set_Domain(::Il2CppString* value);
    // public System.Void set_Password(System.String value)
    // Offset: 0x1FA5518
    void set_Password(::Il2CppString* value);
    // public System.Void set_Username(System.String value)
    // Offset: 0x1FA5520
    void set_Username(::Il2CppString* value);
    // public System.Void .ctor(Mono.Security.Protocol.Ntlm.Type2Message type2)
    // Offset: 0x1FA51D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type3Message* New_ctor(Mono::Security::Protocol::Ntlm::Type2Message* type2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Protocol::Ntlm::Type3Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type3Message*, creationType>(type2)));
    }
    // private System.String DecodeString(System.Byte[] buffer, System.Int32 offset, System.Int32 len)
    // Offset: 0x1FA5750
    ::Il2CppString* DecodeString(::ArrayWrapper<uint8_t> buffer, int offset, int len);
    // private System.Byte[] EncodeString(System.String text)
    // Offset: 0x1FA57B4
    ::ArrayWrapper<uint8_t> EncodeString(::Il2CppString* text);
    // protected override System.Void Finalize()
    // Offset: 0x1FA53DC
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x1FA5528
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::ArrayWrapper<uint8_t> message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x1FA5858
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::ArrayWrapper<uint8_t> GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type3Message
  #pragma pack(pop)
  static check_size<sizeof(Type3Message), 88 + sizeof(::ArrayWrapper<uint8_t>)> __Mono_Security_Protocol_Ntlm_Type3MessageSizeCheck;
  static_assert(sizeof(Type3Message) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::Type3Message*, "Mono.Security.Protocol.Ntlm", "Type3Message");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::set_Domain
// Il2CppName: set_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::Il2CppString*)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Domain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "set_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::Il2CppString*)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Password)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::set_Username
// Il2CppName: set_Username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::Il2CppString*)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Username)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "set_Username", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::DecodeString
// Il2CppName: DecodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayWrapper<uint8_t>, int, int)>(&Mono::Security::Protocol::Ntlm::Type3Message::DecodeString)> {
  static const MethodInfo* get() {
    static auto* buffer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* len = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "DecodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{buffer, offset, len});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::EncodeString
// Il2CppName: EncodeString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<uint8_t> (Mono::Security::Protocol::Ntlm::Type3Message::*)(::Il2CppString*)>(&Mono::Security::Protocol::Ntlm::Type3Message::EncodeString)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "EncodeString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::Finalize
// Il2CppName: Finalize
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)()>(&Mono::Security::Protocol::Ntlm::Type3Message::Finalize)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "Finalize", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::Decode
// Il2CppName: Decode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayWrapper<uint8_t>)>(&Mono::Security::Protocol::Ntlm::Type3Message::Decode)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayWrapper<uint8_t> (Mono::Security::Protocol::Ntlm::Type3Message::*)()>(&Mono::Security::Protocol::Ntlm::Type3Message::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
