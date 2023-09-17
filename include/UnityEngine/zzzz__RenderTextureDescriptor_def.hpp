#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Rendering {
struct ShadowSamplingMode;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct VRTextureUsage;
}
namespace UnityEngine {
struct RenderTextureCreationFlags;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
// Forward declare root types
namespace UnityEngine {
struct RenderTextureDescriptor;
}
// Type: UnityEngine::RenderTextureDescriptor
namespace UnityEngine {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10031))
// CS Name: UnityEngine.RenderTextureDescriptor
struct CORDL_TYPE RenderTextureDescriptor : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_width_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_height_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_msaaSamples_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_volumeDepth_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_mipCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_graphicsFormat", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "_stencilFormat_k__BackingField", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "_depthStencilFormat_k__BackingField", ty: "::UnityEngine::Experimental::Rendering::GraphicsFormat", modifiers: "", def_value: None }, CppParam { name: "_dimension_k__BackingField", ty: "::UnityEngine::Rendering::TextureDimension", modifiers: "", def_value: None }, CppParam { name: "_shadowSamplingMode_k__BackingField", ty: "::UnityEngine::Rendering::ShadowSamplingMode", modifiers: "", def_value: None }, CppParam { name: "_vrUsage_k__BackingField", ty: "::UnityEngine::VRTextureUsage", modifiers: "", def_value: None }, CppParam { name: "_flags", ty: "::UnityEngine::RenderTextureCreationFlags", modifiers: "", def_value: None }, CppParam { name: "_memoryless_k__BackingField", ty: "::UnityEngine::RenderTextureMemoryless", modifiers: "", def_value: None }]
constexpr RenderTextureDescriptor(int32_t _width_k__BackingField, int32_t _height_k__BackingField, int32_t _msaaSamples_k__BackingField, int32_t _volumeDepth_k__BackingField, int32_t _mipCount_k__BackingField, ::UnityEngine::Experimental::Rendering::GraphicsFormat _graphicsFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat _stencilFormat_k__BackingField, ::UnityEngine::Experimental::Rendering::GraphicsFormat _depthStencilFormat_k__BackingField, ::UnityEngine::Rendering::TextureDimension _dimension_k__BackingField, ::UnityEngine::Rendering::ShadowSamplingMode _shadowSamplingMode_k__BackingField, ::UnityEngine::VRTextureUsage _vrUsage_k__BackingField, ::UnityEngine::RenderTextureCreationFlags _flags, ::UnityEngine::RenderTextureMemoryless _memoryless_k__BackingField) noexcept;


                    constexpr RenderTextureDescriptor(RenderTextureDescriptor const&) = default;
                    constexpr RenderTextureDescriptor(RenderTextureDescriptor&&) = default;
                    constexpr RenderTextureDescriptor& operator=(RenderTextureDescriptor const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RenderTextureDescriptor& operator=(RenderTextureDescriptor&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x34};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RenderTextureDescriptor(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__width_k__BackingField, put=__set__width_k__BackingField))  _width_k__BackingField;

constexpr void __set__width_k__BackingField(int32_t value) ;

constexpr int32_t __get__width_k__BackingField() const;

 int32_t __declspec(property(get=__get__height_k__BackingField, put=__set__height_k__BackingField))  _height_k__BackingField;

constexpr void __set__height_k__BackingField(int32_t value) ;

constexpr int32_t __get__height_k__BackingField() const;

 int32_t __declspec(property(get=__get__msaaSamples_k__BackingField, put=__set__msaaSamples_k__BackingField))  _msaaSamples_k__BackingField;

constexpr void __set__msaaSamples_k__BackingField(int32_t value) ;

constexpr int32_t __get__msaaSamples_k__BackingField() const;

 int32_t __declspec(property(get=__get__volumeDepth_k__BackingField, put=__set__volumeDepth_k__BackingField))  _volumeDepth_k__BackingField;

constexpr void __set__volumeDepth_k__BackingField(int32_t value) ;

constexpr int32_t __get__volumeDepth_k__BackingField() const;

 int32_t __declspec(property(get=__get__mipCount_k__BackingField, put=__set__mipCount_k__BackingField))  _mipCount_k__BackingField;

constexpr void __set__mipCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__mipCount_k__BackingField() const;

 ::UnityEngine::Experimental::Rendering::GraphicsFormat __declspec(property(get=__get__graphicsFormat, put=__set__graphicsFormat))  _graphicsFormat;

constexpr void __set__graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat __get__graphicsFormat() const;

 ::UnityEngine::Experimental::Rendering::GraphicsFormat __declspec(property(get=__get__stencilFormat_k__BackingField, put=__set__stencilFormat_k__BackingField))  _stencilFormat_k__BackingField;

constexpr void __set__stencilFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat value) ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat __get__stencilFormat_k__BackingField() const;

 ::UnityEngine::Experimental::Rendering::GraphicsFormat __declspec(property(get=__get__depthStencilFormat_k__BackingField, put=__set__depthStencilFormat_k__BackingField))  _depthStencilFormat_k__BackingField;

