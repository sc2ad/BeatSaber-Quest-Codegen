#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LiteNetLib {
struct DisconnectResult;
}
// Type: LiteNetLib::DisconnectResult
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14456))
// CS Name: LiteNetLib.DisconnectResult
struct CORDL_TYPE DisconnectResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr DisconnectResult(int32_t value__) noexcept;


                    constexpr DisconnectResult(DisconnectResult const&) = default;
                    constexpr DisconnectResult(DisconnectResult&&) = default;
                    constexpr DisconnectResult& operator=(DisconnectResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr DisconnectResult& operator=(DisconnectResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit DisconnectResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __DisconnectResult_Unwrapped : int32_t {
__None = 0,
__Reject = 1,
__Disconnect = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __DisconnectResult_Unwrapped () const noexcept {
return std::bit_cast<__DisconnectResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::LiteNetLib::DisconnectResult const None;

/// @brief Field Reject offset 0
static ::LiteNetLib::DisconnectResult const Reject;

/// @brief Field Disconnect offset 0
static ::LiteNetLib::DisconnectResult const Disconnect;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::DisconnectResult, "LiteNetLib", "DisconnectResult");
