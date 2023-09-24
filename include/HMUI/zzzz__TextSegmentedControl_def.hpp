#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace HMUI {
class TextSegmentedControlCell;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace Zenject {
class DiContainer;
}
namespace UnityEngine {
class Object;
}
namespace HMUI {
class HMUI__SegmentedControl__IDataSource;
}
namespace HMUI {
class SegmentedControlCell;
}
// Forward declare root types
namespace HMUI {
class TextSegmentedControl;
}
// Type: HMUI::TextSegmentedControl
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13605))
// CS Name: HMUI.TextSegmentedControl
class CORDL_TYPE TextSegmentedControl : public HMUI::SegmentedControl {
public:
// Declarations
/// @brief Convert operator to HMUI::HMUI__SegmentedControl__IDataSource
constexpr operator  HMUI::HMUI__SegmentedControl__IDataSource() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~TextSegmentedControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: " const&", def_value: None }]
constexpr TextSegmentedControl(TextSegmentedControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextSegmentedControl", modifiers: "&&", def_value: None }]
constexpr TextSegmentedControl(TextSegmentedControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextSegmentedControl(void* ptr) noexcept : HMUI::SegmentedControl(ptr) {
}


  constexpr TextSegmentedControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextSegmentedControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextSegmentedControl& operator=(TextSegmentedControl&& o) noexcept = default;
  constexpr TextSegmentedControl& operator=(TextSegmentedControl const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__fontSize, put=__set__fontSize))  _fontSize;

constexpr void __set__fontSize(float_t value) ;

constexpr float_t __get__fontSize() const;

 bool __declspec(property(get=__get__overrideCellSize, put=__set__overrideCellSize))  _overrideCellSize;

constexpr void __set__overrideCellSize(bool value) ;

constexpr bool __get__overrideCellSize() const;

 float_t __declspec(property(get=__get__padding, put=__set__padding))  _padding;

constexpr void __set__padding(float_t value) ;

constexpr float_t __get__padding() const;

 bool __declspec(property(get=__get__hideCellBackground, put=__set__hideCellBackground))  _hideCellBackground;

constexpr void __set__hideCellBackground(bool value) ;

constexpr bool __get__hideCellBackground() const;

 HMUI::TextSegmentedControlCell __declspec(property(get=__get__firstCellPrefab, put=__set__firstCellPrefab))  _firstCellPrefab;

constexpr void __set__firstCellPrefab(HMUI::TextSegmentedControlCell value) ;

constexpr HMUI::TextSegmentedControlCell __get__firstCellPrefab() const;

 HMUI::TextSegmentedControlCell __declspec(property(get=__get__lastCellPrefab, put=__set__lastCellPrefab))  _lastCellPrefab;

constexpr void __set__lastCellPrefab(HMUI::TextSegmentedControlCell value) ;

constexpr HMUI::TextSegmentedControlCell __get__lastCellPrefab() const;

 HMUI::TextSegmentedControlCell __declspec(property(get=__get__singleCellPrefab, put=__set__singleCellPrefab))  _singleCellPrefab;

constexpr void __set__singleCellPrefab(HMUI::TextSegmentedControlCell value) ;

constexpr HMUI::TextSegmentedControlCell __get__singleCellPrefab() const;

 HMUI::TextSegmentedControlCell __declspec(property(get=__get__middleCellPrefab, put=__set__middleCellPrefab))  _middleCellPrefab;

constexpr void __set__middleCellPrefab(HMUI::TextSegmentedControlCell value) ;

constexpr HMUI::TextSegmentedControlCell __get__middleCellPrefab() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 System::Collections::Generic::IReadOnlyList_1<::StringW> __declspec(property(get=__get__texts, put=__set__texts))  _texts;

constexpr void __set__texts(System::Collections::Generic::IReadOnlyList_1<::StringW> value) ;

constexpr System::Collections::Generic::IReadOnlyList_1<::StringW> __get__texts() const;


// Methods

/// @brief Method SetTexts addr 0x1fad158 size 0x18 virtual false final false
 void SetTexts(System::Collections::Generic::IReadOnlyList_1<::StringW> texts) ;

/// @brief Method NumberOfCells addr 0x1fad170 size 0xac virtual true final true
 int32_t NumberOfCells() ;

/// @brief Method CellForCellNumber addr 0x1fad21c size 0x294 virtual true final true
 HMUI::SegmentedControlCell CellForCellNumber(int32_t cellNumber) ;

/// @brief Method InstantiateCell addr 0x1fad4b0 size 0x180 virtual false final false
 HMUI::TextSegmentedControlCell InstantiateCell(UnityEngine::Object prefab) ;

static HMUI::TextSegmentedControl New_ctor() ;

/// @brief Method .ctor addr 0x1fad6b8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::TextSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(HMUI::TextSegmentedControl, "HMUI", "TextSegmentedControl");
