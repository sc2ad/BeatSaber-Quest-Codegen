#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityOpus {
struct ErrorCode;
}
// Type: UnityOpus::ErrorCode
namespace UnityOpus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6157))
// CS Name: UnityOpus.ErrorCode
struct CORDL_TYPE ErrorCode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ErrorCode(int32_t value__) noexcept;


                    constexpr ErrorCode(ErrorCode const&) = default;
                    constexpr ErrorCode(ErrorCode&&) = default;
                    constexpr ErrorCode& operator=(ErrorCode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ErrorCode& operator=(ErrorCode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ErrorCode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ErrorCode_Unwrapped : int32_t {
__OK = 0,
__BadArg = -1,
__BufferTooSmall = -2,
__InternalError = -3,
__InvalidPacket = -4,
__Unimplemented = -5,
__InvalidState = -6,
__AllocFail = -7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ErrorCode_Unwrapped () const noexcept {
return std::bit_cast<__ErrorCode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OK offset 0
static UnityOpus::ErrorCode const OK;

/// @brief Field BadArg offset 0
static UnityOpus::ErrorCode const BadArg;

/// @brief Field BufferTooSmall offset 0
static UnityOpus::ErrorCode const BufferTooSmall;

/// @brief Field InternalError offset 0
static UnityOpus::ErrorCode const InternalError;

/// @brief Field InvalidPacket offset 0
static UnityOpus::ErrorCode const InvalidPacket;

/// @brief Field Unimplemented offset 0
static UnityOpus::ErrorCode const Unimplemented;

/// @brief Field InvalidState offset 0
static UnityOpus::ErrorCode const InvalidState;

/// @brief Field AllocFail offset 0
static UnityOpus::ErrorCode const AllocFail;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityOpus
DEFINE_IL2CPP_ARG_TYPE(UnityOpus::ErrorCode, "UnityOpus", "ErrorCode");
