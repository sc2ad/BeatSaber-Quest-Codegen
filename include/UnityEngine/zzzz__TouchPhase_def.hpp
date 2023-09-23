#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct TouchPhase;
}
// Type: UnityEngine::TouchPhase
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15834))
// CS Name: UnityEngine.TouchPhase
struct CORDL_TYPE TouchPhase : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TouchPhase(int32_t value__) noexcept;


                    constexpr TouchPhase(TouchPhase const&) = default;
                    constexpr TouchPhase(TouchPhase&&) = default;
                    constexpr TouchPhase& operator=(TouchPhase const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TouchPhase& operator=(TouchPhase&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TouchPhase(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TouchPhase_Unwrapped : int32_t {
__Began = 0,
__Moved = 1,
__Stationary = 2,
__Ended = 3,
__Canceled = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TouchPhase_Unwrapped () const noexcept {
return std::bit_cast<__TouchPhase_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Began offset 0
static UnityEngine::TouchPhase const Began;

/// @brief Field Moved offset 0
static UnityEngine::TouchPhase const Moved;

/// @brief Field Stationary offset 0
static UnityEngine::TouchPhase const Stationary;

/// @brief Field Ended offset 0
static UnityEngine::TouchPhase const Ended;

/// @brief Field Canceled offset 0
static UnityEngine::TouchPhase const Canceled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TouchPhase, "UnityEngine", "TouchPhase");
