#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine {
class Material;
}
namespace UnityEngine::UI {
class IClippable;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UI {
class IMaskable;
}
namespace UnityEngine::UI {
class IMaterialModifier;
}
namespace UnityEngine::UI {
class RectMask2D;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine::UI {
class UnityEngine__UI__MaskableGraphic__CullStateChangedEvent;
}
// Forward declare root types
namespace UnityEngine::UI {
class MaskableGraphic;
}
namespace UnityEngine::UI {
class UnityEngine__UI__MaskableGraphic__CullStateChangedEvent;
}
// Type: ::CullStateChangedEvent
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10401), inst: 99 }), TypeDefinitionIndex(TypeDefinitionIndex(10401))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13037))
// CS Name: UnityEngine.UI.MaskableGraphic::CullStateChangedEvent
class CORDL_TYPE UnityEngine__UI__MaskableGraphic__CullStateChangedEvent : public UnityEngine::Events::UnityEvent_1<bool> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__UI__MaskableGraphic__CullStateChangedEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__MaskableGraphic__CullStateChangedEvent", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UI__MaskableGraphic__CullStateChangedEvent(UnityEngine__UI__MaskableGraphic__CullStateChangedEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UI__MaskableGraphic__CullStateChangedEvent", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UI__MaskableGraphic__CullStateChangedEvent(UnityEngine__UI__MaskableGraphic__CullStateChangedEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UI__MaskableGraphic__CullStateChangedEvent(void* ptr) noexcept : UnityEngine::Events::UnityEvent_1<bool>(ptr) {
}


  constexpr UnityEngine__UI__MaskableGraphic__CullStateChangedEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UI__MaskableGraphic__CullStateChangedEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UI__MaskableGraphic__CullStateChangedEvent& operator=(UnityEngine__UI__MaskableGraphic__CullStateChangedEvent&& o) noexcept = default;
  constexpr UnityEngine__UI__MaskableGraphic__CullStateChangedEvent& operator=(UnityEngine__UI__MaskableGraphic__CullStateChangedEvent const& o) noexcept = default;
                


// Methods

static UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent New_ctor() ;

/// @brief Method .ctor addr 0x2c0308c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
// Type: UnityEngine.UI::MaskableGraphic
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12981))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13038))
// CS Name: UnityEngine.UI.MaskableGraphic
class CORDL_TYPE MaskableGraphic : public UnityEngine::UI::Graphic {
public:
// Declarations
using CullStateChangedEvent = UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent;

/// @brief Convert operator to UnityEngine::UI::IClippable
constexpr operator  UnityEngine::UI::IClippable() const noexcept;

/// @brief Convert operator to UnityEngine::UI::IMaskable
constexpr operator  UnityEngine::UI::IMaskable() const noexcept;

/// @brief Convert operator to UnityEngine::UI::IMaterialModifier
constexpr operator  UnityEngine::UI::IMaterialModifier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~MaskableGraphic() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic", modifiers: " const&", def_value: None }]
constexpr MaskableGraphic(MaskableGraphic const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaskableGraphic", modifiers: "&&", def_value: None }]
constexpr MaskableGraphic(MaskableGraphic&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaskableGraphic(void* ptr) noexcept : UnityEngine::UI::Graphic(ptr) {
}


  constexpr MaskableGraphic& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaskableGraphic& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaskableGraphic& operator=(MaskableGraphic&& o) noexcept = default;
  constexpr MaskableGraphic& operator=(MaskableGraphic const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_ShouldRecalculateStencil, put=__set_m_ShouldRecalculateStencil))  m_ShouldRecalculateStencil;

constexpr void __set_m_ShouldRecalculateStencil(bool value) ;

constexpr bool __get_m_ShouldRecalculateStencil() const;

 UnityEngine::Material __declspec(property(get=__get_m_MaskMaterial, put=__set_m_MaskMaterial))  m_MaskMaterial;

constexpr void __set_m_MaskMaterial(UnityEngine::Material value) ;

constexpr UnityEngine::Material __get_m_MaskMaterial() const;

 UnityEngine::UI::RectMask2D __declspec(property(get=__get_m_ParentMask, put=__set_m_ParentMask))  m_ParentMask;

constexpr void __set_m_ParentMask(UnityEngine::UI::RectMask2D value) ;

constexpr UnityEngine::UI::RectMask2D __get_m_ParentMask() const;

 bool __declspec(property(get=__get_m_Maskable, put=__set_m_Maskable))  m_Maskable;

constexpr void __set_m_Maskable(bool value) ;

constexpr bool __get_m_Maskable() const;

 bool __declspec(property(get=__get_m_IsMaskingGraphic, put=__set_m_IsMaskingGraphic))  m_IsMaskingGraphic;

constexpr void __set_m_IsMaskingGraphic(bool value) ;

constexpr bool __get_m_IsMaskingGraphic() const;

 bool __declspec(property(get=__get_m_IncludeForMasking, put=__set_m_IncludeForMasking))  m_IncludeForMasking;

constexpr void __set_m_IncludeForMasking(bool value) ;

constexpr bool __get_m_IncludeForMasking() const;

 UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent __declspec(property(get=__get_m_OnCullStateChanged, put=__set_m_OnCullStateChanged))  m_OnCullStateChanged;

constexpr void __set_m_OnCullStateChanged(UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent value) ;

constexpr UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent __get_m_OnCullStateChanged() const;

 bool __declspec(property(get=__get_m_ShouldRecalculate, put=__set_m_ShouldRecalculate))  m_ShouldRecalculate;

constexpr void __set_m_ShouldRecalculate(bool value) ;

constexpr bool __get_m_ShouldRecalculate() const;

 int32_t __declspec(property(get=__get_m_StencilValue, put=__set_m_StencilValue))  m_StencilValue;

constexpr void __set_m_StencilValue(int32_t value) ;

constexpr int32_t __get_m_StencilValue() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get_m_Corners, put=__set_m_Corners))  m_Corners;

