// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Prng.IRandomGenerator
#include "Org/BouncyCastle/Crypto/Prng/IRandomGenerator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Prng
namespace Org::BouncyCastle::Crypto::Prng {
  // Autogenerated type: Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
  class DigestRandomGenerator : public ::Il2CppObject, public Org::BouncyCastle::Crypto::Prng::IRandomGenerator {
    public:
    // private System.Int64 stateCounter
    // Offset: 0x10
    int64_t stateCounter;
    // private System.Int64 seedCounter
    // Offset: 0x18
    int64_t seedCounter;
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Offset: 0x20
    Org::BouncyCastle::Crypto::IDigest* digest;
    // private System.Byte[] state
    // Offset: 0x28
    ::Array<uint8_t>* state;
    // private System.Byte[] seed
    // Offset: 0x30
    ::Array<uint8_t>* seed;
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IDigest digest)
    // Offset: 0xF4EE98
    static DigestRandomGenerator* New_ctor(Org::BouncyCastle::Crypto::IDigest* digest);
    // public System.Void AddSeedMaterial(System.Byte[] inSeed)
    // Offset: 0xF4F03C
    void AddSeedMaterial(::Array<uint8_t>* inSeed);
    // public System.Void AddSeedMaterial(System.Int64 rSeed)
    // Offset: 0xF4F274
    void AddSeedMaterial(int64_t rSeed);
    // public System.Void NextBytes(System.Byte[] bytes, System.Int32 start, System.Int32 len)
    // Offset: 0xF4F434
    void NextBytes(::Array<uint8_t>* bytes, int start, int len);
    // private System.Void CycleSeed()
    // Offset: 0xF4F614
    void CycleSeed();
    // private System.Void GenerateState()
    // Offset: 0xF4F590
    void GenerateState();
    // private System.Void DigestAddCounter(System.Int64 seedVal)
    // Offset: 0xF4F310
    void DigestAddCounter(int64_t seedVal);
    // private System.Void DigestUpdate(System.Byte[] inSeed)
    // Offset: 0xF4F0D8
    void DigestUpdate(::Array<uint8_t>* inSeed);
    // private System.Void DigestDoFinal(System.Byte[] result)
    // Offset: 0xF4F1AC
    void DigestDoFinal(::Array<uint8_t>* result);
    // public System.Void NextBytes(System.Byte[] bytes)
    // Offset: 0xF4F418
    // Implemented from: Org.BouncyCastle.Crypto.Prng.IRandomGenerator
    // Base method: System.Void IRandomGenerator::NextBytes(System.Byte[] bytes)
    void NextBytes(::Array<uint8_t>* bytes);
  }; // Org.BouncyCastle.Crypto.Prng.DigestRandomGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Prng::DigestRandomGenerator*, "Org.BouncyCastle.Crypto.Prng", "DigestRandomGenerator");
#pragma pack(pop)