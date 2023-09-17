#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct WrapMode;
}
// Type: UnityEngine::WrapMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9984))
// CS Name: UnityEngine.WrapMode
struct CORDL_TYPE WrapMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr WrapMode(int32_t value__) noexcept;


                    constexpr WrapMode(WrapMode const&) = default;
                    constexpr WrapMode(WrapMode&&) = default;
                    constexpr WrapMode& operator=(WrapMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr WrapMode& operator=(WrapMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit WrapMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __WrapMode_Unwrapped : int32_t {
__Once = 1,
__Loop = 2,
__PingPong = 4,
__Default = 0,
__ClampForever = 8,
__Clamp = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __WrapMode_Unwrapped () const noexcept {
return std::bit_cast<__WrapMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Once offset 0
static ::UnityEngine::WrapMode const Once;

/// @brief Field Loop offset 0
static ::UnityEngine::WrapMode const Loop;

/// @brief Field PingPong offset 0
static ::UnityEngine::WrapMode const PingPong;

/// @brief Field Default offset 0
static ::UnityEngine::WrapMode const Default;

/// @brief Field ClampForever offset 0
static ::UnityEngine::WrapMode const ClampForever;

/// @brief Field Clamp offset 0
static ::UnityEngine::WrapMode const Clamp;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::WrapMode, "UnityEngine", "WrapMode");
