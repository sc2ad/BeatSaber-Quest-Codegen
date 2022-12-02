// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AttributeCertificateInfo
  class AttributeCertificateInfo;
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AttributeCertificate
  class AttributeCertificate;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::AttributeCertificate);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::AttributeCertificate*, "Org.BouncyCastle.Asn1.X509", "AttributeCertificate");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.AttributeCertificate
  // [TokenAttribute] Offset: FFFFFFFF
  class AttributeCertificate : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo acinfo
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* acinfo;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signatureAlgorithm
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signatureAlgorithm;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerBitString signatureValue
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerBitString* signatureValue;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo acinfo
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo*& dyn_acinfo();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signatureAlgorithm
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*& dyn_signatureAlgorithm();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerBitString signatureValue
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerBitString*& dyn_signatureValue();
    // public Org.BouncyCastle.Asn1.X509.AttributeCertificateInfo get_ACInfo()
    // Offset: 0x1F929A8
    ::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* get_ACInfo();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1F926AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AttributeCertificate* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::AttributeCertificate::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AttributeCertificate*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.AttributeCertificate GetInstance(System.Object obj)
    // Offset: 0x1F92608
    static ::Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1F929B0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.AttributeCertificate
  #pragma pack(pop)
  static check_size<sizeof(AttributeCertificate), 32 + sizeof(::Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_AttributeCertificateSizeCheck;
  static_assert(sizeof(AttributeCertificate) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_ACInfo
// Il2CppName: get_ACInfo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificateInfo* (Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(&Org::BouncyCastle::Asn1::X509::AttributeCertificate::get_ACInfo)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttributeCertificate*), "get_ACInfo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::AttributeCertificate* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::AttributeCertificate::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttributeCertificate*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::AttributeCertificate::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::AttributeCertificate::*)()>(&Org::BouncyCastle::Asn1::X509::AttributeCertificate::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::AttributeCertificate*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
