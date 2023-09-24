#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Renderer;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Material;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct CommandBufferExecutionFlags;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CommandBuffer;
}
// Type: UnityEngine.Rendering::CommandBuffer
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10260))
// CS Name: UnityEngine.Rendering.CommandBuffer
class CORDL_TYPE CommandBuffer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CommandBuffer() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: " const&", def_value: None }]
constexpr CommandBuffer(CommandBuffer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "&&", def_value: None }]
constexpr CommandBuffer(CommandBuffer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandBuffer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CommandBuffer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandBuffer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandBuffer& operator=(CommandBuffer&& o) noexcept = default;
  constexpr CommandBuffer& operator=(CommandBuffer const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Properties

 ::StringW __declspec(property(put=set_name))  name;


// Methods

/// @brief Method InitBuffer addr 0x2b71d54 size 0x28 virtual false final false
static ::cordl_internals::intptr_t InitBuffer() ;

/// @brief Method ReleaseBuffer addr 0x2b71d7c size 0x3c virtual false final false
 void ReleaseBuffer() ;

/// @brief Method set_name addr 0x2b71db8 size 0x44 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method Clear addr 0x2b71dfc size 0x3c virtual false final false
 void Clear() ;

/// @brief Method Internal_DrawMesh addr 0x2b71e38 size 0x84 virtual false final false
 void Internal_DrawMesh(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material, int32_t submeshIndex, int32_t shaderPass, UnityEngine::MaterialPropertyBlock properties) ;

/// @brief Method Internal_DrawRenderer addr 0x2b71f40 size 0x6c virtual false final false
 void Internal_DrawRenderer(UnityEngine::Renderer renderer, UnityEngine::Material material, int32_t submeshIndex, int32_t shaderPass) ;

/// @brief Method Internal_DrawMeshInstanced addr 0x2b71fac size 0x8c virtual false final false
 void Internal_DrawMeshInstanced(UnityEngine::Mesh mesh, int32_t submeshIndex, UnityEngine::Material material, int32_t shaderPass, ::ArrayW<UnityEngine::Matrix4x4> matrices, int32_t count, UnityEngine::MaterialPropertyBlock properties) ;

/// @brief Method CopyTexture_Internal addr 0x2b72038 size 0xc8 virtual false final false
 void CopyTexture_Internal(ByRef<UnityEngine::Rendering::RenderTargetIdentifier> src, int32_t srcElement, int32_t srcMip, int32_t srcX, int32_t srcY, int32_t srcWidth, int32_t srcHeight, ByRef<UnityEngine::Rendering::RenderTargetIdentifier> dst, int32_t dstElement, int32_t dstMip, int32_t dstX, int32_t dstY, int32_t mode) ;

/// @brief Method Blit_Identifier addr 0x2b72100 size 0xa0 virtual false final false
 void Blit_Identifier(ByRef<UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<UnityEngine::Rendering::RenderTargetIdentifier> dest, UnityEngine::Material mat, int32_t pass, UnityEngine::Vector2 scale, UnityEngine::Vector2 offset, int32_t sourceDepthSlice, int32_t destDepthSlice) ;

/// @brief Method GetTemporaryRT addr 0x2b7223c size 0xbc virtual false final false
 void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t antiAliasing, bool enableRandomWrite, UnityEngine::RenderTextureMemoryless memorylessMode, bool useDynamicScale) ;

/// @brief Method GetTemporaryRT addr 0x2b722f8 size 0xac virtual false final false
 void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t antiAliasing, bool enableRandomWrite, UnityEngine::RenderTextureMemoryless memorylessMode) ;

/// @brief Method GetTemporaryRT addr 0x2b723a4 size 0xa4 virtual false final false
 void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format, int32_t antiAliasing) ;

/// @brief Method GetTemporaryRT addr 0x2b72448 size 0xa0 virtual false final false
 void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::FilterMode filter, UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method GetTemporaryRT addr 0x2b724e8 size 0xec virtual false final false
 void GetTemporaryRT(int32_t nameID, int32_t width, int32_t height, int32_t depthBuffer, UnityEngine::FilterMode filter, UnityEngine::RenderTextureFormat format) ;

/// @brief Method ReleaseTemporaryRT addr 0x2b725d4 size 0x44 virtual false final false
 void ReleaseTemporaryRT(int32_t nameID) ;

/// @brief Method SetGlobalFloat addr 0x2b72618 size 0x54 virtual false final false
 void SetGlobalFloat(int32_t nameID, float_t value) ;

/// @brief Method SetGlobalVector addr 0x2b7266c size 0x5c virtual false final false
 void SetGlobalVector(int32_t nameID, UnityEngine::Vector4 value) ;

/// @brief Method SetViewProjectionMatrices addr 0x2b7271c size 0x54 virtual false final false
 void SetViewProjectionMatrices(UnityEngine::Matrix4x4 view, UnityEngine::Matrix4x4 proj) ;

/// @brief Method ValidateAgainstExecutionFlags addr 0x2b727c4 size 0x54 virtual false final false
 bool ValidateAgainstExecutionFlags(UnityEngine::Rendering::CommandBufferExecutionFlags requiredFlags, UnityEngine::Rendering::CommandBufferExecutionFlags invalidFlags) ;

