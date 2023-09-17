#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net {
struct ReadState;
}
// Type: System.Net::ReadState
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8065))
// CS Name: System.Net.ReadState
struct CORDL_TYPE ReadState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadState(int32_t value__) noexcept;


                    constexpr ReadState(ReadState const&) = default;
                    constexpr ReadState(ReadState&&) = default;
                    constexpr ReadState& operator=(ReadState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ReadState& operator=(ReadState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ReadState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ReadState_Unwrapped : int32_t {
__None = 0,
__Status = 1,
__Headers = 2,
__Content = 3,
__Aborted = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ReadState_Unwrapped () const noexcept {
return std::bit_cast<__ReadState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Net::ReadState const None;

/// @brief Field Status offset 0
static ::System::Net::ReadState const Status;

/// @brief Field Headers offset 0
static ::System::Net::ReadState const Headers;

/// @brief Field Content offset 0
static ::System::Net::ReadState const Content;

/// @brief Field Aborted offset 0
static ::System::Net::ReadState const Aborted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ReadState, "System.Net", "ReadState");
