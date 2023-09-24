#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class UnityEngine__Canvas__WillRenderCanvases;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct AdditionalCanvasShaderChannels;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
struct RenderMode;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Canvas;
}
namespace UnityEngine {
class UnityEngine__Canvas__WillRenderCanvases;
}
// Type: ::WillRenderCanvases
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15759))
// CS Name: UnityEngine.Canvas::WillRenderCanvases
class CORDL_TYPE UnityEngine__Canvas__WillRenderCanvases : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__Canvas__WillRenderCanvases() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Canvas__WillRenderCanvases", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Canvas__WillRenderCanvases(UnityEngine__Canvas__WillRenderCanvases const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Canvas__WillRenderCanvases", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Canvas__WillRenderCanvases(UnityEngine__Canvas__WillRenderCanvases&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Canvas__WillRenderCanvases(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(UnityEngine__Canvas__WillRenderCanvases&& o) noexcept = default;
  constexpr UnityEngine__Canvas__WillRenderCanvases& operator=(UnityEngine__Canvas__WillRenderCanvases const& o) noexcept = default;
                


// Methods

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d33074 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d33130 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::Canvas
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15760))
// CS Name: UnityEngine.Canvas
class CORDL_TYPE Canvas : public UnityEngine::Behaviour {
public:
// Declarations
using WillRenderCanvases = UnityEngine::UnityEngine__Canvas__WillRenderCanvases;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Canvas() = default;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: " const&", def_value: None }]
constexpr Canvas(Canvas const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Canvas", modifiers: "&&", def_value: None }]
constexpr Canvas(Canvas&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Canvas(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr Canvas& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Canvas& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Canvas& operator=(Canvas&& o) noexcept = default;
  constexpr Canvas& operator=(Canvas const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __declspec(property(get=__get_preWillRenderCanvases, put=__set_preWillRenderCanvases))  preWillRenderCanvases;

static void __set_preWillRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __get_preWillRenderCanvases() ;

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __declspec(property(get=__get_willRenderCanvases, put=__set_willRenderCanvases))  willRenderCanvases;

static void __set_willRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

static UnityEngine::UnityEngine__Canvas__WillRenderCanvases __get_willRenderCanvases() ;

static System::Action_1<int32_t> __declspec(property(get=__get__externBeginRenderOverlays_k__BackingField, put=__set__externBeginRenderOverlays_k__BackingField))  _externBeginRenderOverlays_k__BackingField;

static void __set__externBeginRenderOverlays_k__BackingField(System::Action_1<int32_t> value) ;

static System::Action_1<int32_t> __get__externBeginRenderOverlays_k__BackingField() ;

static System::Action_2<int32_t,int32_t> __declspec(property(get=__get__externRenderOverlaysBefore_k__BackingField, put=__set__externRenderOverlaysBefore_k__BackingField))  _externRenderOverlaysBefore_k__BackingField;

static void __set__externRenderOverlaysBefore_k__BackingField(System::Action_2<int32_t,int32_t> value) ;

static System::Action_2<int32_t,int32_t> __get__externRenderOverlaysBefore_k__BackingField() ;

static System::Action_1<int32_t> __declspec(property(get=__get__externEndRenderOverlays_k__BackingField, put=__set__externEndRenderOverlays_k__BackingField))  _externEndRenderOverlays_k__BackingField;

static void __set__externEndRenderOverlays_k__BackingField(System::Action_1<int32_t> value) ;

static System::Action_1<int32_t> __get__externEndRenderOverlays_k__BackingField() ;


// Properties

 UnityEngine::RenderMode __declspec(property(get=get_renderMode, put=set_renderMode))  renderMode;

 bool __declspec(property(get=get_isRootCanvas))  isRootCanvas;

 UnityEngine::Rect __declspec(property(get=get_pixelRect))  pixelRect;

 float_t __declspec(property(get=get_scaleFactor, put=set_scaleFactor))  scaleFactor;

 float_t __declspec(property(get=get_referencePixelsPerUnit, put=set_referencePixelsPerUnit))  referencePixelsPerUnit;

 bool __declspec(property(get=get_pixelPerfect, put=set_pixelPerfect))  pixelPerfect;

 int32_t __declspec(property(get=get_renderOrder))  renderOrder;

 bool __declspec(property(get=get_overrideSorting, put=set_overrideSorting))  overrideSorting;

 int32_t __declspec(property(get=get_sortingOrder, put=set_sortingOrder))  sortingOrder;

 int32_t __declspec(property(get=get_targetDisplay))  targetDisplay;

 int32_t __declspec(property(get=get_sortingLayerID, put=set_sortingLayerID))  sortingLayerID;

 UnityEngine::AdditionalCanvasShaderChannels __declspec(property(get=get_additionalShaderChannels, put=set_additionalShaderChannels))  additionalShaderChannels;

 UnityEngine::Canvas __declspec(property(get=get_rootCanvas))  rootCanvas;

 UnityEngine::Vector2 __declspec(property(get=get_renderingDisplaySize))  renderingDisplaySize;

static System::Action_1<int32_t> __declspec(property(get=get_externBeginRenderOverlays, put=set_externBeginRenderOverlays))  externBeginRenderOverlays;

static System::Action_2<int32_t,int32_t> __declspec(property(get=get_externRenderOverlaysBefore, put=set_externRenderOverlaysBefore))  externRenderOverlaysBefore;

static System::Action_1<int32_t> __declspec(property(get=get_externEndRenderOverlays, put=set_externEndRenderOverlays))  externEndRenderOverlays;

 UnityEngine::Camera __declspec(property(get=get_worldCamera, put=set_worldCamera))  worldCamera;


// Methods

/// @brief Method add_preWillRenderCanvases addr 0x2d3226c size 0xb8 virtual false final false
static void add_preWillRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method remove_preWillRenderCanvases addr 0x2d32324 size 0xb8 virtual false final false
static void remove_preWillRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method add_willRenderCanvases addr 0x2d323dc size 0xbc virtual false final false
static void add_willRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method remove_willRenderCanvases addr 0x2d32498 size 0xbc virtual false final false
static void remove_willRenderCanvases(UnityEngine::UnityEngine__Canvas__WillRenderCanvases value) ;

/// @brief Method get_renderMode addr 0x2d32554 size 0x3c virtual false final false
 UnityEngine::RenderMode get_renderMode() ;

/// @brief Method set_renderMode addr 0x2d32590 size 0x44 virtual false final false
 void set_renderMode(UnityEngine::RenderMode value) ;

/// @brief Method get_isRootCanvas addr 0x2d325d4 size 0x3c virtual false final false
 bool get_isRootCanvas() ;

/// @brief Method get_pixelRect addr 0x2d32610 size 0x58 virtual false final false
 UnityEngine::Rect get_pixelRect() ;

/// @brief Method get_scaleFactor addr 0x2d326ac size 0x3c virtual false final false
 float_t get_scaleFactor() ;

/// @brief Method set_scaleFactor addr 0x2d326e8 size 0x4c virtual false final false
 void set_scaleFactor(float_t value) ;

/// @brief Method get_referencePixelsPerUnit addr 0x2d32734 size 0x3c virtual false final false
 float_t get_referencePixelsPerUnit() ;

/// @brief Method set_referencePixelsPerUnit addr 0x2d32770 size 0x4c virtual false final false
 void set_referencePixelsPerUnit(float_t value) ;

/// @brief Method get_pixelPerfect addr 0x2d327bc size 0x3c virtual false final false
 bool get_pixelPerfect() ;

/// @brief Method set_pixelPerfect addr 0x2d327f8 size 0x44 virtual false final false
 void set_pixelPerfect(bool value) ;

/// @brief Method get_renderOrder addr 0x2d3283c size 0x3c virtual false final false
 int32_t get_renderOrder() ;

/// @brief Method get_overrideSorting addr 0x2d32878 size 0x3c virtual false final false
 bool get_overrideSorting() ;

/// @brief Method set_overrideSorting addr 0x2d328b4 size 0x44 virtual false final false
 void set_overrideSorting(bool value) ;

/// @brief Method get_sortingOrder addr 0x2d328f8 size 0x3c virtual false final false
 int32_t get_sortingOrder() ;

/// @brief Method set_sortingOrder addr 0x2d32934 size 0x44 virtual false final false
 void set_sortingOrder(int32_t value) ;

/// @brief Method get_targetDisplay addr 0x2d32978 size 0x3c virtual false final false
 int32_t get_targetDisplay() ;

/// @brief Method get_sortingLayerID addr 0x2d329b4 size 0x3c virtual false final false
 int32_t get_sortingLayerID() ;

/// @brief Method set_sortingLayerID addr 0x2d329f0 size 0x44 virtual false final false
 void set_sortingLayerID(int32_t value) ;

/// @brief Method get_additionalShaderChannels addr 0x2d32a34 size 0x3c virtual false final false
 UnityEngine::AdditionalCanvasShaderChannels get_additionalShaderChannels() ;

/// @brief Method set_additionalShaderChannels addr 0x2d32a70 size 0x44 virtual false final false
 void set_additionalShaderChannels(UnityEngine::AdditionalCanvasShaderChannels value) ;

/// @brief Method get_rootCanvas addr 0x2d32ab4 size 0x3c virtual false final false
 UnityEngine::Canvas get_rootCanvas() ;

/// @brief Method get_renderingDisplaySize addr 0x2d32af0 size 0x4c virtual false final false
 UnityEngine::Vector2 get_renderingDisplaySize() ;

/// @brief Method get_externBeginRenderOverlays addr 0x2d32b80 size 0x48 virtual false final false
static System::Action_1<int32_t> get_externBeginRenderOverlays() ;

/// @brief Method set_externBeginRenderOverlays addr 0x2d32bc8 size 0x4c virtual false final false
static void set_externBeginRenderOverlays(System::Action_1<int32_t> value) ;

/// @brief Method get_externRenderOverlaysBefore addr 0x2d32c14 size 0x48 virtual false final false
static System::Action_2<int32_t,int32_t> get_externRenderOverlaysBefore() ;

/// @brief Method set_externRenderOverlaysBefore addr 0x2d32c5c size 0x4c virtual false final false
static void set_externRenderOverlaysBefore(System::Action_2<int32_t,int32_t> value) ;

/// @brief Method get_externEndRenderOverlays addr 0x2d32ca8 size 0x48 virtual false final false
static System::Action_1<int32_t> get_externEndRenderOverlays() ;

/// @brief Method set_externEndRenderOverlays addr 0x2d32cf0 size 0x4c virtual false final false
static void set_externEndRenderOverlays(System::Action_1<int32_t> value) ;

/// @brief Method SetExternalCanvasEnabled addr 0x2d32d3c size 0x3c virtual false final false
static void SetExternalCanvasEnabled(bool enabled) ;

/// @brief Method get_worldCamera addr 0x2d32d78 size 0x3c virtual false final false
 UnityEngine::Camera get_worldCamera() ;

/// @brief Method set_worldCamera addr 0x2d32db4 size 0x44 virtual false final false
 void set_worldCamera(UnityEngine::Camera value) ;

/// @brief Method GetDefaultCanvasMaterial addr 0x2d32df8 size 0x28 virtual false final false
static UnityEngine::Material GetDefaultCanvasMaterial() ;

/// @brief Method GetETC1SupportedCanvasMaterial addr 0x2d32e20 size 0x28 virtual false final false
static UnityEngine::Material GetETC1SupportedCanvasMaterial() ;

/// @brief Method ForceUpdateCanvases addr 0x2d32e48 size 0x10 virtual false final false
static void ForceUpdateCanvases() ;

/// @brief Method SendPreWillRenderCanvases addr 0x2d32e58 size 0x64 virtual false final false
static void SendPreWillRenderCanvases() ;

/// @brief Method SendWillRenderCanvases addr 0x2d32ebc size 0x64 virtual false final false
static void SendWillRenderCanvases() ;

/// @brief Method BeginRenderExtraOverlays addr 0x2d32f20 size 0x6c virtual false final false
static void BeginRenderExtraOverlays(int32_t displayIndex) ;

/// @brief Method RenderExtraOverlaysBefore addr 0x2d32f8c size 0x74 virtual false final false
static void RenderExtraOverlaysBefore(int32_t displayIndex, int32_t sortingOrder) ;

/// @brief Method EndRenderExtraOverlays addr 0x2d33000 size 0x6c virtual false final false
static void EndRenderExtraOverlays(int32_t displayIndex) ;

static UnityEngine::Canvas New_ctor() ;

/// @brief Method .ctor addr 0x2d3306c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_pixelRect_Injected addr 0x2d32668 size 0x44 virtual false final false
 void get_pixelRect_Injected(ByRef<UnityEngine::Rect> ret) ;

/// @brief Method get_renderingDisplaySize_Injected addr 0x2d32b3c size 0x44 virtual false final false
 void get_renderingDisplaySize_Injected(ByRef<UnityEngine::Vector2> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Canvas);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Canvas, "UnityEngine", "Canvas");
NEED_NO_BOX(UnityEngine::UnityEngine__Canvas__WillRenderCanvases);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__Canvas__WillRenderCanvases, "UnityEngine", "Canvas/WillRenderCanvases");
