#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace HMUI {
class SimpleTextDropdown;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
class ____GlobalNamespace__BeatmapDifficultyDropdown____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5657))
// CS Name: BeatmapDifficultyDropdown::<>c
class CORDL_TYPE ____GlobalNamespace__BeatmapDifficultyDropdown____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__BeatmapDifficultyDropdown____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDifficultyDropdown____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDifficultyDropdown____c(____GlobalNamespace__BeatmapDifficultyDropdown____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__BeatmapDifficultyDropdown____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__BeatmapDifficultyDropdown____c(____GlobalNamespace__BeatmapDifficultyDropdown____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__BeatmapDifficultyDropdown____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__BeatmapDifficultyDropdown____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDifficultyDropdown____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__BeatmapDifficultyDropdown____c& operator=(____GlobalNamespace__BeatmapDifficultyDropdown____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__BeatmapDifficultyDropdown____c& operator=(____GlobalNamespace__BeatmapDifficultyDropdown____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__BeatmapDifficultyDropdown____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__BeatmapDifficultyDropdown____c value) ;

static ::GlobalNamespace::____GlobalNamespace__BeatmapDifficultyDropdown____c __get___9() ;

static ::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>,::StringW> __declspec(property(get=__get___9__11_0, put=__set___9__11_0))  __9__11_0;

static void __set___9__11_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>,::StringW> value) ;

static ::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>,::StringW> __get___9__11_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__BeatmapDifficultyDropdown____c() ;

/// @brief Method .ctor addr 0x214d310 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__11_0 addr 0x214d318 size 0x44 virtual false final false
 ::StringW _Start_b__11_0(::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::BeatmapDifficultyDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5658))
// CS Name: BeatmapDifficultyDropdown
class CORDL_TYPE BeatmapDifficultyDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__BeatmapDifficultyDropdown____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BeatmapDifficultyDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyDropdown", modifiers: " const&", def_value: None }]
constexpr BeatmapDifficultyDropdown(BeatmapDifficultyDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyDropdown", modifiers: "&&", def_value: None }]
constexpr BeatmapDifficultyDropdown(BeatmapDifficultyDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BeatmapDifficultyDropdown(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BeatmapDifficultyDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BeatmapDifficultyDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BeatmapDifficultyDropdown& operator=(BeatmapDifficultyDropdown&& o) noexcept = default;
  constexpr BeatmapDifficultyDropdown& operator=(BeatmapDifficultyDropdown const& o) noexcept = default;
                


// Fields

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 ::System::Action_1<int32_t> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

constexpr ::System::Action_1<int32_t> __get_didSelectCellWithIdxEvent() const;

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>> __declspec(property(get=__get__beatmapDifficultyData, put=__set__beatmapDifficultyData))  _beatmapDifficultyData;

constexpr void __set__beatmapDifficultyData(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>> __get__beatmapDifficultyData() const;

 bool __declspec(property(get=__get__includeAllDifficulties_k__BackingField, put=__set__includeAllDifficulties_k__BackingField))  _includeAllDifficulties_k__BackingField;

constexpr void __set__includeAllDifficulties_k__BackingField(bool value) ;

constexpr bool __get__includeAllDifficulties_k__BackingField() const;


// Properties

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>> __declspec(property(get=get_beatmapDifficultyData))  beatmapDifficultyData;

 bool __declspec(property(get=get_includeAllDifficulties, put=set_includeAllDifficulties))  includeAllDifficulties;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x214cb18 size 0xb0 virtual false final false
 void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x214cbc8 size 0xb0 virtual false final false
 void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

/// @brief Method get_beatmapDifficultyData addr 0x214cc78 size 0x1dc virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>> get_beatmapDifficultyData() ;

/// @brief Method get_includeAllDifficulties addr 0x214ce54 size 0x8 virtual false final false
 bool get_includeAllDifficulties() ;

/// @brief Method set_includeAllDifficulties addr 0x214ce5c size 0xc virtual false final false
 void set_includeAllDifficulties(bool value) ;

/// @brief Method Start addr 0x214ce68 size 0x1a0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x214d008 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method GetSelectedBeatmapDifficultyMask addr 0x214d0dc size 0xd0 virtual false final false
 ::GlobalNamespace::BeatmapDifficultyMask GetSelectedBeatmapDifficultyMask() ;

/// @brief Method SelectCellWithBeatmapDifficultyMask addr 0x214d1ac size 0x30 virtual false final false
 void SelectCellWithBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask) ;

/// @brief Method GetIdxForBeatmapDifficultyMask addr 0x214d1dc size 0xa4 virtual false final false
 int32_t GetIdxForBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x214d280 size 0x24 virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

// Ctor Parameters []
explicit BeatmapDifficultyDropdown() ;

/// @brief Method .ctor addr 0x214d2a4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyDropdown, "", "BeatmapDifficultyDropdown");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__BeatmapDifficultyDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__BeatmapDifficultyDropdown____c, "", "BeatmapDifficultyDropdown/<>c");
