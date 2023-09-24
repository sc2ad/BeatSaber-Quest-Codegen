#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace LiteNetLib {
struct ConnectionRequestResult;
}
// Type: LiteNetLib::ConnectionRequestResult
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14409))
// CS Name: LiteNetLib.ConnectionRequestResult
struct CORDL_TYPE ConnectionRequestResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ConnectionRequestResult(int32_t value__) noexcept;


                    constexpr ConnectionRequestResult(ConnectionRequestResult const&) = default;
                    constexpr ConnectionRequestResult(ConnectionRequestResult&&) = default;
                    constexpr ConnectionRequestResult& operator=(ConnectionRequestResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ConnectionRequestResult& operator=(ConnectionRequestResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ConnectionRequestResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ConnectionRequestResult_Unwrapped : int32_t {
__None = 0,
__Accept = 1,
__Reject = 2,
__RejectForce = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ConnectionRequestResult_Unwrapped () const noexcept {
return std::bit_cast<__ConnectionRequestResult_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static LiteNetLib::ConnectionRequestResult const None;

/// @brief Field Accept offset 0
static LiteNetLib::ConnectionRequestResult const Accept;

/// @brief Field Reject offset 0
static LiteNetLib::ConnectionRequestResult const Reject;

/// @brief Field RejectForce offset 0
static LiteNetLib::ConnectionRequestResult const RejectForce;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::ConnectionRequestResult, "LiteNetLib", "ConnectionRequestResult");
