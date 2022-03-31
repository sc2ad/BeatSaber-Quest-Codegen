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
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: Asn1Set
  class Asn1Set;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Forward declaring type: CertificationRequestInfo
  class CertificationRequestInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*, "Org.BouncyCastle.Asn1.Pkcs", "CertificationRequestInfo");
// Type namespace: Org.BouncyCastle.Asn1.Pkcs
namespace Org::BouncyCastle::Asn1::Pkcs {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class CertificationRequestInfo : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
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
    // Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Name subject
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::X509::X509Name* subject;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo subjectPKInfo
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPKInfo;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*) == 0x8);
    // Org.BouncyCastle.Asn1.Asn1Set attributes
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Asn1::Asn1Set* attributes;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::Asn1Set*) == 0x8);
    public:
    // Get instance field reference: Org.BouncyCastle.Asn1.DerInteger version
    ::Org::BouncyCastle::Asn1::DerInteger*& dyn_version();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.X509Name subject
    ::Org::BouncyCastle::Asn1::X509::X509Name*& dyn_subject();
    // Get instance field reference: Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo subjectPKInfo
    ::Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*& dyn_subjectPKInfo();
    // Get instance field reference: Org.BouncyCastle.Asn1.Asn1Set attributes
    ::Org::BouncyCastle::Asn1::Asn1Set*& dyn_attributes();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1C8F1D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificationRequestInfo* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificationRequestInfo*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo GetInstance(System.Object obj)
    // Offset: 0x1C8F00C
    static ::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* GetInstance(::Il2CppObject* obj);
    // static private System.Void ValidateAttributes(Org.BouncyCastle.Asn1.Asn1Set attributes)
    // Offset: 0x1C8F3E4
    static void ValidateAttributes(::Org::BouncyCastle::Asn1::Asn1Set* attributes);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1C8F700
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.Pkcs.CertificationRequestInfo
  #pragma pack(pop)
  static check_size<sizeof(CertificationRequestInfo), 40 + sizeof(::Org::BouncyCastle::Asn1::Asn1Set*)> __Org_BouncyCastle_Asn1_Pkcs_CertificationRequestInfoSizeCheck;
  static_assert(sizeof(CertificationRequestInfo) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::ValidateAttributes
// Il2CppName: ValidateAttributes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Org::BouncyCastle::Asn1::Asn1Set*)>(&Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::ValidateAttributes)> {
  static const MethodInfo* get() {
    static auto* attributes = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1Set")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*), "ValidateAttributes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{attributes});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::*)()>(&Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::Pkcs::CertificationRequestInfo*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
