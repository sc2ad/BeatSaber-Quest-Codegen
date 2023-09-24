#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPAddressInformation;
}
// Type: System.Net.NetworkInformation::IPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8099))
// CS Name: System.Net.NetworkInformation.IPAddressInformation
class CORDL_TYPE IPAddressInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPAddressInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressInformation", modifiers: " const&", def_value: None }]
constexpr IPAddressInformation(IPAddressInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAddressInformation", modifiers: "&&", def_value: None }]
constexpr IPAddressInformation(IPAddressInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPAddressInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPAddressInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPAddressInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPAddressInformation& operator=(IPAddressInformation&& o) noexcept = default;
  constexpr IPAddressInformation& operator=(IPAddressInformation const& o) noexcept = default;
                


// Properties

 System::Net::IPAddress __declspec(property(get=get_Address))  Address;


// Methods

/// @brief Method get_Address addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::IPAddress get_Address() ;

static System::Net::NetworkInformation::IPAddressInformation New_ctor() ;

/// @brief Method .ctor addr 0x2858fc4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::IPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPAddressInformation, "System.Net.NetworkInformation", "IPAddressInformation");
