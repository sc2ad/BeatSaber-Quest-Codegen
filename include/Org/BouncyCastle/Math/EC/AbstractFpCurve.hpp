// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractFpCurve
  class AbstractFpCurve : public Org::BouncyCastle::Math::EC::ECCurve {
    public:
    // protected System.Void .ctor(Org.BouncyCastle.Math.BigInteger q)
    // Offset: 0x18CA544
    static AbstractFpCurve* New_ctor(Org::BouncyCastle::Math::BigInteger* q);
    // static private Org.BouncyCastle.Math.BigInteger ImplRandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r, Org.BouncyCastle.Math.BigInteger p)
    // Offset: 0x18CA6F8
    static Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r, Org::BouncyCastle::Math::BigInteger* p);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0x18CA5C8
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r);
    // protected override Org.BouncyCastle.Math.EC.ECPoint DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    // Offset: 0x18CA78C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int yTilde, Org::BouncyCastle::Math::BigInteger* X1);
  }; // Org.BouncyCastle.Math.EC.AbstractFpCurve
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractFpCurve*, "Org.BouncyCastle.Math.EC", "AbstractFpCurve");
#pragma pack(pop)