#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class MultiplayerIntroCountdownTextController;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23;
}
namespace UnityEngine {
class AudioSource;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25;
}
namespace GlobalNamespace {
class MultiplayerOffsetPositionByLocalPlayerPosition;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24;
}
namespace GlobalNamespace {
class GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0;
}
namespace GlobalNamespace {
class MultiplayerIntroCountdown;
}
// Type: ::<CountdownRoutine>d__23
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5308))
// CS Name: MultiplayerIntroCountdown::<CountdownRoutine>d__23
class CORDL_TYPE GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23(GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23(GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23& operator=(GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23& operator=(GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerIntroCountdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerIntroCountdown value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdown __get___4__this() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 float_t __declspec(property(get=__get_seconds, put=__set_seconds))  seconds;

constexpr void __set_seconds(float_t value) ;

constexpr float_t __get_seconds() const;

 float_t __declspec(property(get=__get_durationMultiplier, put=__set_durationMultiplier))  durationMultiplier;

constexpr void __set_durationMultiplier(float_t value) ;

constexpr float_t __get_durationMultiplier() const;

 float_t __declspec(property(get=__get__soundDelayAfterText_5__2, put=__set__soundDelayAfterText_5__2))  _soundDelayAfterText_5__2;

constexpr void __set__soundDelayAfterText_5__2(float_t value) ;

constexpr float_t __get__soundDelayAfterText_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20f9944 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20f9b48 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20f9b4c size 0x320 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20f9e78 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20f9e80 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20f9ec0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PlayDelayed>d__24
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5309))
// CS Name: MultiplayerIntroCountdown::<PlayDelayed>d__24
class CORDL_TYPE GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24(GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24(GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24& operator=(GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24& operator=(GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 float_t __declspec(property(get=__get_delay, put=__set_delay))  delay;

constexpr void __set_delay(float_t value) ;

constexpr float_t __get_delay() const;

 GlobalNamespace::MultiplayerIntroCountdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerIntroCountdown value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdown __get___4__this() const;

 UnityEngine::AudioClip __declspec(property(get=__get_audioClip, put=__set_audioClip))  audioClip;

constexpr void __set_audioClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get_audioClip() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20f99f0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20f9ec8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20f9ecc size 0xc4 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20f9f90 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20f9f98 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20f9fd8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass25_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5310))
// CS Name: MultiplayerIntroCountdown::<>c__DisplayClass25_0
class CORDL_TYPE GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0(GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0(GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0& operator=(GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0& operator=(GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MultiplayerIntroCountdownTextController __declspec(property(get=__get_textController, put=__set_textController))  textController;

constexpr void __set_textController(GlobalNamespace::MultiplayerIntroCountdownTextController value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdownTextController __get_textController() const;

 GlobalNamespace::MultiplayerIntroCountdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerIntroCountdown value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdown __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0 New_ctor() ;

/// @brief Method .ctor addr 0x20f9fe0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PhaseRoutine>b__0 addr 0x20f9fe8 size 0x18 virtual false final false
 void _PhaseRoutine_b__0(float_t val) ;

/// @brief Method <PhaseRoutine>b__1 addr 0x20fa070 size 0x18 virtual false final false
 void _PhaseRoutine_b__1(float_t val) ;

/// @brief Method <PhaseRoutine>b__2 addr 0x20fa10c size 0x50 virtual false final false
 void _PhaseRoutine_b__2(UnityEngine::Vector3 pos) ;

/// @brief Method <PhaseRoutine>b__3 addr 0x20fa15c size 0x28 virtual false final false
 void _PhaseRoutine_b__3(float_t f) ;

/// @brief Method <PhaseRoutine>b__4 addr 0x20fa20c size 0x18 virtual false final false
 void _PhaseRoutine_b__4(float_t val) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<PhaseRoutine>d__25
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5311))
// CS Name: MultiplayerIntroCountdown::<PhaseRoutine>d__25
class CORDL_TYPE GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25(GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25(GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25& operator=(GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25&& o) noexcept = default;
  constexpr GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25& operator=(GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MultiplayerIntroCountdown __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MultiplayerIntroCountdown value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdown __get___4__this() const;

 ::StringW __declspec(property(get=__get_text, put=__set_text))  text;

constexpr void __set_text(::StringW value) ;

constexpr ::StringW __get_text() const;

 float_t __declspec(property(get=__get_appearDuration, put=__set_appearDuration))  appearDuration;

constexpr void __set_appearDuration(float_t value) ;

constexpr float_t __get_appearDuration() const;

 float_t __declspec(property(get=__get_disappearDuration, put=__set_disappearDuration))  disappearDuration;

constexpr void __set_disappearDuration(float_t value) ;

constexpr float_t __get_disappearDuration() const;

 GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0 __get___8__1() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20f9aa0 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20fa224 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20fa228 size 0x578 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20fa810 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20fa818 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20fa858 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MultiplayerIntroCountdown
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5312))
// CS Name: MultiplayerIntroCountdown
class CORDL_TYPE MultiplayerIntroCountdown : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _PhaseRoutine_d__25 = GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25;

using __c__DisplayClass25_0 = GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0;

using _PlayDelayed_d__24 = GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24;

using _CountdownRoutine_d__23 = GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~MultiplayerIntroCountdown() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdown", modifiers: " const&", def_value: None }]
constexpr MultiplayerIntroCountdown(MultiplayerIntroCountdown const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdown", modifiers: "&&", def_value: None }]
constexpr MultiplayerIntroCountdown(MultiplayerIntroCountdown&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerIntroCountdown(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerIntroCountdown& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerIntroCountdown& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerIntroCountdown& operator=(MultiplayerIntroCountdown&& o) noexcept = default;
  constexpr MultiplayerIntroCountdown& operator=(MultiplayerIntroCountdown const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__textAppearDuration, put=__set__textAppearDuration))  _textAppearDuration;

constexpr void __set__textAppearDuration(float_t value) ;

constexpr float_t __get__textAppearDuration() const;

 float_t __declspec(property(get=__get__textDisappearDuration, put=__set__textDisappearDuration))  _textDisappearDuration;

constexpr void __set__textDisappearDuration(float_t value) ;

constexpr float_t __get__textDisappearDuration() const;

 float_t __declspec(property(get=__get__goDisappearDuration, put=__set__goDisappearDuration))  _goDisappearDuration;

constexpr void __set__goDisappearDuration(float_t value) ;

constexpr float_t __get__goDisappearDuration() const;

 float_t __declspec(property(get=__get__partsDistance, put=__set__partsDistance))  _partsDistance;

constexpr void __set__partsDistance(float_t value) ;

constexpr float_t __get__partsDistance() const;

 UnityEngine::Vector3 __declspec(property(get=__get__startLocalPosition, put=__set__startLocalPosition))  _startLocalPosition;

constexpr void __set__startLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__startLocalPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get__targetLocalPosition, put=__set__targetLocalPosition))  _targetLocalPosition;

constexpr void __set__targetLocalPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__targetLocalPosition() const;

 UnityEngine::AudioClip __declspec(property(get=__get__readyClip, put=__set__readyClip))  _readyClip;

constexpr void __set__readyClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__readyClip() const;

 UnityEngine::AudioClip __declspec(property(get=__get__setClip, put=__set__setClip))  _setClip;

constexpr void __set__setClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__setClip() const;

 UnityEngine::AudioClip __declspec(property(get=__get__goClip, put=__set__goClip))  _goClip;

constexpr void __set__goClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__goClip() const;

 UnityEngine::AudioClip __declspec(property(get=__get__buildUpClip, put=__set__buildUpClip))  _buildUpClip;

constexpr void __set__buildUpClip(UnityEngine::AudioClip value) ;

constexpr UnityEngine::AudioClip __get__buildUpClip() const;

 GlobalNamespace::MultiplayerIntroCountdownTextController __declspec(property(get=__get__textController0, put=__set__textController0))  _textController0;

constexpr void __set__textController0(GlobalNamespace::MultiplayerIntroCountdownTextController value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdownTextController __get__textController0() const;

 GlobalNamespace::MultiplayerIntroCountdownTextController __declspec(property(get=__get__textController1, put=__set__textController1))  _textController1;

constexpr void __set__textController1(GlobalNamespace::MultiplayerIntroCountdownTextController value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdownTextController __get__textController1() const;

 UnityEngine::AudioSource __declspec(property(get=__get__audioSource, put=__set__audioSource))  _audioSource;

constexpr void __set__audioSource(UnityEngine::AudioSource value) ;

constexpr UnityEngine::AudioSource __get__audioSource() const;

 GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition __declspec(property(get=__get__multiplayerOffsetByLocalPlayerPosition, put=__set__multiplayerOffsetByLocalPlayerPosition))  _multiplayerOffsetByLocalPlayerPosition;

constexpr void __set__multiplayerOffsetByLocalPlayerPosition(GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition value) ;

constexpr GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition __get__multiplayerOffsetByLocalPlayerPosition() const;

 Tweening::TimeTweeningManager __declspec(property(get=__get__tweeningManager, put=__set__tweeningManager))  _tweeningManager;

constexpr void __set__tweeningManager(Tweening::TimeTweeningManager value) ;

constexpr Tweening::TimeTweeningManager __get__tweeningManager() const;

 GlobalNamespace::MultiplayerIntroCountdownTextController __declspec(property(get=__get__currentTextController, put=__set__currentTextController))  _currentTextController;

constexpr void __set__currentTextController(GlobalNamespace::MultiplayerIntroCountdownTextController value) ;

constexpr GlobalNamespace::MultiplayerIntroCountdownTextController __get__currentTextController() const;

 float_t __declspec(property(get=__get__fontSize, put=__set__fontSize))  _fontSize;

constexpr void __set__fontSize(float_t value) ;

constexpr float_t __get__fontSize() const;

 float_t __declspec(property(get=__get__alpha, put=__set__alpha))  _alpha;

constexpr void __set__alpha(float_t value) ;

constexpr float_t __get__alpha() const;


// Properties

 float_t __declspec(property(get=get_textAppearDuration))  textAppearDuration;


// Methods

/// @brief Method get_textAppearDuration addr 0x20f96c0 size 0x8 virtual false final false
 float_t get_textAppearDuration() ;

/// @brief Method Awake addr 0x20f96c8 size 0x54 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x20f97c0 size 0x88 virtual true final false
 void OnDestroy() ;

/// @brief Method StartCountdown addr 0x20f9848 size 0x70 virtual false final false
 void StartCountdown(float_t seconds, float_t delay, float_t durationMultiplier) ;

/// @brief Method CountdownRoutine addr 0x20f98b8 size 0x8c virtual false final false
 System::Collections::IEnumerator CountdownRoutine(float_t seconds, float_t delay, float_t durationMultiplier) ;

/// @brief Method PlayDelayed addr 0x20f996c size 0x84 virtual false final false
 System::Collections::IEnumerator PlayDelayed(UnityEngine::AudioClip audioClip, float_t delay) ;

/// @brief Method PhaseRoutine addr 0x20f9a18 size 0x88 virtual false final false
 System::Collections::IEnumerator PhaseRoutine(::StringW text, float_t appearDuration, float_t disappearDuration) ;

static GlobalNamespace::MultiplayerIntroCountdown New_ctor() ;

/// @brief Method .ctor addr 0x20f9ac8 size 0x80 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___CountdownRoutine_d__23, "", "MultiplayerIntroCountdown/<CountdownRoutine>d__23");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PhaseRoutine_d__25, "", "MultiplayerIntroCountdown/<PhaseRoutine>d__25");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown___PlayDelayed_d__24, "", "MultiplayerIntroCountdown/<PlayDelayed>d__24");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MultiplayerIntroCountdown____c__DisplayClass25_0, "", "MultiplayerIntroCountdown/<>c__DisplayClass25_0");
NEED_NO_BOX(GlobalNamespace::MultiplayerIntroCountdown);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroCountdown, "", "MultiplayerIntroCountdown");
