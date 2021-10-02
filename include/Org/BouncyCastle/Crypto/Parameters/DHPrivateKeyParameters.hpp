// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
#include "Org/BouncyCastle/Crypto/Parameters/DHKeyParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHParameters
  class DHParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class DHPrivateKeyParameters : public Org::BouncyCastle::Crypto::Parameters::DHKeyParameters {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private readonly Org.BouncyCastle.Math.BigInteger x
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* x;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.BigInteger x
    Org::BouncyCastle::Math::BigInteger*& dyn_x();
    // public Org.BouncyCastle.Math.BigInteger get_X()
    // Offset: 0x1391BEC
    Org::BouncyCastle::Math::BigInteger* get_X();
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters)
    // Offset: 0x1391B7C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHPrivateKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHPrivateKeyParameters*, creationType>(x, parameters)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Crypto.Parameters.DHParameters parameters, Org.BouncyCastle.Asn1.DerObjectIdentifier algorithmOid)
    // Offset: 0x1391BA8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DHPrivateKeyParameters* New_ctor(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Crypto::Parameters::DHParameters* parameters, Org::BouncyCastle::Asn1::DerObjectIdentifier* algorithmOid) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DHPrivateKeyParameters*, creationType>(x, parameters, algorithmOid)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters other)
    // Offset: 0x1391CA4
    bool Equals(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1391BF4
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
    // Base method: System.Boolean DHKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1391D00
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.DHKeyParameters
    // Base method: System.Int32 DHKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.DHPrivateKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(DHPrivateKeyParameters), 40 + sizeof(Org::BouncyCastle::Math::BigInteger*)> __Org_BouncyCastle_Crypto_Parameters_DHPrivateKeyParametersSizeCheck;
  static_assert(sizeof(DHPrivateKeyParameters) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "DHPrivateKeyParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::get_X
// Il2CppName: get_X
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::get_X)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*), "get_X", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::*)(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "DHPrivateKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::DHPrivateKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
