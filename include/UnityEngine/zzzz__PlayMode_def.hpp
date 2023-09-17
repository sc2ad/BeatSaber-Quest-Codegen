#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct PlayMode;
}
// Type: UnityEngine::PlayMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15033))
// CS Name: UnityEngine.PlayMode
struct CORDL_TYPE PlayMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PlayMode(int32_t value__) noexcept;


                    constexpr PlayMode(PlayMode const&) = default;
                    constexpr PlayMode(PlayMode&&) = default;
                    constexpr PlayMode& operator=(PlayMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PlayMode& operator=(PlayMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PlayMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PlayMode_Unwrapped : int32_t {
__StopSameLayer = 0,
__StopAll = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlayMode_Unwrapped () const noexcept {
return std::bit_cast<__PlayMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field StopSameLayer offset 0
static ::UnityEngine::PlayMode const StopSameLayer;

/// @brief Field StopAll offset 0
static ::UnityEngine::PlayMode const StopAll;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PlayMode, "UnityEngine", "PlayMode");