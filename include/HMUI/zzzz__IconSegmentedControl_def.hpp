#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class HMUI__SegmentedControl__IDataSource;
}
namespace HMUI {
class SegmentedControlCell;
}
namespace HMUI {
class HMUI__IconSegmentedControl__DataItem;
}
namespace HMUI {
class IconSegmentedControlCell;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace HMUI {
class HMUI__IconSegmentedControl__DataItem;
}
namespace HMUI {
class IconSegmentedControl;
}
// Type: ::DataItem
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13599))
// CS Name: HMUI.IconSegmentedControl::DataItem
class CORDL_TYPE HMUI__IconSegmentedControl__DataItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HMUI__IconSegmentedControl__DataItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__IconSegmentedControl__DataItem", modifiers: " const&", def_value: None }]
constexpr HMUI__IconSegmentedControl__DataItem(HMUI__IconSegmentedControl__DataItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMUI__IconSegmentedControl__DataItem", modifiers: "&&", def_value: None }]
constexpr HMUI__IconSegmentedControl__DataItem(HMUI__IconSegmentedControl__DataItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMUI__IconSegmentedControl__DataItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMUI__IconSegmentedControl__DataItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMUI__IconSegmentedControl__DataItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMUI__IconSegmentedControl__DataItem& operator=(HMUI__IconSegmentedControl__DataItem&& o) noexcept = default;
  constexpr HMUI__IconSegmentedControl__DataItem& operator=(HMUI__IconSegmentedControl__DataItem const& o) noexcept = default;
                


// Fields

 UnityEngine::Sprite __declspec(property(get=__get__icon_k__BackingField, put=__set__icon_k__BackingField))  _icon_k__BackingField;

constexpr void __set__icon_k__BackingField(UnityEngine::Sprite value) ;

constexpr UnityEngine::Sprite __get__icon_k__BackingField() const;

 ::StringW __declspec(property(get=__get__hintText_k__BackingField, put=__set__hintText_k__BackingField))  _hintText_k__BackingField;

constexpr void __set__hintText_k__BackingField(::StringW value) ;

constexpr ::StringW __get__hintText_k__BackingField() const;


// Properties

 UnityEngine::Sprite __declspec(property(get=get_icon, put=set_icon))  icon;

 ::StringW __declspec(property(get=get_hintText, put=set_hintText))  hintText;


// Methods

/// @brief Method get_icon addr 0x1fac80c size 0x8 virtual false final false
 UnityEngine::Sprite get_icon() ;

/// @brief Method set_icon addr 0x1fac814 size 0x8 virtual false final false
 void set_icon(UnityEngine::Sprite value) ;

/// @brief Method get_hintText addr 0x1fac81c size 0x8 virtual false final false
 ::StringW get_hintText() ;

/// @brief Method set_hintText addr 0x1fac824 size 0x8 virtual false final false
 void set_hintText(::StringW value) ;

static HMUI::HMUI__IconSegmentedControl__DataItem New_ctor(UnityEngine::Sprite icon, ::StringW hintText) ;

/// @brief Method .ctor addr 0x1fac82c size 0x2c virtual false final false
 void _ctor(UnityEngine::Sprite icon, ::StringW hintText) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::IconSegmentedControl
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13600))
// CS Name: HMUI.IconSegmentedControl
class CORDL_TYPE IconSegmentedControl : public HMUI::SegmentedControl {
public:
// Declarations
using DataItem = HMUI::HMUI__IconSegmentedControl__DataItem;

/// @brief Convert operator to HMUI::HMUI__SegmentedControl__IDataSource
constexpr operator  HMUI::HMUI__SegmentedControl__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~IconSegmentedControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: " const&", def_value: None }]
constexpr IconSegmentedControl(IconSegmentedControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: "&&", def_value: None }]
constexpr IconSegmentedControl(IconSegmentedControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IconSegmentedControl(void* ptr) noexcept : HMUI::SegmentedControl(ptr) {
}


  constexpr IconSegmentedControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IconSegmentedControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IconSegmentedControl& operator=(IconSegmentedControl&& o) noexcept = default;
  constexpr IconSegmentedControl& operator=(IconSegmentedControl const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__iconSize, put=__set__iconSize))  _iconSize;

