#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__IPAddressInformation_def.hpp"
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnicastIPAddressInformation;
}
// Type: System.Net.NetworkInformation::UnicastIPAddressInformation
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8099))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8107))
// CS Name: System.Net.NetworkInformation.UnicastIPAddressInformation
class CORDL_TYPE UnicastIPAddressInformation : public System::Net::NetworkInformation::IPAddressInformation {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnicastIPAddressInformation() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformation", modifiers: " const&", def_value: None }]
constexpr UnicastIPAddressInformation(UnicastIPAddressInformation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnicastIPAddressInformation", modifiers: "&&", def_value: None }]
constexpr UnicastIPAddressInformation(UnicastIPAddressInformation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnicastIPAddressInformation(void* ptr) noexcept : System::Net::NetworkInformation::IPAddressInformation(ptr) {
}


  constexpr UnicastIPAddressInformation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnicastIPAddressInformation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnicastIPAddressInformation& operator=(UnicastIPAddressInformation&& o) noexcept = default;
  constexpr UnicastIPAddressInformation& operator=(UnicastIPAddressInformation const& o) noexcept = default;
                


// Methods

static System::Net::NetworkInformation::UnicastIPAddressInformation New_ctor() ;

/// @brief Method .ctor addr 0x2859610 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::UnicastIPAddressInformation);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::UnicastIPAddressInformation, "System.Net.NetworkInformation", "UnicastIPAddressInformation");
