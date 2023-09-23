#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct OVRMeshData;
}
// Type: ::OVRMeshData
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8481))
// CS Name: OVRMeshData
struct CORDL_TYPE OVRMeshData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "mesh", ty: "UnityEngine::Mesh", modifiers: "", def_value: None }, CppParam { name: "material", ty: "UnityEngine::Material", modifiers: "", def_value: None }]
constexpr OVRMeshData(UnityEngine::Mesh mesh, UnityEngine::Material material) noexcept;


                    constexpr OVRMeshData(OVRMeshData const&) = default;
                    constexpr OVRMeshData(OVRMeshData&&) = default;
                    constexpr OVRMeshData& operator=(OVRMeshData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OVRMeshData& operator=(OVRMeshData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OVRMeshData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Mesh __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(UnityEngine::Mesh value) ;

constexpr UnityEngine::Mesh __get_mesh() const;

 UnityEngine::Material __declspec(property(get=__get_material, put=__set_material))  material;

constexpr void __set_material(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_material() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMeshData, "", "OVRMeshData");
