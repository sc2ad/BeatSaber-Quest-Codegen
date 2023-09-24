#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextSettings_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Object;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
struct SystemLanguage;
}
namespace UnityEngine {
class Font;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PanelTextSettings;
}
// Type: UnityEngine.UIElements::PanelTextSettings
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13497))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7247))
// CS Name: UnityEngine.UIElements.PanelTextSettings
class CORDL_TYPE PanelTextSettings : public UnityEngine::TextCore::Text::TextSettings {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~PanelTextSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: " const&", def_value: None }]
constexpr PanelTextSettings(PanelTextSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PanelTextSettings", modifiers: "&&", def_value: None }]
constexpr PanelTextSettings(PanelTextSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PanelTextSettings(void* ptr) noexcept : UnityEngine::TextCore::Text::TextSettings(ptr) {
}


  constexpr PanelTextSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PanelTextSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PanelTextSettings& operator=(PanelTextSettings&& o) noexcept = default;
  constexpr PanelTextSettings& operator=(PanelTextSettings const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::PanelTextSettings __declspec(property(get=__get_s_DefaultPanelTextSettings, put=__set_s_DefaultPanelTextSettings))  s_DefaultPanelTextSettings;

static void __set_s_DefaultPanelTextSettings(UnityEngine::UIElements::PanelTextSettings value) ;

static UnityEngine::UIElements::PanelTextSettings __get_s_DefaultPanelTextSettings() ;

static System::Func_2<::StringW,UnityEngine::Object> __declspec(property(get=__get_EditorGUIUtilityLoad, put=__set_EditorGUIUtilityLoad))  EditorGUIUtilityLoad;

static void __set_EditorGUIUtilityLoad(System::Func_2<::StringW,UnityEngine::Object> value) ;

static System::Func_2<::StringW,UnityEngine::Object> __get_EditorGUIUtilityLoad() ;

static System::Func_1<UnityEngine::SystemLanguage> __declspec(property(get=__get_GetCurrentLanguage, put=__set_GetCurrentLanguage))  GetCurrentLanguage;

static void __set_GetCurrentLanguage(System::Func_1<UnityEngine::SystemLanguage> value) ;

static System::Func_1<UnityEngine::SystemLanguage> __get_GetCurrentLanguage() ;

static ::StringW __declspec(property(get=__get_s_DefaultEditorPanelTextSettingPath, put=__set_s_DefaultEditorPanelTextSettingPath))  s_DefaultEditorPanelTextSettingPath;

static void __set_s_DefaultEditorPanelTextSettingPath(::StringW value) ;

static ::StringW __get_s_DefaultEditorPanelTextSettingPath() ;


// Properties

static UnityEngine::UIElements::PanelTextSettings __declspec(property(get=get_defaultPanelTextSettings))  defaultPanelTextSettings;


// Methods

/// @brief Method get_defaultPanelTextSettings addr 0x2cd0084 size 0x134 virtual false final false
static UnityEngine::UIElements::PanelTextSettings get_defaultPanelTextSettings() ;

/// @brief Method UpdateLocalizationFontAsset addr 0x2cd056c size 0x4c0 virtual false final false
static void UpdateLocalizationFontAsset() ;

/// @brief Method GetCachedFontAsset addr 0x2ccfb7c size 0x8 virtual false final false
 UnityEngine::TextCore::Text::FontAsset GetCachedFontAsset(UnityEngine::Font font) ;

static UnityEngine::UIElements::PanelTextSettings New_ctor() ;

/// @brief Method .ctor addr 0x2cd0a2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PanelTextSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PanelTextSettings, "UnityEngine.UIElements", "PanelTextSettings");