/// @brief Method SetGlobalTexture_Impl addr 0x2b72818 size 0x5c virtual false final false
 void SetGlobalTexture_Impl(int32_t nameID, ByRef<UnityEngine::Rendering::RenderTargetIdentifier> rt, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method SetRenderTarget addr 0x2b72874 size 0xa0 virtual false final false
 void SetRenderTarget(UnityEngine::Rendering::RenderTargetIdentifier rt) ;

/// @brief Method SetRenderTargetSingle_Internal addr 0x2b72914 size 0x74 virtual false final false
 void SetRenderTargetSingle_Internal(UnityEngine::Rendering::RenderTargetIdentifier rt, UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction) ;

/// @brief Method Finalize addr 0x2b729fc size 0x98 virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x2b72b0c size 0x64 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2b72a94 size 0x78 virtual false final false
 void Dispose(bool disposing) ;

static UnityEngine::Rendering::CommandBuffer New_ctor() ;

/// @brief Method .ctor addr 0x2b72b70 size 0x48 virtual false final false
 void _ctor() ;

/// @brief Method DrawMesh addr 0x2b72bb8 size 0x284 virtual false final false
 void DrawMesh(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material, int32_t submeshIndex, int32_t shaderPass, UnityEngine::MaterialPropertyBlock properties) ;

/// @brief Method DrawMesh addr 0x2b72e3c size 0x30 virtual false final false
 void DrawMesh(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material, int32_t submeshIndex, int32_t shaderPass) ;

/// @brief Method DrawMesh addr 0x2b72e6c size 0x34 virtual false final false
 void DrawMesh(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material, int32_t submeshIndex) ;

/// @brief Method DrawMesh addr 0x2b72ea0 size 0x38 virtual false final false
 void DrawMesh(UnityEngine::Mesh mesh, UnityEngine::Matrix4x4 matrix, UnityEngine::Material material) ;

/// @brief Method DrawRenderer addr 0x2b72ed8 size 0x214 virtual false final false
 void DrawRenderer(UnityEngine::Renderer renderer, UnityEngine::Material material, int32_t submeshIndex, int32_t shaderPass) ;

/// @brief Method DrawMeshInstanced addr 0x2b730ec size 0x3a8 virtual false final false
 void DrawMeshInstanced(UnityEngine::Mesh mesh, int32_t submeshIndex, UnityEngine::Material material, int32_t shaderPass, ::ArrayW<UnityEngine::Matrix4x4> matrices, int32_t count, UnityEngine::MaterialPropertyBlock properties) ;

/// @brief Method CopyTexture addr 0x2b73494 size 0x94 virtual false final false
 void CopyTexture(UnityEngine::Rendering::RenderTargetIdentifier src, UnityEngine::Rendering::RenderTargetIdentifier dst) ;

/// @brief Method Blit addr 0x2b73528 size 0x8c virtual false final false
 void Blit(UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine::Rendering::RenderTargetIdentifier dest) ;

/// @brief Method Blit addr 0x2b735b4 size 0x90 virtual false final false
 void Blit(UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine::Material mat) ;

/// @brief Method Blit addr 0x2b73644 size 0x9c virtual false final false
 void Blit(UnityEngine::Rendering::RenderTargetIdentifier source, UnityEngine::Rendering::RenderTargetIdentifier dest, UnityEngine::Material mat, int32_t pass) ;

/// @brief Method SetGlobalTexture addr 0x2b736e0 size 0x78 virtual false final false
 void SetGlobalTexture(::StringW name, UnityEngine::Rendering::RenderTargetIdentifier value) ;

/// @brief Method SetGlobalTexture addr 0x2b73758 size 0x5c virtual false final false
 void SetGlobalTexture(int32_t nameID, UnityEngine::Rendering::RenderTargetIdentifier value, UnityEngine::Rendering::RenderTextureSubElement element) ;

/// @brief Method Internal_DrawMesh_Injected addr 0x2b71ebc size 0x84 virtual false final false
 void Internal_DrawMesh_Injected(UnityEngine::Mesh mesh, ByRef<UnityEngine::Matrix4x4> matrix, UnityEngine::Material material, int32_t submeshIndex, int32_t shaderPass, UnityEngine::MaterialPropertyBlock properties) ;

/// @brief Method Blit_Identifier_Injected addr 0x2b721a0 size 0x9c virtual false final false
 void Blit_Identifier_Injected(ByRef<UnityEngine::Rendering::RenderTargetIdentifier> source, ByRef<UnityEngine::Rendering::RenderTargetIdentifier> dest, UnityEngine::Material mat, int32_t pass, ByRef<UnityEngine::Vector2> scale, ByRef<UnityEngine::Vector2> offset, int32_t sourceDepthSlice, int32_t destDepthSlice) ;

/// @brief Method SetGlobalVector_Injected addr 0x2b726c8 size 0x54 virtual false final false
 void SetGlobalVector_Injected(int32_t nameID, ByRef<UnityEngine::Vector4> value) ;

/// @brief Method SetViewProjectionMatrices_Injected addr 0x2b72770 size 0x54 virtual false final false
 void SetViewProjectionMatrices_Injected(ByRef<UnityEngine::Matrix4x4> view, ByRef<UnityEngine::Matrix4x4> proj) ;

/// @brief Method SetRenderTargetSingle_Internal_Injected addr 0x2b72988 size 0x74 virtual false final false
 void SetRenderTargetSingle_Internal_Injected(ByRef<UnityEngine::Rendering::RenderTargetIdentifier> rt, UnityEngine::Rendering::RenderBufferLoadAction colorLoadAction, UnityEngine::Rendering::RenderBufferStoreAction colorStoreAction, UnityEngine::Rendering::RenderBufferLoadAction depthLoadAction, UnityEngine::Rendering::RenderBufferStoreAction depthStoreAction) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(UnityEngine::Rendering::CommandBuffer);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::CommandBuffer, "UnityEngine.Rendering", "CommandBuffer");
