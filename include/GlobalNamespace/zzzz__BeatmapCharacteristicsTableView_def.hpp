#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicTableCell;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace HMUI {
class TableCell;
}
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace HMUI {
class TableView;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsTableView;
}
// Type: ::BeatmapCharacteristicsTableView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5858))
// CS Name: BeatmapCharacteristicsTableView
class CORDL_TYPE BeatmapCharacteristicsTableView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~BeatmapCharacteristicsTableView() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsTableView", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicsTableView(BeatmapCharacteristicsTableView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsTableView", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicsTableView(BeatmapCharacteristicsTableView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicsTableView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapCharacteristicsTableView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicsTableView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicsTableView& operator=(BeatmapCharacteristicsTableView&& o) noexcept = default;
  constexpr BeatmapCharacteristicsTableView& operator=(BeatmapCharacteristicsTableView const& o) noexcept = default;
                


// Fields

 HMUI::TableView __declspec(property(get=__get__tableView, put=__set__tableView))  _tableView;

constexpr void __set__tableView(HMUI::TableView value) ;

constexpr HMUI::TableView __get__tableView() const;

 GlobalNamespace::BeatmapCharacteristicTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(GlobalNamespace::BeatmapCharacteristicTableCell value) ;

constexpr GlobalNamespace::BeatmapCharacteristicTableCell __get__cellPrefab() const;

 ::StringW __declspec(property(get=__get__cellReuseIdentifier, put=__set__cellReuseIdentifier))  _cellReuseIdentifier;

constexpr void __set__cellReuseIdentifier(::StringW value) ;

constexpr ::StringW __get__cellReuseIdentifier() const;

 float_t __declspec(property(get=__get__cellWidth, put=__set__cellWidth))  _cellWidth;

constexpr void __set__cellWidth(float_t value) ;

constexpr float_t __get__cellWidth() const;

 System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_didSelectCharacteristic, put=__set_didSelectCharacteristic))  didSelectCharacteristic;

constexpr void __set_didSelectCharacteristic(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> __get_didSelectCharacteristic() const;

 GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;

 int32_t __declspec(property(get=__get__selectedColumn, put=__set__selectedColumn))  _selectedColumn;

constexpr void __set__selectedColumn(int32_t value) ;

constexpr int32_t __get__selectedColumn() const;


// Methods

/// @brief Method add_didSelectCharacteristic addr 0x21849ec size 0xb0 virtual false final false
 void add_didSelectCharacteristic(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method remove_didSelectCharacteristic addr 0x2184a9c size 0xb0 virtual false final false
 void remove_didSelectCharacteristic(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method Init addr 0x2184b4c size 0xc0 virtual false final false
 void Init() ;

/// @brief Method SetData addr 0x2184c0c size 0x54 virtual false final false
 void SetData(GlobalNamespace::BeatmapCharacteristicCollection beatmapCharacteristicCollection) ;

/// @brief Method OnDestroy addr 0x2184c60 size 0x8c virtual false final false
 void OnDestroy() ;

/// @brief Method CellSize addr 0x2184cec size 0x8 virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x2184cf4 size 0xb8 virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x2184dac size 0x1b4 virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t idx) ;

/// @brief Method HandleDidSelectColumnEvent addr 0x2184f60 size 0xe0 virtual false final false
 void HandleDidSelectColumnEvent(HMUI::TableView tableView, int32_t column) ;

/// @brief Method HandleAdditionalContentModelDidInvalidateData addr 0x2185040 size 0xa8 virtual false final false
 void HandleAdditionalContentModelDidInvalidateData() ;

/// @brief Method SelectCellWithIdx addr 0x21850e8 size 0x20 virtual false final false
 void SelectCellWithIdx(int32_t idx) ;

// Ctor Parameters []
explicit BeatmapCharacteristicsTableView() ;

/// @brief Method .ctor addr 0x2185108 size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapCharacteristicsTableView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicsTableView, "", "BeatmapCharacteristicsTableView");
