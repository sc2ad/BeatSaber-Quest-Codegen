#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
struct AnimatorRecorderMode;
}
// Type: UnityEngine::AnimatorRecorderMode
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15046))
// CS Name: UnityEngine.AnimatorRecorderMode
struct CORDL_TYPE AnimatorRecorderMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AnimatorRecorderMode(int32_t value__) noexcept;


                    constexpr AnimatorRecorderMode(AnimatorRecorderMode const&) = default;
                    constexpr AnimatorRecorderMode(AnimatorRecorderMode&&) = default;
                    constexpr AnimatorRecorderMode& operator=(AnimatorRecorderMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr AnimatorRecorderMode& operator=(AnimatorRecorderMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit AnimatorRecorderMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __AnimatorRecorderMode_Unwrapped : int32_t {
__Offline = 0,
__Playback = 1,
__Record = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __AnimatorRecorderMode_Unwrapped () const noexcept {
return std::bit_cast<__AnimatorRecorderMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Offline offset 0
static UnityEngine::AnimatorRecorderMode const Offline;

/// @brief Field Playback offset 0
static UnityEngine::AnimatorRecorderMode const Playback;

/// @brief Field Record offset 0
static UnityEngine::AnimatorRecorderMode const Record;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AnimatorRecorderMode, "UnityEngine", "AnimatorRecorderMode");
