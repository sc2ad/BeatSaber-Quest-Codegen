// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters
  class Gost3410PublicKeyAlgParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier digestParamSet
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet;
    // private Org.BouncyCastle.Asn1.DerObjectIdentifier encryptionParamSet
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet;
    // static public Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters GetInstance(System.Object obj)
    // Offset: 0x132085C
    static Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x13208FC
    static Gost3410PublicKeyAlgParameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_PublicKeyParamSet()
    // Offset: 0x1320A98
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_DigestParamSet()
    // Offset: 0x1320AA0
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_DigestParamSet();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_EncryptionParamSet()
    // Offset: 0x1320AA8
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_EncryptionParamSet();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1320AB0
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.CryptoPro.Gost3410PublicKeyAlgParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::CryptoPro::Gost3410PublicKeyAlgParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410PublicKeyAlgParameters");
#pragma pack(pop)