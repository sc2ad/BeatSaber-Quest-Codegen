#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct ImagePosition;
}
// Type: UnityEngine::ImagePosition
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14787))
// CS Name: UnityEngine.ImagePosition
struct CORDL_TYPE ImagePosition : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ImagePosition(int32_t value__) noexcept;


                    constexpr ImagePosition(ImagePosition const&) = default;
                    constexpr ImagePosition(ImagePosition&&) = default;
                    constexpr ImagePosition& operator=(ImagePosition const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ImagePosition& operator=(ImagePosition&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ImagePosition(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ImagePosition_Unwrapped : int32_t {
__ImageLeft = 0,
__ImageAbove = 1,
__ImageOnly = 2,
__TextOnly = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ImagePosition_Unwrapped () const noexcept {
return std::bit_cast<__ImagePosition_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ImageLeft offset 0
static ::UnityEngine::ImagePosition const ImageLeft;

/// @brief Field ImageAbove offset 0
static ::UnityEngine::ImagePosition const ImageAbove;

/// @brief Field ImageOnly offset 0
static ::UnityEngine::ImagePosition const ImageOnly;

/// @brief Field TextOnly offset 0
static ::UnityEngine::ImagePosition const TextOnly;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ImagePosition, "UnityEngine", "ImagePosition");
