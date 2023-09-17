#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnicastIPAddressInformation_def.hpp"
namespace {
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxUnicastIPAddressInformation;
}
// Type: System.Net.NetworkInformation::LinuxUnicastIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8107))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8128))
// CS Name: System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
class CORDL_TYPE LinuxUnicastIPAddressInformation : public ::System::Net::NetworkInformation::UnicastIPAddressInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LinuxUnicastIPAddressInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxUnicastIPAddressInformation", modifiers: " const&", def_value: None }]
constexpr LinuxUnicastIPAddressInformation(LinuxUnicastIPAddressInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxUnicastIPAddressInformation", modifiers: "&&", def_value: None }]
constexpr LinuxUnicastIPAddressInformation(LinuxUnicastIPAddressInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinuxUnicastIPAddressInformation(void* ptr) noexcept : ::System::Net::NetworkInformation::UnicastIPAddressInformation(ptr) {
}


  constexpr LinuxUnicastIPAddressInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinuxUnicastIPAddressInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinuxUnicastIPAddressInformation& operator=(LinuxUnicastIPAddressInformation&& o) noexcept = default;
  constexpr LinuxUnicastIPAddressInformation& operator=(LinuxUnicastIPAddressInformation const& o) noexcept = default;
                


// Fields

 ::System::Net::IPAddress __declspec(property(get=__get_address, put=__set_address))  address;

constexpr void __set_address(::System::Net::IPAddress value) ;

constexpr ::System::Net::IPAddress __get_address() const;


// Properties

 ::System::Net::IPAddress __declspec(property(get=get_Address))  Address;


// Methods

// Ctor Parameters [CppParam { name: "address", ty: "::System::Net::IPAddress", modifiers: "", def_value: None }]
explicit LinuxUnicastIPAddressInformation(::System::Net::IPAddress address) ;

/// @brief Method .ctor addr 0x285cbcc size 0x28 virtual false final false
 void _ctor(::System::Net::IPAddress address) ;

/// @brief Method get_Address addr 0x285cbf4 size 0x8 virtual true final false
 ::System::Net::IPAddress get_Address() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxUnicastIPAddressInformation, "System.Net.NetworkInformation", "LinuxUnicastIPAddressInformation");
