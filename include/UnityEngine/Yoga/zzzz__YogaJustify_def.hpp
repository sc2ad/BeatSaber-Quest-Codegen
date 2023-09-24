#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaJustify;
}
// Type: UnityEngine.Yoga::YogaJustify
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15393))
// CS Name: UnityEngine.Yoga.YogaJustify
struct CORDL_TYPE YogaJustify : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr YogaJustify(int32_t value__) noexcept;


                    constexpr YogaJustify(YogaJustify const&) = default;
                    constexpr YogaJustify(YogaJustify&&) = default;
                    constexpr YogaJustify& operator=(YogaJustify const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaJustify& operator=(YogaJustify&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaJustify(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __YogaJustify_Unwrapped : int32_t {
__FlexStart = 0,
__Center = 1,
__FlexEnd = 2,
__SpaceBetween = 3,
__SpaceAround = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __YogaJustify_Unwrapped () const noexcept {
return std::bit_cast<__YogaJustify_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FlexStart offset 0
static UnityEngine::Yoga::YogaJustify const FlexStart;

/// @brief Field Center offset 0
static UnityEngine::Yoga::YogaJustify const Center;

/// @brief Field FlexEnd offset 0
static UnityEngine::Yoga::YogaJustify const FlexEnd;

/// @brief Field SpaceBetween offset 0
static UnityEngine::Yoga::YogaJustify const SpaceBetween;

/// @brief Field SpaceAround offset 0
static UnityEngine::Yoga::YogaJustify const SpaceAround;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::YogaJustify, "UnityEngine.Yoga", "YogaJustify");
