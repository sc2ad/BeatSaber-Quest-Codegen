#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Zenject {
struct SignalDefaultSyncModes;
}
// Type: Zenject::SignalDefaultSyncModes
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11113))
// CS Name: Zenject.SignalDefaultSyncModes
struct CORDL_TYPE SignalDefaultSyncModes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SignalDefaultSyncModes(int32_t value__) noexcept;


                    constexpr SignalDefaultSyncModes(SignalDefaultSyncModes const&) = default;
                    constexpr SignalDefaultSyncModes(SignalDefaultSyncModes&&) = default;
                    constexpr SignalDefaultSyncModes& operator=(SignalDefaultSyncModes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SignalDefaultSyncModes& operator=(SignalDefaultSyncModes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SignalDefaultSyncModes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SignalDefaultSyncModes_Unwrapped : int32_t {
__Synchronous = 0,
__Asynchronous = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SignalDefaultSyncModes_Unwrapped () const noexcept {
return std::bit_cast<__SignalDefaultSyncModes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Synchronous offset 0
static Zenject::SignalDefaultSyncModes const Synchronous;

/// @brief Field Asynchronous offset 0
static Zenject::SignalDefaultSyncModes const Asynchronous;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(Zenject::SignalDefaultSyncModes, "Zenject", "SignalDefaultSyncModes");
