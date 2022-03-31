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
  // Forward declaring type: GeneralNames
  class GeneralNames;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: IssuerSerial
  class IssuerSerial;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::IssuerSerial);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::IssuerSerial*, "Org.BouncyCastle.Asn1.X509", "IssuerSerial");
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.IssuerSerial
  // [TokenAttribute] Offset: FFFFFFFF
  class IssuerSerial : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
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
    // readonly Org.BouncyCastle.Asn1.X509.GeneralNames issuer
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::X509::GeneralNames* issuer;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::X509::GeneralNames*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerInteger serial
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::DerInteger* serial;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // readonly Org.BouncyCastle.Asn1.DerBitString issuerUid
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerBitString* issuerUid;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    public:
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.X509.GeneralNames issuer
    ::Org::BouncyCastle::Asn1::X509::GeneralNames*& dyn_issuer();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerInteger serial
    ::Org::BouncyCastle::Asn1::DerInteger*& dyn_serial();
    // Get instance field reference: readonly Org.BouncyCastle.Asn1.DerBitString issuerUid
    ::Org::BouncyCastle::Asn1::DerBitString*& dyn_issuerUid();
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1EC7FA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static IssuerSerial* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::X509::IssuerSerial::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<IssuerSerial*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.X509.IssuerSerial GetInstance(System.Object obj)
    // Offset: 0x1EC7E28
    static ::Org::BouncyCastle::Asn1::X509::IssuerSerial* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.X509.IssuerSerial GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean explicitly)
    // Offset: 0x1EC7CBC
    static ::Org::BouncyCastle::Asn1::X509::IssuerSerial* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool explicitly);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1EC8164
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.IssuerSerial
  #pragma pack(pop)
  static check_size<sizeof(IssuerSerial), 32 + sizeof(::Org::BouncyCastle::Asn1::DerBitString*)> __Org_BouncyCastle_Asn1_X509_IssuerSerialSizeCheck;
  static_assert(sizeof(IssuerSerial) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuerSerial::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuerSerial*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::X509::IssuerSerial* (*)(::Org::BouncyCastle::Asn1::Asn1TaggedObject*, bool)>(&Org::BouncyCastle::Asn1::X509::IssuerSerial::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "Asn1TaggedObject")->byval_arg;
    static auto* explicitly = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuerSerial*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj, explicitly});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X509::IssuerSerial::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X509::IssuerSerial::*)()>(&Org::BouncyCastle::Asn1::X509::IssuerSerial::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X509::IssuerSerial*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
