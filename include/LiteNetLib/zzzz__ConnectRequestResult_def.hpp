#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LiteNetLib {
struct ConnectRequestResult;
}
// Type: LiteNetLib::ConnectRequestResult
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14455))
// CS Name: LiteNetLib.ConnectRequestResult
struct CORDL_TYPE ConnectRequestResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectRequestResult(int32_t value__) noexcept;


                    constexpr ConnectRequestResult(ConnectRequestResult const&) = default;
                    constexpr ConnectRequestResult(ConnectRequestResult&&) = default;
                    constexpr ConnectRequestResult& operator=(ConnectRequestResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConnectRequestResult& operator=(ConnectRequestResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConnectRequestResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConnectRequestResult_Unwrapped : int32_t {
__None = 0,
__P2PLose = 1,
__Reconnection = 2,
__NewConnection = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectRequestResult_Unwrapped () const noexcept {
return std::bit_cast<__ConnectRequestResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::LiteNetLib::ConnectRequestResult const None;

/// @brief Field P2PLose offset 0
static ::LiteNetLib::ConnectRequestResult const P2PLose;

/// @brief Field Reconnection offset 0
static ::LiteNetLib::ConnectRequestResult const Reconnection;

/// @brief Field NewConnection offset 0
static ::LiteNetLib::ConnectRequestResult const NewConnection;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectRequestResult, "LiteNetLib", "ConnectRequestResult");