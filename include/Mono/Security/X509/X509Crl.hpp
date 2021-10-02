// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509ExtensionCollection
  class X509ExtensionCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: DSA
  class DSA;
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.X509.X509Crl
  // [TokenAttribute] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: E68060
  class X509Crl : public ::Il2CppObject {
    public:
    // Nested type: Mono::Security::X509::X509Crl::X509CrlEntry
    class X509CrlEntry;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.String issuer
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* issuer;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte version
    // Size: 0x1
    // Offset: 0x18
    uint8_t version;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Padding between fields: version and: thisUpdate
    char __padding1[0x7] = {};
    // private System.DateTime thisUpdate
    // Size: 0x8
    // Offset: 0x20
    System::DateTime thisUpdate;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.DateTime nextUpdate
    // Size: 0x8
    // Offset: 0x28
    System::DateTime nextUpdate;
    // Field size check
    static_assert(sizeof(System::DateTime) == 0x8);
    // private System.Collections.ArrayList entries
    // Size: 0x8
    // Offset: 0x30
    System::Collections::ArrayList* entries;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.String signatureOID
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* signatureOID;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] signature
    // Size: 0x8
    // Offset: 0x40
    ::ArrayW<uint8_t> signature;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private Mono.Security.X509.X509ExtensionCollection extensions
    // Size: 0x8
    // Offset: 0x48
    Mono::Security::X509::X509ExtensionCollection* extensions;
    // Field size check
    static_assert(sizeof(Mono::Security::X509::X509ExtensionCollection*) == 0x8);
    // private System.Byte[] encoded
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<uint8_t> encoded;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Byte[] hash_value
    // Size: 0x8
    // Offset: 0x58
    ::ArrayW<uint8_t> hash_value;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private System.String issuer
    ::Il2CppString*& dyn_issuer();
    // Get instance field reference: private System.Byte version
    uint8_t& dyn_version();
    // Get instance field reference: private System.DateTime thisUpdate
    System::DateTime& dyn_thisUpdate();
    // Get instance field reference: private System.DateTime nextUpdate
    System::DateTime& dyn_nextUpdate();
    // Get instance field reference: private System.Collections.ArrayList entries
    System::Collections::ArrayList*& dyn_entries();
    // Get instance field reference: private System.String signatureOID
    ::Il2CppString*& dyn_signatureOID();
    // Get instance field reference: private System.Byte[] signature
    ::ArrayW<uint8_t>& dyn_signature();
    // Get instance field reference: private Mono.Security.X509.X509ExtensionCollection extensions
    Mono::Security::X509::X509ExtensionCollection*& dyn_extensions();
    // Get instance field reference: private System.Byte[] encoded
    ::ArrayW<uint8_t>& dyn_encoded();
    // Get instance field reference: private System.Byte[] hash_value
    ::ArrayW<uint8_t>& dyn_hash_value();
    // public Mono.Security.X509.X509ExtensionCollection get_Extensions()
    // Offset: 0x25DFA14
    Mono::Security::X509::X509ExtensionCollection* get_Extensions();
    // public System.Byte[] get_Hash()
    // Offset: 0x25DFA1C
    ::ArrayW<uint8_t> get_Hash();
    // public System.String get_IssuerName()
    // Offset: 0x25DFBB4
    ::Il2CppString* get_IssuerName();
    // public System.DateTime get_NextUpdate()
    // Offset: 0x25DFBBC
    System::DateTime get_NextUpdate();
    // public System.Void .ctor(System.Byte[] crl)
    // Offset: 0x25DF1E4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509Crl* New_ctor(::ArrayW<uint8_t> crl) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::X509::X509Crl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509Crl*, creationType>(crl)));
    }
    // private System.Void Parse(System.Byte[] crl)
    // Offset: 0x25DF2BC
    void Parse(::ArrayW<uint8_t> crl);
    // private System.Boolean Compare(System.Byte[] array1, System.Byte[] array2)
    // Offset: 0x25DFBC4
    bool Compare(::ArrayW<uint8_t> array1, ::ArrayW<uint8_t> array2);
    // public Mono.Security.X509.X509Crl/Mono.Security.X509.X509CrlEntry GetCrlEntry(Mono.Security.X509.X509Certificate x509)
    // Offset: 0x25DFC44
    Mono::Security::X509::X509Crl::X509CrlEntry* GetCrlEntry(Mono::Security::X509::X509Certificate* x509);
    // public Mono.Security.X509.X509Crl/Mono.Security.X509.X509CrlEntry GetCrlEntry(System.Byte[] serialNumber)
    // Offset: 0x25DFCEC
    Mono::Security::X509::X509Crl::X509CrlEntry* GetCrlEntry(::ArrayW<uint8_t> serialNumber);
    // System.Boolean VerifySignature(System.Security.Cryptography.DSA dsa)
    // Offset: 0x25DFEB4
    bool VerifySignature(System::Security::Cryptography::DSA* dsa);
    // System.Boolean VerifySignature(System.Security.Cryptography.RSA rsa)
    // Offset: 0x25E0150
    bool VerifySignature(System::Security::Cryptography::RSA* rsa);
    // public System.Boolean VerifySignature(System.Security.Cryptography.AsymmetricAlgorithm aa)
    // Offset: 0x25E0228
    bool VerifySignature(System::Security::Cryptography::AsymmetricAlgorithm* aa);
  }; // Mono.Security.X509.X509Crl
  #pragma pack(pop)
  static check_size<sizeof(X509Crl), 88 + sizeof(::ArrayW<uint8_t>)> __Mono_Security_X509_X509CrlSizeCheck;
  static_assert(sizeof(X509Crl) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Crl*, "Mono.Security.X509", "X509Crl");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::get_Extensions
