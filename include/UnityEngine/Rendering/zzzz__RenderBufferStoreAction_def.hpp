#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
// Type: UnityEngine.Rendering::RenderBufferStoreAction
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10269))
// CS Name: UnityEngine.Rendering.RenderBufferStoreAction
struct CORDL_TYPE RenderBufferStoreAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderBufferStoreAction(int32_t value__) noexcept;


                    constexpr RenderBufferStoreAction(RenderBufferStoreAction const&) = default;
                    constexpr RenderBufferStoreAction(RenderBufferStoreAction&&) = default;
                    constexpr RenderBufferStoreAction& operator=(RenderBufferStoreAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderBufferStoreAction& operator=(RenderBufferStoreAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderBufferStoreAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderBufferStoreAction_Unwrapped : int32_t {
__Store = 0,
__Resolve = 1,
__StoreAndResolve = 2,
__DontCare = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderBufferStoreAction_Unwrapped () const noexcept {
return std::bit_cast<__RenderBufferStoreAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Store offset 0
static UnityEngine::Rendering::RenderBufferStoreAction const Store;

/// @brief Field Resolve offset 0
static UnityEngine::Rendering::RenderBufferStoreAction const Resolve;

/// @brief Field StoreAndResolve offset 0
static UnityEngine::Rendering::RenderBufferStoreAction const StoreAndResolve;

/// @brief Field DontCare offset 0
static UnityEngine::Rendering::RenderBufferStoreAction const DontCare;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderBufferStoreAction, "UnityEngine.Rendering", "RenderBufferStoreAction");
