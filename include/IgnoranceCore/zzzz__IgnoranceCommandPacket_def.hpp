#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace IgnoranceCore {
struct IgnoranceCommandType;
}
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceCommandPacket;
}
// Type: IgnoranceCore::IgnoranceCommandPacket
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15288))
// CS Name: IgnoranceCore.IgnoranceCommandPacket
struct CORDL_TYPE IgnoranceCommandPacket : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Type", ty: "IgnoranceCore::IgnoranceCommandType", modifiers: "", def_value: None }, CppParam { name: "PeerId", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr IgnoranceCommandPacket(IgnoranceCore::IgnoranceCommandType Type, uint32_t PeerId) noexcept;


                    constexpr IgnoranceCommandPacket(IgnoranceCommandPacket const&) = default;
                    constexpr IgnoranceCommandPacket(IgnoranceCommandPacket&&) = default;
                    constexpr IgnoranceCommandPacket& operator=(IgnoranceCommandPacket const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceCommandPacket& operator=(IgnoranceCommandPacket&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceCommandPacket(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 IgnoranceCore::IgnoranceCommandType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(IgnoranceCore::IgnoranceCommandType value) ;

constexpr IgnoranceCore::IgnoranceCommandType __get_Type() const;

 uint32_t __declspec(property(get=__get_PeerId, put=__set_PeerId))  PeerId;

constexpr void __set_PeerId(uint32_t value) ;

constexpr uint32_t __get_PeerId() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::IgnoranceCommandPacket, "IgnoranceCore", "IgnoranceCommandPacket");
