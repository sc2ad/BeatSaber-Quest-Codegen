#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class RectTransform;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo;
}
// Forward declare root types
namespace GlobalNamespace {
class MusicPackPromoBanner;
}
// Type: ::MusicPackPromoBanner
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5891))
// CS Name: MusicPackPromoBanner
class CORDL_TYPE MusicPackPromoBanner : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MusicPackPromoBanner() = default;

// Ctor Parameters [CppParam { name: "", ty: "MusicPackPromoBanner", modifiers: " const&", def_value: None }]
constexpr MusicPackPromoBanner(MusicPackPromoBanner const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MusicPackPromoBanner", modifiers: "&&", def_value: None }]
constexpr MusicPackPromoBanner(MusicPackPromoBanner&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MusicPackPromoBanner(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MusicPackPromoBanner& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MusicPackPromoBanner& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MusicPackPromoBanner& operator=(MusicPackPromoBanner&& o) noexcept = default;
  constexpr MusicPackPromoBanner& operator=(MusicPackPromoBanner const& o) noexcept = default;
                


// Fields

/// @brief Field kPlayNow offset 0
static constexpr ::ConstString  kPlayNow{u"PROMO_BANNER_PLAY_NOW_LABEL"};

/// @brief Field kGetNow offset 0
static constexpr ::ConstString  kGetNow{u"PROMO_GET_NOW_LABEL"};

 UnityEngine::GameObject __declspec(property(get=__get__promoBannerGo, put=__set__promoBannerGo))  _promoBannerGo;

constexpr void __set__promoBannerGo(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__promoBannerGo() const;

 UnityEngine::RectTransform __declspec(property(get=__get__promoBannerTransform, put=__set__promoBannerTransform))  _promoBannerTransform;

constexpr void __set__promoBannerTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__promoBannerTransform() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__promoText, put=__set__promoText))  _promoText;

constexpr void __set__promoText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__promoText() const;

 UnityEngine::UI::Image __declspec(property(get=__get__backgroundImage, put=__set__backgroundImage))  _backgroundImage;

constexpr void __set__backgroundImage(UnityEngine::UI::Image value) ;

constexpr UnityEngine::UI::Image __get__backgroundImage() const;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=__get__currentPromoMusicPack, put=__set__currentPromoMusicPack))  _currentPromoMusicPack;

constexpr void __set__currentPromoMusicPack(GlobalNamespace::IBeatmapLevelPack value) ;

constexpr GlobalNamespace::IBeatmapLevelPack __get__currentPromoMusicPack() const;

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=__get__currentPromoBeatmapLevel, put=__set__currentPromoBeatmapLevel))  _currentPromoBeatmapLevel;

constexpr void __set__currentPromoBeatmapLevel(GlobalNamespace::IPreviewBeatmapLevel value) ;

constexpr GlobalNamespace::IPreviewBeatmapLevel __get__currentPromoBeatmapLevel() const;

 ::StringW __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(::StringW value) ;

constexpr ::StringW __get__text() const;


// Properties

 GlobalNamespace::IPreviewBeatmapLevel __declspec(property(get=get_currentPromoBeatmapLevel))  currentPromoBeatmapLevel;

 GlobalNamespace::IBeatmapLevelPack __declspec(property(get=get_currentPromoMusicPack))  currentPromoMusicPack;

 ::StringW __declspec(property(get=get_promoButtonText))  promoButtonText;


// Methods

/// @brief Method get_currentPromoBeatmapLevel addr 0x218e458 size 0x8 virtual false final false
 GlobalNamespace::IPreviewBeatmapLevel get_currentPromoBeatmapLevel() ;

/// @brief Method get_currentPromoMusicPack addr 0x218e460 size 0x8 virtual false final false
 GlobalNamespace::IBeatmapLevelPack get_currentPromoMusicPack() ;

/// @brief Method get_promoButtonText addr 0x218e468 size 0x8 virtual false final false
 ::StringW get_promoButtonText() ;

/// @brief Method Setup addr 0x218e470 size 0x108 virtual false final false
 void Setup(GlobalNamespace::GlobalNamespace__DlcPromoPanelDataSO__MusicPackPromoInfo musicPackPromoData, bool probablyOwned) ;

// Ctor Parameters []
explicit MusicPackPromoBanner() ;

/// @brief Method .ctor addr 0x218e578 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MusicPackPromoBanner);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MusicPackPromoBanner, "", "MusicPackPromoBanner");
