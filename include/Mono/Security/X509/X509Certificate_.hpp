// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1_;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: DSA
  class DSA;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection_;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate_;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Mono::Security::X509::X509Certificate_);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509Certificate_*, "Mono.Security.X509", "X509Certificate");
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0xB8
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Certificate
  // [TokenAttribute] Offset: FFFFFFFF
  class X509Certificate_ : public ::Il2CppObject/*, public ::System::Runtime::Serialization::ISerializable*/ {
    public:
    public:
    // private Mono.Security.ASN1 decoder
    // Size: 0x8
    // Offset: 0x10
    ::Mono::Security::ASN1_* decoder;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1_*) == 0x8);
    // private System.Byte[] m_encodedcert
    // Size: 0x8
    // Offset: 0x18
    ::ArrayW<uint8_t> m_encodedcert;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.DateTime m_from
    // Size: 0x8
    // Offset: 0x20
    ::System::DateTime m_from;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private System.DateTime m_until
    // Size: 0x8
    // Offset: 0x28
    ::System::DateTime m_until;
    // Field size check
    static_assert(sizeof(::System::DateTime) == 0x8);
    // private Mono.Security.ASN1 issuer
    // Size: 0x8
    // Offset: 0x30
    ::Mono::Security::ASN1_* issuer;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1_*) == 0x8);
    // private System.String m_issuername
    // Size: 0x8
    // Offset: 0x38
    ::StringW m_issuername;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.String m_keyalgo
    // Size: 0x8
    // Offset: 0x40
    ::StringW m_keyalgo;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] m_keyalgoparams
    // Size: 0x8
    // Offset: 0x48
    ::ArrayW<uint8_t> m_keyalgoparams;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Mono.Security.ASN1 subject
    // Size: 0x8
    // Offset: 0x50
    ::Mono::Security::ASN1_* subject;
    // Field size check
    static_assert(sizeof(::Mono::Security::ASN1_*) == 0x8);
    // private System.String m_subject
    // Size: 0x8
    // Offset: 0x58
    ::StringW m_subject;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] m_publickey
    // Size: 0x8
    // Offset: 0x60
    ::ArrayW<uint8_t> m_publickey;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] signature
    // Size: 0x8
    // Offset: 0x68
    ::ArrayW<uint8_t> signature;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.String m_signaturealgo
    // Size: 0x8
    // Offset: 0x70
    ::StringW m_signaturealgo;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // private System.Byte[] m_signaturealgoparams
    // Size: 0x8
    // Offset: 0x78
    ::ArrayW<uint8_t> m_signaturealgoparams;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Security.Cryptography.RSA _rsa
    // Size: 0x8
    // Offset: 0x80
    ::System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::RSA*) == 0x8);
    // private System.Security.Cryptography.DSA _dsa
    // Size: 0x8
    // Offset: 0x88
    ::System::Security::Cryptography::DSA* dsa;
    // Field size check
    static_assert(sizeof(::System::Security::Cryptography::DSA*) == 0x8);
    // private System.Int32 version
    // Size: 0x4
    // Offset: 0x90
    int version;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: version and: serialnumber
    char __padding16[0x4] = {};
    // private System.Byte[] serialnumber
    // Size: 0x8
    // Offset: 0x98
    ::ArrayW<uint8_t> serialnumber;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] issuerUniqueID
    // Size: 0x8
    // Offset: 0xA0
    ::ArrayW<uint8_t> issuerUniqueID;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] subjectUniqueID
    // Size: 0x8
    // Offset: 0xA8
    ::ArrayW<uint8_t> subjectUniqueID;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Mono.Security.X509.X509ExtensionCollection extensions
    // Size: 0x8
    // Offset: 0xB0
    ::Mono::Security::X509::X509ExtensionCollection_* extensions;
    // Field size check
    static_assert(sizeof(::Mono::Security::X509::X509ExtensionCollection_*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::Runtime::Serialization::ISerializable
    operator ::System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Creating interface conversion operator: i_ISerializable
    inline ::System::Runtime::Serialization::ISerializable* i_ISerializable() noexcept {
      return reinterpret_cast<::System::Runtime::Serialization::ISerializable*>(this);
    }
    // Get static field: static private System.String encoding_error
    static ::StringW _get_encoding_error();
    // Set static field: static private System.String encoding_error
    static void _set_encoding_error(::StringW value);
    // Get instance field reference: private Mono.Security.ASN1 decoder
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1_*& dyn_decoder();
    // Get instance field reference: private System.Byte[] m_encodedcert
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_encodedcert();
    // Get instance field reference: private System.DateTime m_from
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_m_from();
    // Get instance field reference: private System.DateTime m_until
    [[deprecated("Use field access instead!")]] ::System::DateTime& dyn_m_until();
    // Get instance field reference: private Mono.Security.ASN1 issuer
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1_*& dyn_issuer();
    // Get instance field reference: private System.String m_issuername
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_issuername();
    // Get instance field reference: private System.String m_keyalgo
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_keyalgo();
    // Get instance field reference: private System.Byte[] m_keyalgoparams
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_keyalgoparams();
    // Get instance field reference: private Mono.Security.ASN1 subject
    [[deprecated("Use field access instead!")]] ::Mono::Security::ASN1_*& dyn_subject();
    // Get instance field reference: private System.String m_subject
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_subject();
    // Get instance field reference: private System.Byte[] m_publickey
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_publickey();
    // Get instance field reference: private System.Byte[] signature
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_signature();
    // Get instance field reference: private System.String m_signaturealgo
    [[deprecated("Use field access instead!")]] ::StringW& dyn_m_signaturealgo();
    // Get instance field reference: private System.Byte[] m_signaturealgoparams
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_m_signaturealgoparams();
    // Get instance field reference: private System.Security.Cryptography.RSA _rsa
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::RSA*& dyn__rsa();
    // Get instance field reference: private System.Security.Cryptography.DSA _dsa
    [[deprecated("Use field access instead!")]] ::System::Security::Cryptography::DSA*& dyn__dsa();
    // Get instance field reference: private System.Int32 version
    [[deprecated("Use field access instead!")]] int& dyn_version();
    // Get instance field reference: private System.Byte[] serialnumber
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_serialnumber();
    // Get instance field reference: private System.Byte[] issuerUniqueID
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_issuerUniqueID();
    // Get instance field reference: private System.Byte[] subjectUniqueID
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_subjectUniqueID();
    // Get instance field reference: private Mono.Security.X509.X509ExtensionCollection extensions
    [[deprecated("Use field access instead!")]] ::Mono::Security::X509::X509ExtensionCollection_*& dyn_extensions();
    // public System.Security.Cryptography.DSA get_DSA()
    // Offset: 0x1FFCB24
    ::System::Security::Cryptography::DSA* get_DSA();
    // public System.String get_IssuerName()
    // Offset: 0x2002504
    ::StringW get_IssuerName();
    // public System.Byte[] get_KeyAlgorithmParameters()
    // Offset: 0x200250C
    ::ArrayW<uint8_t> get_KeyAlgorithmParameters();
    // public System.Security.Cryptography.RSA get_RSA()
    // Offset: 0x2002588
    ::System::Security::Cryptography::RSA* get_RSA();
    // public System.Byte[] get_RawData()
    // Offset: 0x2002734
    ::ArrayW<uint8_t> get_RawData();
    // public System.Byte[] get_SerialNumber()
    // Offset: 0x20027B0
    ::ArrayW<uint8_t> get_SerialNumber();
    // public System.String get_SubjectName()
    // Offset: 0x200282C
    ::StringW get_SubjectName();
    // public System.DateTime get_ValidFrom()
    // Offset: 0x2002834
    ::System::DateTime get_ValidFrom();
    // public System.DateTime get_ValidUntil()
    // Offset: 0x200283C
    ::System::DateTime get_ValidUntil();
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1FFBB30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Certificate_* New_ctor(::ArrayW<uint8_t> data) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Mono::Security::X509::X509Certificate_::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Certificate_*, creationType>(data)));
    }
    // static private System.Void .cctor()
    // Offset: 0x20028C0
    static void _cctor();
    // private System.Void Parse(System.Byte[] data)
    // Offset: 0x2001904
    void Parse(::ArrayW<uint8_t> data);
    // private System.Byte[] GetUnsignedBigInteger(System.Byte[] integer)
    // Offset: 0x2002458
    ::ArrayW<uint8_t> GetUnsignedBigInteger(::ArrayW<uint8_t> integer);
    // public Mono.Security.ASN1 GetIssuerName()
    // Offset: 0x2002844
    ::Mono::Security::ASN1_* GetIssuerName();
    // public Mono.Security.ASN1 GetSubjectName()
    // Offset: 0x200284C
    ::Mono::Security::ASN1_* GetSubjectName();
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x2002854
    void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);
    // static private System.Byte[] PEM(System.String type, System.Byte[] data)
    // Offset: 0x200232C
    static ::ArrayW<uint8_t> PEM(::StringW type, ::ArrayW<uint8_t> data);
  }; // Mono.Security.X509.X509Certificate
  #pragma pack(pop)
  static check_size<sizeof(X509Certificate_), 176 + sizeof(::Mono::Security::X509::X509ExtensionCollection_*)> __Mono_Security_X509_X509Certificate_SizeCheck;
  static_assert(sizeof(X509Certificate_) == 0xB8);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_DSA
