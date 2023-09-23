#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Net::Sockets {
struct IPProtectionLevel;
}
// Forward declare root types
namespace System::Net::Configuration {
class SettingsSectionInternal;
}
// Type: System.Net.Configuration::SettingsSectionInternal
namespace System::Net::Configuration {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8166))
// CS Name: System.Net.Configuration.SettingsSectionInternal
class CORDL_TYPE SettingsSectionInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SettingsSectionInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: " const&", def_value: None }]
constexpr SettingsSectionInternal(SettingsSectionInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SettingsSectionInternal", modifiers: "&&", def_value: None }]
constexpr SettingsSectionInternal(SettingsSectionInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SettingsSectionInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SettingsSectionInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SettingsSectionInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SettingsSectionInternal& operator=(SettingsSectionInternal&& o) noexcept = default;
  constexpr SettingsSectionInternal& operator=(SettingsSectionInternal const& o) noexcept = default;
                


// Fields

static System::Net::Configuration::SettingsSectionInternal __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(System::Net::Configuration::SettingsSectionInternal value) ;

static System::Net::Configuration::SettingsSectionInternal __get_instance() ;

 bool __declspec(property(get=__get_HttpListenerUnescapeRequestUrl, put=__set_HttpListenerUnescapeRequestUrl))  HttpListenerUnescapeRequestUrl;

constexpr void __set_HttpListenerUnescapeRequestUrl(bool value) ;

constexpr bool __get_HttpListenerUnescapeRequestUrl() const;

 System::Net::Sockets::IPProtectionLevel __declspec(property(get=__get_IPProtectionLevel, put=__set_IPProtectionLevel))  IPProtectionLevel;

constexpr void __set_IPProtectionLevel(System::Net::Sockets::IPProtectionLevel value) ;

constexpr System::Net::Sockets::IPProtectionLevel __get_IPProtectionLevel() const;


// Properties

static System::Net::Configuration::SettingsSectionInternal __declspec(property(get=get_Section))  Section;

 bool __declspec(property(get=get_Ipv6Enabled))  Ipv6Enabled;


// Methods

/// @brief Method get_Section addr 0x285e6d0 size 0x58 virtual false final false
static System::Net::Configuration::SettingsSectionInternal get_Section() ;

/// @brief Method get_Ipv6Enabled addr 0x285e728 size 0x8 virtual false final false
 bool get_Ipv6Enabled() ;

// Ctor Parameters []
explicit SettingsSectionInternal() ;

/// @brief Method .ctor addr 0x285e730 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Configuration
NEED_NO_BOX(System::Net::Configuration::SettingsSectionInternal);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Configuration::SettingsSectionInternal, "System.Net.Configuration", "SettingsSectionInternal");
