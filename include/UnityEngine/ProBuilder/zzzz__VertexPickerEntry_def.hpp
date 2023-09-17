#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
struct VertexPickerEntry;
}
// Type: UnityEngine.ProBuilder::VertexPickerEntry
namespace UnityEngine::ProBuilder {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12134))
// CS Name: UnityEngine.ProBuilder.VertexPickerEntry
struct CORDL_TYPE VertexPickerEntry : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mesh", ty: "::UnityEngine::ProBuilder::ProBuilderMesh", modifiers: "", def_value: None }, CppParam { name: "vertex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "screenDistance", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "worldPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }]
constexpr VertexPickerEntry(::UnityEngine::ProBuilder::ProBuilderMesh mesh, int32_t vertex, float_t screenDistance, ::UnityEngine::Vector3 worldPosition) noexcept;


                    constexpr VertexPickerEntry(VertexPickerEntry const&) = default;
                    constexpr VertexPickerEntry(VertexPickerEntry&&) = default;
                    constexpr VertexPickerEntry& operator=(VertexPickerEntry const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr VertexPickerEntry& operator=(VertexPickerEntry&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit VertexPickerEntry(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::ProBuilder::ProBuilderMesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(::UnityEngine::ProBuilder::ProBuilderMesh value) ;

constexpr ::UnityEngine::ProBuilder::ProBuilderMesh __get_mesh() const;

 int32_t __declspec(property(get=__get_vertex, put=__set_vertex))  vertex;

constexpr void __set_vertex(int32_t value) ;

constexpr int32_t __get_vertex() const;

 float_t __declspec(property(get=__get_screenDistance, put=__set_screenDistance))  screenDistance;

constexpr void __set_screenDistance(float_t value) ;

constexpr float_t __get_screenDistance() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get_worldPosition, put=__set_worldPosition))  worldPosition;

constexpr void __set_worldPosition(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get_worldPosition() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::VertexPickerEntry, "UnityEngine.ProBuilder", "VertexPickerEntry");
