// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410Parameters
  class Gost3410Parameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Gost3410KeyParameters
  class Gost3410KeyParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410KeyParameters");
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410KeyParameters : public ::Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // Writing base type padding for base size: 0x11 to desired offset: 0x18
    char ___base_padding[0x7] = {};
    public:
    // private readonly Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters parameters
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* parameters;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier*) == 0x8);
    public:
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get instance field reference: private readonly Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters parameters
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters*& dyn_parameters();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    [[deprecated("Use field access instead!")]] ::Org::BouncyCastle::Asn1::DerObjectIdentifier*& dyn_publicKeyParamSet();
    // public Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters get_Parameters()
    // Offset: 0x164CB00
    ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* get_Parameters();
    // protected System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x164C978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410KeyParameters* New_ctor(bool isPrivate, ::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410KeyParameters*, creationType>(isPrivate, publicKeyParamSet)));
    }
    // static private Org.BouncyCastle.Crypto.Parameters.Gost3410Parameters LookupParameters(Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet)
    // Offset: 0x164C9B0
    static ::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* LookupParameters(::Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet);
  }; // Org.BouncyCastle.Crypto.Parameters.Gost3410KeyParameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410KeyParameters), 32 + sizeof(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)> __Org_BouncyCastle_Crypto_Parameters_Gost3410KeyParametersSizeCheck;
  static_assert(sizeof(Gost3410KeyParameters) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters::get_Parameters
// Il2CppName: get_Parameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* (Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters::*)()>(&Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters::get_Parameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters*), "get_Parameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters::LookupParameters
// Il2CppName: LookupParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Crypto::Parameters::Gost3410Parameters* (*)(::Org::BouncyCastle::Asn1::DerObjectIdentifier*)>(&Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters::LookupParameters)> {
  static const MethodInfo* get() {
    static auto* publicKeyParamSet = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Asn1", "DerObjectIdentifier")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Crypto::Parameters::Gost3410KeyParameters*), "LookupParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{publicKeyParamSet});
  }
};