constexpr void __set__iconSize(float_t value) ;

constexpr float_t __get__iconSize() const;

 bool __declspec(property(get=__get__overrideCellSize, put=__set__overrideCellSize))  _overrideCellSize;

constexpr void __set__overrideCellSize(bool value) ;

constexpr bool __get__overrideCellSize() const;

 float_t __declspec(property(get=__get__padding, put=__set__padding))  _padding;

constexpr void __set__padding(float_t value) ;

constexpr float_t __get__padding() const;

 bool __declspec(property(get=__get__hideCellBackground, put=__set__hideCellBackground))  _hideCellBackground;

constexpr void __set__hideCellBackground(bool value) ;

constexpr bool __get__hideCellBackground() const;

 HMUI::IconSegmentedControlCell __declspec(property(get=__get__firstCellPrefab, put=__set__firstCellPrefab))  _firstCellPrefab;

constexpr void __set__firstCellPrefab(HMUI::IconSegmentedControlCell value) ;

constexpr HMUI::IconSegmentedControlCell __get__firstCellPrefab() const;

 HMUI::IconSegmentedControlCell __declspec(property(get=__get__lastCellPrefab, put=__set__lastCellPrefab))  _lastCellPrefab;

constexpr void __set__lastCellPrefab(HMUI::IconSegmentedControlCell value) ;

constexpr HMUI::IconSegmentedControlCell __get__lastCellPrefab() const;

 HMUI::IconSegmentedControlCell __declspec(property(get=__get__middleCellPrefab, put=__set__middleCellPrefab))  _middleCellPrefab;

constexpr void __set__middleCellPrefab(HMUI::IconSegmentedControlCell value) ;

constexpr HMUI::IconSegmentedControlCell __get__middleCellPrefab() const;

 HMUI::IconSegmentedControlCell __declspec(property(get=__get__singleCellPrefab, put=__set__singleCellPrefab))  _singleCellPrefab;

constexpr void __set__singleCellPrefab(HMUI::IconSegmentedControlCell value) ;

constexpr HMUI::IconSegmentedControlCell __get__singleCellPrefab() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 ::ArrayW<HMUI::HMUI__IconSegmentedControl__DataItem> __declspec(property(get=__get__dataItems, put=__set__dataItems))  _dataItems;

constexpr void __set__dataItems(::ArrayW<HMUI::HMUI__IconSegmentedControl__DataItem> value) ;

constexpr ::ArrayW<HMUI::HMUI__IconSegmentedControl__DataItem> __get__dataItems() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;


// Methods

/// @brief Method Init addr 0x1fabe5c size 0x1c virtual false final false
 void Init() ;

/// @brief Method SetData addr 0x1fabe80 size 0x40 virtual false final false
 void SetData(::ArrayW<HMUI::HMUI__IconSegmentedControl__DataItem> dataItems) ;

/// @brief Method NumberOfCells addr 0x1fac2c8 size 0x18 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForCellNumber addr 0x1fac2e0 size 0x180 virtual true final true
 HMUI::SegmentedControlCell CellForCellNumber(int32_t cellNumber) ;

/// @brief Method InstantiateCell addr 0x1fac460 size 0x180 virtual false final false
 HMUI::IconSegmentedControlCell InstantiateCell(UnityEngine::Object prefab) ;

static HMUI::IconSegmentedControl New_ctor() ;

/// @brief Method .ctor addr 0x1fac6f0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::HMUI__IconSegmentedControl__DataItem);
DEFINE_IL2CPP_ARG_TYPE(HMUI::HMUI__IconSegmentedControl__DataItem, "HMUI", "IconSegmentedControl/DataItem");
NEED_NO_BOX(HMUI::IconSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(HMUI::IconSegmentedControl, "HMUI", "IconSegmentedControl");
