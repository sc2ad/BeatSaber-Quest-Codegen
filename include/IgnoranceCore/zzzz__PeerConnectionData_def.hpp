#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace IgnoranceCore {
struct PeerConnectionData;
}
// Type: IgnoranceCore::PeerConnectionData
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15292))
// CS Name: IgnoranceCore.PeerConnectionData
struct CORDL_TYPE PeerConnectionData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Port", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "NativePeerId", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "IP", ty: "::StringW", modifiers: "", def_value: None }]
constexpr PeerConnectionData(uint16_t Port, uint32_t NativePeerId, ::StringW IP) noexcept;


                    constexpr PeerConnectionData(PeerConnectionData const&) = default;
                    constexpr PeerConnectionData(PeerConnectionData&&) = default;
                    constexpr PeerConnectionData& operator=(PeerConnectionData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PeerConnectionData& operator=(PeerConnectionData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PeerConnectionData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_Port, put=__set_Port))  Port;

constexpr void __set_Port(uint16_t value) ;

constexpr uint16_t __get_Port() const;

 uint32_t __declspec(property(get=__get_NativePeerId, put=__set_NativePeerId))  NativePeerId;

constexpr void __set_NativePeerId(uint32_t value) ;

constexpr uint32_t __get_NativePeerId() const;

 ::StringW __declspec(property(get=__get_IP, put=__set_IP))  IP;

constexpr void __set_IP(::StringW value) ;

constexpr ::StringW __get_IP() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::PeerConnectionData, "IgnoranceCore", "PeerConnectionData");
