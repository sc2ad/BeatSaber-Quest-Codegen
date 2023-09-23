#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Matrix4x4;
}
namespace Unity::Jobs {
struct JobHandle;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
// Type: UnityEngine.Rendering::BatchRendererCullingOutput
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10302))
// CS Name: UnityEngine.Rendering.BatchRendererCullingOutput
struct CORDL_TYPE BatchRendererCullingOutput : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "cullingJobsFence", ty: "Unity::Jobs::JobHandle", modifiers: "", def_value: None }, CppParam { name: "cullingMatrix", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "cullingPlanes", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "batchVisibility", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "visibleIndices", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesY", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "cullingPlanesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "batchVisibilityCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }]
constexpr BatchRendererCullingOutput(Unity::Jobs::JobHandle cullingJobsFence, UnityEngine::Matrix4x4 cullingMatrix, void* cullingPlanes, void* batchVisibility, void* visibleIndices, void* visibleIndicesY, int32_t cullingPlanesCount, int32_t batchVisibilityCount, int32_t visibleIndicesCount, float_t nearPlane) noexcept;


                    constexpr BatchRendererCullingOutput(BatchRendererCullingOutput const&) = default;
                    constexpr BatchRendererCullingOutput(BatchRendererCullingOutput&&) = default;
                    constexpr BatchRendererCullingOutput& operator=(BatchRendererCullingOutput const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BatchRendererCullingOutput& operator=(BatchRendererCullingOutput&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x80};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BatchRendererCullingOutput(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Jobs::JobHandle __declspec(property(get=__get_cullingJobsFence, put=__set_cullingJobsFence))  cullingJobsFence;

constexpr void __set_cullingJobsFence(Unity::Jobs::JobHandle value) ;

constexpr Unity::Jobs::JobHandle __get_cullingJobsFence() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_cullingMatrix, put=__set_cullingMatrix))  cullingMatrix;

constexpr void __set_cullingMatrix(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_cullingMatrix() const;

 void* __declspec(property(get=__get_cullingPlanes, put=__set_cullingPlanes))  cullingPlanes;

constexpr void __set_cullingPlanes(void* value) ;

constexpr void* __get_cullingPlanes() const;

 void* __declspec(property(get=__get_batchVisibility, put=__set_batchVisibility))  batchVisibility;

constexpr void __set_batchVisibility(void* value) ;

constexpr void* __get_batchVisibility() const;

 void* __declspec(property(get=__get_visibleIndices, put=__set_visibleIndices))  visibleIndices;

constexpr void __set_visibleIndices(void* value) ;

constexpr void* __get_visibleIndices() const;

 void* __declspec(property(get=__get_visibleIndicesY, put=__set_visibleIndicesY))  visibleIndicesY;

constexpr void __set_visibleIndicesY(void* value) ;

constexpr void* __get_visibleIndicesY() const;

 int32_t __declspec(property(get=__get_cullingPlanesCount, put=__set_cullingPlanesCount))  cullingPlanesCount;

constexpr void __set_cullingPlanesCount(int32_t value) ;

constexpr int32_t __get_cullingPlanesCount() const;

 int32_t __declspec(property(get=__get_batchVisibilityCount, put=__set_batchVisibilityCount))  batchVisibilityCount;

constexpr void __set_batchVisibilityCount(int32_t value) ;

constexpr int32_t __get_batchVisibilityCount() const;

 int32_t __declspec(property(get=__get_visibleIndicesCount, put=__set_visibleIndicesCount))  visibleIndicesCount;

constexpr void __set_visibleIndicesCount(int32_t value) ;

constexpr int32_t __get_visibleIndicesCount() const;

 float_t __declspec(property(get=__get_nearPlane, put=__set_nearPlane))  nearPlane;

constexpr void __set_nearPlane(float_t value) ;

constexpr float_t __get_nearPlane() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchRendererCullingOutput, "UnityEngine.Rendering", "BatchRendererCullingOutput");
