#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
namespace TMPro {
template<typename A>
class FastAction_1;
}
namespace TMPro {
template<typename A,typename B>
class FastAction_2;
}
namespace UnityEngine {
class Object;
}
namespace TMPro {
class Compute_DT_EventArgs;
}
namespace TMPro {
template<typename A,typename B,typename C>
class FastAction_3;
}
namespace TMPro {
class FastAction;
}
// Forward declare root types
namespace TMPro {
class TMPro_EventManager;
}
// Type: TMPro::TMPro_EventManager
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12254))
// CS Name: TMPro.TMPro_EventManager
class CORDL_TYPE TMPro_EventManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMPro_EventManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro_EventManager", modifiers: " const&", def_value: None }]
constexpr TMPro_EventManager(TMPro_EventManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMPro_EventManager", modifiers: "&&", def_value: None }]
constexpr TMPro_EventManager(TMPro_EventManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMPro_EventManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMPro_EventManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMPro_EventManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMPro_EventManager& operator=(TMPro_EventManager&& o) noexcept = default;
  constexpr TMPro_EventManager& operator=(TMPro_EventManager const& o) noexcept = default;
                


// Fields

static TMPro::FastAction_2<::bs_hook::Il2CppWrapperType,TMPro::Compute_DT_EventArgs> __declspec(property(get=__get_COMPUTE_DT_EVENT, put=__set_COMPUTE_DT_EVENT))  COMPUTE_DT_EVENT;

static void __set_COMPUTE_DT_EVENT(TMPro::FastAction_2<::bs_hook::Il2CppWrapperType,TMPro::Compute_DT_EventArgs> value) ;

static TMPro::FastAction_2<::bs_hook::Il2CppWrapperType,TMPro::Compute_DT_EventArgs> __get_COMPUTE_DT_EVENT() ;

static TMPro::FastAction_2<bool,UnityEngine::Material> __declspec(property(get=__get_MATERIAL_PROPERTY_EVENT, put=__set_MATERIAL_PROPERTY_EVENT))  MATERIAL_PROPERTY_EVENT;

static void __set_MATERIAL_PROPERTY_EVENT(TMPro::FastAction_2<bool,UnityEngine::Material> value) ;

static TMPro::FastAction_2<bool,UnityEngine::Material> __get_MATERIAL_PROPERTY_EVENT() ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __declspec(property(get=__get_FONT_PROPERTY_EVENT, put=__set_FONT_PROPERTY_EVENT))  FONT_PROPERTY_EVENT;

static void __set_FONT_PROPERTY_EVENT(TMPro::FastAction_2<bool,UnityEngine::Object> value) ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __get_FONT_PROPERTY_EVENT() ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __declspec(property(get=__get_SPRITE_ASSET_PROPERTY_EVENT, put=__set_SPRITE_ASSET_PROPERTY_EVENT))  SPRITE_ASSET_PROPERTY_EVENT;

static void __set_SPRITE_ASSET_PROPERTY_EVENT(TMPro::FastAction_2<bool,UnityEngine::Object> value) ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __get_SPRITE_ASSET_PROPERTY_EVENT() ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __declspec(property(get=__get_TEXTMESHPRO_PROPERTY_EVENT, put=__set_TEXTMESHPRO_PROPERTY_EVENT))  TEXTMESHPRO_PROPERTY_EVENT;

static void __set_TEXTMESHPRO_PROPERTY_EVENT(TMPro::FastAction_2<bool,UnityEngine::Object> value) ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __get_TEXTMESHPRO_PROPERTY_EVENT() ;

static TMPro::FastAction_3<UnityEngine::GameObject,UnityEngine::Material,UnityEngine::Material> __declspec(property(get=__get_DRAG_AND_DROP_MATERIAL_EVENT, put=__set_DRAG_AND_DROP_MATERIAL_EVENT))  DRAG_AND_DROP_MATERIAL_EVENT;

static void __set_DRAG_AND_DROP_MATERIAL_EVENT(TMPro::FastAction_3<UnityEngine::GameObject,UnityEngine::Material,UnityEngine::Material> value) ;

static TMPro::FastAction_3<UnityEngine::GameObject,UnityEngine::Material,UnityEngine::Material> __get_DRAG_AND_DROP_MATERIAL_EVENT() ;

static TMPro::FastAction_1<bool> __declspec(property(get=__get_TEXT_STYLE_PROPERTY_EVENT, put=__set_TEXT_STYLE_PROPERTY_EVENT))  TEXT_STYLE_PROPERTY_EVENT;

static void __set_TEXT_STYLE_PROPERTY_EVENT(TMPro::FastAction_1<bool> value) ;

static TMPro::FastAction_1<bool> __get_TEXT_STYLE_PROPERTY_EVENT() ;

static TMPro::FastAction_1<UnityEngine::Object> __declspec(property(get=__get_COLOR_GRADIENT_PROPERTY_EVENT, put=__set_COLOR_GRADIENT_PROPERTY_EVENT))  COLOR_GRADIENT_PROPERTY_EVENT;

static void __set_COLOR_GRADIENT_PROPERTY_EVENT(TMPro::FastAction_1<UnityEngine::Object> value) ;

static TMPro::FastAction_1<UnityEngine::Object> __get_COLOR_GRADIENT_PROPERTY_EVENT() ;

static TMPro::FastAction __declspec(property(get=__get_TMP_SETTINGS_PROPERTY_EVENT, put=__set_TMP_SETTINGS_PROPERTY_EVENT))  TMP_SETTINGS_PROPERTY_EVENT;

static void __set_TMP_SETTINGS_PROPERTY_EVENT(TMPro::FastAction value) ;

static TMPro::FastAction __get_TMP_SETTINGS_PROPERTY_EVENT() ;

static TMPro::FastAction __declspec(property(get=__get_RESOURCE_LOAD_EVENT, put=__set_RESOURCE_LOAD_EVENT))  RESOURCE_LOAD_EVENT;

static void __set_RESOURCE_LOAD_EVENT(TMPro::FastAction value) ;

static TMPro::FastAction __get_RESOURCE_LOAD_EVENT() ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __declspec(property(get=__get_TEXTMESHPRO_UGUI_PROPERTY_EVENT, put=__set_TEXTMESHPRO_UGUI_PROPERTY_EVENT))  TEXTMESHPRO_UGUI_PROPERTY_EVENT;

static void __set_TEXTMESHPRO_UGUI_PROPERTY_EVENT(TMPro::FastAction_2<bool,UnityEngine::Object> value) ;

static TMPro::FastAction_2<bool,UnityEngine::Object> __get_TEXTMESHPRO_UGUI_PROPERTY_EVENT() ;

static TMPro::FastAction_1<UnityEngine::Object> __declspec(property(get=__get_TEXT_CHANGED_EVENT, put=__set_TEXT_CHANGED_EVENT))  TEXT_CHANGED_EVENT;

static void __set_TEXT_CHANGED_EVENT(TMPro::FastAction_1<UnityEngine::Object> value) ;

static TMPro::FastAction_1<UnityEngine::Object> __get_TEXT_CHANGED_EVENT() ;


// Methods

/// @brief Method ON_MATERIAL_PROPERTY_CHANGED addr 0x2a67140 size 0x90 virtual false final false
static void ON_MATERIAL_PROPERTY_CHANGED(bool isChanged, UnityEngine::Material mat) ;

/// @brief Method ON_FONT_PROPERTY_CHANGED addr 0x2a671d0 size 0x90 virtual false final false
static void ON_FONT_PROPERTY_CHANGED(bool isChanged, UnityEngine::Object obj) ;

/// @brief Method ON_SPRITE_ASSET_PROPERTY_CHANGED addr 0x2a67260 size 0x90 virtual false final false
static void ON_SPRITE_ASSET_PROPERTY_CHANGED(bool isChanged, UnityEngine::Object obj) ;

/// @brief Method ON_TEXTMESHPRO_PROPERTY_CHANGED addr 0x2a672f0 size 0x90 virtual false final false
static void ON_TEXTMESHPRO_PROPERTY_CHANGED(bool isChanged, UnityEngine::Object obj) ;

/// @brief Method ON_DRAG_AND_DROP_MATERIAL_CHANGED addr 0x2a67380 size 0x98 virtual false final false
static void ON_DRAG_AND_DROP_MATERIAL_CHANGED(UnityEngine::GameObject sender, UnityEngine::Material currentMaterial, UnityEngine::Material newMaterial) ;

/// @brief Method ON_TEXT_STYLE_PROPERTY_CHANGED addr 0x2a67418 size 0x80 virtual false final false
static void ON_TEXT_STYLE_PROPERTY_CHANGED(bool isChanged) ;

/// @brief Method ON_COLOR_GRADIENT_PROPERTY_CHANGED addr 0x2a67498 size 0x80 virtual false final false
static void ON_COLOR_GRADIENT_PROPERTY_CHANGED(UnityEngine::Object obj) ;

/// @brief Method ON_TEXT_CHANGED addr 0x2a67518 size 0x80 virtual false final false
static void ON_TEXT_CHANGED(UnityEngine::Object obj) ;

/// @brief Method ON_TMP_SETTINGS_CHANGED addr 0x2a67598 size 0x60 virtual false final false
static void ON_TMP_SETTINGS_CHANGED() ;

/// @brief Method ON_RESOURCES_LOADED addr 0x2a675f8 size 0x60 virtual false final false
static void ON_RESOURCES_LOADED() ;

/// @brief Method ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED addr 0x2a67658 size 0x90 virtual false final false
static void ON_TEXTMESHPRO_UGUI_PROPERTY_CHANGED(bool isChanged, UnityEngine::Object obj) ;

/// @brief Method ON_COMPUTE_DT_EVENT addr 0x2a676e8 size 0x90 virtual false final false
static void ON_COMPUTE_DT_EVENT(::bs_hook::Il2CppWrapperType Sender, TMPro::Compute_DT_EventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMPro_EventManager);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMPro_EventManager, "TMPro", "TMPro_EventManager");
