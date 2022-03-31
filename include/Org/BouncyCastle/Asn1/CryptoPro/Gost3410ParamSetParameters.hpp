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
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Forward declaring type: Gost3410ParamSetParameters
  class Gost3410ParamSetParameters;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*, "Org.BouncyCastle.Asn1.CryptoPro", "Gost3410ParamSetParameters");
// Type namespace: Org.BouncyCastle.Asn1.CryptoPro
namespace Org::BouncyCastle::Asn1::CryptoPro {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class Gost3410ParamSetParameters : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
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
    // private readonly System.Int32 keySize
    // Size: 0x4
    // Offset: 0x10
    int keySize;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: keySize and: p
    char __padding0[0x4] = {};
    // private readonly Org.BouncyCastle.Asn1.DerInteger p
    // Size: 0x8
    // Offset: 0x18
    ::Org::BouncyCastle::Asn1::DerInteger* p;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger q
    // Size: 0x8
    // Offset: 0x20
    ::Org::BouncyCastle::Asn1::DerInteger* q;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // private readonly Org.BouncyCastle.Asn1.DerInteger a
    // Size: 0x8
    // Offset: 0x28
    ::Org::BouncyCastle::Asn1::DerInteger* a;
    // Field size check
    static_assert(sizeof(::Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    public:
    // Get instance field reference: private readonly System.Int32 keySize
    int& dyn_keySize();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger p
    ::Org::BouncyCastle::Asn1::DerInteger*& dyn_p();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger q
    ::Org::BouncyCastle::Asn1::DerInteger*& dyn_q();
    // Get instance field reference: private readonly Org.BouncyCastle.Asn1.DerInteger a
    ::Org::BouncyCastle::Asn1::DerInteger*& dyn_a();
    // public Org.BouncyCastle.Math.BigInteger get_P()
    // Offset: 0x1BF7528
    ::Org::BouncyCastle::Math::BigInteger* get_P();
    // public Org.BouncyCastle.Math.BigInteger get_Q()
    // Offset: 0x1BF75AC
    ::Org::BouncyCastle::Math::BigInteger* get_Q();
    // public Org.BouncyCastle.Math.BigInteger get_A()
    // Offset: 0x1BF75C4
    ::Org::BouncyCastle::Math::BigInteger* get_A();
    // public System.Void .ctor(System.Int32 keySize, Org.BouncyCastle.Math.BigInteger p, Org.BouncyCastle.Math.BigInteger q, Org.BouncyCastle.Math.BigInteger a)
    // Offset: 0x1BF72A0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Gost3410ParamSetParameters* New_ctor(int keySize, ::Org::BouncyCastle::Math::BigInteger* p, ::Org::BouncyCastle::Math::BigInteger* q, ::Org::BouncyCastle::Math::BigInteger* a) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Gost3410ParamSetParameters*, creationType>(keySize, p, q, a)));
    }
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1BF75DC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.CryptoPro.Gost3410ParamSetParameters
  #pragma pack(pop)
  static check_size<sizeof(Gost3410ParamSetParameters), 40 + sizeof(::Org::BouncyCastle::Asn1::DerInteger*)> __Org_BouncyCastle_Asn1_CryptoPro_Gost3410ParamSetParametersSizeCheck;
  static_assert(sizeof(Gost3410ParamSetParameters) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_P
// Il2CppName: get_P
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_P)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*), "get_P", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_Q
// Il2CppName: get_Q
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_Q)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*), "get_Q", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_A
// Il2CppName: get_A
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::get_A)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*), "get_A", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::*)()>(&Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::CryptoPro::Gost3410ParamSetParameters*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
