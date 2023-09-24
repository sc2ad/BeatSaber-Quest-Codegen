#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
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
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0;
}
namespace GlobalNamespace {
class ModifiersSelectionView;
}
// Type: ::<>c__DisplayClass3_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5883))
// CS Name: ModifiersSelectionView::<>c__DisplayClass3_0
class CORDL_TYPE GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0(GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0(GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0&& o) noexcept = default;
  constexpr GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get_modifierParams, put=__set_modifierParams))  modifierParams;

constexpr void __set_modifierParams(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> __get_modifierParams() const;


// Methods

static GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 New_ctor() ;

/// @brief Method .ctor addr 0x218c878 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetGameplayModifiers>b__0 addr 0x218c888 size 0x7c virtual false final false
 void _SetGameplayModifiers_b__0(int32_t idx, GlobalNamespace::GameplayModifierInfoListItem item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ModifiersSelectionView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5884))
// CS Name: ModifiersSelectionView
class CORDL_TYPE ModifiersSelectionView : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass3_0 = GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ModifiersSelectionView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: " const&", def_value: None }]
constexpr ModifiersSelectionView(ModifiersSelectionView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "&&", def_value: None }]
constexpr ModifiersSelectionView(ModifiersSelectionView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModifiersSelectionView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ModifiersSelectionView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ModifiersSelectionView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ModifiersSelectionView& operator=(ModifiersSelectionView&& o) noexcept = default;
  constexpr ModifiersSelectionView& operator=(ModifiersSelectionView const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifierInfoListItemsList __declspec(property(get=__get__modifierInfoList, put=__set__modifierInfoList))  _modifierInfoList;

constexpr void __set__modifierInfoList(GlobalNamespace::GameplayModifierInfoListItemsList value) ;

constexpr GlobalNamespace::GameplayModifierInfoListItemsList __get__modifierInfoList() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__noModifiersText, put=__set__noModifiersText))  _noModifiersText;

constexpr void __set__noModifiersText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__noModifiersText() const;

 GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;


// Methods

/// @brief Method SetGameplayModifiers addr 0x218c70c size 0x16c virtual true final false
 void SetGameplayModifiers(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

static GlobalNamespace::ModifiersSelectionView New_ctor() ;

/// @brief Method .ctor addr 0x218c880 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0, "", "ModifiersSelectionView/<>c__DisplayClass3_0");
NEED_NO_BOX(GlobalNamespace::ModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ModifiersSelectionView, "", "ModifiersSelectionView");
