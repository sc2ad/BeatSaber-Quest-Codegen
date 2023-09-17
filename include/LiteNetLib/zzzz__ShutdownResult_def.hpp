#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace LiteNetLib {
struct ShutdownResult;
}
// Type: LiteNetLib::ShutdownResult
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14457))
// CS Name: LiteNetLib.ShutdownResult
struct CORDL_TYPE ShutdownResult : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShutdownResult(int32_t value__) noexcept;


                    constexpr ShutdownResult(ShutdownResult const&) = default;
                    constexpr ShutdownResult(ShutdownResult&&) = default;
                    constexpr ShutdownResult& operator=(ShutdownResult const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShutdownResult& operator=(ShutdownResult&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShutdownResult(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ShutdownResult_Unwrapped : int32_t {
__None = 0,
__Success = 1,
__WasConnected = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShutdownResult_Unwrapped () const noexcept {
return std::bit_cast<__ShutdownResult_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::LiteNetLib::ShutdownResult const None;

/// @brief Field Success offset 0
static ::LiteNetLib::ShutdownResult const Success;

/// @brief Field WasConnected offset 0
static ::LiteNetLib::ShutdownResult const WasConnected;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ShutdownResult, "LiteNetLib", "ShutdownResult");
