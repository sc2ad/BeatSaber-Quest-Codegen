// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: LiteNetLib.Utils.NtpPacket
  // [TokenAttribute] Offset: FFFFFFFF
  class NtpPacket : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Byte[] <Bytes>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    ::ArrayW<uint8_t> Bytes;
    // Field size check
    static_assert(sizeof(::ArrayW<uint8_t>) == 0x8);
    // private System.Nullable`1<System.DateTime> <DestinationTimestamp>k__BackingField
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    System::Nullable_1<System::DateTime> DestinationTimestamp;
    public:
    // Get static field: static private readonly System.DateTime Epoch
    static System::DateTime _get_Epoch();
    // Set static field: static private readonly System.DateTime Epoch
    static void _set_Epoch(System::DateTime value);
    // Get instance field reference: private System.Byte[] <Bytes>k__BackingField
    ::ArrayW<uint8_t>& dyn_$Bytes$k__BackingField();
    // Get instance field reference: private System.Nullable`1<System.DateTime> <DestinationTimestamp>k__BackingField
    System::Nullable_1<System::DateTime>& dyn_$DestinationTimestamp$k__BackingField();
    // public System.Byte[] get_Bytes()
    // Offset: 0x26189A4
    ::ArrayW<uint8_t> get_Bytes();
    // private System.Void set_Bytes(System.Byte[] value)
    // Offset: 0x26189AC
    void set_Bytes(::ArrayW<uint8_t> value);
    // public LiteNetLib.Utils.NtpLeapIndicator get_LeapIndicator()
    // Offset: 0x26189B4
    LiteNetLib::Utils::NtpLeapIndicator get_LeapIndicator();
    // public System.Int32 get_VersionNumber()
    // Offset: 0x26189EC
    int get_VersionNumber();
    // private System.Void set_VersionNumber(System.Int32 value)
    // Offset: 0x2618A24
    void set_VersionNumber(int value);
    // public LiteNetLib.Utils.NtpMode get_Mode()
    // Offset: 0x2618A64
    LiteNetLib::Utils::NtpMode get_Mode();
    // private System.Void set_Mode(LiteNetLib.Utils.NtpMode value)
    // Offset: 0x2618A9C
    void set_Mode(LiteNetLib::Utils::NtpMode value);
    // public System.Int32 get_Stratum()
    // Offset: 0x2618ADC
    int get_Stratum();
    // public System.Int32 get_Poll()
    // Offset: 0x2618B14
    int get_Poll();
    // public System.Int32 get_Precision()
    // Offset: 0x2618B4C
    int get_Precision();
    // public System.TimeSpan get_RootDelay()
    // Offset: 0x2618B84
    System::TimeSpan get_RootDelay();
    // public System.TimeSpan get_RootDispersion()
    // Offset: 0x2618C20
    System::TimeSpan get_RootDispersion();
    // public System.UInt32 get_ReferenceId()
    // Offset: 0x2618C28
    uint get_ReferenceId();
    // public System.Nullable`1<System.DateTime> get_ReferenceTimestamp()
    // Offset: 0x2618CDC
    System::Nullable_1<System::DateTime> get_ReferenceTimestamp();
    // public System.Nullable`1<System.DateTime> get_OriginTimestamp()
    // Offset: 0x2618E08
    System::Nullable_1<System::DateTime> get_OriginTimestamp();
    // public System.Nullable`1<System.DateTime> get_ReceiveTimestamp()
    // Offset: 0x2618E10
    System::Nullable_1<System::DateTime> get_ReceiveTimestamp();
    // public System.Nullable`1<System.DateTime> get_TransmitTimestamp()
    // Offset: 0x2618E18
    System::Nullable_1<System::DateTime> get_TransmitTimestamp();
    // private System.Void set_TransmitTimestamp(System.Nullable`1<System.DateTime> value)
    // Offset: 0x2618E20
    void set_TransmitTimestamp(System::Nullable_1<System::DateTime> value);
    // public System.Nullable`1<System.DateTime> get_DestinationTimestamp()
    // Offset: 0x2618F64
    System::Nullable_1<System::DateTime> get_DestinationTimestamp();
    // private System.Void set_DestinationTimestamp(System.Nullable`1<System.DateTime> value)
    // Offset: 0x2618F70
    void set_DestinationTimestamp(System::Nullable_1<System::DateTime> value);
    // public System.TimeSpan get_RoundTripTime()
    // Offset: 0x2618F78
    System::TimeSpan get_RoundTripTime();
    // public System.TimeSpan get_CorrectionOffset()
    // Offset: 0x26191EC
    System::TimeSpan get_CorrectionOffset();
    // System.Void .ctor(System.Byte[] bytes)
    // Offset: 0x2619434
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtpPacket* New_ctor(::ArrayW<uint8_t> bytes) {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NtpPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtpPacket*, creationType>(bytes)));
    }
    // static private System.Void .cctor()
    // Offset: 0x2619998
    static void _cctor();
    // static public LiteNetLib.Utils.NtpPacket FromServerResponse(System.Byte[] bytes, System.DateTime destinationTimestamp)
    // Offset: 0x26194EC
    static LiteNetLib::Utils::NtpPacket* FromServerResponse(::ArrayW<uint8_t> bytes, System::DateTime destinationTimestamp);
    // System.Void ValidateRequest()
    // Offset: 0x261958C
    void ValidateRequest();
    // System.Void ValidateReply()
    // Offset: 0x2619670
    void ValidateReply();
    // private System.Void CheckTimestamps()
    // Offset: 0x26190D8
    void CheckTimestamps();
    // private System.Nullable`1<System.DateTime> GetDateTime64(System.Int32 offset)
    // Offset: 0x2618CE4
    System::Nullable_1<System::DateTime> GetDateTime64(int offset);
    // private System.Void SetDateTime64(System.Int32 offset, System.Nullable`1<System.DateTime> value)
    // Offset: 0x2618E30
    void SetDateTime64(int offset, System::Nullable_1<System::DateTime> value);
    // private System.TimeSpan GetTimeSpan32(System.Int32 offset)
    // Offset: 0x2618B8C
    System::TimeSpan GetTimeSpan32(int offset);
    // private System.UInt64 GetUInt64BE(System.Int32 offset)
    // Offset: 0x26197E4
    uint64_t GetUInt64BE(int offset);
    // private System.Void SetUInt64BE(System.Int32 offset, System.UInt64 value)
    // Offset: 0x2619890
    void SetUInt64BE(int offset, uint64_t value);
    // private System.Int32 GetInt32BE(System.Int32 offset)
    // Offset: 0x261991C
    int GetInt32BE(int offset);
    // private System.UInt32 GetUInt32BE(System.Int32 offset)
    // Offset: 0x2618C30
    uint GetUInt32BE(int offset);
    // static private System.UInt32 SwapEndianness(System.UInt32 x)
    // Offset: 0x2619990
    static uint SwapEndianness(uint x);
    // static private System.UInt64 SwapEndianness(System.UInt64 x)
    // Offset: 0x2619920
    static uint64_t SwapEndianness(uint64_t x);
    // public System.Void .ctor()
    // Offset: 0x2619360
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NtpPacket* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("LiteNetLib::Utils::NtpPacket::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NtpPacket*, creationType>()));
    }
  }; // LiteNetLib.Utils.NtpPacket
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpPacket*, "LiteNetLib.Utils", "NtpPacket");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NtpLeapIndicator (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_LeapIndicator)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NtpMode (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_Mode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_Mode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_Mode
// Il2CppName: set_Mode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(LiteNetLib::Utils::NtpMode)>(&LiteNetLib::Utils::NtpPacket::set_Mode)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_RootDelay)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_RootDelay", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_RootDispersion
// Il2CppName: get_RootDispersion
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_RootDispersion)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_ReferenceTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_ReferenceTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_OriginTimestamp
// Il2CppName: get_OriginTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_OriginTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_OriginTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp
// Il2CppName: get_ReceiveTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_ReceiveTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_ReceiveTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp
// Il2CppName: get_TransmitTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_TransmitTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_TransmitTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp
// Il2CppName: set_TransmitTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(System::Nullable_1<System::DateTime>)>(&LiteNetLib::Utils::NtpPacket::set_TransmitTimestamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "set_TransmitTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp
// Il2CppName: get_DestinationTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_DestinationTimestamp)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_DestinationTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp
// Il2CppName: set_DestinationTimestamp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(System::Nullable_1<System::DateTime>)>(&LiteNetLib::Utils::NtpPacket::set_DestinationTimestamp)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "set_DestinationTimestamp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_RoundTripTime
// Il2CppName: get_RoundTripTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_RoundTripTime)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_RoundTripTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::get_CorrectionOffset
// Il2CppName: get_CorrectionOffset
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)()>(&LiteNetLib::Utils::NtpPacket::get_CorrectionOffset)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "get_CorrectionOffset", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<LiteNetLib::Utils::NtpPacket* (*)(::ArrayW<uint8_t>, System::DateTime)>(&LiteNetLib::Utils::NtpPacket::FromServerResponse)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::Nullable_1<System::DateTime> (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::GetDateTime64)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "GetDateTime64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::SetDateTime64
// Il2CppName: SetDateTime64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (LiteNetLib::Utils::NtpPacket::*)(int, System::Nullable_1<System::DateTime>)>(&LiteNetLib::Utils::NtpPacket::SetDateTime64)> {
  static const MethodInfo* get() {
    static auto* offset = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("System", "DateTime")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(LiteNetLib::Utils::NtpPacket*), "SetDateTime64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{offset, value});
  }
};
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::GetTimeSpan32
// Il2CppName: GetTimeSpan32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<System::TimeSpan (LiteNetLib::Utils::NtpPacket::*)(int)>(&LiteNetLib::Utils::NtpPacket::GetTimeSpan32)> {
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
// Writing MetadataGetter for method: LiteNetLib::Utils::NtpPacket::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
