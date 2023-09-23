#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net::NetworkInformation {
class IPGlobalProperties;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class IPGlobalPropertiesFactoryPal;
}
// Type: System.Net.NetworkInformation::IPGlobalPropertiesFactoryPal
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8117))
// CS Name: System.Net.NetworkInformation.IPGlobalPropertiesFactoryPal
class CORDL_TYPE IPGlobalPropertiesFactoryPal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IPGlobalPropertiesFactoryPal() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPGlobalPropertiesFactoryPal", modifiers: " const&", def_value: None }]
constexpr IPGlobalPropertiesFactoryPal(IPGlobalPropertiesFactoryPal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPGlobalPropertiesFactoryPal", modifiers: "&&", def_value: None }]
constexpr IPGlobalPropertiesFactoryPal(IPGlobalPropertiesFactoryPal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPGlobalPropertiesFactoryPal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPGlobalPropertiesFactoryPal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPGlobalPropertiesFactoryPal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPGlobalPropertiesFactoryPal& operator=(IPGlobalPropertiesFactoryPal&& o) noexcept = default;
  constexpr IPGlobalPropertiesFactoryPal& operator=(IPGlobalPropertiesFactoryPal const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2858fd0 size 0x50 virtual false final false
static System::Net::NetworkInformation::IPGlobalProperties Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPGlobalPropertiesFactoryPal, "System.Net.NetworkInformation", "IPGlobalPropertiesFactoryPal");
