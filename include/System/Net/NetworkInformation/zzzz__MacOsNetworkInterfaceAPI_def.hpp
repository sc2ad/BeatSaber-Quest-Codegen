#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixNetworkInterfaceAPI_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Net::NetworkInformation {
class NetworkInterface;
}
// Forward declare root types
namespace System::Net::NetworkInformation {
class MacOsNetworkInterfaceAPI;
}
// Type: System.Net.NetworkInformation::MacOsNetworkInterfaceAPI
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8130))
// CS Name: System.Net.NetworkInformation.MacOsNetworkInterfaceAPI
class CORDL_TYPE MacOsNetworkInterfaceAPI : public System::Net::NetworkInformation::UnixNetworkInterfaceAPI {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MacOsNetworkInterfaceAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterfaceAPI", modifiers: " const&", def_value: None }]
constexpr MacOsNetworkInterfaceAPI(MacOsNetworkInterfaceAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MacOsNetworkInterfaceAPI", modifiers: "&&", def_value: None }]
constexpr MacOsNetworkInterfaceAPI(MacOsNetworkInterfaceAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MacOsNetworkInterfaceAPI(void* ptr) noexcept : System::Net::NetworkInformation::UnixNetworkInterfaceAPI(ptr) {
}


  constexpr MacOsNetworkInterfaceAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MacOsNetworkInterfaceAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MacOsNetworkInterfaceAPI& operator=(MacOsNetworkInterfaceAPI&& o) noexcept = default;
  constexpr MacOsNetworkInterfaceAPI& operator=(MacOsNetworkInterfaceAPI const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_AF_INET6, put=__set_AF_INET6))  AF_INET6;

constexpr void __set_AF_INET6(int32_t value) ;

constexpr int32_t __get_AF_INET6() const;


// Methods

static System::Net::NetworkInformation::MacOsNetworkInterfaceAPI New_ctor() ;

/// @brief Method .ctor addr 0x285ce9c size 0x20 virtual false final false
 void _ctor() ;

static System::Net::NetworkInformation::MacOsNetworkInterfaceAPI New_ctor(int32_t AF_INET6) ;

/// @brief Method .ctor addr 0x285b2cc size 0x28 virtual false final false
 void _ctor(int32_t AF_INET6) ;

/// @brief Method GetAllNetworkInterfaces addr 0x285cebc size 0xa6c virtual true final false
 ::ArrayW<System::Net::NetworkInformation::NetworkInterface> GetAllNetworkInterfaces() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::MacOsNetworkInterfaceAPI);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsNetworkInterfaceAPI, "System.Net.NetworkInformation", "MacOsNetworkInterfaceAPI");
