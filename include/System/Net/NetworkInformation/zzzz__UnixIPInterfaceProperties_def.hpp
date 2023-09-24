#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__IPInterfaceProperties_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformationCollection;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Net::NetworkInformation {
class UnixNetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPInterfaceProperties;
}
// Type: System.Net.NetworkInformation::UnixIPInterfaceProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8101))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8141))
// CS Name: System.Net.NetworkInformation.UnixIPInterfaceProperties
class CORDL_TYPE UnixIPInterfaceProperties : public System::Net::NetworkInformation::IPInterfaceProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~UnixIPInterfaceProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPInterfaceProperties", modifiers: " const&", def_value: None }]
constexpr UnixIPInterfaceProperties(UnixIPInterfaceProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPInterfaceProperties", modifiers: "&&", def_value: None }]
constexpr UnixIPInterfaceProperties(UnixIPInterfaceProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnixIPInterfaceProperties(void* ptr) noexcept : System::Net::NetworkInformation::IPInterfaceProperties(ptr) {
}


  constexpr UnixIPInterfaceProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnixIPInterfaceProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnixIPInterfaceProperties& operator=(UnixIPInterfaceProperties&& o) noexcept = default;
  constexpr UnixIPInterfaceProperties& operator=(UnixIPInterfaceProperties const& o) noexcept = default;
                


// Fields

 System::Net::NetworkInformation::UnixNetworkInterface __declspec(property(get=__get_iface, put=__set_iface))  iface;

constexpr void __set_iface(System::Net::NetworkInformation::UnixNetworkInterface value) ;

constexpr System::Net::NetworkInformation::UnixNetworkInterface __get_iface() const;

 System::Collections::Generic::List_1<System::Net::IPAddress> __declspec(property(get=__get_addresses, put=__set_addresses))  addresses;

constexpr void __set_addresses(System::Collections::Generic::List_1<System::Net::IPAddress> value) ;

constexpr System::Collections::Generic::List_1<System::Net::IPAddress> __get_addresses() const;

static System::Text::RegularExpressions::Regex __declspec(property(get=__get_ns, put=__set_ns))  ns;

static void __set_ns(System::Text::RegularExpressions::Regex value) ;

static System::Text::RegularExpressions::Regex __get_ns() ;

static System::Text::RegularExpressions::Regex __declspec(property(get=__get_search, put=__set_search))  search;

static void __set_search(System::Text::RegularExpressions::Regex value) ;

static System::Text::RegularExpressions::Regex __get_search() ;


// Properties

 System::Net::NetworkInformation::UnicastIPAddressInformationCollection __declspec(property(get=get_UnicastAddresses))  UnicastAddresses;


// Methods

static System::Net::NetworkInformation::UnixIPInterfaceProperties New_ctor(System::Net::NetworkInformation::UnixNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses) ;

/// @brief Method .ctor addr 0x2859a04 size 0x2c virtual false final false
 void _ctor(System::Net::NetworkInformation::UnixNetworkInterface iface, System::Collections::Generic::List_1<System::Net::IPAddress> addresses) ;

/// @brief Method get_UnicastAddresses addr 0x285e1ac size 0x274 virtual true final false
 System::Net::NetworkInformation::UnicastIPAddressInformationCollection get_UnicastAddresses() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnixIPInterfaceProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnixIPInterfaceProperties, "System.Net.NetworkInformation", "UnixIPInterfaceProperties");
