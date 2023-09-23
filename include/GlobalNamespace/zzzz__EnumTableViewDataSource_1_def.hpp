#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HMUI {
class HMUI__TableView__IDataSource;
}
namespace HMUI {
class TableView;
}
namespace GlobalNamespace {
class TextOnlyTableCell;
}
namespace HMUI {
class TableCell;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class EnumTableViewDataSource_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class EnumTableViewDataSource_1<T>;
}
// Type: ::EnumTableViewDataSource`1
// Type: ::EnumTableViewDataSource`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4800)), TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4800), inst: 2 })
// CS Name: EnumTableViewDataSource`1
class CORDL_TYPE EnumTableViewDataSource_1<T> : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to HMUI::HMUI__TableView__IDataSource
constexpr operator  HMUI::HMUI__TableView__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EnumTableViewDataSource_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: " const&", def_value: None }]
constexpr EnumTableViewDataSource_1(EnumTableViewDataSource_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnumTableViewDataSource_1", modifiers: "&&", def_value: None }]
constexpr EnumTableViewDataSource_1(EnumTableViewDataSource_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnumTableViewDataSource_1(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnumTableViewDataSource_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnumTableViewDataSource_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnumTableViewDataSource_1& operator=(EnumTableViewDataSource_1&& o) noexcept = default;
  constexpr EnumTableViewDataSource_1& operator=(EnumTableViewDataSource_1 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::TextOnlyTableCell __declspec(property(get=__get__cellPrefab, put=__set__cellPrefab))  _cellPrefab;

constexpr void __set__cellPrefab(GlobalNamespace::TextOnlyTableCell value) ;

constexpr GlobalNamespace::TextOnlyTableCell __get__cellPrefab() const;

 float_t __declspec(property(get=__get__cellHeight, put=__set__cellHeight))  _cellHeight;

constexpr void __set__cellHeight(float_t value) ;

constexpr float_t __get__cellHeight() const;

/// @brief Field kCellReuseIdentifier offset 0
static constexpr ::ConstString  kCellReuseIdentifier{u"Cell"};

 ::ArrayW<T> __declspec(property(get=__get__values, put=__set__values))  _values;

constexpr void __set__values(::ArrayW<T> value) ;

constexpr ::ArrayW<T> __get__values() const;


// Methods

/// @brief Method CellSize addr 0x0 size 0xffffffffffffffff virtual true final true
 float_t CellSize() ;

/// @brief Method NumberOfCells addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForIdx addr 0x0 size 0xffffffffffffffff virtual true final true
 HMUI::TableCell CellForIdx(HMUI::TableView tableView, int32_t idx) ;

/// @brief Method GetIdForValue addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetIdForValue(T value) ;

/// @brief Method GetLabelForId addr 0x0 size 0xffffffffffffffff virtual false final false
 ::StringW GetLabelForId(int32_t id) ;

/// @brief Method GetValueForId addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetValueForId(int32_t id) ;

/// @brief Method GetLabelForValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetLabelForValue(T value) ;

// Ctor Parameters []
explicit EnumTableViewDataSource_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::EnumTableViewDataSource_1, "", "EnumTableViewDataSource`1");
