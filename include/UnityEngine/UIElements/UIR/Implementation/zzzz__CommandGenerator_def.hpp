#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__VisualElement__RenderTargetMode;
}
namespace UnityEngine {
struct Color32;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct ____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine {
struct Matrix4x4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class CommandGenerator;
}
// Type: UnityEngine.UIElements.UIR.Implementation::CommandGenerator
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7552))
// CS Name: UnityEngine.UIElements.UIR.Implementation.CommandGenerator
class CORDL_TYPE CommandGenerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CommandGenerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandGenerator", modifiers: " const&", def_value: None }]
constexpr CommandGenerator(CommandGenerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandGenerator", modifiers: "&&", def_value: None }]
constexpr CommandGenerator(CommandGenerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandGenerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CommandGenerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandGenerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandGenerator& operator=(CommandGenerator&& o) noexcept = default;
  constexpr CommandGenerator& operator=(CommandGenerator const& o) noexcept = default;
                


// Fields

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ConvertEntriesToCommandsMarker, put=__set_k_ConvertEntriesToCommandsMarker))  k_ConvertEntriesToCommandsMarker;

static void __set_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_ConvertEntriesToCommandsMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_NudgeVerticesMarker, put=__set_k_NudgeVerticesMarker))  k_NudgeVerticesMarker;

static void __set_k_NudgeVerticesMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_NudgeVerticesMarker() ;

static ::Unity::Profiling::ProfilerMarker __declspec(property(get=__get_k_ComputeTransformMatrixMarker, put=__set_k_ComputeTransformMatrixMarker))  k_ComputeTransformMatrixMarker;

static void __set_k_ComputeTransformMatrixMarker(::Unity::Profiling::ProfilerMarker value) ;

static ::Unity::Profiling::ProfilerMarker __get_k_ComputeTransformMatrixMarker() ;

static ::UnityEngine::Material __declspec(property(get=__get_s_blitMaterial_LinearToGamma, put=__set_s_blitMaterial_LinearToGamma))  s_blitMaterial_LinearToGamma;

static void __set_s_blitMaterial_LinearToGamma(::UnityEngine::Material value) ;

static ::UnityEngine::Material __get_s_blitMaterial_LinearToGamma() ;

static ::UnityEngine::Material __declspec(property(get=__get_s_blitMaterial_GammaToLinear, put=__set_s_blitMaterial_GammaToLinear))  s_blitMaterial_GammaToLinear;

static void __set_s_blitMaterial_GammaToLinear(::UnityEngine::Material value) ;

static ::UnityEngine::Material __get_s_blitMaterial_GammaToLinear() ;

static ::UnityEngine::Material __declspec(property(get=__get_s_blitMaterial_NoChange, put=__set_s_blitMaterial_NoChange))  s_blitMaterial_NoChange;

static void __set_s_blitMaterial_NoChange(::UnityEngine::Material value) ;

static ::UnityEngine::Material __get_s_blitMaterial_NoChange() ;

static ::UnityEngine::Shader __declspec(property(get=__get_s_blitShader, put=__set_s_blitShader))  s_blitShader;

static void __set_s_blitShader(::UnityEngine::Shader value) ;

static ::UnityEngine::Shader __get_s_blitShader() ;


// Methods

/// @brief Method GetVerticesTransformInfo addr 0x2c66dbc size 0x18c virtual false final false
static void GetVerticesTransformInfo(::UnityEngine::UIElements::VisualElement ve, ByRef<::UnityEngine::Matrix4x4> transform) ;

/// @brief Method ComputeTransformMatrix addr 0x2c66f48 size 0x12c virtual false final false
static void ComputeTransformMatrix(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VisualElement ancestor, ByRef<::UnityEngine::Matrix4x4> result) ;

/// @brief Method IsParentOrAncestorOf addr 0x2c67074 size 0x7c virtual false final false
static bool IsParentOrAncestorOf(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VisualElement child) ;

