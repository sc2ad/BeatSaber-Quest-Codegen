#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct Nullable_1;
}
namespace LiteNetLib::Utils {
struct NtpMode;
}
namespace System {
struct DateTime;
}
namespace LiteNetLib::Utils {
struct NtpLeapIndicator;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace LiteNetLib::Utils {
class NtpPacket;
}
// Type: LiteNetLib.Utils::NtpPacket
namespace LiteNetLib::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14518))
// CS Name: LiteNetLib.Utils.NtpPacket
class CORDL_TYPE NtpPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~NtpPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "NtpPacket", modifiers: " const&", def_value: None }]
constexpr NtpPacket(NtpPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NtpPacket", modifiers: "&&", def_value: None }]
constexpr NtpPacket(NtpPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NtpPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NtpPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NtpPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NtpPacket& operator=(NtpPacket&& o) noexcept = default;
  constexpr NtpPacket& operator=(NtpPacket const& o) noexcept = default;
                


// Fields

static System::DateTime __declspec(property(get=__get_Epoch, put=__set_Epoch))  Epoch;

static void __set_Epoch(System::DateTime value) ;

static System::DateTime __get_Epoch() ;

 ::ArrayW<uint8_t> __declspec(property(get=__get__Bytes_k__BackingField, put=__set__Bytes_k__BackingField))  _Bytes_k__BackingField;

constexpr void __set__Bytes_k__BackingField(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__Bytes_k__BackingField() const;

 System::Nullable_1<System::DateTime> __declspec(property(get=__get__DestinationTimestamp_k__BackingField, put=__set__DestinationTimestamp_k__BackingField))  _DestinationTimestamp_k__BackingField;

constexpr void __set__DestinationTimestamp_k__BackingField(System::Nullable_1<System::DateTime> value) ;

constexpr System::Nullable_1<System::DateTime> __get__DestinationTimestamp_k__BackingField() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Bytes, put=set_Bytes))  Bytes;

 LiteNetLib::Utils::NtpLeapIndicator __declspec(property(get=get_LeapIndicator))  LeapIndicator;

 int32_t __declspec(property(get=get_VersionNumber, put=set_VersionNumber))  VersionNumber;

 LiteNetLib::Utils::NtpMode __declspec(property(get=get_Mode, put=set_Mode))  Mode;

 int32_t __declspec(property(get=get_Stratum))  Stratum;

 int32_t __declspec(property(get=get_Poll))  Poll;

 int32_t __declspec(property(get=get_Precision))  Precision;

 System::TimeSpan __declspec(property(get=get_RootDelay))  RootDelay;

 System::TimeSpan __declspec(property(get=get_RootDispersion))  RootDispersion;

 uint32_t __declspec(property(get=get_ReferenceId))  ReferenceId;

 System::Nullable_1<System::DateTime> __declspec(property(get=get_ReferenceTimestamp))  ReferenceTimestamp;

 System::Nullable_1<System::DateTime> __declspec(property(get=get_OriginTimestamp))  OriginTimestamp;

 System::Nullable_1<System::DateTime> __declspec(property(get=get_ReceiveTimestamp))  ReceiveTimestamp;

 System::Nullable_1<System::DateTime> __declspec(property(get=get_TransmitTimestamp, put=set_TransmitTimestamp))  TransmitTimestamp;

 System::Nullable_1<System::DateTime> __declspec(property(get=get_DestinationTimestamp, put=set_DestinationTimestamp))  DestinationTimestamp;

 System::TimeSpan __declspec(property(get=get_RoundTripTime))  RoundTripTime;

 System::TimeSpan __declspec(property(get=get_CorrectionOffset))  CorrectionOffset;


// Methods

/// @brief Method get_Bytes addr 0x2099454 size 0x8 virtual false final false
 ::ArrayW<uint8_t> get_Bytes() ;

/// @brief Method set_Bytes addr 0x209945c size 0x8 virtual false final false
 void set_Bytes(::ArrayW<uint8_t> value) ;

/// @brief Method get_LeapIndicator addr 0x2099464 size 0x2c virtual false final false
 LiteNetLib::Utils::NtpLeapIndicator get_LeapIndicator() ;

/// @brief Method get_VersionNumber addr 0x2099490 size 0x2c virtual false final false
 int32_t get_VersionNumber() ;

/// @brief Method set_VersionNumber addr 0x20994bc size 0x34 virtual false final false
 void set_VersionNumber(int32_t value) ;

/// @brief Method get_Mode addr 0x20994f0 size 0x2c virtual false final false
 LiteNetLib::Utils::NtpMode get_Mode() ;

/// @brief Method set_Mode addr 0x209951c size 0x34 virtual false final false
 void set_Mode(LiteNetLib::Utils::NtpMode value) ;

/// @brief Method get_Stratum addr 0x2099550 size 0x2c virtual false final false
 int32_t get_Stratum() ;

/// @brief Method get_Poll addr 0x209957c size 0x2c virtual false final false
 int32_t get_Poll() ;

/// @brief Method get_Precision addr 0x20995a8 size 0x2c virtual false final false
 int32_t get_Precision() ;

/// @brief Method get_RootDelay addr 0x20995d4 size 0x8 virtual false final false
 System::TimeSpan get_RootDelay() ;

/// @brief Method get_RootDispersion addr 0x2099660 size 0x8 virtual false final false
 System::TimeSpan get_RootDispersion() ;

/// @brief Method get_ReferenceId addr 0x2099668 size 0x8 virtual false final false
 uint32_t get_ReferenceId() ;

/// @brief Method get_ReferenceTimestamp addr 0x2099710 size 0x8 virtual false final false
 System::Nullable_1<System::DateTime> get_ReferenceTimestamp() ;

/// @brief Method get_OriginTimestamp addr 0x2099834 size 0x8 virtual false final false
 System::Nullable_1<System::DateTime> get_OriginTimestamp() ;

/// @brief Method get_ReceiveTimestamp addr 0x209983c size 0x8 virtual false final false
 System::Nullable_1<System::DateTime> get_ReceiveTimestamp() ;

/// @brief Method get_TransmitTimestamp addr 0x2099844 size 0x8 virtual false final false
 System::Nullable_1<System::DateTime> get_TransmitTimestamp() ;

/// @brief Method set_TransmitTimestamp addr 0x209984c size 0x10 virtual false final false
 void set_TransmitTimestamp(System::Nullable_1<System::DateTime> value) ;

/// @brief Method get_DestinationTimestamp addr 0x209999c size 0xc virtual false final false
 System::Nullable_1<System::DateTime> get_DestinationTimestamp() ;

/// @brief Method set_DestinationTimestamp addr 0x20999a8 size 0x8 virtual false final false
 void set_DestinationTimestamp(System::Nullable_1<System::DateTime> value) ;

/// @brief Method get_RoundTripTime addr 0x20999b0 size 0x160 virtual false final false
 System::TimeSpan get_RoundTripTime() ;

/// @brief Method get_CorrectionOffset addr 0x2099c44 size 0x174 virtual false final false
 System::TimeSpan get_CorrectionOffset() ;

// Ctor Parameters []
explicit NtpPacket() ;

/// @brief Method .ctor addr 0x2099db8 size 0xe4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "bytes", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit NtpPacket(::ArrayW<uint8_t> bytes) ;

/// @brief Method .ctor addr 0x2099e9c size 0x9c virtual false final false
 void _ctor(::ArrayW<uint8_t> bytes) ;

/// @brief Method FromServerResponse addr 0x2099f38 size 0xa4 virtual false final false
static LiteNetLib::Utils::NtpPacket FromServerResponse(::ArrayW<uint8_t> bytes, System::DateTime destinationTimestamp) ;

/// @brief Method ValidateRequest addr 0x2099fdc size 0xfc virtual false final false
 void ValidateRequest() ;

/// @brief Method ValidateReply addr 0x209a0d8 size 0x164 virtual false final false
 void ValidateReply() ;

/// @brief Method CheckTimestamps addr 0x2099b10 size 0x134 virtual false final false
 void CheckTimestamps() ;

/// @brief Method GetDateTime64 addr 0x2099718 size 0x11c virtual false final false
 System::Nullable_1<System::DateTime> GetDateTime64(int32_t offset) ;

/// @brief Method SetDateTime64 addr 0x209985c size 0x140 virtual false final false
 void SetDateTime64(int32_t offset, System::Nullable_1<System::DateTime> value) ;

/// @brief Method GetTimeSpan32 addr 0x20995dc size 0x84 virtual false final false
 System::TimeSpan GetTimeSpan32(int32_t offset) ;

/// @brief Method GetUInt64BE addr 0x209a23c size 0xa0 virtual false final false
 uint64_t GetUInt64BE(int32_t offset) ;

/// @brief Method SetUInt64BE addr 0x209a2dc size 0x7c virtual false final false
 void SetUInt64BE(int32_t offset, uint64_t value) ;

/// @brief Method GetInt32BE addr 0x209a358 size 0x4 virtual false final false
 int32_t GetInt32BE(int32_t offset) ;

/// @brief Method GetUInt32BE addr 0x2099670 size 0xa0 virtual false final false
 uint32_t GetUInt32BE(int32_t offset) ;

/// @brief Method SwapEndianness addr 0x209a3bc size 0x8 virtual false final false
static uint32_t SwapEndianness(uint32_t x) ;

/// @brief Method SwapEndianness addr 0x209a35c size 0x60 virtual false final false
static uint64_t SwapEndianness(uint64_t x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib::Utils
NEED_NO_BOX(LiteNetLib::Utils::NtpPacket);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::Utils::NtpPacket, "LiteNetLib.Utils", "NtpPacket");
