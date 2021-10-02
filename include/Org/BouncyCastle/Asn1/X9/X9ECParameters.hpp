// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9FieldID
  class X9FieldID;
  // Forward declaring type: X9ECPoint
  class X9ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9ECParameters
  // [TokenAttribute] Offset: FFFFFFFF
  class X9ECParameters : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private Org.BouncyCastle.Asn1.X9.X9FieldID fieldID
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X9::X9FieldID* fieldID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X9::X9FieldID*) == 0x8);
    // private Org.BouncyCastle.Math.EC.ECCurve curve
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Math::EC::ECCurve* curve;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::EC::ECCurve*) == 0x8);
    // private Org.BouncyCastle.Asn1.X9.X9ECPoint g
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X9::X9ECPoint* g;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X9::X9ECPoint*) == 0x8);
    // private Org.BouncyCastle.Math.BigInteger n
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* n;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private Org.BouncyCastle.Math.BigInteger h
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* h;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Math::BigInteger*) == 0x8);
    // private System.Byte[] seed
    // Size: 0x8
    // Offset: 0x38
    ::ArrayW<uint8_t> seed;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    public:
    // Get instance field reference: private Org.BouncyCastle.Asn1.X9.X9FieldID fieldID
    Org::BouncyCastle::Asn1::X9::X9FieldID*& dyn_fieldID();
    // Get instance field reference: private Org.BouncyCastle.Math.EC.ECCurve curve
    Org::BouncyCastle::Math::EC::ECCurve*& dyn_curve();
    // Get instance field reference: private Org.BouncyCastle.Asn1.X9.X9ECPoint g
    Org::BouncyCastle::Asn1::X9::X9ECPoint*& dyn_g();
    // Get instance field reference: private Org.BouncyCastle.Math.BigInteger n
    Org::BouncyCastle::Math::BigInteger*& dyn_n();
    // Get instance field reference: private Org.BouncyCastle.Math.BigInteger h
    Org::BouncyCastle::Math::BigInteger*& dyn_h();
    // Get instance field reference: private System.Byte[] seed
    ::ArrayW<uint8_t>& dyn_seed();
    // public Org.BouncyCastle.Math.EC.ECCurve get_Curve()
    // Offset: 0x1BC7CF4
    Org::BouncyCastle::Math::EC::ECCurve* get_Curve();
    // public Org.BouncyCastle.Math.EC.ECPoint get_G()
    // Offset: 0x1BC7CFC
    Org::BouncyCastle::Math::EC::ECPoint* get_G();
    // public Org.BouncyCastle.Math.BigInteger get_N()
    // Offset: 0x1BC7D14
    Org::BouncyCastle::Math::BigInteger* get_N();
    // public Org.BouncyCastle.Math.BigInteger get_H()
    // Offset: 0x1BC7D1C
    Org::BouncyCastle::Math::BigInteger* get_H();
    // public System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x1BC73C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9ECParameters* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9ECParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9ECParameters*, creationType>(seq)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Asn1.X9.X9ECPoint g, Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger h)
    // Offset: 0x1BC3AD0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9ECParameters* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Asn1::X9::X9ECPoint* g, Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* h) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9ECParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9ECParameters*, creationType>(curve, g, n, h)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Asn1.X9.X9ECPoint g, Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger h, System.Byte[] seed)
    // Offset: 0x1BC35B4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X9ECParameters* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Asn1::X9::X9ECPoint* g, Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* h, ::ArrayW<uint8_t> seed) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X9::X9ECParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X9ECParameters*, creationType>(curve, g, n, h, seed)));
    }
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetInstance(System.Object obj)
    // Offset: 0x1BC7320
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetInstance(::Il2CppObject* obj);
    // public System.Byte[] GetSeed()
    // Offset: 0x1BC7D24
    ::ArrayW<uint8_t> GetSeed();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x1BC7D2C
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X9ECParameters
  #pragma pack(pop)
  static check_size<sizeof(X9ECParameters), 56 + sizeof(::ArrayW<uint8_t>)> __Org_BouncyCastle_Asn1_X9_X9ECParametersSizeCheck;
  static_assert(sizeof(X9ECParameters) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9ECParameters*, "Org.BouncyCastle.Asn1.X9", "X9ECParameters");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::get_Curve
// Il2CppName: get_Curve
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECCurve* (Org::BouncyCastle::Asn1::X9::X9ECParameters::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECParameters::get_Curve)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECParameters*), "get_Curve", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::get_G
// Il2CppName: get_G
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Asn1::X9::X9ECParameters::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECParameters::get_G)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECParameters*), "get_G", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::get_N
// Il2CppName: get_N
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X9::X9ECParameters::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECParameters::get_N)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECParameters*), "get_N", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::get_H
// Il2CppName: get_H
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Math::BigInteger* (Org::BouncyCastle::Asn1::X9::X9ECParameters::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECParameters::get_H)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECParameters*), "get_H", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::GetInstance
// Il2CppName: GetInstance
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::X9::X9ECParameters* (*)(::Il2CppObject*)>(&Org::BouncyCastle::Asn1::X9::X9ECParameters::GetInstance)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECParameters*), "GetInstance", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::GetSeed
// Il2CppName: GetSeed
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (Org::BouncyCastle::Asn1::X9::X9ECParameters::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECParameters::GetSeed)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECParameters*), "GetSeed", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Asn1::X9::X9ECParameters::ToAsn1Object
// Il2CppName: ToAsn1Object
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Org::BouncyCastle::Asn1::Asn1Object* (Org::BouncyCastle::Asn1::X9::X9ECParameters::*)()>(&Org::BouncyCastle::Asn1::X9::X9ECParameters::ToAsn1Object)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Asn1::X9::X9ECParameters*), "ToAsn1Object", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
