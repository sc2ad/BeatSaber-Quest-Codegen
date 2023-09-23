#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace IgnoranceCore {
struct IgnoranceCommandType;
}
// Type: IgnoranceCore::IgnoranceCommandType
namespace IgnoranceCore {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15290))
// CS Name: IgnoranceCore.IgnoranceCommandType
struct CORDL_TYPE IgnoranceCommandType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IgnoranceCommandType(int32_t value__) noexcept;


                    constexpr IgnoranceCommandType(IgnoranceCommandType const&) = default;
                    constexpr IgnoranceCommandType(IgnoranceCommandType&&) = default;
                    constexpr IgnoranceCommandType& operator=(IgnoranceCommandType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr IgnoranceCommandType& operator=(IgnoranceCommandType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit IgnoranceCommandType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __IgnoranceCommandType_Unwrapped : int32_t {
__ClientWantsToStop = 0,
__ClientStatusRequest = 1,
__ServerKickPeer = 2,
__ServerStatusRequest = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __IgnoranceCommandType_Unwrapped () const noexcept {
return std::bit_cast<__IgnoranceCommandType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ClientWantsToStop offset 0
static IgnoranceCore::IgnoranceCommandType const ClientWantsToStop;

/// @brief Field ClientStatusRequest offset 0
static IgnoranceCore::IgnoranceCommandType const ClientStatusRequest;

/// @brief Field ServerKickPeer offset 0
static IgnoranceCore::IgnoranceCommandType const ServerKickPeer;

/// @brief Field ServerStatusRequest offset 0
static IgnoranceCore::IgnoranceCommandType const ServerStatusRequest;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def IgnoranceCore
DEFINE_IL2CPP_ARG_TYPE(IgnoranceCore::IgnoranceCommandType, "IgnoranceCore", "IgnoranceCommandType");
