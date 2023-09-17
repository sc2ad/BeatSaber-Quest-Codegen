#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
namespace System {
template<typename T>
class Action_1;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersDropdown;
}
namespace GlobalNamespace {
class ____GlobalNamespace__GameplayModifiersDropdown____c;
}
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5659))
// CS Name: GameplayModifiersDropdown::<>c
class CORDL_TYPE ____GlobalNamespace__GameplayModifiersDropdown____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____GlobalNamespace__GameplayModifiersDropdown____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayModifiersDropdown____c", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__GameplayModifiersDropdown____c(____GlobalNamespace__GameplayModifiersDropdown____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__GameplayModifiersDropdown____c", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__GameplayModifiersDropdown____c(____GlobalNamespace__GameplayModifiersDropdown____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__GameplayModifiersDropdown____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__GameplayModifiersDropdown____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayModifiersDropdown____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__GameplayModifiersDropdown____c& operator=(____GlobalNamespace__GameplayModifiersDropdown____c&& o) noexcept = default;
  constexpr ____GlobalNamespace__GameplayModifiersDropdown____c& operator=(____GlobalNamespace__GameplayModifiersDropdown____c const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::____GlobalNamespace__GameplayModifiersDropdown____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::GlobalNamespace::____GlobalNamespace__GameplayModifiersDropdown____c value) ;

static ::GlobalNamespace::____GlobalNamespace__GameplayModifiersDropdown____c __get___9() ;

static ::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>,::StringW> __declspec(property(get=__get___9__8_0, put=__set___9__8_0))  __9__8_0;

static void __set___9__8_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>,::StringW> value) ;

static ::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>,::StringW> __get___9__8_0() ;


// Methods

// Ctor Parameters []
explicit ____GlobalNamespace__GameplayModifiersDropdown____c() ;

/// @brief Method .ctor addr 0x214dd64 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Start>b__8_0 addr 0x214dd6c size 0x44 virtual false final false
 ::StringW _Start_b__8_0(::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW> x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayModifiersDropdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5660))
// CS Name: GameplayModifiersDropdown
class CORDL_TYPE GameplayModifiersDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::____GlobalNamespace__GameplayModifiersDropdown____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GameplayModifiersDropdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersDropdown", modifiers: " const&", def_value: None }]
constexpr GameplayModifiersDropdown(GameplayModifiersDropdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersDropdown", modifiers: "&&", def_value: None }]
constexpr GameplayModifiersDropdown(GameplayModifiersDropdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifiersDropdown(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr GameplayModifiersDropdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifiersDropdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifiersDropdown& operator=(GameplayModifiersDropdown&& o) noexcept = default;
  constexpr GameplayModifiersDropdown& operator=(GameplayModifiersDropdown const& o) noexcept = default;
                


// Fields

 ::HMUI::SimpleTextDropdown __declspec(property(get=__get__simpleTextDropdown, put=__set__simpleTextDropdown))  _simpleTextDropdown;

constexpr void __set__simpleTextDropdown(::HMUI::SimpleTextDropdown value) ;

constexpr ::HMUI::SimpleTextDropdown __get__simpleTextDropdown() const;

 ::GlobalNamespace::GameplayModifiersModelSO __declspec(property(get=__get__gameplayModifiersModel, put=__set__gameplayModifiersModel))  _gameplayModifiersModel;

constexpr void __set__gameplayModifiersModel(::GlobalNamespace::GameplayModifiersModelSO value) ;

constexpr ::GlobalNamespace::GameplayModifiersModelSO __get__gameplayModifiersModel() const;

 ::System::Action_1<int32_t> __declspec(property(get=__get_didSelectCellWithIdxEvent, put=__set_didSelectCellWithIdxEvent))  didSelectCellWithIdxEvent;

constexpr void __set_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

constexpr ::System::Action_1<int32_t> __get_didSelectCellWithIdxEvent() const;

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>> __declspec(property(get=__get__gameplayModifiersData, put=__set__gameplayModifiersData))  _gameplayModifiersData;

constexpr void __set__gameplayModifiersData(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>> value) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>> __get__gameplayModifiersData() const;


// Properties

 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>> __declspec(property(get=get_gameplayModifiersData))  gameplayModifiersData;


// Methods

/// @brief Method add_didSelectCellWithIdxEvent addr 0x214d35c size 0xb0 virtual false final false
 void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

/// @brief Method remove_didSelectCellWithIdxEvent addr 0x214d40c size 0xb0 virtual false final false
 void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t> value) ;

/// @brief Method get_gameplayModifiersData addr 0x214d4bc size 0x1c0 virtual false final false
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>> get_gameplayModifiersData() ;

/// @brief Method Start addr 0x214d67c size 0x1a0 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x214d81c size 0xd4 virtual false final false
 void OnDestroy() ;

/// @brief Method GetSelectedGameplayModifierMask addr 0x214d8f0 size 0xd0 virtual false final false
 ::GlobalNamespace::GameplayModifierMask GetSelectedGameplayModifierMask() ;

/// @brief Method SelectCellWithGameplayModifierMask addr 0x214d9c0 size 0x30 virtual false final false
 void SelectCellWithGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask) ;

/// @brief Method GetIdxForGameplayModifierMask addr 0x214d9f0 size 0x184 virtual false final false
 int32_t GetIdxForGameplayModifierMask(::GlobalNamespace::GameplayModifierMask gameplayModifierMask) ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx addr 0x214db74 size 0x24 virtual false final false
 void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView dropdownWithTableView, int32_t idx) ;

// Ctor Parameters []
explicit GameplayModifiersDropdown() ;

/// @brief Method .ctor addr 0x214db98 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_gameplayModifiersData>b__7_0 addr 0x214dba0 size 0x160 virtual false final false
 ::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW> _get_gameplayModifiersData_b__7_0(::GlobalNamespace::GameplayModifierMask value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersDropdown, "", "GameplayModifiersDropdown");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__GameplayModifiersDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__GameplayModifiersDropdown____c, "", "GameplayModifiersDropdown/<>c");
