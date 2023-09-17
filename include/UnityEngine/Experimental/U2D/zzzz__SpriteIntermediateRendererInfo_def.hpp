#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Bounds;
}
// Forward declare root types
namespace UnityEngine::Experimental::U2D {
struct SpriteIntermediateRendererInfo;
}
// Type: UnityEngine.Experimental.U2D::SpriteIntermediateRendererInfo
namespace UnityEngine::Experimental::U2D {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10320))
// CS Name: UnityEngine.Experimental.U2D.SpriteIntermediateRendererInfo
struct CORDL_TYPE SpriteIntermediateRendererInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "SpriteID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "TextureID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "MaterialID", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Color", ty: "::UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "Transform", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: None }, CppParam { name: "Bounds", ty: "::UnityEngine::Bounds", modifiers: "", def_value: None }, CppParam { name: "Layer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortingLayer", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SortingOrder", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "SceneCullingMask", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "IndexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "VertexData", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "IndexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VertexCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ShaderChannelMask", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SpriteIntermediateRendererInfo(int32_t SpriteID, int32_t TextureID, int32_t MaterialID, ::UnityEngine::Color Color, ::UnityEngine::Matrix4x4 Transform, ::UnityEngine::Bounds Bounds, int32_t Layer, int32_t SortingLayer, int32_t SortingOrder, uint64_t SceneCullingMask, ::cordl_internals::intptr_t IndexData, ::cordl_internals::intptr_t VertexData, int32_t IndexCount, int32_t VertexCount, int32_t ShaderChannelMask) noexcept;


                    constexpr SpriteIntermediateRendererInfo(SpriteIntermediateRendererInfo const&) = default;
                    constexpr SpriteIntermediateRendererInfo(SpriteIntermediateRendererInfo&&) = default;
                    constexpr SpriteIntermediateRendererInfo& operator=(SpriteIntermediateRendererInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SpriteIntermediateRendererInfo& operator=(SpriteIntermediateRendererInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xa8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SpriteIntermediateRendererInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_SpriteID, put=__set_SpriteID))  SpriteID;

constexpr void __set_SpriteID(int32_t value) ;

constexpr int32_t __get_SpriteID() const;

 int32_t __declspec(property(get=__get_TextureID, put=__set_TextureID))  TextureID;

constexpr void __set_TextureID(int32_t value) ;

constexpr int32_t __get_TextureID() const;

 int32_t __declspec(property(get=__get_MaterialID, put=__set_MaterialID))  MaterialID;

constexpr void __set_MaterialID(int32_t value) ;

constexpr int32_t __get_MaterialID() const;

 ::UnityEngine::Color __declspec(property(get=__get_Color, put=__set_Color))  Color;

constexpr void __set_Color(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_Color() const;

 ::UnityEngine::Matrix4x4 __declspec(property(get=__get_Transform, put=__set_Transform))  Transform;

constexpr void __set_Transform(::UnityEngine::Matrix4x4 value) ;

constexpr ::UnityEngine::Matrix4x4 __get_Transform() const;

 ::UnityEngine::Bounds __declspec(property(get=__get_Bounds, put=__set_Bounds))  Bounds;

constexpr void __set_Bounds(::UnityEngine::Bounds value) ;

constexpr ::UnityEngine::Bounds __get_Bounds() const;

 int32_t __declspec(property(get=__get_Layer, put=__set_Layer))  Layer;

constexpr void __set_Layer(int32_t value) ;

constexpr int32_t __get_Layer() const;

 int32_t __declspec(property(get=__get_SortingLayer, put=__set_SortingLayer))  SortingLayer;

constexpr void __set_SortingLayer(int32_t value) ;

constexpr int32_t __get_SortingLayer() const;

 int32_t __declspec(property(get=__get_SortingOrder, put=__set_SortingOrder))  SortingOrder;

constexpr void __set_SortingOrder(int32_t value) ;

constexpr int32_t __get_SortingOrder() const;

 uint64_t __declspec(property(get=__get_SceneCullingMask, put=__set_SceneCullingMask))  SceneCullingMask;

constexpr void __set_SceneCullingMask(uint64_t value) ;

constexpr uint64_t __get_SceneCullingMask() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_IndexData, put=__set_IndexData))  IndexData;

constexpr void __set_IndexData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_IndexData() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_VertexData, put=__set_VertexData))  VertexData;

constexpr void __set_VertexData(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_VertexData() const;

 int32_t __declspec(property(get=__get_IndexCount, put=__set_IndexCount))  IndexCount;

constexpr void __set_IndexCount(int32_t value) ;

constexpr int32_t __get_IndexCount() const;

 int32_t __declspec(property(get=__get_VertexCount, put=__set_VertexCount))  VertexCount;

constexpr void __set_VertexCount(int32_t value) ;

constexpr int32_t __get_VertexCount() const;

 int32_t __declspec(property(get=__get_ShaderChannelMask, put=__set_ShaderChannelMask))  ShaderChannelMask;

constexpr void __set_ShaderChannelMask(int32_t value) ;

constexpr int32_t __get_ShaderChannelMask() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::U2D
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Experimental::U2D::SpriteIntermediateRendererInfo, "UnityEngine.Experimental.U2D", "SpriteIntermediateRendererInfo");
