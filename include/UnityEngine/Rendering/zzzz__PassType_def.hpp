#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
struct PassType;
}
// Type: UnityEngine.Rendering::PassType
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10276))
// CS Name: UnityEngine.Rendering.PassType
struct CORDL_TYPE PassType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PassType(int32_t value__) noexcept;


                    constexpr PassType(PassType const&) = default;
                    constexpr PassType(PassType&&) = default;
                    constexpr PassType& operator=(PassType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PassType& operator=(PassType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PassType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PassType_Unwrapped : int32_t {
__Normal = 0,
__Vertex = 1,
__VertexLM = 2,
__VertexLMRGBM = 3,
__ForwardBase = 4,
__ForwardAdd = 5,
__LightPrePassBase = 6,
__LightPrePassFinal = 7,
__ShadowCaster = 8,
__Deferred = 10,
__Meta = 11,
__MotionVectors = 12,
__ScriptableRenderPipeline = 13,
__ScriptableRenderPipelineDefaultUnlit = 14,
__GrabPass = 15,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PassType_Unwrapped () const noexcept {
return std::bit_cast<__PassType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Normal offset 0
static UnityEngine::Rendering::PassType const Normal;

/// @brief Field Vertex offset 0
static UnityEngine::Rendering::PassType const Vertex;

/// @brief Field VertexLM offset 0
static UnityEngine::Rendering::PassType const VertexLM;

/// @brief Field VertexLMRGBM offset 0
static UnityEngine::Rendering::PassType const VertexLMRGBM;

/// @brief Field ForwardBase offset 0
static UnityEngine::Rendering::PassType const ForwardBase;

/// @brief Field ForwardAdd offset 0
static UnityEngine::Rendering::PassType const ForwardAdd;

/// @brief Field LightPrePassBase offset 0
static UnityEngine::Rendering::PassType const LightPrePassBase;

/// @brief Field LightPrePassFinal offset 0
static UnityEngine::Rendering::PassType const LightPrePassFinal;

/// @brief Field ShadowCaster offset 0
static UnityEngine::Rendering::PassType const ShadowCaster;

/// @brief Field Deferred offset 0
static UnityEngine::Rendering::PassType const Deferred;

/// @brief Field Meta offset 0
static UnityEngine::Rendering::PassType const Meta;

/// @brief Field MotionVectors offset 0
static UnityEngine::Rendering::PassType const MotionVectors;

/// @brief Field ScriptableRenderPipeline offset 0
static UnityEngine::Rendering::PassType const ScriptableRenderPipeline;

/// @brief Field ScriptableRenderPipelineDefaultUnlit offset 0
static UnityEngine::Rendering::PassType const ScriptableRenderPipelineDefaultUnlit;

/// @brief Field GrabPass offset 0
static UnityEngine::Rendering::PassType const GrabPass;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::PassType, "UnityEngine.Rendering", "PassType");
