// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/ECKeyParameters.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECPrivateKeyParameters
  class ECPrivateKeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECPrivateKeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class ECPrivateKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger d
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Math::BigInteger* d;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::BigInteger*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger d
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::BigInteger*& dyn_d();
    // public Org.BouncyCastle.Math.BigInteger get_D()
    // Offset: 0x1641B84
    ::Org::BouncyCastle::Math::BigInteger* get_D();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger d, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x16419CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPrivateKeyParameters* New_ctor(::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPrivateKeyParameters*, creationType>(d, parameters)));
    }
    // public System.Void .ctor(System.String algorithm, Org.BouncyCastle.Math.BigInteger d, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x1641A34
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPrivateKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPrivateKeyParameters*, creationType>(algorithm, d, parameters)));
    }
    // public System.Void .ctor(System.String algorithm, Org.BouncyCastle.Math.BigInteger d, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x1641ADC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPrivateKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::BigInteger* d, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPrivateKeyParameters*, creationType>(algorithm, d, publicKeyParamSet)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters other)
    // Offset: 0x1641C3C
    bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1641B8C
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
    // Base method: System.Boolean ECKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1641C98
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
    // Base method: System.Int32 ECKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ECPrivateKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(ECPrivateKeyParameters), 48 + sizeof(::Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_ECPrivateKeyParametersSizeCheck;
  static_assert(sizeof(ECPrivateKeyParameters) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::get_D
// Il2CppName: get_D
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::get_D)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*), "get_D", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(::Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECPrivateKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPrivateKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
