#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::AI {
struct NavMeshPathStatus;
}
// Type: UnityEngine.AI::NavMeshPathStatus
namespace UnityEngine::AI {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15960))
// CS Name: UnityEngine.AI.NavMeshPathStatus
struct CORDL_TYPE NavMeshPathStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NavMeshPathStatus(int32_t value__) noexcept;


                    constexpr NavMeshPathStatus(NavMeshPathStatus const&) = default;
                    constexpr NavMeshPathStatus(NavMeshPathStatus&&) = default;
                    constexpr NavMeshPathStatus& operator=(NavMeshPathStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NavMeshPathStatus& operator=(NavMeshPathStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NavMeshPathStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NavMeshPathStatus_Unwrapped : int32_t {
__PathComplete = 0,
__PathPartial = 1,
__PathInvalid = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NavMeshPathStatus_Unwrapped () const noexcept {
return std::bit_cast<__NavMeshPathStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PathComplete offset 0
static UnityEngine::AI::NavMeshPathStatus const PathComplete;

/// @brief Field PathPartial offset 0
static UnityEngine::AI::NavMeshPathStatus const PathPartial;

/// @brief Field PathInvalid offset 0
static UnityEngine::AI::NavMeshPathStatus const PathInvalid;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::AI
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AI::NavMeshPathStatus, "UnityEngine.AI", "NavMeshPathStatus");
