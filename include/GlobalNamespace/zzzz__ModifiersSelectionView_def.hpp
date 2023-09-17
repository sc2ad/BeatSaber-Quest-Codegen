#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace TMPro {
class TextMeshProUGUI;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItemsList;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifierInfoListItem;
}
// Forward declare root types
namespace GlobalNamespace {
class ModifiersSelectionView;
}
namespace GlobalNamespace {
class ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0;
}
// Type: ::<>c__DisplayClass3_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5883))
// CS Name: ModifiersSelectionView::<>c__DisplayClass3_0
class CORDL_TYPE ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0(____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0(____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0& operator=(____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0 const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> __declspec(property(get=__get_modifierParams, put=__set_modifierParams))  modifierParams;

constexpr void __set_modifierParams(::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::GameplayModifierParamsSO> __get_modifierParams() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0() ;

/// @brief Method .ctor addr 0x218c878 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SetGameplayModifiers>b__0 addr 0x218c888 size 0x7c virtual false final false
 void _SetGameplayModifiers_b__0(int32_t idx, ::GlobalNamespace::GameplayModifierInfoListItem item) ;

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
class CORDL_TYPE ModifiersSelectionView : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass3_0 = ::GlobalNamespace::____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ModifiersSelectionView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: " const&", def_value: None }]
constexpr ModifiersSelectionView(ModifiersSelectionView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ModifiersSelectionView", modifiers: "&&", def_value: None }]
constexpr ModifiersSelectionView(ModifiersSelectionView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ModifiersSelectionView(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
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

 ::GlobalNamespace::GameplayModifierInfoListItemsList __declspec(property(get=__get__modifierInfoList, put=__set__modifierInfoList))  _modifierInfoList;

constexpr void __set__modifierInfoList(::GlobalNamespace::GameplayModifierInfoListItemsList value) ;

constexpr ::GlobalNamespace::GameplayModifierInfoListItemsList __get__modifierInfoList() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__noModifiersText, put=__set__noModifiersText))  _noModifiersText;

constexpr void __set__noModifiersText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__noModifiersText() const;

 ::GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;


// Methods

/// @brief Method SetGameplayModifiers addr 0x218c70c size 0x16c virtual true final false
 void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers gameplayModifiers) ;

// Ctor Parameters []
explicit ModifiersSelectionView() ;

/// @brief Method .ctor addr 0x218c880 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModifiersSelectionView, "", "ModifiersSelectionView");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__ModifiersSelectionView____c__DisplayClass3_0, "", "ModifiersSelectionView/<>c__DisplayClass3_0");
