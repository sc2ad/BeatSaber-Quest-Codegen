#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct GlobalNamespace__GameplayModifiers__SongSpeed;
}
namespace GlobalNamespace {
class GameplayModifierParamsSO;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter;
}
namespace GlobalNamespace {
class GlobalNamespace__GameplayModifiersModelSO____c;
}
// Type: ::GameplayModifierBoolGetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4226))
// CS Name: GameplayModifiersModelSO::GameplayModifierBoolGetter
class CORDL_TYPE GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter(GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter(GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter& operator=(GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter& operator=(GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x21c2b54 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x21c3674 size 0x14 virtual true final false
 bool Invoke(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method BeginInvoke addr 0x21c3688 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::GameplayModifiers gameplayModifiers, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x21c36a8 size 0x28 virtual true final false
 bool EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4227))
// CS Name: GameplayModifiersModelSO::<>c
class CORDL_TYPE GlobalNamespace__GameplayModifiersModelSO____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__GameplayModifiersModelSO____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersModelSO____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersModelSO____c(GlobalNamespace__GameplayModifiersModelSO____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameplayModifiersModelSO____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameplayModifiersModelSO____c(GlobalNamespace__GameplayModifiersModelSO____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameplayModifiersModelSO____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameplayModifiersModelSO____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersModelSO____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameplayModifiersModelSO____c& operator=(GlobalNamespace__GameplayModifiersModelSO____c&& o) noexcept = default;
  constexpr GlobalNamespace__GameplayModifiersModelSO____c& operator=(GlobalNamespace__GameplayModifiersModelSO____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO____c value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO____c __get___9() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_0, put=__set___9__18_0))  __9__18_0;

static void __set___9__18_0(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_0() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_1, put=__set___9__18_1))  __9__18_1;

static void __set___9__18_1(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_1() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_2, put=__set___9__18_2))  __9__18_2;

static void __set___9__18_2(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_2() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_3, put=__set___9__18_3))  __9__18_3;

static void __set___9__18_3(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_3() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_4, put=__set___9__18_4))  __9__18_4;

static void __set___9__18_4(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_4() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_5, put=__set___9__18_5))  __9__18_5;

static void __set___9__18_5(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_5() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_6, put=__set___9__18_6))  __9__18_6;

static void __set___9__18_6(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_6() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_7, put=__set___9__18_7))  __9__18_7;

static void __set___9__18_7(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_7() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_8, put=__set___9__18_8))  __9__18_8;

static void __set___9__18_8(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_8() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_9, put=__set___9__18_9))  __9__18_9;

static void __set___9__18_9(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_9() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_10, put=__set___9__18_10))  __9__18_10;

static void __set___9__18_10(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_10() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_11, put=__set___9__18_11))  __9__18_11;

static void __set___9__18_11(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_11() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_12, put=__set___9__18_12))  __9__18_12;

static void __set___9__18_12(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_12() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_13, put=__set___9__18_13))  __9__18_13;

static void __set___9__18_13(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_13() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_14, put=__set___9__18_14))  __9__18_14;

