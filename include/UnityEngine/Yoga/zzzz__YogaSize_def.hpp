#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
namespace {
// Forward declare root types
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Type: UnityEngine.Yoga::YogaSize
namespace UnityEngine::Yoga {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15388))
// CS Name: UnityEngine.Yoga.YogaSize
struct CORDL_TYPE YogaSize : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "float_t", modifiers: "", def_value: None }]
constexpr YogaSize(float_t width, float_t height) noexcept;


                    constexpr YogaSize(YogaSize const&) = default;
                    constexpr YogaSize(YogaSize&&) = default;
                    constexpr YogaSize& operator=(YogaSize const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr YogaSize& operator=(YogaSize&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit YogaSize(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(float_t value) ;

constexpr float_t __get_width() const;

 float_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(float_t value) ;

constexpr float_t __get_height() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Yoga::YogaSize, "UnityEngine.Yoga", "YogaSize");
