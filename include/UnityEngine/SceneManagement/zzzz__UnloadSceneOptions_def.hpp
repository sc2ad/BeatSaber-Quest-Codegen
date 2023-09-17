#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::SceneManagement {
struct UnloadSceneOptions;
}
// Type: UnityEngine.SceneManagement::UnloadSceneOptions
namespace UnityEngine::SceneManagement {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10314))
// CS Name: UnityEngine.SceneManagement.UnloadSceneOptions
struct CORDL_TYPE UnloadSceneOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnloadSceneOptions(int32_t value__) noexcept;


                    constexpr UnloadSceneOptions(UnloadSceneOptions const&) = default;
                    constexpr UnloadSceneOptions(UnloadSceneOptions&&) = default;
                    constexpr UnloadSceneOptions& operator=(UnloadSceneOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnloadSceneOptions& operator=(UnloadSceneOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnloadSceneOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnloadSceneOptions_Unwrapped : int32_t {
__None = 0,
__UnloadAllEmbeddedSceneObjects = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnloadSceneOptions_Unwrapped () const noexcept {
return std::bit_cast<__UnloadSceneOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::UnityEngine::SceneManagement::UnloadSceneOptions const None;

/// @brief Field UnloadAllEmbeddedSceneObjects offset 0
static ::UnityEngine::SceneManagement::UnloadSceneOptions const UnloadAllEmbeddedSceneObjects;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::SceneManagement
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SceneManagement::UnloadSceneOptions, "UnityEngine.SceneManagement", "UnloadSceneOptions");
