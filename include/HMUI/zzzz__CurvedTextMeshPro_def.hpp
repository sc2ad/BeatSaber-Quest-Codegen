#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
namespace {
namespace HMUI {
class CurvedCanvasSettingsHelper;
}
namespace GlobalNamespace {
class ColorSO;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IComponentRefresher;
}
// Forward declare root types
namespace HMUI {
class CurvedTextMeshPro;
}
// Type: HMUI::CurvedTextMeshPro
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12252))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13581))
// CS Name: HMUI.CurvedTextMeshPro
class CORDL_TYPE CurvedTextMeshPro : public ::TMPro::TextMeshProUGUI {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IComponentRefresher
constexpr operator  ::GlobalNamespace::IComponentRefresher() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x7a8};

virtual ~CurvedTextMeshPro() = default;

// Ctor Parameters [CppParam { name: "", ty: "CurvedTextMeshPro", modifiers: " const&", def_value: None }]
constexpr CurvedTextMeshPro(CurvedTextMeshPro const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CurvedTextMeshPro", modifiers: "&&", def_value: None }]
constexpr CurvedTextMeshPro(CurvedTextMeshPro&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CurvedTextMeshPro(void* ptr) noexcept : ::TMPro::TextMeshProUGUI(ptr) {
}


  constexpr CurvedTextMeshPro& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CurvedTextMeshPro& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CurvedTextMeshPro& operator=(CurvedTextMeshPro&& o) noexcept = default;
  constexpr CurvedTextMeshPro& operator=(CurvedTextMeshPro const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useScriptableObjectColors, put=__set__useScriptableObjectColors))  _useScriptableObjectColors;

constexpr void __set__useScriptableObjectColors(bool value) ;

constexpr bool __get__useScriptableObjectColors() const;

 ::GlobalNamespace::ColorSO __declspec(property(get=__get__colorSo, put=__set__colorSo))  _colorSo;

constexpr void __set__colorSo(::GlobalNamespace::ColorSO value) ;

constexpr ::GlobalNamespace::ColorSO __get__colorSo() const;

 ::HMUI::CurvedCanvasSettingsHelper __declspec(property(get=__get__curvedCanvasSettingsHelper, put=__set__curvedCanvasSettingsHelper))  _curvedCanvasSettingsHelper;

constexpr void __set__curvedCanvasSettingsHelper(::HMUI::CurvedCanvasSettingsHelper value) ;

constexpr ::HMUI::CurvedCanvasSettingsHelper __get__curvedCanvasSettingsHelper() const;


// Properties

 bool __declspec(property(get=get_useScriptableObjectColors, put=set_useScriptableObjectColors))  useScriptableObjectColors;

 ::UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;


// Methods

/// @brief Method get_useScriptableObjectColors addr 0x1fa8d04 size 0x8 virtual false final false
 bool get_useScriptableObjectColors() ;

/// @brief Method set_useScriptableObjectColors addr 0x1fa8d0c size 0xc virtual false final false
 void set_useScriptableObjectColors(bool value) ;

/// @brief Method get_color addr 0x1fa8d18 size 0x90 virtual true final false
 ::UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x1fa8da8 size 0x8 virtual true final false
 void set_color(::UnityEngine::Color value) ;

/// @brief Method OnEnable addr 0x1fa8db0 size 0x34 virtual true final false
 void OnEnable() ;

/// @brief Method GenerateTextMesh addr 0x1fa8de4 size 0x3cc virtual true final false
 void GenerateTextMesh() ;

/// @brief Method __Refresh addr 0x1fa91b0 size 0x10 virtual true final true
 void __Refresh() ;

// Ctor Parameters []
explicit CurvedTextMeshPro() ;

/// @brief Method .ctor addr 0x1fa91c0 size 0x8c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::CurvedTextMeshPro);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::CurvedTextMeshPro, "HMUI", "CurvedTextMeshPro");