constexpr void __set__depthStencilFormat_k__BackingField(::UnityEngine::Experimental::Rendering::GraphicsFormat value) ;

constexpr ::UnityEngine::Experimental::Rendering::GraphicsFormat __get__depthStencilFormat_k__BackingField() const;

 ::UnityEngine::Rendering::TextureDimension __declspec(property(get=__get__dimension_k__BackingField, put=__set__dimension_k__BackingField))  _dimension_k__BackingField;

constexpr void __set__dimension_k__BackingField(::UnityEngine::Rendering::TextureDimension value) ;

constexpr ::UnityEngine::Rendering::TextureDimension __get__dimension_k__BackingField() const;

 ::UnityEngine::Rendering::ShadowSamplingMode __declspec(property(get=__get__shadowSamplingMode_k__BackingField, put=__set__shadowSamplingMode_k__BackingField))  _shadowSamplingMode_k__BackingField;

constexpr void __set__shadowSamplingMode_k__BackingField(::UnityEngine::Rendering::ShadowSamplingMode value) ;

constexpr ::UnityEngine::Rendering::ShadowSamplingMode __get__shadowSamplingMode_k__BackingField() const;

 ::UnityEngine::VRTextureUsage __declspec(property(get=__get__vrUsage_k__BackingField, put=__set__vrUsage_k__BackingField))  _vrUsage_k__BackingField;

constexpr void __set__vrUsage_k__BackingField(::UnityEngine::VRTextureUsage value) ;

constexpr ::UnityEngine::VRTextureUsage __get__vrUsage_k__BackingField() const;

 ::UnityEngine::RenderTextureCreationFlags __declspec(property(get=__get__flags, put=__set__flags))  _flags;

constexpr void __set__flags(::UnityEngine::RenderTextureCreationFlags value) ;

constexpr ::UnityEngine::RenderTextureCreationFlags __get__flags() const;

 ::UnityEngine::RenderTextureMemoryless __declspec(property(get=__get__memoryless_k__BackingField, put=__set__memoryless_k__BackingField))  _memoryless_k__BackingField;

constexpr void __set__memoryless_k__BackingField(::UnityEngine::RenderTextureMemoryless value) ;

constexpr ::UnityEngine::RenderTextureMemoryless __get__memoryless_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_width, put=set_width))  width;

 int32_t __declspec(property(get=get_height, put=set_height))  height;

 int32_t __declspec(property(get=get_msaaSamples, put=set_msaaSamples))  msaaSamples;

 int32_t __declspec(property(get=get_volumeDepth, put=set_volumeDepth))  volumeDepth;

 int32_t __declspec(property(put=set_mipCount))  mipCount;

 ::UnityEngine::Experimental::Rendering::GraphicsFormat __declspec(property(get=get_graphicsFormat, put=set_graphicsFormat))  graphicsFormat;

 ::UnityEngine::Experimental::Rendering::GraphicsFormat __declspec(property(get=get_depthStencilFormat, put=set_depthStencilFormat))  depthStencilFormat;

 ::UnityEngine::RenderTextureFormat __declspec(property(get=get_colorFormat, put=set_colorFormat))  colorFormat;

 bool __declspec(property(get=get_sRGB, put=set_sRGB))  sRGB;

 int32_t __declspec(property(get=get_depthBufferBits, put=set_depthBufferBits))  depthBufferBits;

 ::UnityEngine::Rendering::TextureDimension __declspec(property(get=get_dimension, put=set_dimension))  dimension;

 ::UnityEngine::Rendering::ShadowSamplingMode __declspec(property(get=get_shadowSamplingMode, put=set_shadowSamplingMode))  shadowSamplingMode;

 ::UnityEngine::VRTextureUsage __declspec(property(put=set_vrUsage))  vrUsage;

 ::UnityEngine::RenderTextureMemoryless __declspec(property(put=set_memoryless))  memoryless;

 bool __declspec(property(put=set_useMipMap))  useMipMap;

 bool __declspec(property(put=set_autoGenerateMips))  autoGenerateMips;

 bool __declspec(property(put=set_enableRandomWrite))  enableRandomWrite;

 bool __declspec(property(put=set_createdFromScript))  createdFromScript;

 bool __declspec(property(put=set_useDynamicScale))  useDynamicScale;


// Methods

/// @brief Method get_width addr 0x2b4087c size 0x8 virtual false final false
 int32_t get_width() ;

/// @brief Method set_width addr 0x2b40884 size 0x8 virtual false final false
 void set_width(int32_t value) ;

/// @brief Method get_height addr 0x2b4088c size 0x8 virtual false final false
 int32_t get_height() ;

/// @brief Method set_height addr 0x2b40894 size 0x8 virtual false final false
 void set_height(int32_t value) ;

/// @brief Method get_msaaSamples addr 0x2b4089c size 0x8 virtual false final false
 int32_t get_msaaSamples() ;

