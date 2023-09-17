#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace HMUI {
class IconSegmentedControl;
}
namespace GlobalNamespace {
class IAnalyticsModel;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace HMUI {
class SegmentedControl;
}
namespace UnityEngine {
class Sprite;
}
namespace HMUI {
class ____HMUI__IconSegmentedControl__DataItem;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
struct ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory;
}
namespace GlobalNamespace {
class SelectLevelCategoryViewController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SelectLevelCategoryViewController____c;
}
namespace GlobalNamespace {
class ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0;
}
// Type: ::LevelCategory
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5769))
// CS Name: SelectLevelCategoryViewController::LevelCategory
struct CORDL_TYPE ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory(int32_t value__) noexcept;


                    constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory const&) = default;
                    constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory&&) = default;
                    constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory& operator=(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory& operator=(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______GlobalNamespace__SelectLevelCategoryViewController__LevelCategory_Unwrapped : int32_t {
__None = 0,
__MusicPacks = 1,
__CustomSongs = 2,
__Favorites = 3,
__All = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______GlobalNamespace__SelectLevelCategoryViewController__LevelCategory_Unwrapped () const noexcept {
return std::bit_cast<______GlobalNamespace__SelectLevelCategoryViewController__LevelCategory_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory const None;

/// @brief Field MusicPacks offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory const MusicPacks;

/// @brief Field CustomSongs offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory const CustomSongs;

/// @brief Field Favorites offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory const Favorites;

/// @brief Field All offset 0
static ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory const All;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LevelCategoryInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5770))
// CS Name: SelectLevelCategoryViewController::LevelCategoryInfo
class CORDL_TYPE ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo& operator=(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo&& o) noexcept = default;
  constexpr ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo& operator=(____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __declspec(property(get=__get_levelCategory, put=__set_levelCategory))  levelCategory;

constexpr void __set_levelCategory(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __get_levelCategory() const;

 ::StringW __declspec(property(get=__get_localizedKey, put=__set_localizedKey))  localizedKey;

constexpr void __set_localizedKey(::StringW value) ;

constexpr ::StringW __get_localizedKey() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_categoryIcon, put=__set_categoryIcon))  categoryIcon;

constexpr void __set_categoryIcon(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_categoryIcon() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo() ;

/// @brief Method .ctor addr 0x216ca80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass12_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5771))
// CS Name: SelectLevelCategoryViewController::<>c__DisplayClass12_0
class CORDL_TYPE ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0(____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0(____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0& operator=(____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0&& o) noexcept = default;
  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0& operator=(____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0 const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __declspec(property(get=__get_enabledLevelCategories, put=__set_enabledLevelCategories))  enabledLevelCategories;

constexpr void __set_enabledLevelCategories(::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __get_enabledLevelCategories() const;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0() ;

/// @brief Method .ctor addr 0x216c714 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Setup>b__0 addr 0x216ca88 size 0x58 virtual false final false
 bool _Setup_b__0(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5772))
// CS Name: SelectLevelCategoryViewController::<>c
class CORDL_TYPE ____GlobalNamespace__SelectLevelCategoryViewController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__SelectLevelCategoryViewController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SelectLevelCategoryViewController____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c(____GlobalNamespace__SelectLevelCategoryViewController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__SelectLevelCategoryViewController____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c(____GlobalNamespace__SelectLevelCategoryViewController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__SelectLevelCategoryViewController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c& operator=(____GlobalNamespace__SelectLevelCategoryViewController____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__SelectLevelCategoryViewController____c& operator=(____GlobalNamespace__SelectLevelCategoryViewController____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c value) ;

static ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c __get___9() ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,::HMUI::____HMUI__IconSegmentedControl__DataItem> __declspec(property(get=__get___9__12_1, put=__set___9__12_1))  __9__12_1;

static void __set___9__12_1(::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,::HMUI::____HMUI__IconSegmentedControl__DataItem> value) ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,::HMUI::____HMUI__IconSegmentedControl__DataItem> __get___9__12_1() ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __declspec(property(get=__get___9__12_2, put=__set___9__12_2))  __9__12_2;

static void __set___9__12_2(::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value) ;

static ::System::Func_2<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __get___9__12_2() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__SelectLevelCategoryViewController____c() ;

/// @brief Method .ctor addr 0x216cb44 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Setup>b__12_1 addr 0x216cb4c size 0x80 virtual false final false
 ::HMUI::____HMUI__IconSegmentedControl__DataItem _Setup_b__12_1(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo x) ;

/// @brief Method <Setup>b__12_2 addr 0x216cbcc size 0x18 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory _Setup_b__12_2(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SelectLevelCategoryViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5773))
// CS Name: SelectLevelCategoryViewController
class CORDL_TYPE SelectLevelCategoryViewController : public ::HMUI::ViewController {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c;

using __c__DisplayClass12_0 = ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0;

using LevelCategoryInfo = ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo;

using LevelCategory = ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~SelectLevelCategoryViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController", modifiers: " const&", def_value: None }]
constexpr SelectLevelCategoryViewController(SelectLevelCategoryViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectLevelCategoryViewController", modifiers: "&&", def_value: None }]
constexpr SelectLevelCategoryViewController(SelectLevelCategoryViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectLevelCategoryViewController(void* ptr) noexcept : ::HMUI::ViewController(ptr) {
}


  constexpr SelectLevelCategoryViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectLevelCategoryViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectLevelCategoryViewController& operator=(SelectLevelCategoryViewController&& o) noexcept = default;
  constexpr SelectLevelCategoryViewController& operator=(SelectLevelCategoryViewController const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> __declspec(property(get=__get__allLevelCategoryInfos, put=__set__allLevelCategoryInfos))  _allLevelCategoryInfos;

constexpr void __set__allLevelCategoryInfos(::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> __get__allLevelCategoryInfos() const;

 ::HMUI::IconSegmentedControl __declspec(property(get=__get__levelFilterCategoryIconSegmentedControl, put=__set__levelFilterCategoryIconSegmentedControl))  _levelFilterCategoryIconSegmentedControl;

constexpr void __set__levelFilterCategoryIconSegmentedControl(::HMUI::IconSegmentedControl value) ;

constexpr ::HMUI::IconSegmentedControl __get__levelFilterCategoryIconSegmentedControl() const;

 ::GlobalNamespace::IAnalyticsModel __declspec(property(get=__get__analyticsModel, put=__set__analyticsModel))  _analyticsModel;

constexpr void __set__analyticsModel(::GlobalNamespace::IAnalyticsModel value) ;

constexpr ::GlobalNamespace::IAnalyticsModel __get__analyticsModel() const;

 ::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __declspec(property(get=__get_didSelectLevelCategoryEvent, put=__set_didSelectLevelCategoryEvent))  didSelectLevelCategoryEvent;

constexpr void __set_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value) ;

constexpr ::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> __get_didSelectLevelCategoryEvent() const;

 ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __declspec(property(get=__get__prevSelectedLevelCategory, put=__set__prevSelectedLevelCategory))  _prevSelectedLevelCategory;

constexpr void __set__prevSelectedLevelCategory(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __get__prevSelectedLevelCategory() const;

 ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> __declspec(property(get=__get__levelCategoryInfos, put=__set__levelCategoryInfos))  _levelCategoryInfos;

constexpr void __set__levelCategoryInfos(::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> value) ;

constexpr ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo> __get__levelCategoryInfos() const;


// Properties

 ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory __declspec(property(get=get_selectedLevelCategory))  selectedLevelCategory;


// Methods

/// @brief Method add_didSelectLevelCategoryEvent addr 0x216811c size 0xb0 virtual false final false
 void add_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value) ;

/// @brief Method remove_didSelectLevelCategoryEvent addr 0x2168808 size 0xb0 virtual false final false
 void remove_didSelectLevelCategoryEvent(::System::Action_2<::GlobalNamespace::SelectLevelCategoryViewController,::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> value) ;

/// @brief Method get_selectedLevelCategory addr 0x2167418 size 0x58 virtual false final false
 ::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory get_selectedLevelCategory() ;

/// @brief Method Setup addr 0x2167a1c size 0x318 virtual false final false
 void Setup(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory selectedCategory, ::ArrayW<::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory> enabledLevelCategories) ;

/// @brief Method DidActivate addr 0x216c71c size 0xa0 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x216c7bc size 0xa0 virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method LevelFilterCategoryIconSegmentedControlDidSelectCell addr 0x216c85c size 0x21c virtual false final false
 void LevelFilterCategoryIconSegmentedControlDidSelectCell(::HMUI::SegmentedControl segmentedControl, int32_t index) ;

// Ctor Parameters []
explicit SelectLevelCategoryViewController() ;

/// @brief Method .ctor addr 0x216ca78 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategory, "", "SelectLevelCategoryViewController/LevelCategory");
NEED_NO_BOX(::GlobalNamespace::SelectLevelCategoryViewController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelCategoryViewController, "", "SelectLevelCategoryViewController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController__LevelCategoryInfo, "", "SelectLevelCategoryViewController/LevelCategoryInfo");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c, "", "SelectLevelCategoryViewController/<>c");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__SelectLevelCategoryViewController____c__DisplayClass12_0, "", "SelectLevelCategoryViewController/<>c__DisplayClass12_0");
