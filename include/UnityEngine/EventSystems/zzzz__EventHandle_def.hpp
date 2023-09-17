#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::EventSystems {
struct EventHandle;
}
// Type: UnityEngine.EventSystems::EventHandle
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13108))
// CS Name: UnityEngine.EventSystems.EventHandle
struct CORDL_TYPE EventHandle : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr EventHandle(int32_t value__) noexcept;


                    constexpr EventHandle(EventHandle const&) = default;
                    constexpr EventHandle(EventHandle&&) = default;
                    constexpr EventHandle& operator=(EventHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr EventHandle& operator=(EventHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit EventHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __EventHandle_Unwrapped : int32_t {
__Unused = 0,
__Used = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EventHandle_Unwrapped () const noexcept {
return std::bit_cast<__EventHandle_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unused offset 0
static ::UnityEngine::EventSystems::EventHandle const Unused;

/// @brief Field Used offset 0
static ::UnityEngine::EventSystems::EventHandle const Used;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::EventHandle, "UnityEngine.EventSystems", "EventHandle");
