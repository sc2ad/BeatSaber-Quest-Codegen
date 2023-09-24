#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine {
struct CombineInstance;
}
// Type: UnityEngine::CombineInstance
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10078))
// CS Name: UnityEngine.CombineInstance
struct CORDL_TYPE CombineInstance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_MeshInstanceID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_SubMeshIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Transform", ty: "UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "m_LightmapScaleOffset", ty: "UnityEngine::Vector4", modifiers: "", def_value: None }, CppParam { name: "m_RealtimeLightmapScaleOffset", ty: "UnityEngine::Vector4", modifiers: "", def_value: None }]
constexpr CombineInstance(int32_t m_MeshInstanceID, int32_t m_SubMeshIndex, UnityEngine::Matrix4x4 m_Transform, UnityEngine::Vector4 m_LightmapScaleOffset, UnityEngine::Vector4 m_RealtimeLightmapScaleOffset) noexcept;


                    constexpr CombineInstance(CombineInstance const&) = default;
                    constexpr CombineInstance(CombineInstance&&) = default;
                    constexpr CombineInstance& operator=(CombineInstance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CombineInstance& operator=(CombineInstance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CombineInstance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_MeshInstanceID, put=__set_m_MeshInstanceID))  m_MeshInstanceID;

constexpr void __set_m_MeshInstanceID(int32_t value) ;

constexpr int32_t __get_m_MeshInstanceID() const;

 int32_t __declspec(property(get=__get_m_SubMeshIndex, put=__set_m_SubMeshIndex))  m_SubMeshIndex;

constexpr void __set_m_SubMeshIndex(int32_t value) ;

constexpr int32_t __get_m_SubMeshIndex() const;

 UnityEngine::Matrix4x4 __declspec(property(get=__get_m_Transform, put=__set_m_Transform))  m_Transform;

constexpr void __set_m_Transform(UnityEngine::Matrix4x4 value) ;

constexpr UnityEngine::Matrix4x4 __get_m_Transform() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_LightmapScaleOffset, put=__set_m_LightmapScaleOffset))  m_LightmapScaleOffset;

constexpr void __set_m_LightmapScaleOffset(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_LightmapScaleOffset() const;

 UnityEngine::Vector4 __declspec(property(get=__get_m_RealtimeLightmapScaleOffset, put=__set_m_RealtimeLightmapScaleOffset))  m_RealtimeLightmapScaleOffset;

constexpr void __set_m_RealtimeLightmapScaleOffset(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_m_RealtimeLightmapScaleOffset() const;


// Properties

 UnityEngine::Mesh __declspec(property(get=get_mesh, put=set_mesh))  mesh;

 int32_t __declspec(property(put=set_subMeshIndex))  subMeshIndex;

 UnityEngine::Matrix4x4 __declspec(property(put=set_transform))  transform;


// Methods

/// @brief Method get_mesh addr 0x2b4d448 size 0xc virtual false final false
 UnityEngine::Mesh get_mesh() ;

/// @brief Method set_mesh addr 0x2b4d454 size 0x88 virtual false final false
 void set_mesh(UnityEngine::Mesh value) ;

/// @brief Method set_subMeshIndex addr 0x2b4d680 size 0x8 virtual false final false
 void set_subMeshIndex(int32_t value) ;

/// @brief Method set_transform addr 0x2b4d688 size 0x1c virtual false final false
 void set_transform(UnityEngine::Matrix4x4 value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CombineInstance, "UnityEngine", "CombineInstance");
