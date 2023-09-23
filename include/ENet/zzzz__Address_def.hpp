#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace ENet {
struct ENetAddress;
}
// Forward declare root types
namespace ENet {
struct Address;
}
// Type: ENet::Address
namespace ENet {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15268))
// CS Name: ENet.Address
struct CORDL_TYPE Address : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "nativeAddress", ty: "ENet::ENetAddress", modifiers: "", def_value: None }]
constexpr Address(ENet::ENetAddress nativeAddress) noexcept;


                    constexpr Address(Address const&) = default;
                    constexpr Address(Address&&) = default;
                    constexpr Address& operator=(Address const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Address& operator=(Address&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x12};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Address(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ENet::ENetAddress __declspec(property(get=__get_nativeAddress, put=__set_nativeAddress))  nativeAddress;

constexpr void __set_nativeAddress(ENet::ENetAddress value) ;

constexpr ENet::ENetAddress __get_nativeAddress() const;


// Properties

 ENet::ENetAddress __declspec(property(get=get_NativeData, put=set_NativeData))  NativeData;

 uint16_t __declspec(property(get=get_Port, put=set_Port))  Port;


// Methods

/// @brief Method get_NativeData addr 0x207ce9c size 0x14 virtual false final false
 ENet::ENetAddress get_NativeData() ;

/// @brief Method set_NativeData addr 0x207ceb0 size 0x14 virtual false final false
 void set_NativeData(ENet::ENetAddress value) ;

/// @brief Method .ctor addr 0x207cec4 size 0x14 virtual false final false
 void _ctor(ENet::ENetAddress address) ;

/// @brief Method get_Port addr 0x207ced8 size 0x8 virtual false final false
 uint16_t get_Port() ;

/// @brief Method set_Port addr 0x207cee0 size 0x8 virtual false final false
 void set_Port(uint16_t value) ;

/// @brief Method GetIP addr 0x207cee8 size 0xc0 virtual false final false
 ::StringW GetIP() ;

/// @brief Method SetIP addr 0x207d064 size 0x68 virtual false final false
 bool SetIP(::StringW ip) ;

/// @brief Method GetHost addr 0x207d16c size 0xc0 virtual false final false
 ::StringW GetHost() ;

/// @brief Method SetHost addr 0x207d2e8 size 0x68 virtual false final false
 bool SetHost(::StringW hostName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def ENet
DEFINE_IL2CPP_ARG_TYPE(ENet::Address, "ENet", "Address");
