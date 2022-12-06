// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetworkStatisticsDelta
  struct NetworkStatisticsDelta;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsDelta, "", "NetworkStatisticsDelta");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetworkStatisticsDelta
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct NetworkStatisticsDelta/*, public ::System::ValueType*/ {
    public:
    public:
    // public readonly System.Int64 packetsSentDelta
    // Size: 0x8
    // Offset: 0x0
    int64_t packetsSentDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceivedDelta
    // Size: 0x8
    // Offset: 0x8
    int64_t packetsReceivedDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 bytesSentDelta
    // Size: 0x8
    // Offset: 0x10
    int64_t bytesSentDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 bytesReceivedDelta
    // Size: 0x8
    // Offset: 0x18
    int64_t bytesReceivedDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsLostDelta
    // Size: 0x8
    // Offset: 0x20
    int64_t packetsLostDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsSentEncryptedDelta
    // Size: 0x8
    // Offset: 0x28
    int64_t packetsSentEncryptedDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsSentPlaintextDelta
    // Size: 0x8
    // Offset: 0x30
    int64_t packetsSentPlaintextDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsSentRejectedDelta
    // Size: 0x8
    // Offset: 0x38
    int64_t packetsSentRejectedDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceivedEncryptedDelta
    // Size: 0x8
    // Offset: 0x40
    int64_t packetsReceivedEncryptedDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceivedPlaintextDelta
    // Size: 0x8
    // Offset: 0x48
    int64_t packetsReceivedPlaintextDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceivedRejectedDelta
    // Size: 0x8
    // Offset: 0x50
    int64_t packetsReceivedRejectedDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 encryptionProcessingTimeDelta
    // Size: 0x8
    // Offset: 0x58
    int64_t encryptionProcessingTimeDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 decryptionProcessingTimeDelta
    // Size: 0x8
    // Offset: 0x60
    int64_t decryptionProcessingTimeDelta;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: NetworkStatisticsDelta
    constexpr NetworkStatisticsDelta(int64_t packetsSentDelta_ = {}, int64_t packetsReceivedDelta_ = {}, int64_t bytesSentDelta_ = {}, int64_t bytesReceivedDelta_ = {}, int64_t packetsLostDelta_ = {}, int64_t packetsSentEncryptedDelta_ = {}, int64_t packetsSentPlaintextDelta_ = {}, int64_t packetsSentRejectedDelta_ = {}, int64_t packetsReceivedEncryptedDelta_ = {}, int64_t packetsReceivedPlaintextDelta_ = {}, int64_t packetsReceivedRejectedDelta_ = {}, int64_t encryptionProcessingTimeDelta_ = {}, int64_t decryptionProcessingTimeDelta_ = {}) noexcept : packetsSentDelta{packetsSentDelta_}, packetsReceivedDelta{packetsReceivedDelta_}, bytesSentDelta{bytesSentDelta_}, bytesReceivedDelta{bytesReceivedDelta_}, packetsLostDelta{packetsLostDelta_}, packetsSentEncryptedDelta{packetsSentEncryptedDelta_}, packetsSentPlaintextDelta{packetsSentPlaintextDelta_}, packetsSentRejectedDelta{packetsSentRejectedDelta_}, packetsReceivedEncryptedDelta{packetsReceivedEncryptedDelta_}, packetsReceivedPlaintextDelta{packetsReceivedPlaintextDelta_}, packetsReceivedRejectedDelta{packetsReceivedRejectedDelta_}, encryptionProcessingTimeDelta{encryptionProcessingTimeDelta_}, decryptionProcessingTimeDelta{decryptionProcessingTimeDelta_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Int64 packetsSentDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSentDelta();
    // Get instance field reference: public readonly System.Int64 packetsReceivedDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceivedDelta();
    // Get instance field reference: public readonly System.Int64 bytesSentDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_bytesSentDelta();
    // Get instance field reference: public readonly System.Int64 bytesReceivedDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_bytesReceivedDelta();
    // Get instance field reference: public readonly System.Int64 packetsLostDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsLostDelta();
    // Get instance field reference: public readonly System.Int64 packetsSentEncryptedDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSentEncryptedDelta();
    // Get instance field reference: public readonly System.Int64 packetsSentPlaintextDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSentPlaintextDelta();
    // Get instance field reference: public readonly System.Int64 packetsSentRejectedDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSentRejectedDelta();
    // Get instance field reference: public readonly System.Int64 packetsReceivedEncryptedDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceivedEncryptedDelta();
    // Get instance field reference: public readonly System.Int64 packetsReceivedPlaintextDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceivedPlaintextDelta();
    // Get instance field reference: public readonly System.Int64 packetsReceivedRejectedDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceivedRejectedDelta();
    // Get instance field reference: public readonly System.Int64 encryptionProcessingTimeDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_encryptionProcessingTimeDelta();
    // Get instance field reference: public readonly System.Int64 decryptionProcessingTimeDelta
    [[deprecated("Use field access instead!")]] int64_t& dyn_decryptionProcessingTimeDelta();
    // public System.Void .ctor(System.Int64 packetsSentDelta, System.Int64 packetsReceivedDelta, System.Int64 bytesSentDelta, System.Int64 bytesReceivedDelta, System.Int64 packetsLostDelta, System.Int64 packetsSentEncryptedDelta, System.Int64 packetsSentPlaintextDelta, System.Int64 packetsSentRejectedDelta, System.Int64 packetsReceivedEncryptedDelta, System.Int64 packetsReceivedPlaintextDelta, System.Int64 packetsReceivedRejectedDelta, System.Int64 encryptionProcessingTimeDelta, System.Int64 decryptionProcessingTimeDelta)
    // Offset: 0x173E9D8
    // ABORTED: conflicts with another method.  NetworkStatisticsDelta(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta, int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta);
  }; // NetworkStatisticsDelta
  #pragma pack(pop)
  static check_size<sizeof(NetworkStatisticsDelta), 96 + sizeof(int64_t)> __GlobalNamespace_NetworkStatisticsDeltaSizeCheck;
  static_assert(sizeof(NetworkStatisticsDelta) == 0x68);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkStatisticsDelta::NetworkStatisticsDelta
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
