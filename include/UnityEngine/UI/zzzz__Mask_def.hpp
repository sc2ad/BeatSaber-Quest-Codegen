#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class ICanvasRaycastFilter;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::UI {
class IMaterialModifier;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace UnityEngine::UI {
class Mask;
}
// Type: UnityEngine.UI::Mask
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13153))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13036))
// CS Name: UnityEngine.UI.Mask
class CORDL_TYPE Mask : public ::UnityEngine::EventSystems::UIBehaviour {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ICanvasRaycastFilter
constexpr operator  ::UnityEngine::ICanvasRaycastFilter() const noexcept;

/// @brief Convert operator to ::UnityEngine::UI::IMaterialModifier
constexpr operator  ::UnityEngine::UI::IMaterialModifier() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~Mask() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: " const&", def_value: None }]
constexpr Mask(Mask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mask", modifiers: "&&", def_value: None }]
constexpr Mask(Mask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mask(void* ptr) noexcept : ::UnityEngine::EventSystems::UIBehaviour(ptr) {
}


  constexpr Mask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mask& operator=(Mask&& o) noexcept = default;
  constexpr Mask& operator=(Mask const& o) noexcept = default;
                


// Fields

 ::UnityEngine::RectTransform __declspec(property(get=__get_m_RectTransform, put=__set_m_RectTransform))  m_RectTransform;

constexpr void __set_m_RectTransform(::UnityEngine::RectTransform value) ;

constexpr ::UnityEngine::RectTransform __get_m_RectTransform() const;

 bool __declspec(property(get=__get_m_ShowMaskGraphic, put=__set_m_ShowMaskGraphic))  m_ShowMaskGraphic;

constexpr void __set_m_ShowMaskGraphic(bool value) ;

constexpr bool __get_m_ShowMaskGraphic() const;

 ::UnityEngine::UI::Graphic __declspec(property(get=__get_m_Graphic, put=__set_m_Graphic))  m_Graphic;

constexpr void __set_m_Graphic(::UnityEngine::UI::Graphic value) ;

constexpr ::UnityEngine::UI::Graphic __get_m_Graphic() const;

 ::UnityEngine::Material __declspec(property(get=__get_m_MaskMaterial, put=__set_m_MaskMaterial))  m_MaskMaterial;

constexpr void __set_m_MaskMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_m_MaskMaterial() const;

 ::UnityEngine::Material __declspec(property(get=__get_m_UnmaskMaterial, put=__set_m_UnmaskMaterial))  m_UnmaskMaterial;

constexpr void __set_m_UnmaskMaterial(::UnityEngine::Material value) ;

constexpr ::UnityEngine::Material __get_m_UnmaskMaterial() const;


// Properties

 ::UnityEngine::RectTransform __declspec(property(get=get_rectTransform))  rectTransform;

 bool __declspec(property(get=get_showMaskGraphic, put=set_showMaskGraphic))  showMaskGraphic;

 ::UnityEngine::UI::Graphic __declspec(property(get=get_graphic))  graphic;


// Methods

/// @brief Method get_rectTransform addr 0x2c01428 size 0x58 virtual false final false
 ::UnityEngine::RectTransform get_rectTransform() ;

/// @brief Method get_showMaskGraphic addr 0x2c01480 size 0x8 virtual false final false
 bool get_showMaskGraphic() ;

/// @brief Method set_showMaskGraphic addr 0x2c01488 size 0xb0 virtual false final false
 void set_showMaskGraphic(bool value) ;

/// @brief Method get_graphic addr 0x2c01538 size 0x58 virtual false final false
 ::UnityEngine::UI::Graphic get_graphic() ;

// Ctor Parameters []
explicit Mask() ;

/// @brief Method .ctor addr 0x2c01590 size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method MaskEnabled addr 0x2c015a0 size 0x90 virtual true final false
 bool MaskEnabled() ;

/// @brief Method OnSiblingGraphicEnabledDisabled addr 0x2c01630 size 0x4 virtual true final false
 void OnSiblingGraphicEnabledDisabled() ;

/// @brief Method OnEnable addr 0x2c01634 size 0x160 virtual true final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2c01a04 size 0x1c4 virtual true final false
 void OnDisable() ;

/// @brief Method IsRaycastLocationValid addr 0x2c01bc8 size 0xac virtual true final false
 bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera eventCamera) ;

/// @brief Method GetModifiedMaterial addr 0x2c01c74 size 0x294 virtual true final false
 ::UnityEngine::Material GetModifiedMaterial(::UnityEngine::Material baseMaterial) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UI
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UI::Mask);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Mask, "UnityEngine.UI", "Mask");
