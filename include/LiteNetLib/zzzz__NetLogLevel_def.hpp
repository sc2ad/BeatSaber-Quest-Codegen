#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LiteNetLib {
struct NetLogLevel;
}
// Type: LiteNetLib::NetLogLevel
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14438))
// CS Name: LiteNetLib.NetLogLevel
struct CORDL_TYPE NetLogLevel : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetLogLevel(int32_t value__) noexcept;


                    constexpr NetLogLevel(NetLogLevel const&) = default;
                    constexpr NetLogLevel(NetLogLevel&&) = default;
                    constexpr NetLogLevel& operator=(NetLogLevel const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetLogLevel& operator=(NetLogLevel&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetLogLevel(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NetLogLevel_Unwrapped : int32_t {
__Warning = 0,
__Error = 1,
__Trace = 2,
__Info = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetLogLevel_Unwrapped () const noexcept {
return std::bit_cast<__NetLogLevel_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Warning offset 0
static LiteNetLib::NetLogLevel const Warning;

/// @brief Field Error offset 0
static LiteNetLib::NetLogLevel const Error;

/// @brief Field Trace offset 0
static LiteNetLib::NetLogLevel const Trace;

/// @brief Field Info offset 0
static LiteNetLib::NetLogLevel const Info;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetLogLevel, "LiteNetLib", "NetLogLevel");
