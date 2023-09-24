#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::UIElements {
struct TransformOriginOffset;
}
// Type: UnityEngine.UIElements::TransformOriginOffset
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6981))
// CS Name: UnityEngine.UIElements.TransformOriginOffset
struct CORDL_TYPE TransformOriginOffset : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TransformOriginOffset(int32_t value__) noexcept;


                    constexpr TransformOriginOffset(TransformOriginOffset const&) = default;
                    constexpr TransformOriginOffset(TransformOriginOffset&&) = default;
                    constexpr TransformOriginOffset& operator=(TransformOriginOffset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TransformOriginOffset& operator=(TransformOriginOffset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TransformOriginOffset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TransformOriginOffset_Unwrapped : int32_t {
__Left = 1,
__Right = 2,
__Top = 3,
__Bottom = 4,
__Center = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransformOriginOffset_Unwrapped () const noexcept {
return std::bit_cast<__TransformOriginOffset_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Left offset 0
static UnityEngine::UIElements::TransformOriginOffset const Left;

/// @brief Field Right offset 0
static UnityEngine::UIElements::TransformOriginOffset const Right;

/// @brief Field Top offset 0
static UnityEngine::UIElements::TransformOriginOffset const Top;

/// @brief Field Bottom offset 0
static UnityEngine::UIElements::TransformOriginOffset const Bottom;

/// @brief Field Center offset 0
static UnityEngine::UIElements::TransformOriginOffset const Center;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TransformOriginOffset, "UnityEngine.UIElements", "TransformOriginOffset");
