#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct RotationOrder;
}
// Type: UnityEngine::RotationOrder
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10215))
// CS Name: UnityEngine.RotationOrder
struct CORDL_TYPE RotationOrder : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RotationOrder(int32_t value__) noexcept;


                    constexpr RotationOrder(RotationOrder const&) = default;
                    constexpr RotationOrder(RotationOrder&&) = default;
                    constexpr RotationOrder& operator=(RotationOrder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RotationOrder& operator=(RotationOrder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RotationOrder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RotationOrder_Unwrapped : int32_t {
__OrderXYZ = 0,
__OrderXZY = 1,
__OrderYZX = 2,
__OrderYXZ = 3,
__OrderZXY = 4,
__OrderZYX = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RotationOrder_Unwrapped () const noexcept {
return std::bit_cast<__RotationOrder_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field OrderXYZ offset 0
static UnityEngine::RotationOrder const OrderXYZ;

/// @brief Field OrderXZY offset 0
static UnityEngine::RotationOrder const OrderXZY;

/// @brief Field OrderYZX offset 0
static UnityEngine::RotationOrder const OrderYZX;

/// @brief Field OrderYXZ offset 0
static UnityEngine::RotationOrder const OrderYXZ;

/// @brief Field OrderZXY offset 0
static UnityEngine::RotationOrder const OrderZXY;

/// @brief Field OrderZYX offset 0
static UnityEngine::RotationOrder const OrderZYX;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RotationOrder, "UnityEngine", "RotationOrder");
