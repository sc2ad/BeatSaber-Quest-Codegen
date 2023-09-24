#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace GlobalNamespace {
class SongPackMaskModelSO;
}
namespace System {
template<typename T>
class Action_1;
}
namespace GlobalNamespace {
class GlobalNamespace__SongPacksDropdown____c;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SongPacksDropdown____c;
}
namespace GlobalNamespace {
class SongPacksDropdown;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5666))
// CS Name: SongPacksDropdown::<>c
class CORDL_TYPE GlobalNamespace__SongPacksDropdown____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__SongPacksDropdown____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPacksDropdown____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SongPacksDropdown____c(GlobalNamespace__SongPacksDropdown____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SongPacksDropdown____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SongPacksDropdown____c(GlobalNamespace__SongPacksDropdown____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SongPacksDropdown____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SongPacksDropdown____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SongPacksDropdown____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SongPacksDropdown____c& operator=(GlobalNamespace__SongPacksDropdown____c&& o) noexcept = default;
  constexpr GlobalNamespace__SongPacksDropdown____c& operator=(GlobalNamespace__SongPacksDropdown____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__SongPacksDropdown____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__SongPacksDropdown____c value) ;

static GlobalNamespace::GlobalNamespace__SongPacksDropdown____c __get___9() ;

static System::Func_2<::StringW,::StringW> __declspec(property(get=__get___9__7_0, put=__set___9__7_0))  __9__7_0;

static void __set___9__7_0(System::Func_2<::StringW,::StringW> value) ;

static System::Func_2<::StringW,::StringW> __get___9__7_0() ;


// Methods

static GlobalNamespace::GlobalNamespace__SongPacksDropdown____c New_ctor() ;

/// @brief Method .ctor addr 0x214f0e0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <LazyInit>b__7_0 addr 0x214f0e8 size 0xc virtual false final false
 ::StringW _LazyInit_b__7_0(::StringW serializedName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SongPacksDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5667))
// CS Name: SongPacksDropdown
class CORDL_TYPE SongPacksDropdown : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__SongPacksDropdown____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~SongPacksDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPacksDropdown", modifiers: " const&", def_value: None }]
constexpr SongPacksDropdown(SongPacksDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SongPacksDropdown", modifiers: "&&", def_value: None }]
constexpr SongPacksDropdown(SongPacksDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SongPacksDropdown(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SongPacksDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SongPacksDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SongPacksDropdown& operator=(SongPacksDropdown&& o) noexcept = default;
  constexpr SongPacksDropdown& operator=(SongPacksDropdown const& o) noexcept = default;
                


// Fields

 HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(HMUI::SimpleTextDropdown value) ;

constexpr HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 GlobalNamespace::SongPackMaskModelSO __declspec(property(get=__get__songPackMaskModel, put=__set__songPackMaskModel))  _songPackMaskModel;

constexpr void __set__songPackMaskModel(GlobalNamespace::SongPackMaskModelSO value) ;

constexpr GlobalNamespace::SongPackMaskModelSO __get__songPackMaskModel() const;

 System::Action_1<int32_t> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get_didSelectCellWithIdxEvent() const;

 bool __declspec(property(get=__get__initialized, put=__set__initialized))  _initialized;

constexpr void __set__initialized(bool value) ;

constexpr bool __get__initialized() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get__songPackSerializedNames, put=__set__songPackSerializedNames))  _songPackSerializedNames;

constexpr void __set__songPackSerializedNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get__songPackSerializedNames() const;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x214ea40 size 0xb0 virtual false final false
 void add_didSelectCellWithIdxEvent(System::Action_1<int32_t> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x214eaf0 size 0xb0 virtual false final false
 void remove_didSelectCellWithIdxEvent(System::Action_1<int32_t> value) ;

/// @brief Method LazyInit addr 0x214eba0 size 0x164 virtual false final false
 void LazyInit() ;

/// @brief Method Start addr 0x214ed04 size 0x94 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x214ed98 size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method SetOverrideSongPacks addr 0x214ee6c size 0x8 virtual false final false
 void SetOverrideSongPacks(System::Collections::Generic::List_1<::StringW> songPackSerializedNames) ;

/// @brief Method GetSelectedSongPackMask addr 0x214ee74 size 0x7c virtual false final false
 GlobalNamespace::SongPackMask GetSelectedSongPackMask() ;

/// @brief Method SelectCellWithSongPackMask addr 0x214eef0 size 0xb0 virtual false final false
 void SelectCellWithSongPackMask(GlobalNamespace::SongPackMask songPackMask) ;

/// @brief Method GetIdxForSongPackMask addr 0x214efa0 size 0xb0 virtual false final false
 int32_t GetIdxForSongPackMask(GlobalNamespace::SongPackMask songPackMask) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x214f050 size 0x24 virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

static GlobalNamespace::SongPacksDropdown New_ctor() ;

/// @brief Method .ctor addr 0x214f074 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SongPacksDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SongPacksDropdown____c, "", "SongPacksDropdown/<>c");
NEED_NO_BOX(GlobalNamespace::SongPacksDropdown);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SongPacksDropdown, "", "SongPacksDropdown");
