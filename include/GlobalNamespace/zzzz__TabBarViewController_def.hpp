#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Action;
}
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class TextSegmentedControl;
}
namespace UnityEngine::UI {
class ContentSizeFitter;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TabBarViewController__TabBarItem;
}
namespace GlobalNamespace {
class TabBarViewController;
}
// Type: ::TabBarItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5853))
// CS Name: TabBarViewController::TabBarItem
class CORDL_TYPE GlobalNamespace__TabBarViewController__TabBarItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__TabBarViewController__TabBarItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TabBarViewController__TabBarItem", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TabBarViewController__TabBarItem(GlobalNamespace__TabBarViewController__TabBarItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TabBarViewController__TabBarItem", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TabBarViewController__TabBarItem(GlobalNamespace__TabBarViewController__TabBarItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TabBarViewController__TabBarItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TabBarViewController__TabBarItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TabBarViewController__TabBarItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TabBarViewController__TabBarItem& operator=(GlobalNamespace__TabBarViewController__TabBarItem&& o) noexcept = default;
  constexpr GlobalNamespace__TabBarViewController__TabBarItem& operator=(GlobalNamespace__TabBarViewController__TabBarItem const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_title, put=__set_title))  title;

constexpr void __set_title(::StringW value) ;

constexpr ::StringW __get_title() const;

 System::Action __declspec(property(get=__get_action, put=__set_action))  action;

constexpr void __set_action(System::Action value) ;

constexpr System::Action __get_action() const;


// Methods

// Ctor Parameters [CppParam { name: "title", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "action", ty: "System::Action", modifiers: "", def_value: None }]
explicit GlobalNamespace__TabBarViewController__TabBarItem(::StringW title, System::Action action) ;

/// @brief Method .ctor addr 0x2182630 size 0x2c virtual false final false
 void _ctor(::StringW title, System::Action action) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TabBarViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5854))
// CS Name: TabBarViewController
class CORDL_TYPE TabBarViewController : public HMUI::ViewController {
public:
// Declarations
using TabBarItem = GlobalNamespace::GlobalNamespace__TabBarViewController__TabBarItem;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~TabBarViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "TabBarViewController", modifiers: " const&", def_value: None }]
constexpr TabBarViewController(TabBarViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TabBarViewController", modifiers: "&&", def_value: None }]
constexpr TabBarViewController(TabBarViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TabBarViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr TabBarViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TabBarViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TabBarViewController& operator=(TabBarViewController&& o) noexcept = default;
  constexpr TabBarViewController& operator=(TabBarViewController const& o) noexcept = default;
                


// Fields

 HMUI::TextSegmentedControl __declspec(property(get=__get__segmentedControll, put=__set__segmentedControll))  _segmentedControll;

constexpr void __set__segmentedControll(HMUI::TextSegmentedControl value) ;

constexpr HMUI::TextSegmentedControl __get__segmentedControll() const;

 UnityEngine::UI::ContentSizeFitter __declspec(property(get=__get__contentSizeFilter, put=__set__contentSizeFilter))  _contentSizeFilter;

constexpr void __set__contentSizeFilter(UnityEngine::UI::ContentSizeFitter value) ;

constexpr UnityEngine::UI::ContentSizeFitter __get__contentSizeFilter() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__labels, put=__set__labels))  _labels;

constexpr void __set__labels(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__labels() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__TabBarViewController__TabBarItem> __declspec(property(get=__get__items, put=__set__items))  _items;

constexpr void __set__items(::ArrayW<GlobalNamespace::GlobalNamespace__TabBarViewController__TabBarItem> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__TabBarViewController__TabBarItem> __get__items() const;

 bool __declspec(property(get=__get__shouldReloadData, put=__set__shouldReloadData))  _shouldReloadData;

constexpr void __set__shouldReloadData(bool value) ;

constexpr bool __get__shouldReloadData() const;


// Properties

 bool __declspec(property(get=get_sizeToFit, put=set_sizeToFit))  sizeToFit;

 int32_t __declspec(property(get=get_selectedCellNumber))  selectedCellNumber;


// Methods

/// @brief Method set_sizeToFit addr 0x21821e4 size 0x20 virtual false final false
 void set_sizeToFit(bool value) ;

/// @brief Method get_sizeToFit addr 0x2182204 size 0x1c virtual false final false
 bool get_sizeToFit() ;

/// @brief Method get_selectedCellNumber addr 0x2182220 size 0x1c virtual false final false
 int32_t get_selectedCellNumber() ;

/// @brief Method Setup addr 0x218223c size 0x18c virtual false final false
 void Setup(::ArrayW<GlobalNamespace::GlobalNamespace__TabBarViewController__TabBarItem> items) ;

/// @brief Method SelectItem addr 0x21823c8 size 0x1c virtual false final false
 void SelectItem(int32_t index) ;

/// @brief Method Clear addr 0x21823e4 size 0x54 virtual false final false
 void Clear() ;

/// @brief Method DidActivate addr 0x2182438 size 0xc4 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method OnDestroy addr 0x21824fc size 0xdc virtual true final false
 void OnDestroy() ;

/// @brief Method HandleDidSelectCell addr 0x21825d8 size 0x50 virtual false final false
 void HandleDidSelectCell(HMUI::SegmentedControl segmentedControl, int32_t cellNumber) ;

// Ctor Parameters []
explicit TabBarViewController() ;

/// @brief Method .ctor addr 0x2182628 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TabBarViewController__TabBarItem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TabBarViewController__TabBarItem, "", "TabBarViewController/TabBarItem");
NEED_NO_BOX(GlobalNamespace::TabBarViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TabBarViewController, "", "TabBarViewController");
