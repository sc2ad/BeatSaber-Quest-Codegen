// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NtpLeapIndicator
  struct NtpLeapIndicator;
  // Forward declaring type: NtpMode
  struct NtpMode;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TimeSpan
  struct TimeSpan;
}
// Completed forward declares
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NtpPacket
  class NtpPacket;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::LiteNetLib::Utils::NtpPacket);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::Utils::NtpPacket*, "LiteNetLib.Utils", "NtpPacket");
// Type namespace: LiteNetLib.Utils
namespace LiteNetLib::Utils {
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NtpPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NtpPacket : public ::Il2CppObject {
    public:
    public:
    // private System.Byte[] <Bytes>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Bytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Nullable`1<System.DateTime> <DestinationTimestamp>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    ::System::Nullable_1<::System::DateTime> DestinationTimestamp;
    public:
    // Get static field: static private readonly System.DateTime Epoch
    static ::System::DateTime _get_Epoch();
    // Set static field: static private readonly System.DateTime Epoch
    static void _set_Epoch(::System::DateTime value);
    // Get instance field reference: private System.Byte[] <Bytes>k__BackingField
    [[deprecated("Use field access instead!")]] ::ArrayW<uint8_t>& dyn_$Bytes$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.DateTime> <DestinationTimestamp>k__BackingField
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::System::DateTime>& dyn_$DestinationTimestamp$k__BackingField();
    // public System.Byte[] get_Bytes()
    // Offset: 0x2B67E0C
    ::ArrayW<uint8_t> get_Bytes();
    // private System.Void set_Bytes(System.Byte[] value)
    // Offset: 0x2B67E14
    void set_Bytes(::ArrayW<uint8_t> value);
    // public LiteNetLib.Utils.NtpLeapIndicator get_LeapIndicator()
    // Offset: 0x2B67E1C
    ::LiteNetLib::Utils::NtpLeapIndicator get_LeapIndicator();
    // public System.Int32 get_VersionNumber()
    // Offset: 0x2B67E54
    int get_VersionNumber();
    // private System.Void set_VersionNumber(System.Int32 value)
    // Offset: 0x2B67E8C
    void set_VersionNumber(int value);
    // public LiteNetLib.Utils.NtpMode get_Mode()
    // Offset: 0x2B67ECC
    ::LiteNetLib::Utils::NtpMode get_Mode();
    // private System.Void set_Mode(LiteNetLib.Utils.NtpMode value)
    // Offset: 0x2B67F04
    void set_Mode(::LiteNetLib::Utils::NtpMode value);
    // public System.Int32 get_Stratum()
    // Offset: 0x2B67F44
    int get_Stratum();
    // public System.Int32 get_Poll()
    // Offset: 0x2B67F7C
    int get_Poll();
    // public System.Int32 get_Precision()
    // Offset: 0x2B67FB4
    int get_Precision();
    // public System.TimeSpan get_RootDelay()
    // Offset: 0x2B67FEC
    ::System::TimeSpan get_RootDelay();
    // public System.TimeSpan get_RootDispersion()
    // Offset: 0x2B68088
    ::System::TimeSpan get_RootDispersion();
    // public System.UInt32 get_ReferenceId()
    // Offset: 0x2B68090
    uint get_ReferenceId();
    // public System.Nullable`1<System.DateTime> get_ReferenceTimestamp()
    // Offset: 0x2B68144
    ::System::Nullable_1<::System::DateTime> get_ReferenceTimestamp();
    // public System.Nullable`1<System.DateTime> get_OriginTimestamp()
    // Offset: 0x2B68270
    ::System::Nullable_1<::System::DateTime> get_OriginTimestamp();
    // public System.Nullable`1<System.DateTime> get_ReceiveTimestamp()
    // Offset: 0x2B68278
    ::System::Nullable_1<::System::DateTime> get_ReceiveTimestamp();
    // public System.Nullable`1<System.DateTime> get_TransmitTimestamp()
    // Offset: 0x2B68280
    ::System::Nullable_1<::System::DateTime> get_TransmitTimestamp();
    // private System.Void set_TransmitTimestamp(System.Nullable`1<System.DateTime> value)
    // Offset: 0x2B68288
    void set_TransmitTimestamp(::System::Nullable_1<::System::DateTime> value);
    // public System.Nullable`1<System.DateTime> get_DestinationTimestamp()
    // Offset: 0x2B683CC
    ::System::Nullable_1<::System::DateTime> get_DestinationTimestamp();
    // private System.Void set_DestinationTimestamp(System.Nullable`1<System.DateTime> value)
    // Offset: 0x2B683D8
    void set_DestinationTimestamp(::System::Nullable_1<::System::DateTime> value);
    // public System.TimeSpan get_RoundTripTime()
    // Offset: 0x2B683E0
    ::System::TimeSpan get_RoundTripTime();
    // public System.TimeSpan get_CorrectionOffset()
    // Offset: 0x2B68654
    ::System::TimeSpan get_CorrectionOffset();
    // public System.Void .ctor()
    // Offset: 0x2B687C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtpPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NtpPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtpPacket*, creationType>()));
    }
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x2B6889C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtpPacket* New_ctor(::ArrayW<uint8_t> bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("::LiteNetLib::Utils::NtpPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtpPacket*, creationType>(bytes)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2B68E00
    static void _cctor();
    // static public LiteNetLib.Utils.NtpPacket FromServerResponse(System.Byte[] bytes, System.DateTime destinationTimestamp)
    // Offset: 0x2B68954
    static ::LiteNetLib::Utils::NtpPacket* FromServerResponse(::ArrayW<uint8_t> bytes, ::System::DateTime destinationTimestamp);
    // System.Void ValidateRequest()
    // Offset: 0x2B689F4
    void ValidateRequest();
    // System.Void ValidateReply()
    // Offset: 0x2B68AD8
    void ValidateReply();
    // private System.Void CheckTimestamps()
    // Offset: 0x2B68540
    void CheckTimestamps();
    // private System.Nullable`1<System.DateTime> GetDateTime64(System.Int32 offset)
    // Offset: 0x2B6814C
    ::System::Nullable_1<::System::DateTime> GetDateTime64(int offset);
    // private System.Void SetDateTime64(System.Int32 offset, System.Nullable`1<System.DateTime> value)
    // Offset: 0x2B68298
    void SetDateTime64(int offset, ::System::Nullable_1<::System::DateTime> value);
    // private System.TimeSpan GetTimeSpan32(System.Int32 offset)
    // Offset: 0x2B67FF4
    ::System::TimeSpan GetTimeSpan32(int offset);
    // private System.UInt64 GetUInt64BE(System.Int32 offset)
    // Offset: 0x2B68C4C
    uint64_t GetUInt64BE(int offset);
    // private System.Void SetUInt64BE(System.Int32 offset, System.UInt64 value)
    // Offset: 0x2B68CF8
    void SetUInt64BE(int offset, uint64_t value);
    // private System.Int32 GetInt32BE(System.Int32 offset)
    // Offset: 0x2B68D84
    int GetInt32BE(int offset);
    // private System.UInt32 GetUInt32BE(System.Int32 offset)
    // Offset: 0x2B68098
    uint GetUInt32BE(int offset);
    // static private System.UInt32 SwapEndianness(System.UInt32 x)
    // Offset: 0x2B68DF8
    static uint SwapEndianness(uint x);
    // static private System.UInt64 SwapEndianness(System.UInt64 x)
    // Offset: 0x2B68D88
    static uint64_t SwapEndianness(uint64_t x);
  }; // LiteNetLib.Utils.NtpPacket
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_Bytes
// Il2CppName: get_Bytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_Bytes)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_Bytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_Bytes
// Il2CppName: set_Bytes
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(::ArrayW<uint8_t>)>(&LiteNetLib::Utils::NtpPacket::set_Bytes)> {
  static const MethodInfo* get() {
    static auto* value = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "set_Bytes", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_LeapIndicator
// Il2CppName: get_LeapIndicator
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpLeapIndicator (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_LeapIndicator)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_LeapIndicator", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_VersionNumber
// Il2CppName: get_VersionNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_VersionNumber)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_VersionNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_VersionNumber
// Il2CppName: set_VersionNumber
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::set_VersionNumber)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "set_VersionNumber", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_Mode
// Il2CppName: get_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpMode (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_Mode
// Il2CppName: set_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(::LiteNetLib::Utils::NtpMode)>(&LiteNetLib::Utils::NtpPacket::set_Mode)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("LiteNetLib.Utils", "NtpMode")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "set_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_Stratum
// Il2CppName: get_Stratum
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_Stratum)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_Stratum", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_Poll
// Il2CppName: get_Poll
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_Poll)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_Poll", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_Precision
// Il2CppName: get_Precision
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_Precision)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_Precision", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_RootDelay
// Il2CppName: get_RootDelay
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_RootDelay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_RootDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_RootDispersion
// Il2CppName: get_RootDispersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_RootDispersion)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_RootDispersion", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_ReferenceId
// Il2CppName: get_ReferenceId
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_ReferenceId)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_ReferenceId", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_ReferenceTimestamp
// Il2CppName: get_ReferenceTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_ReferenceTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_ReferenceTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_OriginTimestamp
// Il2CppName: get_OriginTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_OriginTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_OriginTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp
// Il2CppName: get_ReceiveTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_ReceiveTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp
// Il2CppName: get_TransmitTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_TransmitTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp
// Il2CppName: set_TransmitTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(::System::Nullable_1<::System::DateTime>)>(&LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "set_TransmitTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp
// Il2CppName: get_DestinationTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_DestinationTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp
// Il2CppName: set_DestinationTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(::System::Nullable_1<::System::DateTime>)>(&LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "set_DestinationTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_RoundTripTime
// Il2CppName: get_RoundTripTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_RoundTripTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_RoundTripTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_CorrectionOffset
// Il2CppName: get_CorrectionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_CorrectionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_CorrectionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&LiteNetLib::Utils::NtpPacket::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::FromServerResponse
// Il2CppName: FromServerResponse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::Utils::NtpPacket* (*)(::ArrayW<uint8_t>, ::System::DateTime)>(&LiteNetLib::Utils::NtpPacket::FromServerResponse)> {
  static const MethodInfo* get() {
    static auto* bytes = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Byte"), 1)->byval_arg;
    static auto* destinationTimestamp = &::il2cpp_utils::GetClassFromName("System", "DateTime")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "FromServerResponse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{bytes, destinationTimestamp});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::ValidateRequest
// Il2CppName: ValidateRequest
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::ValidateRequest)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "ValidateRequest", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::ValidateReply
// Il2CppName: ValidateReply
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::ValidateReply)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "ValidateReply", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::CheckTimestamps
// Il2CppName: CheckTimestamps
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::CheckTimestamps)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "CheckTimestamps", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::GetDateTime64
// Il2CppName: GetDateTime64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::GetDateTime64)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "GetDateTime64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::SetDateTime64
// Il2CppName: SetDateTime64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(int, ::System::Nullable_1<::System::DateTime>)>(&LiteNetLib::Utils::NtpPacket::SetDateTime64)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "SetDateTime64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::GetTimeSpan32
// Il2CppName: GetTimeSpan32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::GetTimeSpan32)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "GetTimeSpan32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::GetUInt64BE
// Il2CppName: GetUInt64BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::GetUInt64BE)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "GetUInt64BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::SetUInt64BE
// Il2CppName: SetUInt64BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(int, uint64_t)>(&LiteNetLib::Utils::NtpPacket::SetUInt64BE)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "SetUInt64BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::GetInt32BE
// Il2CppName: GetInt32BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::GetInt32BE)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "GetInt32BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::GetUInt32BE
// Il2CppName: GetUInt32BE
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::GetUInt32BE)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "GetUInt32BE", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::SwapEndianness
// Il2CppName: SwapEndianness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (*)(uint)>(&LiteNetLib::Utils::NtpPacket::SwapEndianness)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "SwapEndianness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::SwapEndianness
// Il2CppName: SwapEndianness
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(uint64_t)>(&LiteNetLib::Utils::NtpPacket::SwapEndianness)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "UInt64")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "SwapEndianness", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
