#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MissionLevelModifiersViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0;
}
// Type: ::<>c__DisplayClass7_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5793))
// CS Name: MissionLevelModifiersViewController::<>c__DisplayClass7_0
class CORDL_TYPE ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0(____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0(____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0& operator=(____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0& operator=(____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get_modifierParamsList, put=__set_modifierParamsList))  modifierParamsList;

constexpr void __set_modifierParamsList(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> __get_modifierParamsList() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x21737c4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RefreshContent>b__0 addr 0x21737d4 size 0x7c virtual false final false
 void _RefreshContent_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem gameplayModifierInfoListItem) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MissionLevelModifiersViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5794))
// CS Name: MissionLevelModifiersViewController
class CORDL_TYPE MissionLevelModifiersViewController : public ::HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass7_0 = ::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MissionLevelModifiersViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController", modifiers: " const&", def_value: None }]
constexpr MissionLevelModifiersViewController(MissionLevelModifiersViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissionLevelModifiersViewController", modifiers: "&&", def_value: None }]
constexpr MissionLevelModifiersViewController(MissionLevelModifiersViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissionLevelModifiersViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr MissionLevelModifiersViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissionLevelModifiersViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissionLevelModifiersViewController& operator=(MissionLevelModifiersViewController&& o) noexcept = default;
  constexpr MissionLevelModifiersViewController& operator=(MissionLevelModifiersViewController const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 ::GlobalNamespace::GameplayModifierInfoListItemsList __declspec(property(get=__get__gameplayModifierInfoListItemsList, put=__set__gameplayModifierInfoListItemsList))  _gameplayModifierInfoListItemsList;

constexpr void __set__gameplayModifierInfoListItemsList(::GlobalNamespace::GameplayModifierInfoListItemsList value) ;

constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList __get__gameplayModifierInfoListItemsList() const;

 ::UnityEngine::GameObject __declspec(property(get=__get__modifiersPanel, put=__set__modifiersPanel))  _modifiersPanel;

constexpr void __set__modifiersPanel(::UnityEngine::GameObject value) ;

constexpr ::UnityEngine::GameObject __get__modifiersPanel() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__titleText, put=__set__titleText))  _titleText;

constexpr void __set__titleText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__titleText() const;

 ::GlobalNamespace::GameplayModifiers __declspec(property(get=__get__gameplayModifiers, put=__set__gameplayModifiers))  _gameplayModifiers;

constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers value) ;

constexpr ::GlobalNamespace::GameplayModifiers __get__gameplayModifiers() const;


// Methods

/// @brief Method Setup addr 0x2173604 size 0x2c virtual false final false
 void Setup(::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method DidActivate addr 0x21737c0 size 0x4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method RefreshContent addr 0x2173630 size 0x190 virtual false final false
 void RefreshContent() ;

// Ctor Parameters []
explicit MissionLevelModifiersViewController() ;

/// @brief Method .ctor addr 0x21737cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MissionLevelModifiersViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MissionLevelModifiersViewController, "", "MissionLevelModifiersViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MissionLevelModifiersViewController____c__DisplayClass7_0, "", "MissionLevelModifiersViewController/<>c__DisplayClass7_0");
