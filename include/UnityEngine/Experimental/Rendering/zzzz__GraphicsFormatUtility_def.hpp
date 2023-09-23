#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
// Forward declare root types
namespace UnityEngine::Experimental::Rendering {
class GraphicsFormatUtility;
}
// Type: UnityEngine.Experimental.Rendering::GraphicsFormatUtility
namespace UnityEngine::Experimental::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10338))
// CS Name: UnityEngine.Experimental.Rendering.GraphicsFormatUtility
class CORDL_TYPE GraphicsFormatUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GraphicsFormatUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsFormatUtility", modifiers: " const&", def_value: None }]
constexpr GraphicsFormatUtility(GraphicsFormatUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GraphicsFormatUtility", modifiers: "&&", def_value: None }]
constexpr GraphicsFormatUtility(GraphicsFormatUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GraphicsFormatUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GraphicsFormatUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GraphicsFormatUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GraphicsFormatUtility& operator=(GraphicsFormatUtility&& o) noexcept = default;
  constexpr GraphicsFormatUtility& operator=(GraphicsFormatUtility const& o) noexcept = default;
                


// Fields

static ::ArrayW<UnityEngine::Experimental::Rendering::GraphicsFormat> __declspec(property(get=__get_tableNoStencil, put=__set_tableNoStencil))  tableNoStencil;

static void __set_tableNoStencil(::ArrayW<UnityEngine::Experimental::Rendering::GraphicsFormat> value) ;

static ::ArrayW<UnityEngine::Experimental::Rendering::GraphicsFormat> __get_tableNoStencil() ;

static ::ArrayW<UnityEngine::Experimental::Rendering::GraphicsFormat> __declspec(property(get=__get_tableStencil, put=__set_tableStencil))  tableStencil;

static void __set_tableStencil(::ArrayW<UnityEngine::Experimental::Rendering::GraphicsFormat> value) ;

static ::ArrayW<UnityEngine::Experimental::Rendering::GraphicsFormat> __get_tableStencil() ;


// Methods

/// @brief Method GetGraphicsFormat addr 0x2b7a9c4 size 0x84 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::TextureFormat format, bool isSRGB) ;

/// @brief Method GetGraphicsFormat_Native_TextureFormat addr 0x2b7aa48 size 0x44 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_TextureFormat(UnityEngine::TextureFormat format, bool isSRGB) ;

/// @brief Method GetGraphicsFormat addr 0x2b7aa8c size 0x84 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::RenderTextureFormat format, bool isSRGB) ;

/// @brief Method GetGraphicsFormat_Native_RenderTextureFormat addr 0x2b7ab10 size 0x44 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat_Native_RenderTextureFormat(UnityEngine::RenderTextureFormat format, bool isSRGB) ;

/// @brief Method GetGraphicsFormat addr 0x2b7ab54 size 0x88 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetGraphicsFormat(UnityEngine::RenderTextureFormat format, UnityEngine::RenderTextureReadWrite readWrite) ;

/// @brief Method GetDepthStencilFormatFromBitsLegacy_Native addr 0x2b7abdc size 0x3c virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatFromBitsLegacy_Native(int32_t minimumDepthBits) ;

/// @brief Method GetDepthStencilFormat addr 0x2b7ac18 size 0x74 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormat(int32_t minimumDepthBits) ;

/// @brief Method GetDepthBits addr 0x2b7ac8c size 0x3c virtual false final false
static int32_t GetDepthBits(UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method GetDepthStencilFormat addr 0x2b7acc8 size 0x1f4 virtual false final false
static UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormat(int32_t minimumDepthBits, int32_t minimumStencilBits) ;

/// @brief Method IsSRGBFormat addr 0x2b7aebc size 0x3c virtual false final false
static bool IsSRGBFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method GetRenderTextureFormat addr 0x2b7aef8 size 0x3c virtual false final false
static UnityEngine::RenderTextureFormat GetRenderTextureFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method IsCompressedTextureFormat addr 0x2b7af34 size 0x3c virtual false final false
static bool IsCompressedTextureFormat(UnityEngine::TextureFormat format) ;

/// @brief Method CanDecompressFormat addr 0x2b7af70 size 0x44 virtual false final false
static bool CanDecompressFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format, bool wholeImage) ;

/// @brief Method CanDecompressFormat addr 0x2b7afb4 size 0x78 virtual false final false
static bool CanDecompressFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method IsDepthFormat addr 0x2b7b02c size 0x3c virtual false final false
static bool IsDepthFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method IsStencilFormat addr 0x2b7b068 size 0x3c virtual false final false
static bool IsStencilFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method IsPVRTCFormat addr 0x2b7b0a4 size 0x3c virtual false final false
static bool IsPVRTCFormat(UnityEngine::Experimental::Rendering::GraphicsFormat format) ;

/// @brief Method IsCrunchFormat addr 0x2b7b0e0 size 0x24 virtual false final false
static bool IsCrunchFormat(UnityEngine::TextureFormat format) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::Rendering
NEED_NO_BOX(UnityEngine::Experimental::Rendering::GraphicsFormatUtility);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::Rendering::GraphicsFormatUtility, "UnityEngine.Experimental.Rendering", "GraphicsFormatUtility");
