#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::Rendering {
struct BatchVisibility;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
namespace UnityEngine {
struct Plane;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
// Type: UnityEngine.Rendering::BatchCullingContext
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10301))
// CS Name: UnityEngine.Rendering.BatchCullingContext
struct CORDL_TYPE BatchCullingContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "cullingPlanes", ty: "Unity::Collections::NativeArray_1<UnityEngine::Plane>", modifiers: "", def_value: None }, CppParam { name: "batchVisibility", ty: "Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility>", modifiers: "", def_value: None }, CppParam { name: "visibleIndices", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "visibleIndicesY", ty: "Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: None }, CppParam { name: "lodParameters", ty: "UnityEngine::Rendering::LODParameters", modifiers: "", def_value: None }, CppParam { name: "cullingMatrix", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: None }]
constexpr BatchCullingContext(Unity::Collections::NativeArray_1<UnityEngine::Plane> cullingPlanes, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> batchVisibility, Unity::Collections::NativeArray_1<int32_t> visibleIndices, Unity::Collections::NativeArray_1<int32_t> visibleIndicesY, UnityEngine::Rendering::LODParameters lodParameters, UnityEngine::Matrix4x4 cullingMatrix, float_t nearPlane) noexcept;


                    constexpr BatchCullingContext(BatchCullingContext const&) = default;
                    constexpr BatchCullingContext(BatchCullingContext&&) = default;
                    constexpr BatchCullingContext& operator=(BatchCullingContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr BatchCullingContext& operator=(BatchCullingContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit BatchCullingContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 Unity::Collections::NativeArray_1<UnityEngine::Plane> __declspec(property(get=__get_cullingPlanes, put=__set_cullingPlanes))  cullingPlanes;

constexpr void __set_cullingPlanes(Unity::Collections::NativeArray_1<UnityEngine::Plane> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Plane> __get_cullingPlanes() const;

 Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> __declspec(property(get=__get_batchVisibility, put=__set_batchVisibility))  batchVisibility;

constexpr void __set_batchVisibility(Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> value) ;

constexpr Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> __get_batchVisibility() const;

 Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get_visibleIndices, put=__set_visibleIndices))  visibleIndices;

constexpr void __set_visibleIndices(Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr Unity::Collections::NativeArray_1<int32_t> __get_visibleIndices() const;

 Unity::Collections::NativeArray_1<int32_t> __declspec(property(get=__get_visibleIndicesY, put=__set_visibleIndicesY))  visibleIndicesY;

constexpr void __set_visibleIndicesY(Unity::Collections::NativeArray_1<int32_t> value) ;

constexpr Unity::Collections::NativeArray_1<int32_t> __get_visibleIndicesY() const;

 UnityEngine::Rendering::LODParameters __declspec(property(get=__get_lodParameters, put=__set_lodParameters))  lodParameters;

constexpr void __set_lodParameters(UnityEngine::Rendering::LODParameters value) ;

constexpr UnityEngine::Rendering::LODParameters __get_lodParameters() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_cullingMatrix, put=__set_cullingMatrix))  cullingMatrix;

constexpr void __set_cullingMatrix(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_cullingMatrix() const;

 float_t __declspec(property(get=__get_nearPlane, put=__set_nearPlane))  nearPlane;

constexpr void __set_nearPlane(float_t value) ;

constexpr float_t __get_nearPlane() const;


// Methods

/// @brief Method .ctor addr 0x2b76a58 size 0x54 virtual false final false
 void _ctor(Unity::Collections::NativeArray_1<UnityEngine::Plane> inCullingPlanes, Unity::Collections::NativeArray_1<UnityEngine::Rendering::BatchVisibility> inOutBatchVisibility, Unity::Collections::NativeArray_1<int32_t> outVisibleIndices, Unity::Collections::NativeArray_1<int32_t> outVisibleIndicesY, UnityEngine::Rendering::LODParameters inLodParameters, UnityEngine::Matrix4x4 inCullingMatrix, float_t inNearPlane) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::BatchCullingContext, "UnityEngine.Rendering", "BatchCullingContext");