// Il2CppName: get_DSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::DSA* (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_DSA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_DSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_IssuerName
// Il2CppName: get_IssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_IssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_IssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_KeyAlgorithmParameters
// Il2CppName: get_KeyAlgorithmParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_KeyAlgorithmParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_KeyAlgorithmParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_RSA
// Il2CppName: get_RSA
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Cryptography::RSA* (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_RSA)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_RSA", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_RawData
// Il2CppName: get_RawData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_RawData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_RawData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_SerialNumber
// Il2CppName: get_SerialNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_SerialNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_SerialNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_SubjectName
// Il2CppName: get_SubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_SubjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_SubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_ValidFrom
// Il2CppName: get_ValidFrom
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_ValidFrom)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_ValidFrom", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::get_ValidUntil
// Il2CppName: get_ValidUntil
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::get_ValidUntil)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "get_ValidUntil", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Mono::Security::X509::X509Certificate_::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Certificate_::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Certificate_::Parse)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::GetUnsignedBigInteger
// Il2CppName: GetUnsignedBigInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Certificate_::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Certificate_::GetUnsignedBigInteger)> {
  static const MethodInfo* get() {
    static auto* integer = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "GetUnsignedBigInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{integer});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::GetIssuerName
// Il2CppName: GetIssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1_* (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::GetIssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "GetIssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::GetSubjectName
// Il2CppName: GetSubjectName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::Security::ASN1_* (Mono::Security::X509::X509Certificate_::*)()>(&Mono::Security::X509::X509Certificate_::GetSubjectName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "GetSubjectName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::GetObjectData
// Il2CppName: GetObjectData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Certificate_::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&Mono::Security::X509::X509Certificate_::GetObjectData)> {
  static const MethodInfo* get() {
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "SerializationInfo")->byval_arg;
    static auto* context = &::il2cpp_utils::GetClassFromName("System.Runtime.Serialization", "StreamingContext")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "GetObjectData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{info, context});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Certificate_::PEM
// Il2CppName: PEM
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (*)(::StringW, ::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Certificate_::PEM)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Certificate_*), "PEM", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, data});
  }
};
