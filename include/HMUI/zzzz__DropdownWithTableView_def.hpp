#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace HMUI {
class ModalView;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace HMUI {
class DropdownWithTableView;
}
// Type: HMUI::DropdownWithTableView
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13675))
// CS Name: HMUI.DropdownWithTableView
class CORDL_TYPE DropdownWithTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~DropdownWithTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownWithTableView", modifiers: " const&", def_value: None }]
constexpr DropdownWithTableView(DropdownWithTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DropdownWithTableView", modifiers: "&&", def_value: None }]
constexpr DropdownWithTableView(DropdownWithTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DropdownWithTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DropdownWithTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DropdownWithTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DropdownWithTableView& operator=(DropdownWithTableView&& o) noexcept = default;
  constexpr DropdownWithTableView& operator=(DropdownWithTableView const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;

 HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(HMUI::TableView value) ;

constexpr HMUI::TableView __get__tableView() const;

 HMUI::ModalView __declspec(property(get=__get__modalView, put=__set__modalView))  _modalView;

constexpr void __set__modalView(HMUI::ModalView value) ;

constexpr HMUI::ModalView __get__modalView() const;

 int32_t __declspec(property(get=__get__numberOfVisibleCells, put=__set__numberOfVisibleCells))  _numberOfVisibleCells;

constexpr void __set__numberOfVisibleCells(int32_t value) ;

constexpr int32_t __get__numberOfVisibleCells() const;

 System::Action_2<HMUI::DropdownWithTableView,int32_t> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(System::Action_2<HMUI::DropdownWithTableView,int32_t> value) ;

constexpr System::Action_2<HMUI::DropdownWithTableView,int32_t> __get_didSelectCellWithIdxEvent() const;

 int32_t __declspec(property(get=__get__selectedIndex_k__BackingField, put=__set__selectedIndex_k__BackingField))  _selectedIndex_k__BackingField;

constexpr void __set__selectedIndex_k__BackingField(int32_t value) ;

constexpr int32_t __get__selectedIndex_k__BackingField() const;


// Properties

 HMUI::HMUI__TableView__IDataSource __declspec(property(get=get_tableViewDataSource))  tableViewDataSource;

 int32_t __declspec(property(get=get_selectedIndex, put=set_selectedIndex))  selectedIndex;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x1fbd2ac size 0xb0 virtual false final false
 void add_didSelectCellWithIdxEvent(System::Action_2<HMUI::DropdownWithTableView,int32_t> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x1fbd35c size 0xb0 virtual false final false
 void remove_didSelectCellWithIdxEvent(System::Action_2<HMUI::DropdownWithTableView,int32_t> value) ;

/// @brief Method get_tableViewDataSource addr 0x1fbd40c size 0x1c virtual false final false
 HMUI::HMUI__TableView__IDataSource get_tableViewDataSource() ;

/// @brief Method get_selectedIndex addr 0x1fbd428 size 0x8 virtual false final false
 int32_t get_selectedIndex() ;

/// @brief Method set_selectedIndex addr 0x1fbd430 size 0x8 virtual false final false
 void set_selectedIndex(int32_t value) ;

/// @brief Method Init addr 0x1fbd438 size 0x20 virtual false final false
 void Init(HMUI::HMUI__TableView__IDataSource tableViewDataSource) ;

/// @brief Method ReloadData addr 0x1fbd458 size 0x38 virtual false final false
 void ReloadData() ;

/// @brief Method SelectCellWithIdx addr 0x1fbd610 size 0x28 virtual true final false
 void SelectCellWithIdx(int32_t idx) ;

/// @brief Method Awake addr 0x1fbd638 size 0x17c virtual true final false
 void Awake() ;

/// @brief Method OnDisable addr 0x1fbd7b4 size 0x8 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x1fbd7f8 size 0x1f8 virtual true final false
 void OnDestroy() ;

/// @brief Method RefreshSize addr 0x1fbd490 size 0x180 virtual false final false
 void RefreshSize(HMUI::HMUI__TableView__IDataSource dataSource) ;

/// @brief Method OnButtonClick addr 0x1fbd9f0 size 0x8 virtual false final false
 void OnButtonClick() ;

/// @brief Method HandleTableViewDidSelectCellWithIdx addr 0x1fbda78 size 0x38 virtual false final false
 void HandleTableViewDidSelectCellWithIdx(HMUI::TableView tableView, int32_t idx) ;

/// @brief Method Hide addr 0x1fbd7bc size 0x3c virtual false final false
 void Hide(bool animated) ;

/// @brief Method Show addr 0x1fbd9f8 size 0x80 virtual false final false
 void Show(bool animated) ;

/// @brief Method HandleModalViewBlockerClicked addr 0x1fbdab0 size 0x8 virtual false final false
 void HandleModalViewBlockerClicked() ;

static HMUI::DropdownWithTableView New_ctor() ;

/// @brief Method .ctor addr 0x1fbdab8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::DropdownWithTableView);
DEFINE_IL2CPP_ARG_TYPE(HMUI::DropdownWithTableView, "HMUI", "DropdownWithTableView");
