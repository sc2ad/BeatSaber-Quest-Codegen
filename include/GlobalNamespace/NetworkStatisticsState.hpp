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
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NetworkStatisticsDelta
  struct NetworkStatisticsDelta;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: NetworkStatisticsState
  struct NetworkStatisticsState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsState, "", "NetworkStatisticsState");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: NetworkStatisticsState
  // [TokenAttribute] Offset: FFFFFFFF
  // [IsReadOnlyAttribute] Offset: FFFFFFFF
  struct NetworkStatisticsState/*, public ::System::ValueType*/ {
    public:
    // Nested type: ::GlobalNamespace::NetworkStatisticsState::NetworkStatisticsUpdateDelegate
    class NetworkStatisticsUpdateDelegate;
    public:
    // public readonly System.Int64 packetsSent
    // Size: 0x8
    // Offset: 0x0
    int64_t packetsSent;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceived
    // Size: 0x8
    // Offset: 0x8
    int64_t packetsReceived;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 bytesSent
    // Size: 0x8
    // Offset: 0x10
    int64_t bytesSent;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 bytesReceived
    // Size: 0x8
    // Offset: 0x18
    int64_t bytesReceived;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsLost
    // Size: 0x8
    // Offset: 0x20
    int64_t packetsLost;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsSentEncrypted
    // Size: 0x8
    // Offset: 0x28
    int64_t packetsSentEncrypted;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsSentPlaintext
    // Size: 0x8
    // Offset: 0x30
    int64_t packetsSentPlaintext;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsSentRejected
    // Size: 0x8
    // Offset: 0x38
    int64_t packetsSentRejected;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceivedEncrypted
    // Size: 0x8
    // Offset: 0x40
    int64_t packetsReceivedEncrypted;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceivedPlaintext
    // Size: 0x8
    // Offset: 0x48
    int64_t packetsReceivedPlaintext;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 packetsReceivedRejected
    // Size: 0x8
    // Offset: 0x50
    int64_t packetsReceivedRejected;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 encryptionProcessingTime
    // Size: 0x8
    // Offset: 0x58
    int64_t encryptionProcessingTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // public readonly System.Int64 decryptionProcessingTime
    // Size: 0x8
    // Offset: 0x60
    int64_t decryptionProcessingTime;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    public:
    // Creating value type constructor for type: NetworkStatisticsState
    constexpr NetworkStatisticsState(int64_t packetsSent_ = {}, int64_t packetsReceived_ = {}, int64_t bytesSent_ = {}, int64_t bytesReceived_ = {}, int64_t packetsLost_ = {}, int64_t packetsSentEncrypted_ = {}, int64_t packetsSentPlaintext_ = {}, int64_t packetsSentRejected_ = {}, int64_t packetsReceivedEncrypted_ = {}, int64_t packetsReceivedPlaintext_ = {}, int64_t packetsReceivedRejected_ = {}, int64_t encryptionProcessingTime_ = {}, int64_t decryptionProcessingTime_ = {}) noexcept : packetsSent{packetsSent_}, packetsReceived{packetsReceived_}, bytesSent{bytesSent_}, bytesReceived{bytesReceived_}, packetsLost{packetsLost_}, packetsSentEncrypted{packetsSentEncrypted_}, packetsSentPlaintext{packetsSentPlaintext_}, packetsSentRejected{packetsSentRejected_}, packetsReceivedEncrypted{packetsReceivedEncrypted_}, packetsReceivedPlaintext{packetsReceivedPlaintext_}, packetsReceivedRejected{packetsReceivedRejected_}, encryptionProcessingTime{encryptionProcessingTime_}, decryptionProcessingTime{decryptionProcessingTime_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: public readonly System.Int64 packetsSent
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSent();
    // Get instance field reference: public readonly System.Int64 packetsReceived
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceived();
    // Get instance field reference: public readonly System.Int64 bytesSent
    [[deprecated("Use field access instead!")]] int64_t& dyn_bytesSent();
    // Get instance field reference: public readonly System.Int64 bytesReceived
    [[deprecated("Use field access instead!")]] int64_t& dyn_bytesReceived();
    // Get instance field reference: public readonly System.Int64 packetsLost
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsLost();
    // Get instance field reference: public readonly System.Int64 packetsSentEncrypted
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSentEncrypted();
    // Get instance field reference: public readonly System.Int64 packetsSentPlaintext
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSentPlaintext();
    // Get instance field reference: public readonly System.Int64 packetsSentRejected
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsSentRejected();
    // Get instance field reference: public readonly System.Int64 packetsReceivedEncrypted
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceivedEncrypted();
    // Get instance field reference: public readonly System.Int64 packetsReceivedPlaintext
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceivedPlaintext();
    // Get instance field reference: public readonly System.Int64 packetsReceivedRejected
    [[deprecated("Use field access instead!")]] int64_t& dyn_packetsReceivedRejected();
    // Get instance field reference: public readonly System.Int64 encryptionProcessingTime
    [[deprecated("Use field access instead!")]] int64_t& dyn_encryptionProcessingTime();
    // Get instance field reference: public readonly System.Int64 decryptionProcessingTime
    [[deprecated("Use field access instead!")]] int64_t& dyn_decryptionProcessingTime();
    // public System.Void .ctor(System.Int64 packetsSent, System.Int64 packetsReceived, System.Int64 bytesSent, System.Int64 bytesReceived, System.Int64 packetsLost, System.Int64 packetsSentEncrypted, System.Int64 packetsSentPlaintext, System.Int64 packetsSentRejected, System.Int64 packetsReceivedEncrypted, System.Int64 packetsReceivedPlaintext, System.Int64 packetsReceivedRejected, System.Int64 encryptionProcessingTime, System.Int64 decryptionProcessingTime)
    // Offset: 0x171552C
    // ABORTED: conflicts with another method.  NetworkStatisticsState(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime);
  }; // NetworkStatisticsState
  #pragma pack(pop)
  static check_size<sizeof(NetworkStatisticsState), 96 + sizeof(int64_t)> __GlobalNamespace_NetworkStatisticsStateSizeCheck;
  static_assert(sizeof(NetworkStatisticsState) == 0x68);
  // static public NetworkStatisticsDelta op_Subtraction(in NetworkStatisticsState a, in NetworkStatisticsState b)
  // Offset: 0x1715554
  ::GlobalNamespace::NetworkStatisticsDelta operator-(const ::GlobalNamespace::NetworkStatisticsState&& a, const ::GlobalNamespace::NetworkStatisticsState&& b);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::NetworkStatisticsState::NetworkStatisticsState
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::NetworkStatisticsState::operator-
// Il2CppName: op_Subtraction
// Cannot perform method pointer template specialization from operators!