/// @brief Method set_msaaSamples addr 0x2b408a4 size 0x8 virtual false final false
 void set_msaaSamples(int32_t value) ;

/// @brief Method get_volumeDepth addr 0x2b408ac size 0x8 virtual false final false
 int32_t get_volumeDepth() ;

/// @brief Method set_volumeDepth addr 0x2b408b4 size 0x8 virtual false final false
 void set_volumeDepth(int32_t value) ;

/// @brief Method set_mipCount addr 0x2b408bc size 0x8 virtual false final false
 void set_mipCount(int32_t value) ;

/// @brief Method get_graphicsFormat addr 0x2b3e588 size 0x8 virtual false final false
 ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat() ;

/// @brief Method set_graphicsFormat addr 0x2b408c4 size 0x98 virtual false final false
 void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) ;

/// @brief Method get_depthStencilFormat addr 0x2b409f8 size 0x8 virtual false final false
 ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat() ;

/// @brief Method set_depthStencilFormat addr 0x2b40a00 size 0x8 virtual false final false
 void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat value) ;

/// @brief Method get_colorFormat addr 0x2b40a08 size 0x5c virtual false final false
 ::UnityEngine::RenderTextureFormat get_colorFormat() ;

/// @brief Method set_colorFormat addr 0x2b40a64 size 0xa8 virtual false final false
 void set_colorFormat(::UnityEngine::RenderTextureFormat value) ;

/// @brief Method get_sRGB addr 0x2b40b0c size 0x5c virtual false final false
 bool get_sRGB() ;

/// @brief Method set_sRGB addr 0x2b40b68 size 0x84 virtual false final false
 void set_sRGB(bool value) ;

/// @brief Method get_depthBufferBits addr 0x2b40978 size 0x5c virtual false final false
 int32_t get_depthBufferBits() ;

/// @brief Method set_depthBufferBits addr 0x2b409d4 size 0x24 virtual false final false
 void set_depthBufferBits(int32_t value) ;

/// @brief Method get_dimension addr 0x2b40bec size 0x8 virtual false final false
 ::UnityEngine::Rendering::TextureDimension get_dimension() ;

/// @brief Method set_dimension addr 0x2b40bf4 size 0x8 virtual false final false
 void set_dimension(::UnityEngine::Rendering::TextureDimension value) ;

/// @brief Method get_shadowSamplingMode addr 0x2b40bfc size 0x8 virtual false final false
 ::UnityEngine::Rendering::ShadowSamplingMode get_shadowSamplingMode() ;

/// @brief Method set_shadowSamplingMode addr 0x2b40c04 size 0x8 virtual false final false
 void set_shadowSamplingMode(::UnityEngine::Rendering::ShadowSamplingMode value) ;

/// @brief Method set_vrUsage addr 0x2b40c0c size 0x8 virtual false final false
 void set_vrUsage(::UnityEngine::VRTextureUsage value) ;

/// @brief Method set_memoryless addr 0x2b40c14 size 0x8 virtual false final false
 void set_memoryless(::UnityEngine::RenderTextureMemoryless value) ;

/// @brief Method .ctor addr 0x2b40c1c size 0x90 virtual false final false
 void _ctor(int32_t width, int32_t height, ::UnityEngine::RenderTextureFormat colorFormat, int32_t depthBufferBits) ;

/// @brief Method .ctor addr 0x2b40cac size 0xfc virtual false final false
 void _ctor(int32_t width, int32_t height, ::UnityEngine::RenderTextureFormat colorFormat, int32_t depthBufferBits, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b40da8 size 0x74 virtual false final false
 void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, int32_t depthBufferBits, int32_t mipCount) ;

/// @brief Method .ctor addr 0x2b3e6e4 size 0xbc virtual false final false
 void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat) ;

/// @brief Method .ctor addr 0x2b40e1c size 0x5c virtual false final false
 void _ctor(int32_t width, int32_t height, ::UnityEngine::Experimental::Rendering::GraphicsFormat colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat depthStencilFormat, int32_t mipCount) ;

/// @brief Method SetOrClearRenderTextureCreationFlag addr 0x2b4095c size 0x1c virtual false final false
 void SetOrClearRenderTextureCreationFlag(bool value, ::UnityEngine::RenderTextureCreationFlags flag) ;

/// @brief Method set_useMipMap addr 0x2b40e78 size 0x1c virtual false final false
 void set_useMipMap(bool value) ;

/// @brief Method set_autoGenerateMips addr 0x2b40e94 size 0x1c virtual false final false
 void set_autoGenerateMips(bool value) ;

/// @brief Method set_enableRandomWrite addr 0x2b40eb0 size 0x1c virtual false final false
 void set_enableRandomWrite(bool value) ;

/// @brief Method set_createdFromScript addr 0x2b3e610 size 0x1c virtual false final false
 void set_createdFromScript(bool value) ;

/// @brief Method set_useDynamicScale addr 0x2b3e7a0 size 0x1c virtual false final false
 void set_useDynamicScale(bool value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTextureDescriptor, "UnityEngine", "RenderTextureDescriptor");
