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
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECPoint
  class ECPoint;
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
  // Forward declaring type: ECPublicKeyParameters
  class ECPublicKeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECPublicKeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class ECPublicKeyParameters : public ::Org::BouncyCastle::Crypto::Parameters::ECKeyParameters {
    public:
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECPoint q
    // Size: 0x8
    // Offset: 0x30
    ::Org::BouncyCastle::Math::EC::ECPoint* q;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Math::EC::ECPoint*) == 0x8);
    public:
    // Get instance field reference: private readonly Org.BouncyCastle.Math.EC.ECPoint q
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Math::EC::ECPoint*& dyn_q();
    // public Org.BouncyCastle.Math.EC.ECPoint get_Q()
    // Offset: 0x164B2BC
    ::Org::BouncyCastle::Math::EC::ECPoint* get_Q();
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x164B0FC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPublicKeyParameters* New_ctor(::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPublicKeyParameters*, creationType>(q, parameters)));
    }
    // public System.Void .ctor(System.String algorithm, Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Crypto.Parameters.ECDomainParameters parameters)
    // Offset: 0x164B164
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPublicKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* parameters) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPublicKeyParameters*, creationType>(algorithm, q, parameters)));
    }
    // public System.Void .ctor(System.String algorithm, Org.BouncyCastle.Math.EC.ECPoint q, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x164B210
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ECPublicKeyParameters* New_ctor(::StringW algorithm, ::Org::BouncyCastle::Math::EC::ECPoint* q, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ECPublicKeyParameters*, creationType>(algorithm, q, publicKeyParamSet)));
    }
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters other)
    // Offset: 0x164B374
    bool Equals(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x164B2C4
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
    // Base method: System.Boolean ECKeyParameters::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x164B3D4
    // Implemented from: Org.BouncyCastle.Crypto.Parameters.ECKeyParameters
    // Base method: System.Int32 ECKeyParameters::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ECPublicKeyParameters
  #pragma pack(pop)
  static check_size<sizeof(ECPublicKeyParameters), 48 + sizeof(::Org::BouncyCastle::Math::EC::ECPoint*)> __Org_BouncyCastle_Crypto_Parameters_ECPublicKeyParametersSizeCheck;
  static_assert(sizeof(ECPublicKeyParameters) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(::Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*)>(&Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Crypto.Parameters", "ECPublicKeyParameters")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)(::Il2CppObject*)>(&Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::ECPublicKeyParameters*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
