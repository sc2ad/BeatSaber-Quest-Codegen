#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct CommandType;
}
// Type: UnityEngine.UIElements.UIR::CommandType
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7542))
// CS Name: UnityEngine.UIElements.UIR.CommandType
struct CORDL_TYPE CommandType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CommandType(int32_t value__) noexcept;


                    constexpr CommandType(CommandType const&) = default;
                    constexpr CommandType(CommandType&&) = default;
                    constexpr CommandType& operator=(CommandType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CommandType& operator=(CommandType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CommandType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CommandType_Unwrapped : int32_t {
__Draw = 0,
__ImmediateCull = 1,
__Immediate = 2,
__PushView = 3,
__PopView = 4,
__PushScissor = 5,
__PopScissor = 6,
__PushRenderTexture = 7,
__PopRenderTexture = 8,
__BlitToPreviousRT = 9,
__PushDefaultMaterial = 10,
__PopDefaultMaterial = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CommandType_Unwrapped () const noexcept {
return std::bit_cast<__CommandType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Draw offset 0
static ::UnityEngine::UIElements::UIR::CommandType const Draw;

/// @brief Field ImmediateCull offset 0
static ::UnityEngine::UIElements::UIR::CommandType const ImmediateCull;

/// @brief Field Immediate offset 0
static ::UnityEngine::UIElements::UIR::CommandType const Immediate;

/// @brief Field PushView offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PushView;

/// @brief Field PopView offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PopView;

/// @brief Field PushScissor offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PushScissor;

/// @brief Field PopScissor offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PopScissor;

/// @brief Field PushRenderTexture offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PushRenderTexture;

/// @brief Field PopRenderTexture offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PopRenderTexture;

/// @brief Field BlitToPreviousRT offset 0
static ::UnityEngine::UIElements::UIR::CommandType const BlitToPreviousRT;

/// @brief Field PushDefaultMaterial offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PushDefaultMaterial;

/// @brief Field PopDefaultMaterial offset 0
static ::UnityEngine::UIElements::UIR::CommandType const PopDefaultMaterial;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::CommandType, "UnityEngine.UIElements.UIR", "CommandType");
