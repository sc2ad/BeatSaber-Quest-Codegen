#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicsDropdown;
}
namespace GlobalNamespace {
class GlobalNamespace__BeatmapCharacteristicsDropdown____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5655))
// CS Name: BeatmapCharacteristicsDropdown::<>c
class CORDL_TYPE GlobalNamespace__BeatmapCharacteristicsDropdown____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__BeatmapCharacteristicsDropdown____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapCharacteristicsDropdown____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BeatmapCharacteristicsDropdown____c(GlobalNamespace__BeatmapCharacteristicsDropdown____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BeatmapCharacteristicsDropdown____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BeatmapCharacteristicsDropdown____c(GlobalNamespace__BeatmapCharacteristicsDropdown____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BeatmapCharacteristicsDropdown____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__BeatmapCharacteristicsDropdown____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapCharacteristicsDropdown____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BeatmapCharacteristicsDropdown____c& operator=(GlobalNamespace__BeatmapCharacteristicsDropdown____c&& o) noexcept = default;
  constexpr GlobalNamespace__BeatmapCharacteristicsDropdown____c& operator=(GlobalNamespace__BeatmapCharacteristicsDropdown____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__BeatmapCharacteristicsDropdown____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__BeatmapCharacteristicsDropdown____c value) ;

static GlobalNamespace::GlobalNamespace__BeatmapCharacteristicsDropdown____c __get___9() ;

static System::Func_2<GlobalNamespace::BeatmapCharacteristicSO,::StringW> __declspec(property(get=__get___9__5_0, put=__set___9__5_0))  __9__5_0;

static void __set___9__5_0(System::Func_2<GlobalNamespace::BeatmapCharacteristicSO,::StringW> value) ;

static System::Func_2<GlobalNamespace::BeatmapCharacteristicSO,::StringW> __get___9__5_0() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__BeatmapCharacteristicsDropdown____c() ;

/// @brief Method .ctor addr 0x214caf4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__5_0 addr 0x214cafc size 0x1c virtual false final false
 ::StringW _Start_b__5_0(GlobalNamespace::BeatmapCharacteristicSO x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapCharacteristicsDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5656))
// CS Name: BeatmapCharacteristicsDropdown
class CORDL_TYPE BeatmapCharacteristicsDropdown : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__BeatmapCharacteristicsDropdown____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BeatmapCharacteristicsDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: " const&", def_value: None }]
constexpr BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicsDropdown", modifiers: "&&", def_value: None }]
constexpr BeatmapCharacteristicsDropdown(BeatmapCharacteristicsDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapCharacteristicsDropdown(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapCharacteristicsDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapCharacteristicsDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapCharacteristicsDropdown& operator=(BeatmapCharacteristicsDropdown&& o) noexcept = default;
  constexpr BeatmapCharacteristicsDropdown& operator=(BeatmapCharacteristicsDropdown const& o) noexcept = default;
                


// Fields

 HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(HMUI::SimpleTextDropdown value) ;

constexpr HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 GlobalNamespace::BeatmapCharacteristicCollection __declspec(property(get=__get__beatmapCharacteristicCollection, put=__set__beatmapCharacteristicCollection))  _beatmapCharacteristicCollection;

constexpr void __set__beatmapCharacteristicCollection(GlobalNamespace::BeatmapCharacteristicCollection value) ;

constexpr GlobalNamespace::BeatmapCharacteristicCollection __get__beatmapCharacteristicCollection() const;

 System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

constexpr System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> __get_didSelectCellWithIdxEvent() const;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x214c468 size 0xb0 virtual false final false
 void add_didSelectCellWithIdxEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x214c518 size 0xb0 virtual false final false
 void remove_didSelectCellWithIdxEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO> value) ;

/// @brief Method Start addr 0x214c5c8 size 0x1b0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x214c778 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method GetSelectedBeatmapCharacteristic addr 0x214c84c size 0xb8 virtual false final false
 GlobalNamespace::BeatmapCharacteristicSO GetSelectedBeatmapCharacteristic() ;

/// @brief Method SelectCellWithBeatmapCharacteristic addr 0x214c904 size 0xa8 virtual false final false
 void SelectCellWithBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO beatmapCharacteristic) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x214c9ac size 0xdc virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

// Ctor Parameters []
explicit BeatmapCharacteristicsDropdown() ;

/// @brief Method .ctor addr 0x214ca88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BeatmapCharacteristicsDropdown);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicsDropdown, "", "BeatmapCharacteristicsDropdown");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BeatmapCharacteristicsDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BeatmapCharacteristicsDropdown____c, "", "BeatmapCharacteristicsDropdown/<>c");
