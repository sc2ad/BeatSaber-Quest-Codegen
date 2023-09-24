#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Internal::Runtime::Augments {
struct AsyncStatus;
}
// Type: Internal.Runtime.Augments::AsyncStatus
namespace Internal::Runtime::Augments {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2304))
// CS Name: Internal.Runtime.Augments.AsyncStatus
struct CORDL_TYPE AsyncStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AsyncStatus(int32_t value__) noexcept;


                    constexpr AsyncStatus(AsyncStatus const&) = default;
                    constexpr AsyncStatus(AsyncStatus&&) = default;
                    constexpr AsyncStatus& operator=(AsyncStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AsyncStatus& operator=(AsyncStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AsyncStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AsyncStatus_Unwrapped : int32_t {
__Started = 0,
__Completed = 1,
__Canceled = 2,
__Error = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AsyncStatus_Unwrapped () const noexcept {
return std::bit_cast<__AsyncStatus_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Started offset 0
static Internal::Runtime::Augments::AsyncStatus const Started;

/// @brief Field Completed offset 0
static Internal::Runtime::Augments::AsyncStatus const Completed;

/// @brief Field Canceled offset 0
static Internal::Runtime::Augments::AsyncStatus const Canceled;

/// @brief Field Error offset 0
static Internal::Runtime::Augments::AsyncStatus const Error;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Internal::Runtime::Augments
DEFINE_IL2CPP_ARG_TYPE(Internal::Runtime::Augments::AsyncStatus, "Internal.Runtime.Augments", "AsyncStatus");
