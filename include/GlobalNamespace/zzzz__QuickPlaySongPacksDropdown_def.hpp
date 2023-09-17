#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class ______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack;
}
namespace GlobalNamespace {
class ____GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class ______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class ______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName;
}
// Forward declare root types
namespace GlobalNamespace {
class QuickPlaySongPacksDropdown;
}
namespace GlobalNamespace {
class ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem;
}
namespace GlobalNamespace {
class ____GlobalNamespace__QuickPlaySongPacksDropdown____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0;
}
// Type: ::SongPackMaskItem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5662))
// CS Name: QuickPlaySongPacksDropdown::SongPackMaskItem
class CORDL_TYPE ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem(____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem(____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem& operator=(____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem&& o) noexcept = default;
  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem& operator=(____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_serializedName, put=__set_serializedName))  serializedName;

constexpr void __set_serializedName(::StringW value) ;

constexpr ::StringW __get_serializedName() const;

 ::StringW __declspec(property(get=__get_localizedName, put=__set_localizedName))  localizedName;

constexpr void __set_localizedName(::StringW value) ;

constexpr ::StringW __get_localizedName() const;

 int32_t __declspec(property(get=__get_order, put=__set_order))  order;

constexpr void __set_order(int32_t value) ;

constexpr int32_t __get_order() const;

 ::GlobalNamespace::SongPackMask __declspec(property(get=__get_songPackMask, put=__set_songPackMask))  songPackMask;

constexpr void __set_songPackMask(::GlobalNamespace::SongPackMask value) ;

constexpr ::GlobalNamespace::SongPackMask __get_songPackMask() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem() ;

/// @brief Method .ctor addr 0x214e718 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass13_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5663))
// CS Name: QuickPlaySongPacksDropdown::<>c__DisplayClass13_0
class CORDL_TYPE ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0(____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0(____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0& operator=(____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0& operator=(____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_serializedName, put=__set_serializedName))  serializedName;

constexpr void __set_serializedName(::StringW value) ;

constexpr ::StringW __get_serializedName() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0() ;

/// @brief Method .ctor addr 0x214e64c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SelectCellWithSerializedName>b__0 addr 0x214e7c4 size 0x24 virtual false final false
 bool _SelectCellWithSerializedName_b__0(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5664))
// CS Name: QuickPlaySongPacksDropdown::<>c
class CORDL_TYPE ____GlobalNamespace__QuickPlaySongPacksDropdown____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__QuickPlaySongPacksDropdown____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__QuickPlaySongPacksDropdown____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c(____GlobalNamespace__QuickPlaySongPacksDropdown____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__QuickPlaySongPacksDropdown____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c(____GlobalNamespace__QuickPlaySongPacksDropdown____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__QuickPlaySongPacksDropdown____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c& operator=(____GlobalNamespace__QuickPlaySongPacksDropdown____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__QuickPlaySongPacksDropdown____c& operator=(____GlobalNamespace__QuickPlaySongPacksDropdown____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c value) ;

static ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName,bool> __declspec(property(get=__get___9__15_4, put=__set___9__15_4))  __9__15_4;

static void __set___9__15_4(::System::Func_2<::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName,bool> value) ;

static ::System::Func_2<::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName,bool> __get___9__15_4() ;

static ::System::Func_2<::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack,::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem> __declspec(property(get=__get___9__15_2, put=__set___9__15_2))  __9__15_2;

static void __set___9__15_2(::System::Func_2<::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack,::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem> value) ;

static ::System::Func_2<::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack,::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem> __get___9__15_2() ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem,::StringW> __declspec(property(get=__get___9__15_3, put=__set___9__15_3))  __9__15_3;

static void __set___9__15_3(::System::Func_2<::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem,::StringW> value) ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem,::StringW> __get___9__15_3() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__QuickPlaySongPacksDropdown____c() ;

/// @brief Method .ctor addr 0x214e84c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LazyInit>b__15_2 addr 0x214e854 size 0x198 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem _LazyInit_b__15_2(::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPack localizedPack) ;

/// @brief Method <LazyInit>b__15_4 addr 0x214e9ec size 0x3c virtual false final false
 bool _LazyInit_b__15_4(::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__LocalizedCustomPackName packName) ;

/// @brief Method <LazyInit>b__15_3 addr 0x214ea28 size 0x18 virtual false final false
 ::StringW _LazyInit_b__15_3(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem item) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::QuickPlaySongPacksDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5665))
// CS Name: QuickPlaySongPacksDropdown
class CORDL_TYPE QuickPlaySongPacksDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c;

using __c__DisplayClass13_0 = ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0;

using SongPackMaskItem = ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~QuickPlaySongPacksDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown", modifiers: " const&", def_value: None }]
constexpr QuickPlaySongPacksDropdown(QuickPlaySongPacksDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "QuickPlaySongPacksDropdown", modifiers: "&&", def_value: None }]
constexpr QuickPlaySongPacksDropdown(QuickPlaySongPacksDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit QuickPlaySongPacksDropdown(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr QuickPlaySongPacksDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr QuickPlaySongPacksDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr QuickPlaySongPacksDropdown& operator=(QuickPlaySongPacksDropdown&& o) noexcept = default;
  constexpr QuickPlaySongPacksDropdown& operator=(QuickPlaySongPacksDropdown const& o) noexcept = default;
                


// Fields

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 ::GlobalNamespace::SongPackMaskModelSO __declspec(property(get=__get__songPackMaskModel, put=__set__songPackMaskModel))  _songPackMaskModel;

constexpr void __set__songPackMaskModel(::GlobalNamespace::SongPackMaskModelSO value) ;

constexpr ::GlobalNamespace::SongPackMaskModelSO __get__songPackMaskModel() const;

 ::System::Action_1<int32_t> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

constexpr ::System::Action_1<int32_t> __get_didSelectCellWithIdxEvent() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 ::GlobalNamespace::____GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride __declspec(property(get=__get__quickPlaySongPacksOverride, put=__set__quickPlaySongPacksOverride))  _quickPlaySongPacksOverride;

constexpr void __set__quickPlaySongPacksOverride(::GlobalNamespace::____GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride __get__quickPlaySongPacksOverride() const;

 ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem> value) ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem> __get__data() const;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x214ddf0 size 0xb0 virtual false final false
 void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x214dea0 size 0xb0 virtual false final false
 void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

/// @brief Method Start addr 0x214df50 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x214dfdc size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method SetOverrideSongPacks addr 0x214e0b0 size 0x8 virtual false final false
 void SetOverrideSongPacks(::GlobalNamespace::____GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride quickPlaySongPacksOverride) ;

/// @brief Method GetSelectedSerializedName addr 0x214e0b8 size 0x70 virtual false final false
 ::StringW GetSelectedSerializedName() ;

/// @brief Method SelectCellWithSerializedName addr 0x214e4fc size 0x150 virtual false final false
 void SelectCellWithSerializedName(::StringW serializedName) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x214e654 size 0x24 virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

/// @brief Method LazyInit addr 0x214e128 size 0x3d4 virtual false final false
 void LazyInit() ;

// Ctor Parameters []
explicit QuickPlaySongPacksDropdown() ;

/// @brief Method .ctor addr 0x214e678 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LazyInit>b__15_0 addr 0x214e680 size 0x98 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem _LazyInit_b__15_0(::StringW serializedName) ;

/// @brief Method <LazyInit>b__15_1 addr 0x214e720 size 0xa4 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem _LazyInit_b__15_1(::GlobalNamespace::______GlobalNamespace__QuickPlaySetupData__QuickPlaySongPacksOverride__PredefinedPack pack) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::QuickPlaySongPacksDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuickPlaySongPacksDropdown, "", "QuickPlaySongPacksDropdown");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown__SongPackMaskItem, "", "QuickPlaySongPacksDropdown/SongPackMaskItem");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c, "", "QuickPlaySongPacksDropdown/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__QuickPlaySongPacksDropdown____c__DisplayClass13_0, "", "QuickPlaySongPacksDropdown/<>c__DisplayClass13_0");
