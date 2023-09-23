#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__VisualElement__MeasureMode;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements::UIR {
struct TextCoreSettings;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextUtilities;
}
// Type: UnityEngine.UIElements::TextUtilities
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7246))
// CS Name: UnityEngine.UIElements.TextUtilities
class CORDL_TYPE TextUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TextUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: " const&", def_value: None }]
constexpr TextUtilities(TextUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextUtilities", modifiers: "&&", def_value: None }]
constexpr TextUtilities(TextUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TextUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextUtilities& operator=(TextUtilities&& o) noexcept = default;
  constexpr TextUtilities& operator=(TextUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method ComputeTextScaling addr 0x2ccf554 size 0xfc virtual false final false
static float_t ComputeTextScaling(UnityEngine::Matrix4x4 worldMatrix, float_t pixelsPerPoint) ;

/// @brief Method MeasureVisualElementTextSize addr 0x2ccf650 size 0x464 virtual false final false
static UnityEngine::Vector2 MeasureVisualElementTextSize(UnityEngine::UIElements::VisualElement ve, ::StringW textToMeasure, float_t width, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode widthMode, float_t height, UnityEngine::UIElements::UnityEngine__UIElements__VisualElement__MeasureMode heightMode, UnityEngine::UIElements::ITextHandle textHandle) ;

/// @brief Method GetFontAsset addr 0x2ccee98 size 0x128 virtual false final false
static UnityEngine::TextCore::Text::FontAsset GetFontAsset(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParam) ;

/// @brief Method GetFontAsset addr 0x2ccfb84 size 0x16c virtual false final false
static UnityEngine::TextCore::Text::FontAsset GetFontAsset(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method GetFont addr 0x2ccfdb4 size 0xf0 virtual false final false
static UnityEngine::Font GetFont(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParam) ;

/// @brief Method GetFont addr 0x2ccfea4 size 0x15c virtual false final false
static UnityEngine::Font GetFont(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method IsFontAssigned addr 0x2ccfab4 size 0xc8 virtual false final false
static bool IsFontAssigned(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method IsFontAssigned addr 0x2cd0000 size 0x84 virtual false final false
static bool IsFontAssigned(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams) ;

/// @brief Method GetTextSettingsFrom addr 0x2ccfcf0 size 0xc4 virtual false final false
static UnityEngine::UIElements::PanelTextSettings GetTextSettingsFrom(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method GetTextSettingsFrom addr 0x2ccede0 size 0xb8 virtual false final false
static UnityEngine::UIElements::PanelTextSettings GetTextSettingsFrom(UnityEngine::UIElements::UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParam) ;

/// @brief Method GetTextCoreSettingsForElement addr 0x2cd01b8 size 0x3b4 virtual false final false
static UnityEngine::UIElements::UIR::TextCoreSettings GetTextCoreSettingsForElement(UnityEngine::UIElements::VisualElement ve) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::TextUtilities);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::TextUtilities, "UnityEngine.UIElements", "TextUtilities");