static void __set___9__18_14(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_14() ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __declspec(property(get=__get___9__18_15, put=__set___9__18_15))  __9__18_15;

static void __set___9__18_15(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter value) ;

static GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter __get___9__18_15() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__GameplayModifiersModelSO____c() ;

/// @brief Method .ctor addr 0x21c3734 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <OnEnable>b__18_0 addr 0x21c373c size 0x20 virtual false final false
 bool _OnEnable_b__18_0(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_1 addr 0x21c375c size 0x18 virtual false final false
 bool _OnEnable_b__18_1(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_2 addr 0x21c3774 size 0x18 virtual false final false
 bool _OnEnable_b__18_2(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_3 addr 0x21c378c size 0x20 virtual false final false
 bool _OnEnable_b__18_3(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_4 addr 0x21c37ac size 0x18 virtual false final false
 bool _OnEnable_b__18_4(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_5 addr 0x21c37c4 size 0x18 virtual false final false
 bool _OnEnable_b__18_5(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_6 addr 0x21c37dc size 0x18 virtual false final false
 bool _OnEnable_b__18_6(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_7 addr 0x21c37f4 size 0x18 virtual false final false
 bool _OnEnable_b__18_7(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_8 addr 0x21c380c size 0x20 virtual false final false
 bool _OnEnable_b__18_8(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_9 addr 0x21c382c size 0x20 virtual false final false
 bool _OnEnable_b__18_9(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_10 addr 0x21c384c size 0x20 virtual false final false
 bool _OnEnable_b__18_10(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_11 addr 0x21c386c size 0x18 virtual false final false
 bool _OnEnable_b__18_11(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_12 addr 0x21c3884 size 0x18 virtual false final false
 bool _OnEnable_b__18_12(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_13 addr 0x21c389c size 0x18 virtual false final false
 bool _OnEnable_b__18_13(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_14 addr 0x21c38b4 size 0x18 virtual false final false
 bool _OnEnable_b__18_14(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method <OnEnable>b__18_15 addr 0x21c38cc size 0x18 virtual false final false
 bool _OnEnable_b__18_15(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameplayModifiersModelSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4228))
// CS Name: GameplayModifiersModelSO
class CORDL_TYPE GameplayModifiersModelSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO____c;

using GameplayModifierBoolGetter = GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~GameplayModifiersModelSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO", modifiers: " const&", def_value: None }]
constexpr GameplayModifiersModelSO(GameplayModifiersModelSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersModelSO", modifiers: "&&", def_value: None }]
constexpr GameplayModifiersModelSO(GameplayModifiersModelSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameplayModifiersModelSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr GameplayModifiersModelSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameplayModifiersModelSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameplayModifiersModelSO& operator=(GameplayModifiersModelSO&& o) noexcept = default;
  constexpr GameplayModifiersModelSO& operator=(GameplayModifiersModelSO const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__batteryEnergy, put=__set__batteryEnergy))  _batteryEnergy;

constexpr void __set__batteryEnergy(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__batteryEnergy() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__instaFail, put=__set__instaFail))  _instaFail;

constexpr void __set__instaFail(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__instaFail() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__noObstacles, put=__set__noObstacles))  _noObstacles;

constexpr void __set__noObstacles(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__noObstacles() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__noBombs, put=__set__noBombs))  _noBombs;

constexpr void __set__noBombs(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__noBombs() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__fastNotes, put=__set__fastNotes))  _fastNotes;

constexpr void __set__fastNotes(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__fastNotes() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__strictAngles, put=__set__strictAngles))  _strictAngles;

constexpr void __set__strictAngles(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__strictAngles() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__disappearingArrows, put=__set__disappearingArrows))  _disappearingArrows;

constexpr void __set__disappearingArrows(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__disappearingArrows() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__fasterSong, put=__set__fasterSong))  _fasterSong;

constexpr void __set__fasterSong(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__fasterSong() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__slowerSong, put=__set__slowerSong))  _slowerSong;

constexpr void __set__slowerSong(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__slowerSong() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__noArrows, put=__set__noArrows))  _noArrows;

constexpr void __set__noArrows(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__noArrows() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__ghostNotes, put=__set__ghostNotes))  _ghostNotes;

constexpr void __set__ghostNotes(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__ghostNotes() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__noFailOn0Energy, put=__set__noFailOn0Energy))  _noFailOn0Energy;

constexpr void __set__noFailOn0Energy(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__noFailOn0Energy() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__superFastSong, put=__set__superFastSong))  _superFastSong;

constexpr void __set__superFastSong(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__superFastSong() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__proMode, put=__set__proMode))  _proMode;

constexpr void __set__proMode(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__proMode() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__zenMode, put=__set__zenMode))  _zenMode;

constexpr void __set__zenMode(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__zenMode() const;

 GlobalNamespace::GameplayModifierParamsSO __declspec(property(get=__get__smallCubes, put=__set__smallCubes))  _smallCubes;

constexpr void __set__smallCubes(GlobalNamespace::GameplayModifierParamsSO value) ;

constexpr GlobalNamespace::GameplayModifierParamsSO __get__smallCubes() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter> __declspec(property(get=__get__gameplayModifierGetters, put=__set__gameplayModifierGetters))  _gameplayModifierGetters;

constexpr void __set__gameplayModifierGetters(System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::GameplayModifierParamsSO,GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter> __get__gameplayModifierGetters() const;


// Methods

/// @brief Method OnEnable addr 0x21c21c0 size 0x994 virtual true final false
 void OnEnable() ;

/// @brief Method CreateGameplayModifiers addr 0x21c2c80 size 0x278 virtual false final false
 GlobalNamespace::GameplayModifiers CreateGameplayModifiers(System::Func_2<GlobalNamespace::GameplayModifierParamsSO,bool> valueGetter) ;

/// @brief Method GetModifierBoolValue addr 0x21c2f7c size 0x9c virtual false final false
 bool GetModifierBoolValue(GlobalNamespace::GameplayModifiers gameplayModifiers, GlobalNamespace::GameplayModifierParamsSO gameplayModifierParams) ;

/// @brief Method CreateModifierParamsList addr 0x21c3018 size 0x290 virtual false final false
 System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> CreateModifierParamsList(GlobalNamespace::GameplayModifiers gameplayModifiers) ;

/// @brief Method GetTotalMultiplier addr 0x21c32a8 size 0x1e0 virtual false final false
 float_t GetTotalMultiplier(System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> modifierParams, float_t energy) ;

/// @brief Method MaxModifiedScoreForMaxMultipliedScore addr 0x21c3488 size 0x4 virtual false final false
 int32_t MaxModifiedScoreForMaxMultipliedScore(int32_t maxMultipliedScore, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> modifierParams, float_t energy) ;

/// @brief Method MaxModifiedScoreForMaxMultipliedScore addr 0x21c3518 size 0x4 virtual false final false
 int32_t MaxModifiedScoreForMaxMultipliedScore(int32_t maxMultipliedScore, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> modifierParams, GlobalNamespace::GameplayModifiersModelSO gameplayModifiersModel, float_t energy) ;

/// @brief Method GetModifiedScoreForGameplayModifiers addr 0x21c348c size 0x8c virtual false final false
 int32_t GetModifiedScoreForGameplayModifiers(int32_t multipliedScore, System::Collections::Generic::List_1<GlobalNamespace::GameplayModifierParamsSO> modifierParams, float_t energy) ;

/// @brief Method GetGameplayModifierParams addr 0x21c351c size 0x150 virtual false final false
 GlobalNamespace::GameplayModifierParamsSO GetGameplayModifierParams(GlobalNamespace::GameplayModifierMask modifier) ;

/// @brief Method GetSongSpeedFromValueGetter addr 0x21c2ef8 size 0x84 virtual false final false
 GlobalNamespace::GlobalNamespace__GameplayModifiers__SongSpeed GetSongSpeedFromValueGetter(System::Func_2<GlobalNamespace::GameplayModifierParamsSO,bool> valueGetter) ;

// Ctor Parameters []
explicit GameplayModifiersModelSO() ;

/// @brief Method .ctor addr 0x21c366c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameplayModifiersModelSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifiersModelSO, "", "GameplayModifiersModelSO");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO__GameplayModifierBoolGetter, "", "GameplayModifiersModelSO/GameplayModifierBoolGetter");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameplayModifiersModelSO____c, "", "GameplayModifiersModelSO/<>c");
