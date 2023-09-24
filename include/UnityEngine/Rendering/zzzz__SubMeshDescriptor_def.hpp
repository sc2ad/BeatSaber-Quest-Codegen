#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct MeshTopology;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct SubMeshDescriptor;
}
// Type: UnityEngine.Rendering::SubMeshDescriptor
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10280))
// CS Name: UnityEngine.Rendering.SubMeshDescriptor
struct CORDL_TYPE SubMeshDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_bounds_k__BackingField", ty: "UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "_topology_k__BackingField", ty: "UnityEngine::MeshTopology", modifiers: "", def_value: None }, CppParam { name: "_indexStart_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_indexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_baseVertex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_firstVertex_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_vertexCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SubMeshDescriptor(UnityEngine::Bounds _bounds_k__BackingField, UnityEngine::MeshTopology _topology_k__BackingField, int32_t _indexStart_k__BackingField, int32_t _indexCount_k__BackingField, int32_t _baseVertex_k__BackingField, int32_t _firstVertex_k__BackingField, int32_t _vertexCount_k__BackingField) noexcept;


                    constexpr SubMeshDescriptor(SubMeshDescriptor const&) = default;
                    constexpr SubMeshDescriptor(SubMeshDescriptor&&) = default;
                    constexpr SubMeshDescriptor& operator=(SubMeshDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SubMeshDescriptor& operator=(SubMeshDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x30};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SubMeshDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Bounds __declspec(property(get=__get__bounds_k__BackingField, put=__set__bounds_k__BackingField))  _bounds_k__BackingField;

constexpr void __set__bounds_k__BackingField(UnityEngine::Bounds value) ;

constexpr UnityEngine::Bounds __get__bounds_k__BackingField() const;

 UnityEngine::MeshTopology __declspec(property(get=__get__topology_k__BackingField, put=__set__topology_k__BackingField))  _topology_k__BackingField;

constexpr void __set__topology_k__BackingField(UnityEngine::MeshTopology value) ;

constexpr UnityEngine::MeshTopology __get__topology_k__BackingField() const;

 int32_t __declspec(property(get=__get__indexStart_k__BackingField, put=__set__indexStart_k__BackingField))  _indexStart_k__BackingField;

constexpr void __set__indexStart_k__BackingField(int32_t value) ;

constexpr int32_t __get__indexStart_k__BackingField() const;

 int32_t __declspec(property(get=__get__indexCount_k__BackingField, put=__set__indexCount_k__BackingField))  _indexCount_k__BackingField;

constexpr void __set__indexCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__indexCount_k__BackingField() const;

 int32_t __declspec(property(get=__get__baseVertex_k__BackingField, put=__set__baseVertex_k__BackingField))  _baseVertex_k__BackingField;

constexpr void __set__baseVertex_k__BackingField(int32_t value) ;

constexpr int32_t __get__baseVertex_k__BackingField() const;

 int32_t __declspec(property(get=__get__firstVertex_k__BackingField, put=__set__firstVertex_k__BackingField))  _firstVertex_k__BackingField;

constexpr void __set__firstVertex_k__BackingField(int32_t value) ;

constexpr int32_t __get__firstVertex_k__BackingField() const;

 int32_t __declspec(property(get=__get__vertexCount_k__BackingField, put=__set__vertexCount_k__BackingField))  _vertexCount_k__BackingField;

constexpr void __set__vertexCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__vertexCount_k__BackingField() const;


// Properties

 UnityEngine::Bounds __declspec(property(get=get_bounds, put=set_bounds))  bounds;

 UnityEngine::MeshTopology __declspec(property(get=get_topology, put=set_topology))  topology;

 int32_t __declspec(property(get=get_indexStart, put=set_indexStart))  indexStart;

 int32_t __declspec(property(get=get_indexCount, put=set_indexCount))  indexCount;

 int32_t __declspec(property(get=get_baseVertex, put=set_baseVertex))  baseVertex;

 int32_t __declspec(property(get=get_firstVertex, put=set_firstVertex))  firstVertex;

 int32_t __declspec(property(get=get_vertexCount, put=set_vertexCount))  vertexCount;


// Methods

/// @brief Method .ctor addr 0x2b73a54 size 0x18 virtual false final false
 void _ctor(int32_t indexStart, int32_t indexCount, UnityEngine::MeshTopology topology) ;

/// @brief Method get_bounds addr 0x2b73a6c size 0x14 virtual false final false
 UnityEngine::Bounds get_bounds() ;

/// @brief Method set_bounds addr 0x2b73a80 size 0x14 virtual false final false
 void set_bounds(UnityEngine::Bounds value) ;

/// @brief Method get_topology addr 0x2b73a94 size 0x8 virtual false final false
 UnityEngine::MeshTopology get_topology() ;

/// @brief Method set_topology addr 0x2b73a9c size 0x8 virtual false final false
 void set_topology(UnityEngine::MeshTopology value) ;

/// @brief Method get_indexStart addr 0x2b73aa4 size 0x8 virtual false final false
 int32_t get_indexStart() ;

/// @brief Method set_indexStart addr 0x2b73aac size 0x8 virtual false final false
 void set_indexStart(int32_t value) ;

/// @brief Method get_indexCount addr 0x2b73ab4 size 0x8 virtual false final false
 int32_t get_indexCount() ;

/// @brief Method set_indexCount addr 0x2b73abc size 0x8 virtual false final false
 void set_indexCount(int32_t value) ;

/// @brief Method get_baseVertex addr 0x2b73ac4 size 0x8 virtual false final false
 int32_t get_baseVertex() ;

/// @brief Method set_baseVertex addr 0x2b73acc size 0x8 virtual false final false
 void set_baseVertex(int32_t value) ;

/// @brief Method get_firstVertex addr 0x2b73ad4 size 0x8 virtual false final false
 int32_t get_firstVertex() ;

/// @brief Method set_firstVertex addr 0x2b73adc size 0x8 virtual false final false
 void set_firstVertex(int32_t value) ;

/// @brief Method get_vertexCount addr 0x2b73ae4 size 0x8 virtual false final false
 int32_t get_vertexCount() ;

/// @brief Method set_vertexCount addr 0x2b73aec size 0x8 virtual false final false
 void set_vertexCount(int32_t value) ;

/// @brief Method ToString addr 0x2b73af4 size 0x29c virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::SubMeshDescriptor, "UnityEngine.Rendering", "SubMeshDescriptor");
