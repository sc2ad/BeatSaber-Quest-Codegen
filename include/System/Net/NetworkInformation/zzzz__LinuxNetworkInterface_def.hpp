#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class LinuxNetworkInterface;
}
// Type: System.Net.NetworkInformation::LinuxNetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8120))
// CS Name: System.Net.NetworkInformation.LinuxNetworkInterface
class CORDL_TYPE LinuxNetworkInterface : public ::System::Net::NetworkInformation::UnixNetworkInterface {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~LinuxNetworkInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterface", modifiers: " const&", def_value: None }]
constexpr LinuxNetworkInterface(LinuxNetworkInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LinuxNetworkInterface", modifiers: "&&", def_value: None }]
constexpr LinuxNetworkInterface(LinuxNetworkInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LinuxNetworkInterface(void* ptr) noexcept : ::System::Net::NetworkInformation::UnixNetworkInterface(ptr) {
}


  constexpr LinuxNetworkInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LinuxNetworkInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LinuxNetworkInterface& operator=(LinuxNetworkInterface&& o) noexcept = default;
  constexpr LinuxNetworkInterface& operator=(LinuxNetworkInterface const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_iface_path, put=__set_iface_path))  iface_path;

constexpr void __set_iface_path(::StringW value) ;

constexpr ::StringW __get_iface_path() const;

 ::StringW __declspec(property(get=__get_iface_operstate_path, put=__set_iface_operstate_path))  iface_operstate_path;

constexpr void __set_iface_operstate_path(::StringW value) ;

constexpr ::StringW __get_iface_operstate_path() const;

 ::StringW __declspec(property(get=__get_iface_flags_path, put=__set_iface_flags_path))  iface_flags_path;

constexpr void __set_iface_flags_path(::StringW value) ;

constexpr ::StringW __get_iface_flags_path() const;


// Properties

 ::StringW __declspec(property(get=get_IfacePath))  IfacePath;

 ::System::Net::NetworkInformation::OperationalStatus __declspec(property(get=get_OperationalStatus))  OperationalStatus;


// Methods

/// @brief Method get_IfacePath addr 0x285c5a8 size 0x8 virtual false final false
 ::StringW get_IfacePath() ;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit LinuxNetworkInterface(::StringW name) ;

/// @brief Method .ctor addr 0x285c4c8 size 0xd8 virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method GetIPProperties addr 0x285c5b0 size 0x74 virtual true final false
 ::System::Net::NetworkInformation::IPInterfaceProperties GetIPProperties() ;

/// @brief Method get_OperationalStatus addr 0x285c624 size 0x2bc virtual true final false
 ::System::Net::NetworkInformation::OperationalStatus get_OperationalStatus() ;

/// @brief Method ReadLine addr 0x285c8e0 size 0x2ec virtual false final false
static ::StringW ReadLine(::StringW path) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
} // end anonymous namespace
NEED_NO_BOX(::System::Net::NetworkInformation::LinuxNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::LinuxNetworkInterface, "System.Net.NetworkInformation", "LinuxNetworkInterface");
