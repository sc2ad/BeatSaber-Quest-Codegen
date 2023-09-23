#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
// Forward declare root types
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class System__Net__IPAddress__ReadOnlyIPAddress;
}
// Type: System.Net::IPAddress
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7881))
// CS Name: System.Net.IPAddress
class CORDL_TYPE IPAddress : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ReadOnlyIPAddress = System::Net::System__Net__IPAddress__ReadOnlyIPAddress;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~IPAddress() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: " const&", def_value: None }]
constexpr IPAddress(IPAddress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddress", modifiers: "&&", def_value: None }]
constexpr IPAddress(IPAddress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPAddress(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPAddress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPAddress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPAddress& operator=(IPAddress&& o) noexcept = default;
  constexpr IPAddress& operator=(IPAddress const& o) noexcept = default;
                


// Fields

static System::Net::IPAddress __declspec(property(get=__get_Any, put=__set_Any))  Any;

static void __set_Any(System::Net::IPAddress value) ;

static System::Net::IPAddress __get_Any() ;

static System::Net::IPAddress __declspec(property(get=__get_Loopback, put=__set_Loopback))  Loopback;

static void __set_Loopback(System::Net::IPAddress value) ;

static System::Net::IPAddress __get_Loopback() ;

static System::Net::IPAddress __declspec(property(get=__get_Broadcast, put=__set_Broadcast))  Broadcast;

static void __set_Broadcast(System::Net::IPAddress value) ;

static System::Net::IPAddress __get_Broadcast() ;

static System::Net::IPAddress __declspec(property(get=__get_None, put=__set_None))  None;

static void __set_None(System::Net::IPAddress value) ;

static System::Net::IPAddress __get_None() ;

/// @brief Field LoopbackMask offset 0
static constexpr int64_t  LoopbackMask{255};

static System::Net::IPAddress __declspec(property(get=__get_IPv6Any, put=__set_IPv6Any))  IPv6Any;

static void __set_IPv6Any(System::Net::IPAddress value) ;

static System::Net::IPAddress __get_IPv6Any() ;

static System::Net::IPAddress __declspec(property(get=__get_IPv6Loopback, put=__set_IPv6Loopback))  IPv6Loopback;

static void __set_IPv6Loopback(System::Net::IPAddress value) ;

static System::Net::IPAddress __get_IPv6Loopback() ;

static System::Net::IPAddress __declspec(property(get=__get_IPv6None, put=__set_IPv6None))  IPv6None;

static void __set_IPv6None(System::Net::IPAddress value) ;

static System::Net::IPAddress __get_IPv6None() ;

 uint32_t __declspec(property(get=__get__addressOrScopeId, put=__set__addressOrScopeId))  _addressOrScopeId;

constexpr void __set__addressOrScopeId(uint32_t value) ;

constexpr uint32_t __get__addressOrScopeId() const;

 ::ArrayW<uint16_t> __declspec(property(get=__get__numbers, put=__set__numbers))  _numbers;

constexpr void __set__numbers(::ArrayW<uint16_t> value) ;

constexpr ::ArrayW<uint16_t> __get__numbers() const;

 ::StringW __declspec(property(get=__get__toString, put=__set__toString))  _toString;

constexpr void __set__toString(::StringW value) ;

constexpr ::StringW __get__toString() const;

 int32_t __declspec(property(get=__get__hashCode, put=__set__hashCode))  _hashCode;

constexpr void __set__hashCode(int32_t value) ;

constexpr int32_t __get__hashCode() const;

/// @brief Field NumberOfLabels offset 0
static constexpr int32_t  NumberOfLabels{8};


// Properties

 bool __declspec(property(get=get_IsIPv4))  IsIPv4;

 bool __declspec(property(get=get_IsIPv6))  IsIPv6;

 uint32_t __declspec(property(get=get_PrivateAddress, put=set_PrivateAddress))  PrivateAddress;

 uint32_t __declspec(property(get=get_PrivateScopeId, put=set_PrivateScopeId))  PrivateScopeId;

 System::Net::Sockets::AddressFamily __declspec(property(get=get_AddressFamily))  AddressFamily;

 int64_t __declspec(property(get=get_ScopeId))  ScopeId;

 bool __declspec(property(get=get_IsIPv6Multicast))  IsIPv6Multicast;


// Methods

/// @brief Method get_IsIPv4 addr 0x27f90c0 size 0x10 virtual false final false
 bool get_IsIPv4() ;

/// @brief Method get_IsIPv6 addr 0x27f90d0 size 0x10 virtual false final false
 bool get_IsIPv6() ;

/// @brief Method get_PrivateAddress addr 0x27f90e0 size 0x8 virtual false final false
 uint32_t get_PrivateAddress() ;

/// @brief Method set_PrivateAddress addr 0x27f90e8 size 0x10 virtual false final false
 void set_PrivateAddress(uint32_t value) ;

/// @brief Method get_PrivateScopeId addr 0x27f90f8 size 0x8 virtual false final false
 uint32_t get_PrivateScopeId() ;

/// @brief Method set_PrivateScopeId addr 0x27f9100 size 0x10 virtual false final false
 void set_PrivateScopeId(uint32_t value) ;

// Ctor Parameters [CppParam { name: "newAddress", ty: "int64_t", modifiers: "", def_value: None }]
explicit IPAddress(int64_t newAddress) ;

/// @brief Method .ctor addr 0x27f9110 size 0x84 virtual false final false
 void _ctor(int64_t newAddress) ;

// Ctor Parameters [CppParam { name: "address", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "int64_t", modifiers: "", def_value: None }]
explicit IPAddress(::ArrayW<uint8_t> address, int64_t scopeid) ;

/// @brief Method .ctor addr 0x27f9194 size 0x7c virtual false final false
 void _ctor(::ArrayW<uint8_t> address, int64_t scopeid) ;

// Ctor Parameters [CppParam { name: "address", ty: "System::ReadOnlySpan_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "int64_t", modifiers: "", def_value: None }]
explicit IPAddress(System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid) ;

/// @brief Method .ctor addr 0x27f9260 size 0x184 virtual false final false
 void _ctor(System::ReadOnlySpan_1<uint8_t> address, int64_t scopeid) ;

// Ctor Parameters [CppParam { name: "numbers", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "numbersLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "uint32_t", modifiers: "", def_value: None }]
explicit IPAddress(void* numbers, int32_t numbersLength, uint32_t scopeid) ;

/// @brief Method .ctor addr 0x27f93e4 size 0xb8 virtual false final false
 void _ctor(void* numbers, int32_t numbersLength, uint32_t scopeid) ;

// Ctor Parameters [CppParam { name: "numbers", ty: "::ArrayW<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "scopeid", ty: "uint32_t", modifiers: "", def_value: None }]
explicit IPAddress(::ArrayW<uint16_t> numbers, uint32_t scopeid) ;

/// @brief Method .ctor addr 0x27f949c size 0x34 virtual false final false
 void _ctor(::ArrayW<uint16_t> numbers, uint32_t scopeid) ;

// Ctor Parameters [CppParam { name: "address", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit IPAddress(::ArrayW<uint8_t> address) ;

/// @brief Method .ctor addr 0x27f94d0 size 0x6c virtual false final false
 void _ctor(::ArrayW<uint8_t> address) ;

// Ctor Parameters [CppParam { name: "address", ty: "System::ReadOnlySpan_1<uint8_t>", modifiers: "", def_value: None }]
explicit IPAddress(System::ReadOnlySpan_1<uint8_t> address) ;

/// @brief Method .ctor addr 0x27f953c size 0x150 virtual false final false
 void _ctor(System::ReadOnlySpan_1<uint8_t> address) ;

/// @brief Method TryParse addr 0x27f968c size 0x6c virtual false final false
static bool TryParse(::StringW ipString, ByRef<System::Net::IPAddress> address) ;

/// @brief Method Parse addr 0x27f98f4 size 0x9c virtual false final false
static System::Net::IPAddress Parse(::StringW ipString) ;

/// @brief Method TryWriteBytes addr 0x27f9990 size 0x118 virtual false final false
 bool TryWriteBytes(System::Span_1<uint8_t> destination, ByRef<int32_t> bytesWritten) ;

/// @brief Method WriteIPv6Bytes addr 0x27f9aa8 size 0x8c virtual false final false
 void WriteIPv6Bytes(System::Span_1<uint8_t> destination) ;

/// @brief Method WriteIPv4Bytes addr 0x27f9b34 size 0x4c virtual false final false
 void WriteIPv4Bytes(System::Span_1<uint8_t> destination) ;

/// @brief Method GetAddressBytes addr 0x27f9b80 size 0x154 virtual false final false
 ::ArrayW<uint8_t> GetAddressBytes() ;

/// @brief Method get_AddressFamily addr 0x27f9cd4 size 0x18 virtual false final false
 System::Net::Sockets::AddressFamily get_AddressFamily() ;

/// @brief Method get_ScopeId addr 0x27f9cec size 0x58 virtual false final false
 int64_t get_ScopeId() ;

/// @brief Method ToString addr 0x27f9d44 size 0x98 virtual true final false
 ::StringW ToString() ;

/// @brief Method IsLoopback addr 0x27f9e50 size 0xc8 virtual false final false
static bool IsLoopback(System::Net::IPAddress address) ;

/// @brief Method get_IsIPv6Multicast addr 0x27f9f18 size 0x34 virtual false final false
 bool get_IsIPv6Multicast() ;

/// @brief Method Equals addr 0x27f9f4c size 0x134 virtual false final false
 bool Equals(::bs_hook::Il2CppWrapperType comparandObj, bool compareScopeId) ;

/// @brief Method Equals addr 0x27fa080 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType comparand) ;

/// @brief Method GetHashCode addr 0x27fa088 size 0x468 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method MapToIPv6 addr 0x27fa4f0 size 0xe0 virtual false final false
 System::Net::IPAddress MapToIPv6() ;

/// @brief Method ThrowAddressNullException addr 0x27f9210 size 0x50 virtual false final false
static ::ArrayW<uint8_t> ThrowAddressNullException() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::ReadOnlyIPAddress
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7881))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7880))
// CS Name: System.Net.IPAddress::ReadOnlyIPAddress
class CORDL_TYPE System__Net__IPAddress__ReadOnlyIPAddress : public System::Net::IPAddress {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Net__IPAddress__ReadOnlyIPAddress() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__IPAddress__ReadOnlyIPAddress", modifiers: " const&", def_value: None }]
constexpr System__Net__IPAddress__ReadOnlyIPAddress(System__Net__IPAddress__ReadOnlyIPAddress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__IPAddress__ReadOnlyIPAddress", modifiers: "&&", def_value: None }]
constexpr System__Net__IPAddress__ReadOnlyIPAddress(System__Net__IPAddress__ReadOnlyIPAddress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__IPAddress__ReadOnlyIPAddress(void* ptr) noexcept : System::Net::IPAddress(ptr) {
}


  constexpr System__Net__IPAddress__ReadOnlyIPAddress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__IPAddress__ReadOnlyIPAddress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__IPAddress__ReadOnlyIPAddress& operator=(System__Net__IPAddress__ReadOnlyIPAddress&& o) noexcept = default;
  constexpr System__Net__IPAddress__ReadOnlyIPAddress& operator=(System__Net__IPAddress__ReadOnlyIPAddress const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "newAddress", ty: "int64_t", modifiers: "", def_value: None }]
explicit System__Net__IPAddress__ReadOnlyIPAddress(int64_t newAddress) ;

/// @brief Method .ctor addr 0x27fa77c size 0x64 virtual false final false
 void _ctor(int64_t newAddress) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::IPAddress);
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPAddress, "System.Net", "IPAddress");
NEED_NO_BOX(System::Net::System__Net__IPAddress__ReadOnlyIPAddress);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__IPAddress__ReadOnlyIPAddress, "System.Net", "IPAddress/ReadOnlyIPAddress");
