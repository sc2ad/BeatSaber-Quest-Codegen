#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class GlobalNamespace__SelectRegionViewController____c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
struct GlobalNamespace__SelectRegionViewController__Region;
}
namespace UnityEngine::UI {
class Button;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__SelectRegionViewController__Region;
}
namespace GlobalNamespace {
class GlobalNamespace__SelectRegionViewController____c;
}
namespace GlobalNamespace {
class SelectRegionViewController;
}
namespace GlobalNamespace {
struct GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair;
}
// Type: ::Region
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5843))
// CS Name: SelectRegionViewController::Region
struct CORDL_TYPE GlobalNamespace__SelectRegionViewController__Region : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SelectRegionViewController__Region(int32_t value__) noexcept;


                    constexpr GlobalNamespace__SelectRegionViewController__Region(GlobalNamespace__SelectRegionViewController__Region const&) = default;
                    constexpr GlobalNamespace__SelectRegionViewController__Region(GlobalNamespace__SelectRegionViewController__Region&&) = default;
                    constexpr GlobalNamespace__SelectRegionViewController__Region& operator=(GlobalNamespace__SelectRegionViewController__Region const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SelectRegionViewController__Region& operator=(GlobalNamespace__SelectRegionViewController__Region&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SelectRegionViewController__Region(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__SelectRegionViewController__Region_Unwrapped : int32_t {
__None = 0,
__NorthAndSouthAmerica = 1,
__Europe = 2,
__SouthKorea = 3,
__Japan = 4,
__Other = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__SelectRegionViewController__Region_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__SelectRegionViewController__Region_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region const None;

/// @brief Field NorthAndSouthAmerica offset 0
static GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region const NorthAndSouthAmerica;

/// @brief Field Europe offset 0
static GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region const Europe;

/// @brief Field SouthKorea offset 0
static GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region const SouthKorea;

/// @brief Field Japan offset 0
static GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region const Japan;

/// @brief Field Other offset 0
static GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region const Other;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RegionToLocalizationKeyPair
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5844))
// CS Name: SelectRegionViewController::RegionToLocalizationKeyPair
struct CORDL_TYPE GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "region", ty: "GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region", modifiers: "", def_value: None }, CppParam { name: "localizationKey", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair(GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region region, ::StringW localizationKey) noexcept;


                    constexpr GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair(GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair const&) = default;
                    constexpr GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair(GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair&&) = default;
                    constexpr GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair& operator=(GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair& operator=(GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region __declspec(property(get=__get_region, put=__set_region))  region;

constexpr void __set_region(GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region value) ;

constexpr GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region __get_region() const;

 ::StringW __declspec(property(get=__get_localizationKey, put=__set_localizationKey))  localizationKey;

constexpr void __set_localizationKey(::StringW value) ;

constexpr ::StringW __get_localizationKey() const;


// Methods

/// @brief Method .ctor addr 0x21816e8 size 0xc virtual false final false
 void _ctor(GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region region, ::StringW localizationKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5845))
// CS Name: SelectRegionViewController::<>c
class CORDL_TYPE GlobalNamespace__SelectRegionViewController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__SelectRegionViewController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SelectRegionViewController____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SelectRegionViewController____c(GlobalNamespace__SelectRegionViewController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SelectRegionViewController____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SelectRegionViewController____c(GlobalNamespace__SelectRegionViewController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SelectRegionViewController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SelectRegionViewController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SelectRegionViewController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SelectRegionViewController____c& operator=(GlobalNamespace__SelectRegionViewController____c&& o) noexcept = default;
  constexpr GlobalNamespace__SelectRegionViewController____c& operator=(GlobalNamespace__SelectRegionViewController____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__SelectRegionViewController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__SelectRegionViewController____c value) ;

static GlobalNamespace::GlobalNamespace__SelectRegionViewController____c __get___9() ;

static System::Func_2<GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW> __declspec(property(get=__get___9__8_1, put=__set___9__8_1))  __9__8_1;

static void __set___9__8_1(System::Func_2<GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW> value) ;

static System::Func_2<GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair,::StringW> __get___9__8_1() ;


// Methods

static GlobalNamespace::GlobalNamespace__SelectRegionViewController____c New_ctor() ;

/// @brief Method .ctor addr 0x2181758 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__8_1 addr 0x2181760 size 0xc virtual false final false
 ::StringW _DidActivate_b__8_1(GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair p) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SelectRegionViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5846))
// CS Name: SelectRegionViewController
class CORDL_TYPE SelectRegionViewController : public HMUI::ViewController {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__SelectRegionViewController____c;

using RegionToLocalizationKeyPair = GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair;

using Region = GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~SelectRegionViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController", modifiers: " const&", def_value: None }]
constexpr SelectRegionViewController(SelectRegionViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectRegionViewController", modifiers: "&&", def_value: None }]
constexpr SelectRegionViewController(SelectRegionViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectRegionViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr SelectRegionViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectRegionViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectRegionViewController& operator=(SelectRegionViewController&& o) noexcept = default;
  constexpr SelectRegionViewController& operator=(SelectRegionViewController const& o) noexcept = default;
                


// Fields

 UnityEngine::UI::Button __declspec(property(get=__get__continueButton, put=__set__continueButton))  _continueButton;

constexpr void __set__continueButton(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__continueButton() const;

 HMUI::SimpleTextDropdown __declspec(property(get=__get__regionSelectionDropdown, put=__set__regionSelectionDropdown))  _regionSelectionDropdown;

constexpr void __set__regionSelectionDropdown(HMUI::SimpleTextDropdown value) ;

constexpr HMUI::SimpleTextDropdown __get__regionSelectionDropdown() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair> __declspec(property(get=__get__regionLocalizationKeys, put=__set__regionLocalizationKeys))  _regionLocalizationKeys;

constexpr void __set__regionLocalizationKeys(::ArrayW<GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair> __get__regionLocalizationKeys() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region> __declspec(property(get=__get_didPressContinueButtonEvent, put=__set_didPressContinueButtonEvent))  didPressContinueButtonEvent;

constexpr void __set_didPressContinueButtonEvent(System::Action_1<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region> __get_didPressContinueButtonEvent() const;


// Methods

/// @brief Method add_didPressContinueButtonEvent addr 0x21811d4 size 0xb0 virtual false final false
 void add_didPressContinueButtonEvent(System::Action_1<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region> value) ;

/// @brief Method remove_didPressContinueButtonEvent addr 0x2181284 size 0xb0 virtual false final false
 void remove_didPressContinueButtonEvent(System::Action_1<GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region> value) ;

/// @brief Method DidActivate addr 0x2181334 size 0x230 virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method OnDestroy addr 0x2181564 size 0xe0 virtual true final false
 void OnDestroy() ;

/// @brief Method HandleRegionSelectionDropdownDidSelectCell addr 0x2181644 size 0x44 virtual false final false
 void HandleRegionSelectionDropdownDidSelectCell(HMUI::DropdownWithTableView dropdown, int32_t idx) ;

static GlobalNamespace::SelectRegionViewController New_ctor() ;

/// @brief Method .ctor addr 0x2181688 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__8_0 addr 0x2181690 size 0x58 virtual false final false
 void _DidActivate_b__8_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SelectRegionViewController__Region, "", "SelectRegionViewController/Region");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SelectRegionViewController____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SelectRegionViewController____c, "", "SelectRegionViewController/<>c");
NEED_NO_BOX(GlobalNamespace::SelectRegionViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SelectRegionViewController, "", "SelectRegionViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SelectRegionViewController__RegionToLocalizationKeyPair, "", "SelectRegionViewController/RegionToLocalizationKeyPair");
