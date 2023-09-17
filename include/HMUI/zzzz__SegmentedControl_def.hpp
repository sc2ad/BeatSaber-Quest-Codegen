#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace HMUI {
class SelectableCell;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class SegmentedControlCell;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine {
class Transform;
}
namespace HMUI {
struct ____HMUI__SelectableCell__TransitionType;
}
// Forward declare root types
namespace HMUI {
class SegmentedControl;
}
namespace HMUI {
class ____HMUI__SegmentedControl__IDataSource;
}
// Type: ::IDataSource
namespace HMUI {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13602))
// CS Name: HMUI.SegmentedControl::IDataSource
class CORDL_TYPE ____HMUI__SegmentedControl__IDataSource : public ::cordl_internals::InterfaceW {
public:
// Declarations
~____HMUI__SegmentedControl__IDataSource() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____HMUI__SegmentedControl__IDataSource(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method NumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t NumberOfCells() ;

/// @brief Method CellForCellNumber addr 0x0 size 0xffffffffffffffff virtual true final false
 ::HMUI::SegmentedControlCell CellForCellNumber(int32_t cellNumber) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
// Type: HMUI::SegmentedControl
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13603))
// CS Name: HMUI.SegmentedControl
class CORDL_TYPE SegmentedControl : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using IDataSource = ::HMUI::____HMUI__SegmentedControl__IDataSource;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SegmentedControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "SegmentedControl", modifiers: " const&", def_value: None }]
constexpr SegmentedControl(SegmentedControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SegmentedControl", modifiers: "&&", def_value: None }]
constexpr SegmentedControl(SegmentedControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SegmentedControl(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SegmentedControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SegmentedControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SegmentedControl& operator=(SegmentedControl&& o) noexcept = default;
  constexpr SegmentedControl& operator=(SegmentedControl const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__separatorPrefab, put=__set__separatorPrefab))  _separatorPrefab;

constexpr void __set__separatorPrefab(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__separatorPrefab() const;

 ::System::Action_2<::HMUI::SegmentedControl,int32_t> __declspec(property(get=__get_didSelectCellEvent, put=__set_didSelectCellEvent))  didSelectCellEvent;

constexpr void __set_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl,int32_t> value) ;

constexpr ::System::Action_2<::HMUI::SegmentedControl,int32_t> __get_didSelectCellEvent() const;

 int32_t __declspec(property(get=__get__numberOfCells, put=__set__numberOfCells))  _numberOfCells;

constexpr void __set__numberOfCells(int32_t value) ;

constexpr int32_t __get__numberOfCells() const;

 ::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell> __declspec(property(get=__get__cells, put=__set__cells))  _cells;

constexpr void __set__cells(::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell> value) ;

constexpr ::System::Collections::Generic::List_1<::HMUI::SegmentedControlCell> __get__cells() const;

 ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __declspec(property(get=__get__separators, put=__set__separators))  _separators;

constexpr void __set__separators(::System::Collections::Generic::List_1<::UnityEngine::GameObject> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject> __get__separators() const;

 ::HMUI::____HMUI__SegmentedControl__IDataSource __declspec(property(get=__get__dataSource, put=__set__dataSource))  _dataSource;

constexpr void __set__dataSource(::HMUI::____HMUI__SegmentedControl__IDataSource value) ;

constexpr ::HMUI::____HMUI__SegmentedControl__IDataSource __get__dataSource() const;

 int32_t __declspec(property(get=__get__selectedCellNumber, put=__set__selectedCellNumber))  _selectedCellNumber;

constexpr void __set__selectedCellNumber(int32_t value) ;

constexpr int32_t __get__selectedCellNumber() const;

 ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>> __declspec(property(get=__get__callbacks, put=__set__callbacks))  _callbacks;

constexpr void __set__callbacks(::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::System::Action_1<int32_t>> __get__callbacks() const;


// Properties

 ::HMUI::____HMUI__SegmentedControl__IDataSource __declspec(property(get=get_dataSource, put=set_dataSource))  dataSource;

 int32_t __declspec(property(get=get_selectedCellNumber))  selectedCellNumber;

 ::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell> __declspec(property(get=get_cells))  cells;


// Methods

/// @brief Method add_didSelectCellEvent addr 0x1fac884 size 0xb0 virtual false final false
 void add_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl,int32_t> value) ;

/// @brief Method remove_didSelectCellEvent addr 0x1fac934 size 0xb0 virtual false final false
 void remove_didSelectCellEvent(::System::Action_2<::HMUI::SegmentedControl,int32_t> value) ;

/// @brief Method get_dataSource addr 0x1fac9e4 size 0x8 virtual false final false
 ::HMUI::____HMUI__SegmentedControl__IDataSource get_dataSource() ;

/// @brief Method set_dataSource addr 0x1fabe78 size 0x8 virtual false final false
 void set_dataSource(::HMUI::____HMUI__SegmentedControl__IDataSource value) ;

/// @brief Method get_selectedCellNumber addr 0x1fac9ec size 0x8 virtual false final false
 int32_t get_selectedCellNumber() ;

/// @brief Method get_cells addr 0x1fac9f4 size 0x8 virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::HMUI::SegmentedControlCell> get_cells() ;

/// @brief Method CreateCells addr 0x1fac9fc size 0x4bc virtual false final false
 void CreateCells() ;

/// @brief Method HandleCellSelectionDidChange addr 0x1facec4 size 0x150 virtual false final false
 void HandleCellSelectionDidChange(::HMUI::SelectableCell selectableCell, ::HMUI::____HMUI__SelectableCell__TransitionType transitionType, ::bs_hook::Il2CppWrapperType changeOwner) ;

/// @brief Method SetCallbackForCell addr 0x1fad014 size 0x68 virtual false final false
 void SetCallbackForCell(int32_t cellNumber, ::System::Action_1<int32_t> callback) ;

/// @brief Method ReloadData addr 0x1fabec0 size 0x408 virtual false final false
 void ReloadData() ;

/// @brief Method SelectCellWithNumber addr 0x1fad07c size 0xa8 virtual false final false
 void SelectCellWithNumber(int32_t selectCellNumber) ;

// Ctor Parameters []
explicit SegmentedControl() ;

/// @brief Method .ctor addr 0x1fac700 size 0x10c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
} // end anonymous namespace
NEED_NO_BOX(::HMUI::SegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SegmentedControl, "HMUI", "SegmentedControl");
NEED_NO_BOX(::HMUI::____HMUI__SegmentedControl__IDataSource);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::____HMUI__SegmentedControl__IDataSource, "HMUI", "SegmentedControl/IDataSource");
