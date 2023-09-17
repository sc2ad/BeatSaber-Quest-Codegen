#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
struct CameraClearFlags;
}
// Type: UnityEngine::CameraClearFlags
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10049))
// CS Name: UnityEngine.CameraClearFlags
struct CORDL_TYPE CameraClearFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CameraClearFlags(int32_t value__) noexcept;


                    constexpr CameraClearFlags(CameraClearFlags const&) = default;
                    constexpr CameraClearFlags(CameraClearFlags&&) = default;
                    constexpr CameraClearFlags& operator=(CameraClearFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CameraClearFlags& operator=(CameraClearFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CameraClearFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CameraClearFlags_Unwrapped : int32_t {
__Skybox = 1,
__Color = 2,
__SolidColor = 2,
__Depth = 3,
__Nothing = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CameraClearFlags_Unwrapped () const noexcept {
return std::bit_cast<__CameraClearFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Skybox offset 0
static ::UnityEngine::CameraClearFlags const Skybox;

/// @brief Field Color offset 0
static ::UnityEngine::CameraClearFlags const Color;

/// @brief Field SolidColor offset 0
static ::UnityEngine::CameraClearFlags const SolidColor;

/// @brief Field Depth offset 0
static ::UnityEngine::CameraClearFlags const Depth;

/// @brief Field Nothing offset 0
static ::UnityEngine::CameraClearFlags const Nothing;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CameraClearFlags, "UnityEngine", "CameraClearFlags");