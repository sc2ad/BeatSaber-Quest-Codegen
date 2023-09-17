#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
// Type: UnityEngine.Rendering::RenderBufferLoadAction
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10268))
// CS Name: UnityEngine.Rendering.RenderBufferLoadAction
struct CORDL_TYPE RenderBufferLoadAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RenderBufferLoadAction(int32_t value__) noexcept;


                    constexpr RenderBufferLoadAction(RenderBufferLoadAction const&) = default;
                    constexpr RenderBufferLoadAction(RenderBufferLoadAction&&) = default;
                    constexpr RenderBufferLoadAction& operator=(RenderBufferLoadAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderBufferLoadAction& operator=(RenderBufferLoadAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderBufferLoadAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RenderBufferLoadAction_Unwrapped : int32_t {
__Load = 0,
__Clear = 1,
__DontCare = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RenderBufferLoadAction_Unwrapped () const noexcept {
return std::bit_cast<__RenderBufferLoadAction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Load offset 0
static ::UnityEngine::Rendering::RenderBufferLoadAction const Load;

/// @brief Field Clear offset 0
static ::UnityEngine::Rendering::RenderBufferLoadAction const Clear;

/// @brief Field DontCare offset 0
static ::UnityEngine::Rendering::RenderBufferLoadAction const DontCare;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderBufferLoadAction, "UnityEngine.Rendering", "RenderBufferLoadAction");
