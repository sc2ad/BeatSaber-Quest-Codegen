#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__Sizei;
}
namespace UnityEngine {
class Texture;
}
namespace GlobalNamespace {
struct OVRPose;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__LayerDesc;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRManager__XRDevice;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__TextureRectMatrixf;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__LayerLayout;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__EyeTextureFormat;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine {
class Renderer;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__OverlayShape;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine::XR {
struct XRNode;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVROverlay__OverlayShape;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVROverlay__OverlayType;
}
namespace GlobalNamespace {
class GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVROverlay__LayerTexture;
}
// Type: ::OverlayShape
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8557))
// CS Name: OVROverlay::OverlayShape
struct CORDL_TYPE GlobalNamespace__OVROverlay__OverlayShape : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVROverlay__OverlayShape(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVROverlay__OverlayShape(GlobalNamespace__OVROverlay__OverlayShape const&) = default;
                    constexpr GlobalNamespace__OVROverlay__OverlayShape(GlobalNamespace__OVROverlay__OverlayShape&&) = default;
                    constexpr GlobalNamespace__OVROverlay__OverlayShape& operator=(GlobalNamespace__OVROverlay__OverlayShape const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVROverlay__OverlayShape& operator=(GlobalNamespace__OVROverlay__OverlayShape&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVROverlay__OverlayShape(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVROverlay__OverlayShape_Unwrapped : int32_t {
__Quad = 0,
__Cylinder = 1,
__Cubemap = 2,
__OffcenterCubemap = 4,
__Equirect = 5,
__ReconstructionPassthrough = 7,
__SurfaceProjectedPassthrough = 8,
__Fisheye = 9,
__KeyboardHandsPassthrough = 10,
__KeyboardMaskedHandsPassthrough = 11,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVROverlay__OverlayShape_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVROverlay__OverlayShape_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Quad offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const Quad;

/// @brief Field Cylinder offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const Cylinder;

/// @brief Field Cubemap offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const Cubemap;

/// @brief Field OffcenterCubemap offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const OffcenterCubemap;

/// @brief Field Equirect offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const Equirect;

/// @brief Field ReconstructionPassthrough offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const ReconstructionPassthrough;

/// @brief Field SurfaceProjectedPassthrough offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const SurfaceProjectedPassthrough;

/// @brief Field Fisheye offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const Fisheye;

/// @brief Field KeyboardHandsPassthrough offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const KeyboardHandsPassthrough;

/// @brief Field KeyboardMaskedHandsPassthrough offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape const KeyboardMaskedHandsPassthrough;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OverlayType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8558))
// CS Name: OVROverlay::OverlayType
struct CORDL_TYPE GlobalNamespace__OVROverlay__OverlayType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVROverlay__OverlayType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVROverlay__OverlayType(GlobalNamespace__OVROverlay__OverlayType const&) = default;
                    constexpr GlobalNamespace__OVROverlay__OverlayType(GlobalNamespace__OVROverlay__OverlayType&&) = default;
                    constexpr GlobalNamespace__OVROverlay__OverlayType& operator=(GlobalNamespace__OVROverlay__OverlayType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVROverlay__OverlayType& operator=(GlobalNamespace__OVROverlay__OverlayType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVROverlay__OverlayType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVROverlay__OverlayType_Unwrapped : int32_t {
__None = 0,
__Underlay = 1,
__Overlay = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVROverlay__OverlayType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVROverlay__OverlayType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType const None;

/// @brief Field Underlay offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType const Underlay;

/// @brief Field Overlay offset 0
static GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType const Overlay;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ExternalSurfaceObjectCreated
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8559))
// CS Name: OVROverlay::ExternalSurfaceObjectCreated
class CORDL_TYPE GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated(GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated(GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated& operator=(GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated&& o) noexcept = default;
  constexpr GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated& operator=(GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x25d54e0 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x25d559c size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x25d55b0 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x25d55d0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LayerTexture
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8560))
// CS Name: OVROverlay::LayerTexture
struct CORDL_TYPE GlobalNamespace__OVROverlay__LayerTexture : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "appTexture", ty: "UnityEngine::Texture", modifiers: "", def_value: None }, CppParam { name: "appTexturePtr", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "swapChain", ty: "::ArrayW<UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "swapChainPtr", ty: "::ArrayW<::cordl_internals::intptr_t>", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVROverlay__LayerTexture(UnityEngine::Texture appTexture, ::cordl_internals::intptr_t appTexturePtr, ::ArrayW<UnityEngine::Texture> swapChain, ::ArrayW<::cordl_internals::intptr_t> swapChainPtr) noexcept;


                    constexpr GlobalNamespace__OVROverlay__LayerTexture(GlobalNamespace__OVROverlay__LayerTexture const&) = default;
                    constexpr GlobalNamespace__OVROverlay__LayerTexture(GlobalNamespace__OVROverlay__LayerTexture&&) = default;
                    constexpr GlobalNamespace__OVROverlay__LayerTexture& operator=(GlobalNamespace__OVROverlay__LayerTexture const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVROverlay__LayerTexture& operator=(GlobalNamespace__OVROverlay__LayerTexture&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVROverlay__LayerTexture(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::Texture __declspec(property(get=__get_appTexture, put=__set_appTexture))  appTexture;

constexpr void __set_appTexture(UnityEngine::Texture value) ;

constexpr UnityEngine::Texture __get_appTexture() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_appTexturePtr, put=__set_appTexturePtr))  appTexturePtr;

constexpr void __set_appTexturePtr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_appTexturePtr() const;

 ::ArrayW<UnityEngine::Texture> __declspec(property(get=__get_swapChain, put=__set_swapChain))  swapChain;

constexpr void __set_swapChain(::ArrayW<UnityEngine::Texture> value) ;

constexpr ::ArrayW<UnityEngine::Texture> __get_swapChain() const;

 ::ArrayW<::cordl_internals::intptr_t> __declspec(property(get=__get_swapChainPtr, put=__set_swapChainPtr))  swapChainPtr;

constexpr void __set_swapChainPtr(::ArrayW<::cordl_internals::intptr_t> value) ;

constexpr ::ArrayW<::cordl_internals::intptr_t> __get_swapChainPtr() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVROverlay
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8561))
// CS Name: OVROverlay
class CORDL_TYPE OVROverlay : public UnityEngine::MonoBehaviour {
public:
// Declarations
using LayerTexture = GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture;

using ExternalSurfaceObjectCreated = GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated;

using OverlayType = GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType;

using OverlayShape = GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1c8};

virtual ~OVROverlay() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: " const&", def_value: None }]
constexpr OVROverlay(OVROverlay const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVROverlay", modifiers: "&&", def_value: None }]
constexpr OVROverlay(OVROverlay&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVROverlay(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVROverlay& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVROverlay& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVROverlay& operator=(OVROverlay&& o) noexcept = default;
  constexpr OVROverlay& operator=(OVROverlay const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType __declspec(property(get=__get_currentOverlayType, put=__set_currentOverlayType))  currentOverlayType;

constexpr void __set_currentOverlayType(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType value) ;

constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType __get_currentOverlayType() const;

 bool __declspec(property(get=__get_isDynamic, put=__set_isDynamic))  isDynamic;

constexpr void __set_isDynamic(bool value) ;

constexpr bool __get_isDynamic() const;

 bool __declspec(property(get=__get_isProtectedContent, put=__set_isProtectedContent))  isProtectedContent;

constexpr void __set_isProtectedContent(bool value) ;

constexpr bool __get_isProtectedContent() const;

 UnityEngine::Rect __declspec(property(get=__get_srcRectLeft, put=__set_srcRectLeft))  srcRectLeft;

constexpr void __set_srcRectLeft(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_srcRectLeft() const;

 UnityEngine::Rect __declspec(property(get=__get_srcRectRight, put=__set_srcRectRight))  srcRectRight;

constexpr void __set_srcRectRight(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_srcRectRight() const;

 UnityEngine::Rect __declspec(property(get=__get_destRectLeft, put=__set_destRectLeft))  destRectLeft;

constexpr void __set_destRectLeft(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_destRectLeft() const;

 UnityEngine::Rect __declspec(property(get=__get_destRectRight, put=__set_destRectRight))  destRectRight;

constexpr void __set_destRectRight(UnityEngine::Rect value) ;

constexpr UnityEngine::Rect __get_destRectRight() const;

 bool __declspec(property(get=__get_invertTextureRects, put=__set_invertTextureRects))  invertTextureRects;

constexpr void __set_invertTextureRects(bool value) ;

constexpr bool __get_invertTextureRects() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf __declspec(property(get=__get_textureRectMatrix, put=__set_textureRectMatrix))  textureRectMatrix;

constexpr void __set_textureRectMatrix(GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TextureRectMatrixf __get_textureRectMatrix() const;

 bool __declspec(property(get=__get_overrideTextureRectMatrix, put=__set_overrideTextureRectMatrix))  overrideTextureRectMatrix;

constexpr void __set_overrideTextureRectMatrix(bool value) ;

constexpr bool __get_overrideTextureRectMatrix() const;

 bool __declspec(property(get=__get_overridePerLayerColorScaleAndOffset, put=__set_overridePerLayerColorScaleAndOffset))  overridePerLayerColorScaleAndOffset;

constexpr void __set_overridePerLayerColorScaleAndOffset(bool value) ;

constexpr bool __get_overridePerLayerColorScaleAndOffset() const;

 UnityEngine::Vector4 __declspec(property(get=__get_colorScale, put=__set_colorScale))  colorScale;

constexpr void __set_colorScale(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_colorScale() const;

 UnityEngine::Vector4 __declspec(property(get=__get_colorOffset, put=__set_colorOffset))  colorOffset;

constexpr void __set_colorOffset(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_colorOffset() const;

 bool __declspec(property(get=__get_useExpensiveSuperSample, put=__set_useExpensiveSuperSample))  useExpensiveSuperSample;

constexpr void __set_useExpensiveSuperSample(bool value) ;

constexpr bool __get_useExpensiveSuperSample() const;

 bool __declspec(property(get=__get_useExpensiveSharpen, put=__set_useExpensiveSharpen))  useExpensiveSharpen;

constexpr void __set_useExpensiveSharpen(bool value) ;

constexpr bool __get_useExpensiveSharpen() const;

 bool __declspec(property(get=__get_hidden, put=__set_hidden))  hidden;

constexpr void __set_hidden(bool value) ;

constexpr bool __get_hidden() const;

 bool __declspec(property(get=__get_isExternalSurface, put=__set_isExternalSurface))  isExternalSurface;

constexpr void __set_isExternalSurface(bool value) ;

constexpr bool __get_isExternalSurface() const;

 int32_t __declspec(property(get=__get_externalSurfaceWidth, put=__set_externalSurfaceWidth))  externalSurfaceWidth;

constexpr void __set_externalSurfaceWidth(int32_t value) ;

constexpr int32_t __get_externalSurfaceWidth() const;

 int32_t __declspec(property(get=__get_externalSurfaceHeight, put=__set_externalSurfaceHeight))  externalSurfaceHeight;

constexpr void __set_externalSurfaceHeight(int32_t value) ;

constexpr int32_t __get_externalSurfaceHeight() const;

 int32_t __declspec(property(get=__get_compositionDepth, put=__set_compositionDepth))  compositionDepth;

constexpr void __set_compositionDepth(int32_t value) ;

constexpr int32_t __get_compositionDepth() const;

 int32_t __declspec(property(get=__get_layerCompositionDepth, put=__set_layerCompositionDepth))  layerCompositionDepth;

constexpr void __set_layerCompositionDepth(int32_t value) ;

constexpr int32_t __get_layerCompositionDepth() const;

 bool __declspec(property(get=__get_noDepthBufferTesting, put=__set_noDepthBufferTesting))  noDepthBufferTesting;

constexpr void __set_noDepthBufferTesting(bool value) ;

constexpr bool __get_noDepthBufferTesting() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat __declspec(property(get=__get_layerTextureFormat, put=__set_layerTextureFormat))  layerTextureFormat;

constexpr void __set_layerTextureFormat(GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat __get_layerTextureFormat() const;

 GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape __declspec(property(get=__get_currentOverlayShape, put=__set_currentOverlayShape))  currentOverlayShape;

constexpr void __set_currentOverlayShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape value) ;

constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape __get_currentOverlayShape() const;

 GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape __declspec(property(get=__get_prevOverlayShape, put=__set_prevOverlayShape))  prevOverlayShape;

constexpr void __set_prevOverlayShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape value) ;

constexpr GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape __get_prevOverlayShape() const;

 ::ArrayW<UnityEngine::Texture> __declspec(property(get=__get_textures, put=__set_textures))  textures;

constexpr void __set_textures(::ArrayW<UnityEngine::Texture> value) ;

constexpr ::ArrayW<UnityEngine::Texture> __get_textures() const;

 bool __declspec(property(get=__get_isAlphaPremultiplied, put=__set_isAlphaPremultiplied))  isAlphaPremultiplied;

constexpr void __set_isAlphaPremultiplied(bool value) ;

constexpr bool __get_isAlphaPremultiplied() const;

 bool __declspec(property(get=__get_useBicubicFiltering, put=__set_useBicubicFiltering))  useBicubicFiltering;

constexpr void __set_useBicubicFiltering(bool value) ;

constexpr bool __get_useBicubicFiltering() const;

 bool __declspec(property(get=__get_useLegacyCubemapRotation, put=__set_useLegacyCubemapRotation))  useLegacyCubemapRotation;

constexpr void __set_useLegacyCubemapRotation(bool value) ;

constexpr bool __get_useLegacyCubemapRotation() const;

 bool __declspec(property(get=__get_useEfficientSupersample, put=__set_useEfficientSupersample))  useEfficientSupersample;

constexpr void __set_useEfficientSupersample(bool value) ;

constexpr bool __get_useEfficientSupersample() const;

 bool __declspec(property(get=__get_useEfficientSharpen, put=__set_useEfficientSharpen))  useEfficientSharpen;

constexpr void __set_useEfficientSharpen(bool value) ;

constexpr bool __get_useEfficientSharpen() const;

 bool __declspec(property(get=__get__previewInEditor, put=__set__previewInEditor))  _previewInEditor;

constexpr void __set__previewInEditor(bool value) ;

constexpr bool __get__previewInEditor() const;

 ::ArrayW<::cordl_internals::intptr_t> __declspec(property(get=__get_texturePtrs, put=__set_texturePtrs))  texturePtrs;

constexpr void __set_texturePtrs(::ArrayW<::cordl_internals::intptr_t> value) ;

constexpr ::ArrayW<::cordl_internals::intptr_t> __get_texturePtrs() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_externalSurfaceObject, put=__set_externalSurfaceObject))  externalSurfaceObject;

constexpr void __set_externalSurfaceObject(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_externalSurfaceObject() const;

 GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated __declspec(property(get=__get_externalSurfaceObjectCreated, put=__set_externalSurfaceObjectCreated))  externalSurfaceObjectCreated;

constexpr void __set_externalSurfaceObjectCreated(GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated value) ;

constexpr GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated __get_externalSurfaceObjectCreated() const;

 bool __declspec(property(get=__get_isOverridePending, put=__set_isOverridePending))  isOverridePending;

constexpr void __set_isOverridePending(bool value) ;

constexpr bool __get_isOverridePending() const;

/// @brief Field maxInstances offset 0
static constexpr int32_t  maxInstances{15};

static ::ArrayW<GlobalNamespace::OVROverlay> __declspec(property(get=__get_instances, put=__set_instances))  instances;

static void __set_instances(::ArrayW<GlobalNamespace::OVROverlay> value) ;

static ::ArrayW<GlobalNamespace::OVROverlay> __get_instances() ;

 int32_t __declspec(property(get=__get__layerId_k__BackingField, put=__set__layerId_k__BackingField))  _layerId_k__BackingField;

constexpr void __set__layerId_k__BackingField(int32_t value) ;

constexpr int32_t __get__layerId_k__BackingField() const;

static UnityEngine::Material __declspec(property(get=__get_tex2DMaterial, put=__set_tex2DMaterial))  tex2DMaterial;

static void __set_tex2DMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_tex2DMaterial() ;

static UnityEngine::Material __declspec(property(get=__get_cubeMaterial, put=__set_cubeMaterial))  cubeMaterial;

static void __set_cubeMaterial(UnityEngine::Material value) ;

static UnityEngine::Material __get_cubeMaterial() ;

 ::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture> __declspec(property(get=__get_layerTextures, put=__set_layerTextures))  layerTextures;

constexpr void __set_layerTextures(::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture> __get_layerTextures() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc __declspec(property(get=__get_layerDesc, put=__set_layerDesc))  layerDesc;

constexpr void __set_layerDesc(GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc __get_layerDesc() const;

 int32_t __declspec(property(get=__get_stageCount, put=__set_stageCount))  stageCount;

constexpr void __set_stageCount(int32_t value) ;

constexpr int32_t __get_stageCount() const;

 int32_t __declspec(property(get=__get_layerIndex, put=__set_layerIndex))  layerIndex;

constexpr void __set_layerIndex(int32_t value) ;

constexpr int32_t __get_layerIndex() const;

 System::Runtime::InteropServices::GCHandle __declspec(property(get=__get_layerIdHandle, put=__set_layerIdHandle))  layerIdHandle;

constexpr void __set_layerIdHandle(System::Runtime::InteropServices::GCHandle value) ;

constexpr System::Runtime::InteropServices::GCHandle __get_layerIdHandle() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_layerIdPtr, put=__set_layerIdPtr))  layerIdPtr;

constexpr void __set_layerIdPtr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_layerIdPtr() const;

 int32_t __declspec(property(get=__get_frameIndex, put=__set_frameIndex))  frameIndex;

constexpr void __set_frameIndex(int32_t value) ;

constexpr int32_t __get_frameIndex() const;

 int32_t __declspec(property(get=__get_prevFrameIndex, put=__set_prevFrameIndex))  prevFrameIndex;

constexpr void __set_prevFrameIndex(int32_t value) ;

constexpr int32_t __get_prevFrameIndex() const;

 UnityEngine::Renderer __declspec(property(get=__get_rend, put=__set_rend))  rend;

constexpr void __set_rend(UnityEngine::Renderer value) ;

constexpr UnityEngine::Renderer __get_rend() const;

 uint64_t __declspec(property(get=__get_OpenVROverlayHandle, put=__set_OpenVROverlayHandle))  OpenVROverlayHandle;

constexpr void __set_OpenVROverlayHandle(uint64_t value) ;

constexpr uint64_t __get_OpenVROverlayHandle() const;

 UnityEngine::Vector4 __declspec(property(get=__get_OpenVRUVOffsetAndScale, put=__set_OpenVRUVOffsetAndScale))  OpenVRUVOffsetAndScale;

constexpr void __set_OpenVRUVOffsetAndScale(UnityEngine::Vector4 value) ;

constexpr UnityEngine::Vector4 __get_OpenVRUVOffsetAndScale() const;

 UnityEngine::Vector2 __declspec(property(get=__get_OpenVRMouseScale, put=__set_OpenVRMouseScale))  OpenVRMouseScale;

constexpr void __set_OpenVRMouseScale(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_OpenVRMouseScale() const;

 GlobalNamespace::GlobalNamespace__OVRManager__XRDevice __declspec(property(get=__get_constructedOverlayXRDevice, put=__set_constructedOverlayXRDevice))  constructedOverlayXRDevice;

constexpr void __set_constructedOverlayXRDevice(GlobalNamespace::GlobalNamespace__OVRManager__XRDevice value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRManager__XRDevice __get_constructedOverlayXRDevice() const;

 bool __declspec(property(get=__get_xrDeviceConstructed, put=__set_xrDeviceConstructed))  xrDeviceConstructed;

constexpr void __set_xrDeviceConstructed(bool value) ;

constexpr bool __get_xrDeviceConstructed() const;


// Properties

 bool __declspec(property(get=get_previewInEditor, put=set_previewInEditor))  previewInEditor;

 int32_t __declspec(property(get=get_layerId, put=set_layerId))  layerId;

 GlobalNamespace::GlobalNamespace__OVRPlugin__LayerLayout __declspec(property(get=get_layout))  layout;

 int32_t __declspec(property(get=get_texturesPerStage))  texturesPerStage;

static ::StringW __declspec(property(get=get_OpenVROverlayKey))  OpenVROverlayKey;


// Methods

/// @brief Method get_previewInEditor addr 0x25d0250 size 0x8 virtual false final false
 bool get_previewInEditor() ;

/// @brief Method set_previewInEditor addr 0x25d0258 size 0x18 virtual false final false
 void set_previewInEditor(bool value) ;

/// @brief Method OverrideOverlayTextureInfo addr 0x25d0274 size 0xbc virtual false final false
 void OverrideOverlayTextureInfo(UnityEngine::Texture srcTexture, ::cordl_internals::intptr_t nativePtr, UnityEngine::XR::XRNode node) ;

/// @brief Method get_layerId addr 0x25d0330 size 0x8 virtual false final false
 int32_t get_layerId() ;

/// @brief Method set_layerId addr 0x25d0338 size 0x8 virtual false final false
 void set_layerId(int32_t value) ;

/// @brief Method get_layout addr 0x25d0340 size 0xcc virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__LayerLayout get_layout() ;

/// @brief Method get_texturesPerStage addr 0x25d040c size 0x1c virtual false final false
 int32_t get_texturesPerStage() ;

/// @brief Method NeedsTexturesForShape addr 0x25d0428 size 0x60 virtual false final false
static bool NeedsTexturesForShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape shape) ;

/// @brief Method CreateLayer addr 0x25d0500 size 0x3f8 virtual false final false
 bool CreateLayer(int32_t mipLevels, int32_t sampleCount, GlobalNamespace::GlobalNamespace__OVRPlugin__EyeTextureFormat etFormat, int32_t flags, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei size, GlobalNamespace::GlobalNamespace__OVRPlugin__OverlayShape shape) ;

/// @brief Method CreateLayerTextures addr 0x25d0d94 size 0x540 virtual false final false
 bool CreateLayerTextures(bool useMipmaps, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei size, bool isHdr) ;

/// @brief Method DestroyLayerTextures addr 0x25d1504 size 0x124 virtual false final false
 void DestroyLayerTextures() ;

/// @brief Method DestroyLayer addr 0x25d1628 size 0x2c0 virtual false final false
 void DestroyLayer() ;

/// @brief Method SetSrcDestRects addr 0x25d1f20 size 0x1c virtual false final false
 void SetSrcDestRects(UnityEngine::Rect srcLeft, UnityEngine::Rect srcRight, UnityEngine::Rect destLeft, UnityEngine::Rect destRight) ;

/// @brief Method UpdateTextureRectMatrix addr 0x25d1f3c size 0x414 virtual false final false
 void UpdateTextureRectMatrix() ;

/// @brief Method SetPerLayerColorScaleAndOffset addr 0x25d2350 size 0x14 virtual false final false
 void SetPerLayerColorScaleAndOffset(UnityEngine::Vector4 scale, UnityEngine::Vector4 offset) ;

/// @brief Method LatchLayerTextures addr 0x25d2364 size 0x46c virtual false final false
 bool LatchLayerTextures() ;

/// @brief Method GetCurrentLayerDesc addr 0x25d27d0 size 0x4f8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__LayerDesc GetCurrentLayerDesc() ;

/// @brief Method GetBlitRect addr 0x25d2cc8 size 0x16c virtual false final false
 UnityEngine::Rect GetBlitRect(int32_t eyeId) ;

/// @brief Method BlitSubImage addr 0x25d2e34 size 0x404 virtual false final false
 void BlitSubImage(UnityEngine::Texture src, UnityEngine::RenderTexture dst, UnityEngine::Material mat, UnityEngine::Rect rect) ;

/// @brief Method PopulateLayer addr 0x25d3238 size 0x648 virtual false final false
 bool PopulateLayer(int32_t mipLevels, bool isHdr, GlobalNamespace::GlobalNamespace__OVRPlugin__Sizei size, int32_t sampleCount, int32_t stage) ;

/// @brief Method SubmitLayer addr 0x25d3a1c size 0x388 virtual false final false
 bool SubmitLayer(bool overlay, bool headLocked, bool noDepthBufferTesting, GlobalNamespace::OVRPose pose, UnityEngine::Vector3 scale, int32_t frameIndex) ;

/// @brief Method SetupEditorPreview addr 0x25d0270 size 0x4 virtual false final false
 void SetupEditorPreview() ;

/// @brief Method IsPassthroughShape addr 0x25d0488 size 0x78 virtual false final false
static bool IsPassthroughShape(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape shape) ;

/// @brief Method Awake addr 0x25d3dd4 size 0x2f0 virtual false final false
 void Awake() ;

/// @brief Method get_OpenVROverlayKey addr 0x25d40c4 size 0x7c virtual false final false
static ::StringW get_OpenVROverlayKey() ;

/// @brief Method OnEnable addr 0x25d4140 size 0x70 virtual false final false
 void OnEnable() ;

/// @brief Method InitOVROverlay addr 0x25d41b0 size 0x194 virtual false final false
 void InitOVROverlay() ;

/// @brief Method OnDisable addr 0x25d4344 size 0x124 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x25d4468 size 0x18 virtual false final false
 void OnDestroy() ;

/// @brief Method ComputePoseAndScale addr 0x25d4480 size 0x388 virtual false final false
 void ComputePoseAndScale(ByRef<GlobalNamespace::OVRPose> pose, ByRef<UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked) ;

/// @brief Method ComputeSubmit addr 0x25d4808 size 0x298 virtual false final false
 bool ComputeSubmit(ByRef<GlobalNamespace::OVRPose> pose, ByRef<UnityEngine::Vector3> scale, ByRef<bool> overlay, ByRef<bool> headLocked) ;

/// @brief Method OpenVROverlayUpdate addr 0x25d4aa0 size 0x300 virtual false final false
 void OpenVROverlayUpdate(UnityEngine::Vector3 scale, GlobalNamespace::OVRPose pose) ;

/// @brief Method LateUpdate addr 0x25d4da0 size 0x524 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit OVROverlay() ;

/// @brief Method .ctor addr 0x25d52c4 size 0x1b4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayShape, "", "OVROverlay/OverlayShape");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVROverlay__OverlayType, "", "OVROverlay/OverlayType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVROverlay__ExternalSurfaceObjectCreated, "", "OVROverlay/ExternalSurfaceObjectCreated");
NEED_NO_BOX(GlobalNamespace::OVROverlay);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVROverlay, "", "OVROverlay");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVROverlay__LayerTexture, "", "OVROverlay/LayerTexture");