/// @brief Method PaintElement addr 0x2c670f0 size 0x14f8 virtual false final false
static ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo PaintElement(::UnityEngine::UIElements::UIR::RenderChain renderChain, ::UnityEngine::UIElements::VisualElement ve, ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method CreateBlitShader addr 0x2c69a58 size 0x208 virtual false final false
static ::UnityEngine::Material CreateBlitShader(float_t colorConversion) ;

/// @brief Method GetBlitMaterial addr 0x2c696d0 size 0x2a0 virtual false final false
static ::UnityEngine::Material GetBlitMaterial(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualElement__RenderTargetMode mode) ;

/// @brief Method ClosePaintElement addr 0x2c69c60 size 0x190 virtual false final false
static void ClosePaintElement(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::UIR::Implementation::____UnityEngine__UIElements__UIR__Implementation__UIRStylePainter__ClosingInfo closingInfo, ::UnityEngine::UIElements::UIR::RenderChain renderChain, ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method UpdateOrAllocate addr 0x2c68920 size 0xfc virtual false final false
static void UpdateOrAllocate(ByRef<::UnityEngine::UIElements::UIR::MeshHandle> data, int32_t vertexCount, int32_t indexCount, ::UnityEngine::UIElements::UIR::UIRenderDevice device, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> verts, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indices, ByRef<uint16_t> indexOffset, ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats) ;

/// @brief Method CopyTransformVertsPos addr 0x2c68e4c size 0x248 virtual false final false
static void CopyTransformVertsPos(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> source, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> target, ::UnityEngine::Matrix4x4 mat, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 addFlags, ::UnityEngine::Color32 opacityPage, ::UnityEngine::Color32 textCoreSettingsPage, bool isText, float_t textureId) ;

/// @brief Method CopyTransformVertsPosAndVec addr 0x2c68bdc size 0x270 virtual false final false
static void CopyTransformVertsPosAndVec(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> source, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> target, ::UnityEngine::Matrix4x4 mat, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 addFlags, ::UnityEngine::Color32 opacityPage, ::UnityEngine::Color32 textCoreSettingsPage, bool isText, float_t textureId) ;

/// @brief Method CopyTriangleIndicesFlipWindingOrder addr 0x2c69160 size 0x1a4 virtual false final false
static void CopyTriangleIndicesFlipWindingOrder(::Unity::Collections::NativeSlice_1<uint16_t> source, ::Unity::Collections::NativeSlice_1<uint16_t> target, int32_t indexOffset) ;

/// @brief Method CopyTriangleIndices addr 0x2c69094 size 0xcc virtual false final false
static void CopyTriangleIndices(::Unity::Collections::NativeSlice_1<uint16_t> source, ::Unity::Collections::NativeSlice_1<uint16_t> target, int32_t indexOffset) ;

/// @brief Method NudgeVerticesToNewSpace addr 0x2c69df0 size 0x2b8 virtual false final false
static bool NudgeVerticesToNewSpace(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::UIR::UIRenderDevice device) ;

/// @brief Method DoNudgeVertices addr 0x2c6a0a8 size 0x2e0 virtual false final false
static void DoNudgeVertices(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::UIR::UIRenderDevice device, ::UnityEngine::UIElements::UIR::MeshHandle mesh, ByRef<::UnityEngine::Matrix4x4> nudgeTransform) ;

/// @brief Method InjectMeshDrawCommand addr 0x2c69304 size 0xe0 virtual false final false
static ::UnityEngine::UIElements::UIR::RenderChainCommand InjectMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain renderChain, ::UnityEngine::UIElements::VisualElement ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> cmdPrev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> cmdNext, ::UnityEngine::UIElements::UIR::MeshHandle mesh, int32_t indexCount, int32_t indexOffset, ::UnityEngine::Material material, ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::Texture font, int32_t stencilRef) ;

/// @brief Method InjectClosingMeshDrawCommand addr 0x2c69970 size 0xe8 virtual false final false
static ::UnityEngine::UIElements::UIR::RenderChainCommand InjectClosingMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain renderChain, ::UnityEngine::UIElements::VisualElement ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> cmdPrev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> cmdNext, ::UnityEngine::UIElements::UIR::MeshHandle mesh, int32_t indexCount, int32_t indexOffset, ::UnityEngine::Material material, ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::Texture font, int32_t stencilRef) ;

/// @brief Method FindCommandInsertionPoint addr 0x2c68a1c size 0x1c0 virtual false final false
static void FindCommandInsertionPoint(::UnityEngine::UIElements::VisualElement ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> prev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> next) ;

/// @brief Method FindClosingCommandInsertionPoint addr 0x2c6947c size 0x16c virtual false final false
static void FindClosingCommandInsertionPoint(::UnityEngine::UIElements::VisualElement ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> prev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> next) ;

/// @brief Method InjectCommandInBetween addr 0x2c693e4 size 0x98 virtual false final false
static void InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand cmd, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> prev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> next) ;

/// @brief Method InjectClosingCommandInBetween addr 0x2c695e8 size 0xe8 virtual false final false
static void InjectClosingCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand cmd, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> prev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand> next) ;

/// @brief Method ResetCommands addr 0x2c685e8 size 0x338 virtual false final false
static void ResetCommands(::UnityEngine::UIElements::UIR::RenderChain renderChain, ::UnityEngine::UIElements::VisualElement ve) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator, "UnityEngine.UIElements.UIR.Implementation", "CommandGenerator");
