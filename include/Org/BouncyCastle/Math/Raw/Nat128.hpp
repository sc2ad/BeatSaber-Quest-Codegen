// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.Raw
namespace Org::BouncyCastle::Math::Raw {
  // Autogenerated type: Org.BouncyCastle.Math.Raw.Nat128
  class Nat128 : public ::Il2CppObject {
    public:
    // static public System.UInt32 Add(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0xFAA634
    static uint Add(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.UInt32 AddBothTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0xFAA734
    static uint AddBothTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Void Copy(System.UInt32[] x, System.Int32 xOff, System.UInt32[] z, System.Int32 zOff)
    // Offset: 0xFAA854
    static void Copy(::Array<uint>* x, int xOff, ::Array<uint>* z, int zOff);
    // static public System.Void Copy64(System.UInt64[] x, System.UInt64[] z)
    // Offset: 0xFAA934
    static void Copy64(::Array<uint64_t>* x, ::Array<uint64_t>* z);
    // static public System.Void Copy64(System.UInt64[] x, System.Int32 xOff, System.UInt64[] z, System.Int32 zOff)
    // Offset: 0xFAA990
    static void Copy64(::Array<uint64_t>* x, int xOff, ::Array<uint64_t>* z, int zOff);
    // static public System.UInt32[] Create()
    // Offset: 0xFAAA10
    static ::Array<uint>* Create();
    // static public System.UInt64[] Create64()
    // Offset: 0xFAAA5C
    static ::Array<uint64_t>* Create64();
    // static public System.UInt32[] CreateExt()
    // Offset: 0xFAAAA8
    static ::Array<uint>* CreateExt();
    // static public System.UInt64[] CreateExt64()
    // Offset: 0xFAAAF4
    static ::Array<uint64_t>* CreateExt64();
    // static public System.Boolean Eq(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0xFAAB40
    static bool Eq(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean Eq64(System.UInt64[] x, System.UInt64[] y)
    // Offset: 0xFAABB0
    static bool Eq64(::Array<uint64_t>* x, ::Array<uint64_t>* y);
    // static public System.UInt32[] FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0xFAAC28
    static ::Array<uint>* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // static public System.UInt32 GetBit(System.UInt32[] x, System.Int32 bit)
    // Offset: 0xFAAD2C
    static uint GetBit(::Array<uint>* x, int bit);
    // static public System.Boolean Gte(System.UInt32[] x, System.UInt32[] y)
    // Offset: 0xFAAD9C
    static bool Gte(::Array<uint>* x, ::Array<uint>* y);
    // static public System.Boolean IsOne(System.UInt32[] x)
    // Offset: 0xFAAE18
    static bool IsOne(::Array<uint>* x);
    // static public System.Boolean IsOne64(System.UInt64[] x)
    // Offset: 0xFAAE84
    static bool IsOne64(::Array<uint64_t>* x);
    // static public System.Boolean IsZero(System.UInt32[] x)
    // Offset: 0xFAAEDC
    static bool IsZero(::Array<uint>* x);
    // static public System.Boolean IsZero64(System.UInt64[] x)
    // Offset: 0xFAAF3C
    static bool IsZero64(::Array<uint64_t>* x);
    // static public System.Void Mul(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0xFAAF94
    static void Mul(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.UInt32 MulAddTo(System.UInt32[] x, System.UInt32[] y, System.UInt32[] zz)
    // Offset: 0xFAB0FC
    static uint MulAddTo(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* zz);
    // static public System.Void Square(System.UInt32[] x, System.UInt32[] zz)
    // Offset: 0xFAB21C
    static void Square(::Array<uint>* x, ::Array<uint>* zz);
    // static public System.Int32 Sub(System.UInt32[] x, System.UInt32[] y, System.UInt32[] z)
    // Offset: 0xFAB3E8
    static int Sub(::Array<uint>* x, ::Array<uint>* y, ::Array<uint>* z);
    // static public System.Int32 SubFrom(System.UInt32[] x, System.UInt32[] z)
    // Offset: 0xFAB4E8
    static int SubFrom(::Array<uint>* x, ::Array<uint>* z);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger(System.UInt32[] x)
    // Offset: 0xFAB5B8
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger(::Array<uint>* x);
    // static public Org.BouncyCastle.Math.BigInteger ToBigInteger64(System.UInt64[] x)
    // Offset: 0xFAB69C
    static Org::BouncyCastle::Math::BigInteger* ToBigInteger64(::Array<uint64_t>* x);
  }; // Org.BouncyCastle.Math.Raw.Nat128
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::Raw::Nat128*, "Org.BouncyCastle.Math.Raw", "Nat128");
#pragma pack(pop)