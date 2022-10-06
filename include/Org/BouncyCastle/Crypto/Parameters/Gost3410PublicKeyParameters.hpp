// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/Gost3410KeyParameters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410PublicKeyParameters
  class Gost3410PublicKeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410PublicKeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410PublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger y
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Math::BigInteger* y;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger y
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_y();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger y, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x164CEC0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410PublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* y, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410PublicKeyParameters*, creationType>(y, publicKeyParamSet)));
    }
  }; // Org.BouncyCastle.Crypto.Parameters.Gost3410PublicKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410PublicKeyParameters), 40 + sizeof(::Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_Gost3410PublicKeyParametersSizeCheck;
  static_assert(sizeof(Gost3410PublicKeyParameters) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410PublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
