// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Mono.Security.Protocol.Ntlm.MessageBase
#include "Mono/Security/Protocol/Ntlm/MessageBase.hpp"
// Including type: Mono.Security.Protocol.Ntlm.NtlmAuthLevel
#include "Mono/Security/Protocol/Ntlm/NtlmAuthLevel.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
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
  // Forward declaring type: Type3Message
  class Type3Message;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type3Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type3Message*, "Mono.Security.Protocol.Ntlm", "Type3Message");
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.Type3Message
  // [TokenAttribute] Offset: FFFFFFFF
  class Type3Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
    public:
    public:
    // private Mono.Security.Protocol.Ntlm.NtlmAuthLevel _level
    // Size: 0x4
    // Offset: 0x18
    ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel level;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Ntlm::NtlmAuthLevel) == 0x4);
    // Padding between fields: level and: challenge
    char __padding0[0x4] = {};
    // private System.Byte[] _challenge
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<uint8_t> challenge;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String _host
    // Size: 0x8
    // Offset: 0x28
    ::StringW host;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _domain
    // Size: 0x8
    // Offset: 0x30
    ::StringW domain;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _username
    // Size: 0x8
    // Offset: 0x38
    ::StringW username;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String _password
    // Size: 0x8
    // Offset: 0x40
    ::StringW password;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private Mono.Security.Protocol.Ntlm.Type2Message _type2
    // Size: 0x8
    // Offset: 0x48
    ::Mono::Security::Protocol::Ntlm::Type2Message* type2;
    // Field size check
    static_assert(sizeof(::Mono::Security::Protocol::Ntlm::Type2Message*) == 0x8);
    // private System.Byte[] _lm
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> lm;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] _nt
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> nt;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private Mono.Security.Protocol.Ntlm.NtlmAuthLevel _level
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Ntlm::NtlmAuthLevel& dyn__level();
    // Get instance field reference: private System.Byte[] _challenge
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__challenge();
    // Get instance field reference: private System.String _host
    [[deprecated("Use field access instead!")]] ::StringW& dyn__host();
    // Get instance field reference: private System.String _domain
    [[deprecated("Use field access instead!")]] ::StringW& dyn__domain();
    // Get instance field reference: private System.String _username
    [[deprecated("Use field access instead!")]] ::StringW& dyn__username();
    // Get instance field reference: private System.String _password
    [[deprecated("Use field access instead!")]] ::StringW& dyn__password();
    // Get instance field reference: private Mono.Security.Protocol.Ntlm.Type2Message _type2
    [[deprecated("Use field access instead!")]] ::Mono::Security::Protocol::Ntlm::Type2Message*& dyn__type2();
    // Get instance field reference: private System.Byte[] _lm
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__lm();
    // Get instance field reference: private System.Byte[] _nt
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn__nt();
    // public System.Void set_Domain(System.String value)
    // Offset: 0x23A9B58
    void set_Domain(::StringW value);
    // public System.Void set_Password(System.String value)
    // Offset: 0x23A9BE0
    void set_Password(::StringW value);
    // public System.Void set_Username(System.String value)
    // Offset: 0x23A9BE8
    void set_Username(::StringW value);
    // public System.Void .ctor(Mono.Security.Protocol.Ntlm.Type2Message type2)
    // Offset: 0x23A989C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type3Message* New_ctor(::Mono::Security::Protocol::Ntlm::Type2Message* type2) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::Protocol::Ntlm::Type3Message::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type3Message*, creationType>(type2)));
    }
    // private System.String DecodeString(System.Byte[] buffer, System.Int32 offset, System.Int32 len)
    // Offset: 0x23A9E18
    ::StringW DecodeString(::ArrayW<uint8_t> buffer, int offset, int len);
    // private System.Byte[] EncodeString(System.String text)
    // Offset: 0x23A9E7C
    ::ArrayW<uint8_t> EncodeString(::StringW text);
    // protected override System.Void Finalize()
    // Offset: 0x23A9AA4
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // protected override System.Void Decode(System.Byte[] message)
    // Offset: 0x23A9BF0
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Void MessageBase::Decode(System.Byte[] message)
    void Decode(::ArrayW<uint8_t> message);
    // public override System.Byte[] GetBytes()
    // Offset: 0x23A9F20
    // Implemented from: Mono.Security.Protocol.Ntlm.MessageBase
    // Base method: System.Byte[] MessageBase::GetBytes()
    ::ArrayW<uint8_t> GetBytes();
  }; // Mono.Security.Protocol.Ntlm.Type3Message
  #pragma pack(pop)
  static check_size<sizeof(Type3Message), 88 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_Protocol_Ntlm_Type3MessageSizeCheck;
  static_assert(sizeof(Type3Message) == 0x60);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::set_Domain
// Il2CppName: set_Domain
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Domain)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "set_Domain", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::set_Password
// Il2CppName: set_Password
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Password)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "set_Password", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::set_Username
// Il2CppName: set_Username
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::set_Username)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t>, int, int)>(&Mono::Security::Protocol::Ntlm::Type3Message::DecodeString)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type3Message::*)(::StringW)>(&Mono::Security::Protocol::Ntlm::Type3Message::EncodeString)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::Protocol::Ntlm::Type3Message::*)(::ArrayW<uint8_t>)>(&Mono::Security::Protocol::Ntlm::Type3Message::Decode)> {
  static const MethodInfo* get() {
    static auto* message = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "Decode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{message});
  }
};
// Writing MetadataGetter for method: Mono::Security::Protocol::Ntlm::Type3Message::GetBytes
// Il2CppName: GetBytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::Protocol::Ntlm::Type3Message::*)()>(&Mono::Security::Protocol::Ntlm::Type3Message::GetBytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::Protocol::Ntlm::Type3Message*), "GetBytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
