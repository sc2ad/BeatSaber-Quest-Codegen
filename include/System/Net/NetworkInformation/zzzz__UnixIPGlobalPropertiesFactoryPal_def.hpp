#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Net::NetworkInformation {
class IPGlobalProperties;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class UnixIPGlobalPropertiesFactoryPal;
}
// Type: System.Net.NetworkInformation::UnixIPGlobalPropertiesFactoryPal
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8140))
// CS Name: System.Net.NetworkInformation.UnixIPGlobalPropertiesFactoryPal
class CORDL_TYPE UnixIPGlobalPropertiesFactoryPal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnixIPGlobalPropertiesFactoryPal() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalPropertiesFactoryPal", modifiers: " const&", def_value: None }]
constexpr UnixIPGlobalPropertiesFactoryPal(UnixIPGlobalPropertiesFactoryPal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnixIPGlobalPropertiesFactoryPal", modifiers: "&&", def_value: None }]
constexpr UnixIPGlobalPropertiesFactoryPal(UnixIPGlobalPropertiesFactoryPal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnixIPGlobalPropertiesFactoryPal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnixIPGlobalPropertiesFactoryPal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnixIPGlobalPropertiesFactoryPal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnixIPGlobalPropertiesFactoryPal& operator=(UnixIPGlobalPropertiesFactoryPal&& o) noexcept = default;
  constexpr UnixIPGlobalPropertiesFactoryPal& operator=(UnixIPGlobalPropertiesFactoryPal const& o) noexcept = default;
                


// Fields

static bool __declspec(property(get=__get__PlatformNeedsLibCWorkaround_k__BackingField, put=__set__PlatformNeedsLibCWorkaround_k__BackingField))  _PlatformNeedsLibCWorkaround_k__BackingField;

static void __set__PlatformNeedsLibCWorkaround_k__BackingField(bool value) ;

static bool __get__PlatformNeedsLibCWorkaround_k__BackingField() ;


// Properties

static bool __declspec(property(get=get_PlatformNeedsLibCWorkaround))  PlatformNeedsLibCWorkaround;


// Methods

/// @brief Method get_PlatformNeedsLibCWorkaround addr 0x285e164 size 0x48 virtual false final false
static bool get_PlatformNeedsLibCWorkaround() ;

/// @brief Method Create addr 0x285b2f4 size 0xac virtual false final false
static ::System::Net::NetworkInformation::IPGlobalProperties Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::UnixIPGlobalPropertiesFactoryPal, "System.Net.NetworkInformation", "UnixIPGlobalPropertiesFactoryPal");
