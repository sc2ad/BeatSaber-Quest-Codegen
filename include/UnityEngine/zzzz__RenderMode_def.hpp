#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct RenderMode;
}
// Type: UnityEngine::RenderMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15757))
// CS Name: UnityEngine.RenderMode
struct CORDL_TYPE RenderMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderMode(int32_t value__) noexcept;


                    constexpr RenderMode(RenderMode const&) = default;
                    constexpr RenderMode(RenderMode&&) = default;
                    constexpr RenderMode& operator=(RenderMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderMode& operator=(RenderMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderMode_Unwrapped : int32_t {
__ScreenSpaceOverlay = 0,
__ScreenSpaceCamera = 1,
__WorldSpace = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderMode_Unwrapped () const noexcept {
return std::bit_cast<__RenderMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ScreenSpaceOverlay offset 0
static ::UnityEngine::RenderMode const ScreenSpaceOverlay;

/// @brief Field ScreenSpaceCamera offset 0
static ::UnityEngine::RenderMode const ScreenSpaceCamera;

/// @brief Field WorldSpace offset 0
static ::UnityEngine::RenderMode const WorldSpace;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderMode, "UnityEngine", "RenderMode");
