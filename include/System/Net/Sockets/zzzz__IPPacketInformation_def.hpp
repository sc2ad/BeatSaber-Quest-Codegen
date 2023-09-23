#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net::Sockets {
struct IPPacketInformation;
}
// Type: System.Net.Sockets::IPPacketInformation
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8190))
// CS Name: System.Net.Sockets.IPPacketInformation
struct CORDL_TYPE IPPacketInformation : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "address", ty: "System::Net::IPAddress", modifiers: "", def_value: None }, CppParam { name: "networkInterface", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IPPacketInformation(System::Net::IPAddress address, int32_t networkInterface) noexcept;


                    constexpr IPPacketInformation(IPPacketInformation const&) = default;
                    constexpr IPPacketInformation(IPPacketInformation&&) = default;
                    constexpr IPPacketInformation& operator=(IPPacketInformation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IPPacketInformation& operator=(IPPacketInformation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IPPacketInformation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::IPAddress __declspec(property(get=__get_address, put=__set_address))  address;

constexpr void __set_address(System::Net::IPAddress value) ;

constexpr System::Net::IPAddress __get_address() const;

 int32_t __declspec(property(get=__get_networkInterface, put=__set_networkInterface))  networkInterface;

constexpr void __set_networkInterface(int32_t value) ;

constexpr int32_t __get_networkInterface() const;


// Methods

/// @brief Method Equals addr 0x2769be4 size 0x9c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType comparand) ;

/// @brief Method GetHashCode addr 0x2769c80 size 0x44 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::IPPacketInformation, "System.Net.Sockets", "IPPacketInformation");
