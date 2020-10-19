// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes.Gcm
namespace Org::BouncyCastle::Crypto::Modes::Gcm {
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
  class IGcmMultiplier {
    public:
    // public System.Void Init(System.Byte[] H)
    // Offset: 0xFFFFFFFF
    void Init(::Array<uint8_t>* H);
    // public System.Void MultiplyH(System.Byte[] x)
    // Offset: 0xFFFFFFFF
    void MultiplyH(::Array<uint8_t>* x);
  }; // Org.BouncyCastle.Crypto.Modes.Gcm.IGcmMultiplier
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::Gcm::IGcmMultiplier*, "Org.BouncyCastle.Crypto.Modes.Gcm", "IGcmMultiplier");
#pragma pack(pop)