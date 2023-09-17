#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct AnimationEventSource;
}
// Type: UnityEngine::AnimationEventSource
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15034))
// CS Name: UnityEngine.AnimationEventSource
struct CORDL_TYPE AnimationEventSource : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimationEventSource(int32_t value__) noexcept;


                    constexpr AnimationEventSource(AnimationEventSource const&) = default;
                    constexpr AnimationEventSource(AnimationEventSource&&) = default;
                    constexpr AnimationEventSource& operator=(AnimationEventSource const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimationEventSource& operator=(AnimationEventSource&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimationEventSource(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnimationEventSource_Unwrapped : int32_t {
__NoSource = 0,
__Legacy = 1,
__Animator = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimationEventSource_Unwrapped () const noexcept {
return std::bit_cast<__AnimationEventSource_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NoSource offset 0
static ::UnityEngine::AnimationEventSource const NoSource;

/// @brief Field Legacy offset 0
static ::UnityEngine::AnimationEventSource const Legacy;

/// @brief Field Animator offset 0
static ::UnityEngine::AnimationEventSource const Animator;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AnimationEventSource, "UnityEngine", "AnimationEventSource");