constexpr void __set_m_Corners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get_m_Corners() const;


// Properties

 UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent __declspec(property(get=get_onCullStateChanged, put=set_onCullStateChanged))  onCullStateChanged;

 bool __declspec(property(get=get_maskable, put=set_maskable))  maskable;

 bool __declspec(property(get=get_isMaskingGraphic, put=set_isMaskingGraphic))  isMaskingGraphic;

 UnityEngine::Rect __declspec(property(get=get_rootCanvasRect))  rootCanvasRect;


// Methods

/// @brief Method get_onCullStateChanged addr 0x2c02330 size 0x8 virtual false final false
 UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent get_onCullStateChanged() ;

/// @brief Method set_onCullStateChanged addr 0x2c02338 size 0x8 virtual false final false
 void set_onCullStateChanged(UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent value) ;

/// @brief Method get_maskable addr 0x2c02340 size 0x8 virtual false final false
 bool get_maskable() ;

/// @brief Method set_maskable addr 0x2c02348 size 0x30 virtual false final false
 void set_maskable(bool value) ;

/// @brief Method get_isMaskingGraphic addr 0x2c02378 size 0x8 virtual false final false
 bool get_isMaskingGraphic() ;

/// @brief Method set_isMaskingGraphic addr 0x2c01794 size 0x18 virtual false final false
 void set_isMaskingGraphic(bool value) ;

/// @brief Method GetModifiedMaterial addr 0x2c02380 size 0x100 virtual true final false
 UnityEngine::Material GetModifiedMaterial(UnityEngine::Material baseMaterial) ;

/// @brief Method Cull addr 0x2c02480 size 0x54 virtual true final false
 void Cull(UnityEngine::Rect clipRect, bool validRect) ;

/// @brief Method UpdateCull addr 0x2c026b8 size 0xdc virtual false final false
 void UpdateCull(bool cull) ;

/// @brief Method SetClipRect addr 0x2c02794 size 0x6c virtual true final false
 void SetClipRect(UnityEngine::Rect clipRect, bool validRect) ;

/// @brief Method SetClipSoftness addr 0x2c02800 size 0x38 virtual true final false
 void SetClipSoftness(UnityEngine::Vector2 clipSoftness) ;

/// @brief Method OnEnable addr 0x2c02838 size 0x50 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c029dc size 0xac virtual true final false
 void OnDisable() ;

/// @brief Method OnTransformParentChanged addr 0x2c02a88 size 0x50 virtual true final false
 void OnTransformParentChanged() ;

/// @brief Method ParentMaskStateChanged addr 0x2c02ad8 size 0x4 virtual true final false
 void ParentMaskStateChanged() ;

/// @brief Method OnCanvasHierarchyChanged addr 0x2c02adc size 0x50 virtual true final false
 void OnCanvasHierarchyChanged() ;

/// @brief Method get_rootCanvasRect addr 0x2c024d4 size 0x1e4 virtual false final false
 UnityEngine::Rect get_rootCanvasRect() ;

/// @brief Method UpdateClipParent addr 0x2c02888 size 0x154 virtual false final false
 void UpdateClipParent() ;

/// @brief Method RecalculateClipping addr 0x2c02f48 size 0x4 virtual true final false
 void RecalculateClipping() ;

/// @brief Method RecalculateMasking addr 0x2c02f4c size 0x7c virtual true final false
 void RecalculateMasking() ;

static UnityEngine::UI::MaskableGraphic New_ctor() ;

/// @brief Method .ctor addr 0x2c02fc8 size 0xc4 virtual false final false
 void _ctor() ;

/// @brief Method UnityEngine.UI.IClippable.get_gameObject addr 0x2c030d4 size 0x8 virtual true final true
 UnityEngine::GameObject UnityEngine_UI_IClippable_get_gameObject() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
NEED_NO_BOX(UnityEngine::UI::MaskableGraphic);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::MaskableGraphic, "UnityEngine.UI", "MaskableGraphic");
NEED_NO_BOX(UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::UnityEngine__UI__MaskableGraphic__CullStateChangedEvent, "UnityEngine.UI", "MaskableGraphic/CullStateChangedEvent");
