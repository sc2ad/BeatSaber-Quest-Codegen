#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::EventSystems {
struct MoveDirection;
}
// Type: UnityEngine.EventSystems::MoveDirection
namespace UnityEngine::EventSystems {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13146))
// CS Name: UnityEngine.EventSystems.MoveDirection
struct CORDL_TYPE MoveDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MoveDirection(int32_t value__) noexcept;


                    constexpr MoveDirection(MoveDirection const&) = default;
                    constexpr MoveDirection(MoveDirection&&) = default;
                    constexpr MoveDirection& operator=(MoveDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr MoveDirection& operator=(MoveDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit MoveDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __MoveDirection_Unwrapped : int32_t {
__Left = 0,
__Up = 1,
__Right = 2,
__Down = 3,
__None = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __MoveDirection_Unwrapped () const noexcept {
return std::bit_cast<__MoveDirection_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static UnityEngine::EventSystems::MoveDirection const Left;

/// @brief Field Up offset 0
static UnityEngine::EventSystems::MoveDirection const Up;

/// @brief Field Right offset 0
static UnityEngine::EventSystems::MoveDirection const Right;

/// @brief Field Down offset 0
static UnityEngine::EventSystems::MoveDirection const Down;

/// @brief Field None offset 0
static UnityEngine::EventSystems::MoveDirection const None;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::MoveDirection, "UnityEngine.EventSystems", "MoveDirection");
