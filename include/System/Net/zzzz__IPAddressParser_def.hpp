#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Text {
class StringBuilder;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net {
class IPAddressParser;
}
// Type: System.Net::IPAddressParser
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7882))
// CS Name: System.Net.IPAddressParser
class CORDL_TYPE IPAddressParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPAddressParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressParser", modifiers: " const&", def_value: None }]
constexpr IPAddressParser(IPAddressParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressParser", modifiers: "&&", def_value: None }]
constexpr IPAddressParser(IPAddressParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPAddressParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPAddressParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPAddressParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPAddressParser& operator=(IPAddressParser&& o) noexcept = default;
  constexpr IPAddressParser& operator=(IPAddressParser const& o) noexcept = default;
                


// Methods

/// @brief Method Parse addr 0x27f96f8 size 0x1fc virtual false final false
static ::System::Net::IPAddress Parse(::System::ReadOnlySpan_1<char16_t> ipSpan, bool tryParse) ;

/// @brief Method IPv4AddressToString addr 0x27f9df0 size 0x60 virtual false final false
static ::StringW IPv4AddressToString(uint32_t address) ;

/// @brief Method IPv4AddressToString addr 0x27faab4 size 0x70 virtual false final false
static void IPv4AddressToString(uint32_t address, ::System::Text::StringBuilder destination) ;

/// @brief Method IPv4AddressToStringHelper addr 0x27faa18 size 0x9c virtual false final false
static int32_t IPv4AddressToStringHelper(uint32_t address, void* addressString) ;

/// @brief Method IPv6AddressToString addr 0x27f9ddc size 0x14 virtual false final false
static ::StringW IPv6AddressToString(::ArrayW<uint16_t> address, uint32_t scopeId) ;

/// @brief Method IPv6AddressToStringHelper addr 0x27fabdc size 0x120 virtual false final false
static ::System::Text::StringBuilder IPv6AddressToStringHelper(::ArrayW<uint16_t> address, uint32_t scopeId) ;

/// @brief Method FormatIPv4AddressNumber addr 0x27fab24 size 0xb8 virtual false final false
static void FormatIPv4AddressNumber(int32_t number, void* addressString, ByRef<int32_t> offset) ;

/// @brief Method Ipv4StringToAddress addr 0x27fa944 size 0xd4 virtual false final false
static bool Ipv4StringToAddress(::System::ReadOnlySpan_1<char16_t> ipSpan, ByRef<int64_t> address) ;

/// @brief Method Ipv6StringToAddress addr 0x27fa7e0 size 0x164 virtual false final false
static bool Ipv6StringToAddress(::System::ReadOnlySpan_1<char16_t> ipSpan, void* numbers, int32_t numbersLength, ByRef<uint32_t> scope) ;

/// @brief Method AppendSections addr 0x27facfc size 0x1b8 virtual false final false
static void AppendSections(::ArrayW<uint16_t> address, int32_t fromInclusive, int32_t toExclusive, ::System::Text::StringBuilder buffer) ;

/// @brief Method AppendHex addr 0x27faef0 size 0x68 virtual false final false
static void AppendHex(uint16_t value, ::System::Text::StringBuilder buffer) ;

/// @brief Method ExtractIPv4Address addr 0x27faeb4 size 0x3c virtual false final false
static uint32_t ExtractIPv4Address(::ArrayW<uint16_t> address) ;

/// @brief Method Reverse addr 0x27faf58 size 0xc virtual false final false
static uint16_t Reverse(uint16_t number) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::IPAddressParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::IPAddressParser, "System.Net", "IPAddressParser");
