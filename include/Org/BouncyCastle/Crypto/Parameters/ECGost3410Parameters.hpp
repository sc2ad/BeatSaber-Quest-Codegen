// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECNamedDomainParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECNamedDomainParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECGost3410Parameters
  // [TokenAttribute] Offset: FFFFFFFF
  class ECGost3410Parameters : public Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier _publicKeyParamSet
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier _digestParamSet
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier _encryptionParamSet
    // Size: 0x8
    // Offset: 0x58
    Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    public:
    // Deleting conversion operator: operator Org::BouncyCastle::Asn1::DerObjectIdentifier*
    constexpr operator Org::BouncyCastle::Asn1::DerObjectIdentifier*() const noexcept = delete;
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier _publicKeyParamSet
    Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn__publicKeyParamSet();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier _digestParamSet
    Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn__digestParamSet();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier _encryptionParamSet
    Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn__encryptionParamSet();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Parameters.ECNamedDomainParameters dp, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet, Org.BouncyCastle.Asn1.DerObjectIdentifier digestParamSet, Org.BouncyCastle.Asn1.DerObjectIdentifier encryptionParamSet)
    // Offset: 0x139465C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECGost3410Parameters* New_ctor(Org::BouncyCastle::Crypto::Parameters::ECNamedDomainParameters* dp, Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier* digestParamSet, Org::BouncyCastle::Asn1::DerObjectIdentifier* encryptionParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECGost3410Parameters*, creationType>(dp, publicKeyParamSet, digestParamSet, encryptionParamSet)));
    }
  }; // Org.BouncyCastle.Crypto.Parameters.ECGost3410Parameters
  #pragma pack(pop)
  static check_size<sizeof(ECGost3410Parameters), 88 + sizeof(Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Crypto_Parameters_ECGost3410ParametersSizeCheck;
  static_assert(sizeof(ECGost3410Parameters) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters*, "Org.BouncyCastle.Crypto.Parameters", "ECGost3410Parameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECGost3410Parameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
