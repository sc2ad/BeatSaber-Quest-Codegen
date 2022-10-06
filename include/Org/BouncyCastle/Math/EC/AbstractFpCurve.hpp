// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
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
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: AbstractFpCurve
  class AbstractFpCurve;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::AbstractFpCurve);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::AbstractFpCurve*, "Org.BouncyCastle.Math.EC", "AbstractFpCurve");
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractFpCurve
  // [TokenAttribute] Offset: FFFFFFFF
  class AbstractFpCurve : public ::Org::BouncyCastle::Math::EC::ECCurve {
    public:
    // protected System.Void .ctor(Org.BouncyCastle.Math.BigInteger q)
    // Offset: 0x232976C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AbstractFpCurve* New_ctor(::Org::BouncyCastle::Math::BigInteger* q) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Org::BouncyCastle::Math::EC::AbstractFpCurve::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AbstractFpCurve*, creationType>(q)));
    }
    // static private Org.BouncyCastle.Math.BigInteger ImplRandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r, Org.BouncyCastle.Math.BigInteger p)
    // Offset: 0x2329920
    static ::Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r, ::Org::BouncyCastle::Math::BigInteger* p);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0x23297F0
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    ::Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(::Org::BouncyCastle::Security::SecureRandom* r);
    // protected override Org.BouncyCastle.Math.EC.ECPoint DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    // Offset: 0x23299B4
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    ::Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int yTilde, ::Org::BouncyCastle::Math::BigInteger* X1);
  }; // Org.BouncyCastle.Math.EC.AbstractFpCurve
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpCurve::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpCurve::ImplRandomFieldElementMult
// Il2CppName: ImplRandomFieldElementMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::BigInteger* (*)(::Org::BouncyCastle::Security::SecureRandom*, ::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::AbstractFpCurve::ImplRandomFieldElementMult)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    static auto* p = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractFpCurve*), "ImplRandomFieldElementMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r, p});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpCurve::RandomFieldElementMult
// Il2CppName: RandomFieldElementMult
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECFieldElement* (Org::BouncyCastle::Math::EC::AbstractFpCurve::*)(::Org::BouncyCastle::Security::SecureRandom*)>(&Org::BouncyCastle::Math::EC::AbstractFpCurve::RandomFieldElementMult)> {
  static const MethodInfo* get() {
    static auto* r = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Security", "SecureRandom")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractFpCurve*), "RandomFieldElementMult", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{r});
  }
};
// Writing MetadataGetter for method: Org::BouncyCastle::Math::EC::AbstractFpCurve::DecompressPoint
// Il2CppName: DecompressPoint
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Org::BouncyCastle::Math::EC::ECPoint* (Org::BouncyCastle::Math::EC::AbstractFpCurve::*)(int, ::Org::BouncyCastle::Math::BigInteger*)>(&Org::BouncyCastle::Math::EC::AbstractFpCurve::DecompressPoint)> {
  static const MethodInfo* get() {
    static auto* yTilde = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* X1 = &::il2cpp_utils::GetClassFromName("Org.BouncyCastle.Math", "BigInteger")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Org::BouncyCastle::Math::EC::AbstractFpCurve*), "DecompressPoint", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{yTilde, X1});
  }
};
