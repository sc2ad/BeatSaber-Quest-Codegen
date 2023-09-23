#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterface_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net::NetworkInformation {
class IPInterfaceProperties;
}
namespace System::Net::NetworkInformation {
struct OperationalStatus;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class AixNetworkInterface;
}
// Type: System.Net.NetworkInformation::AixNetworkInterface
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8143))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8112))
// CS Name: System.Net.NetworkInformation.AixNetworkInterface
class CORDL_TYPE AixNetworkInterface : public System::Net::NetworkInformation::UnixNetworkInterface {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~AixNetworkInterface() = default;

// Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterface", modifiers: " const&", def_value: None }]
constexpr AixNetworkInterface(AixNetworkInterface const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AixNetworkInterface", modifiers: "&&", def_value: None }]
constexpr AixNetworkInterface(AixNetworkInterface&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AixNetworkInterface(void* ptr) noexcept : System::Net::NetworkInformation::UnixNetworkInterface(ptr) {
}


  constexpr AixNetworkInterface& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AixNetworkInterface& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AixNetworkInterface& operator=(AixNetworkInterface&& o) noexcept = default;
  constexpr AixNetworkInterface& operator=(AixNetworkInterface const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get__ifa_flags, put=__set__ifa_flags))  _ifa_flags;

constexpr void __set__ifa_flags(uint32_t value) ;

constexpr uint32_t __get__ifa_flags() const;

 int32_t __declspec(property(get=__get__ifru_mtu, put=__set__ifru_mtu))  _ifru_mtu;

constexpr void __set__ifru_mtu(int32_t value) ;

constexpr int32_t __get__ifru_mtu() const;


// Properties

 System::Net::NetworkInformation::OperationalStatus __declspec(property(get=get_OperationalStatus))  OperationalStatus;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ifa_flags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ifru_mtu", ty: "int32_t", modifiers: "", def_value: None }]
explicit AixNetworkInterface(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu) ;

/// @brief Method .ctor addr 0x285b098 size 0x28 virtual false final false
 void _ctor(::StringW name, uint32_t ifa_flags, int32_t ifru_mtu) ;

/// @brief Method GetIPProperties addr 0x285b214 size 0x84 virtual true final false
 System::Net::NetworkInformation::IPInterfaceProperties GetIPProperties() ;

/// @brief Method get_OperationalStatus addr 0x285b298 size 0x14 virtual true final false
 System::Net::NetworkInformation::OperationalStatus get_OperationalStatus() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::AixNetworkInterface);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::AixNetworkInterface, "System.Net.NetworkInformation", "AixNetworkInterface");