// Il2CppName: get_Extensions
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509ExtensionCollection* (Mono::Security::X509::X509Crl::*)()>(&Mono::Security::X509::X509Crl::get_Extensions)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "get_Extensions", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::get_Hash
// Il2CppName: get_Hash
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Mono::Security::X509::X509Crl::*)()>(&Mono::Security::X509::X509Crl::get_Hash)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "get_Hash", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::get_IssuerName
// Il2CppName: get_IssuerName
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (Mono::Security::X509::X509Crl::*)()>(&Mono::Security::X509::X509Crl::get_IssuerName)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "get_IssuerName", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::get_NextUpdate
// Il2CppName: get_NextUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::DateTime (Mono::Security::X509::X509Crl::*)()>(&Mono::Security::X509::X509Crl::get_NextUpdate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "get_NextUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Crl::Parse)> {
  static const MethodInfo* get() {
    static auto* crl = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{crl});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>, ::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Crl::Compare)> {
  static const MethodInfo* get() {
    static auto* array1 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* array2 = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{array1, array2});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::GetCrlEntry
// Il2CppName: GetCrlEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Crl::X509CrlEntry* (Mono::Security::X509::X509Crl::*)(Mono::Security::X509::X509Certificate*)>(&Mono::Security::X509::X509Crl::GetCrlEntry)> {
  static const MethodInfo* get() {
    static auto* x509 = &::il2cpp_utils::GetClassFromName("Mono.Security.X509", "X509Certificate")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "GetCrlEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x509});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::GetCrlEntry
// Il2CppName: GetCrlEntry
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Mono::Security::X509::X509Crl::X509CrlEntry* (Mono::Security::X509::X509Crl::*)(::ArrayW<uint8_t>)>(&Mono::Security::X509::X509Crl::GetCrlEntry)> {
  static const MethodInfo* get() {
    static auto* serialNumber = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "GetCrlEntry", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{serialNumber});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Crl::*)(System::Security::Cryptography::DSA*)>(&Mono::Security::X509::X509Crl::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* dsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "DSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{dsa});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Crl::*)(System::Security::Cryptography::RSA*)>(&Mono::Security::X509::X509Crl::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* rsa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "RSA")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{rsa});
  }
};
// Writing MetadataGetter for method: Mono::Security::X509::X509Crl::VerifySignature
// Il2CppName: VerifySignature
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Mono::Security::X509::X509Crl::*)(System::Security::Cryptography::AsymmetricAlgorithm*)>(&Mono::Security::X509::X509Crl::VerifySignature)> {
  static const MethodInfo* get() {
    static auto* aa = &::il2cpp_utils::GetClassFromName("System.Security.Cryptography", "AsymmetricAlgorithm")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Mono::Security::X509::X509Crl*), "VerifySignature", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{aa});
  }
};
