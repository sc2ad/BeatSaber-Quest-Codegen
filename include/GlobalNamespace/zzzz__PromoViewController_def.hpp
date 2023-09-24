#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::UI {
class Button;
}
namespace GlobalNamespace {
class PreviewBeatmapLevelPackSO;
}
namespace GlobalNamespace {
class IAnnotatedBeatmapLevelCollection;
}
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class GlobalNamespace__PromoViewController__ButtonPromoTypePair;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace GlobalNamespace {
class GlobalNamespace__PromoViewController____c__DisplayClass5_0;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__PromoViewController__ButtonPromoTypePair;
}
namespace GlobalNamespace {
class GlobalNamespace__PromoViewController____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class PromoViewController;
}
// Type: ::ButtonPromoTypePair
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5831))
// CS Name: PromoViewController::ButtonPromoTypePair
class CORDL_TYPE GlobalNamespace__PromoViewController__ButtonPromoTypePair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__PromoViewController__ButtonPromoTypePair() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PromoViewController__ButtonPromoTypePair", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PromoViewController__ButtonPromoTypePair(GlobalNamespace__PromoViewController__ButtonPromoTypePair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PromoViewController__ButtonPromoTypePair", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PromoViewController__ButtonPromoTypePair(GlobalNamespace__PromoViewController__ButtonPromoTypePair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PromoViewController__ButtonPromoTypePair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PromoViewController__ButtonPromoTypePair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PromoViewController__ButtonPromoTypePair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PromoViewController__ButtonPromoTypePair& operator=(GlobalNamespace__PromoViewController__ButtonPromoTypePair&& o) noexcept = default;
  constexpr GlobalNamespace__PromoViewController__ButtonPromoTypePair& operator=(GlobalNamespace__PromoViewController__ButtonPromoTypePair const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get_button, put=__set_button))  button;

constexpr void __set_button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get_button() const;

 GlobalNamespace::PreviewBeatmapLevelPackSO __declspec(property(get=__get_previewLevelPack, put=__set_previewLevelPack))  previewLevelPack;

constexpr void __set_previewLevelPack(GlobalNamespace::PreviewBeatmapLevelPackSO value) ;

constexpr GlobalNamespace::PreviewBeatmapLevelPackSO __get_previewLevelPack() const;

 GlobalNamespace::BeatmapLevelPackSO __declspec(property(get=__get_levelPack, put=__set_levelPack))  levelPack;

constexpr void __set_levelPack(GlobalNamespace::BeatmapLevelPackSO value) ;

constexpr GlobalNamespace::BeatmapLevelPackSO __get_levelPack() const;

 GlobalNamespace::BeatmapLevelSO __declspec(property(get=__get_beatmapLevel, put=__set_beatmapLevel))  beatmapLevel;

constexpr void __set_beatmapLevel(GlobalNamespace::BeatmapLevelSO value) ;

constexpr GlobalNamespace::BeatmapLevelSO __get_beatmapLevel() const;

 GlobalNamespace::IAnnotatedBeatmapLevelCollection __declspec(property(get=__get__annotatedBeatmapLevelCollection, put=__set__annotatedBeatmapLevelCollection))  _annotatedBeatmapLevelCollection;

constexpr void __set__annotatedBeatmapLevelCollection(GlobalNamespace::IAnnotatedBeatmapLevelCollection value) ;

constexpr GlobalNamespace::IAnnotatedBeatmapLevelCollection __get__annotatedBeatmapLevelCollection() const;


// Properties

 GlobalNamespace::IAnnotatedBeatmapLevelCollection __declspec(property(get=get_annotatedBeatmapLevelCollection))  annotatedBeatmapLevelCollection;


// Methods

/// @brief Method get_annotatedBeatmapLevelCollection addr 0x217ec7c size 0xb0 virtual false final false
 GlobalNamespace::IAnnotatedBeatmapLevelCollection get_annotatedBeatmapLevelCollection() ;

static GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair New_ctor() ;

/// @brief Method .ctor addr 0x217ed2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5832))
// CS Name: PromoViewController::<>c__DisplayClass5_0
class CORDL_TYPE GlobalNamespace__PromoViewController____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__PromoViewController____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PromoViewController____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__PromoViewController____c__DisplayClass5_0(GlobalNamespace__PromoViewController____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__PromoViewController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__PromoViewController____c__DisplayClass5_0(GlobalNamespace__PromoViewController____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__PromoViewController____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__PromoViewController____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__PromoViewController____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__PromoViewController____c__DisplayClass5_0& operator=(GlobalNamespace__PromoViewController____c__DisplayClass5_0&& o) noexcept = default;
  constexpr GlobalNamespace__PromoViewController____c__DisplayClass5_0& operator=(GlobalNamespace__PromoViewController____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair __declspec(property(get=__get_item, put=__set_item))  item;

constexpr void __set_item(GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair value) ;

constexpr GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair __get_item() const;

 GlobalNamespace::PromoViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::PromoViewController value) ;

constexpr GlobalNamespace::PromoViewController __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__PromoViewController____c__DisplayClass5_0 New_ctor() ;

/// @brief Method .ctor addr 0x217ec6c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__0 addr 0x217ed34 size 0x64 virtual false final false
 void _DidActivate_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PromoViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5833))
// CS Name: PromoViewController
class CORDL_TYPE PromoViewController : public HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass5_0 = GlobalNamespace::GlobalNamespace__PromoViewController____c__DisplayClass5_0;

using ButtonPromoTypePair = GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~PromoViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "PromoViewController", modifiers: " const&", def_value: None }]
constexpr PromoViewController(PromoViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PromoViewController", modifiers: "&&", def_value: None }]
constexpr PromoViewController(PromoViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PromoViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr PromoViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PromoViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PromoViewController& operator=(PromoViewController&& o) noexcept = default;
  constexpr PromoViewController& operator=(PromoViewController const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair> __declspec(property(get=__get__elements, put=__set__elements))  _elements;

constexpr void __set__elements(::ArrayW<GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair> __get__elements() const;

 System::Action_3<GlobalNamespace::PromoViewController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::IPreviewBeatmapLevel> __declspec(property(get=__get_promoButtonWasPressedEvent, put=__set_promoButtonWasPressedEvent))  promoButtonWasPressedEvent;

constexpr void __set_promoButtonWasPressedEvent(System::Action_3<GlobalNamespace::PromoViewController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::IPreviewBeatmapLevel> value) ;

constexpr System::Action_3<GlobalNamespace::PromoViewController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::IPreviewBeatmapLevel> __get_promoButtonWasPressedEvent() const;


// Methods

/// @brief Method add_promoButtonWasPressedEvent addr 0x217e9d4 size 0xb0 virtual false final false
 void add_promoButtonWasPressedEvent(System::Action_3<GlobalNamespace::PromoViewController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method remove_promoButtonWasPressedEvent addr 0x217ea84 size 0xb0 virtual false final false
 void remove_promoButtonWasPressedEvent(System::Action_3<GlobalNamespace::PromoViewController,GlobalNamespace::IAnnotatedBeatmapLevelCollection,GlobalNamespace::IPreviewBeatmapLevel> value) ;

/// @brief Method DidActivate addr 0x217eb34 size 0x138 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

static GlobalNamespace::PromoViewController New_ctor() ;

/// @brief Method .ctor addr 0x217ec74 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PromoViewController__ButtonPromoTypePair, "", "PromoViewController/ButtonPromoTypePair");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__PromoViewController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__PromoViewController____c__DisplayClass5_0, "", "PromoViewController/<>c__DisplayClass5_0");
NEED_NO_BOX(GlobalNamespace::PromoViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PromoViewController, "", "PromoViewController");
