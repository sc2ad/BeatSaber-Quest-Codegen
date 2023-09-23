#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace System::Net::NetworkInformation {
class GatewayIPAddressInformation;
}
// Type: System.Net.NetworkInformation::GatewayIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8096))
// CS Name: System.Net.NetworkInformation.GatewayIPAddressInformation
class CORDL_TYPE GatewayIPAddressInformation : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GatewayIPAddressInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformation", modifiers: " const&", def_value: None }]
constexpr GatewayIPAddressInformation(GatewayIPAddressInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GatewayIPAddressInformation", modifiers: "&&", def_value: None }]
constexpr GatewayIPAddressInformation(GatewayIPAddressInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GatewayIPAddressInformation(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GatewayIPAddressInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GatewayIPAddressInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GatewayIPAddressInformation& operator=(GatewayIPAddressInformation&& o) noexcept = default;
  constexpr GatewayIPAddressInformation& operator=(GatewayIPAddressInformation const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit GatewayIPAddressInformation() ;

/// @brief Method .ctor addr 0x28588e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::GatewayIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::GatewayIPAddressInformation, "System.Net.NetworkInformation", "GatewayIPAddressInformation");
