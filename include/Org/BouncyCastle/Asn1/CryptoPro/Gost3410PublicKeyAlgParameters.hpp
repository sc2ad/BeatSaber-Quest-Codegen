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
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Forward declaring type: Gost3410PublicKeyAlgParameters
  class Gost3410PublicKeyAlgParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410PublicKeyAlgParameters");
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410PublicKeyAlgParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
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
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Size: 0x8
    // Offset: 0x10
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier digestParamSet
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier encryptionParamSet
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    public:
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_publicKeyParamSet();
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerObjectIdentifier digestParamSet
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_digestParamSet();
    // Get instance field reference: private Org.BouncyCastle.Asn1.DerObjectIdentifier encryptionParamSet
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_encryptionParamSet();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_PublicKeyParamSet()
    // Offset: 0x1BF79E4
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_DigestParamSet()
    // Offset: 0x1BF79EC
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DigestParamSet();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_EncryptionParamSet()
    // Offset: 0x1BF79F4
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* get_EncryptionParamSet();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1BF7888
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410PublicKeyAlgParameters* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410PublicKeyAlgParameters*, creationType>(seq)));
    }
    // static public Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters GetInstance(System.Object obj)
    // Offset: 0x1BF77E8
    static ::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* GetInstance(::Il2CppObject* obj);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1BF79FC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410PublicKeyAlgParameters), 32 + sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Asn1_CryptoPro_Gost3410PublicKeyAlgParametersSizeCheck;
  static_assert(sizeof(Gost3410PublicKeyAlgParameters) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_PublicKeyParamSet
// Il2CppName: get_PublicKeyParamSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_PublicKeyParamSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*), "get_PublicKeyParamSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_DigestParamSet
// Il2CppName: get_DigestParamSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_DigestParamSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*), "get_DigestParamSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_EncryptionParamSet
// Il2CppName: get_EncryptionParamSet
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::DerObjectIdentifier* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::get_EncryptionParamSet)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*), "get_EncryptionParamSet", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
