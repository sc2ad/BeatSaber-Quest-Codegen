#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Tweening {
class Tween;
}
// Type: Tweening::Tween
namespace Tweening {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15936))
// CS Name: Tweening.Tween
class CORDL_TYPE Tween : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Tween() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: " const&", def_value: None }]
constexpr Tween(Tween const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween", modifiers: "&&", def_value: None }]
constexpr Tween(Tween&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tween(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Tween& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tween& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tween& operator=(Tween&& o) noexcept = default;
  constexpr Tween& operator=(Tween const& o) noexcept = default;
                


// Fields

 ::System::Action __declspec(property(get=__get_onStart, put=__set_onStart))  onStart;

constexpr void __set_onStart(::System::Action value) ;

constexpr ::System::Action __get_onStart() const;

 ::System::Action __declspec(property(get=__get_onCompleted, put=__set_onCompleted))  onCompleted;

constexpr void __set_onCompleted(::System::Action value) ;

constexpr ::System::Action __get_onCompleted() const;

 ::System::Action __declspec(property(get=__get_onKilled, put=__set_onKilled))  onKilled;

constexpr void __set_onKilled(::System::Action value) ;

constexpr ::System::Action __get_onKilled() const;

 float_t __declspec(property(get=__get__progress, put=__set__progress))  _progress;

constexpr void __set__progress(float_t value) ;

constexpr float_t __get__progress() const;

 float_t __declspec(property(get=__get__startTime, put=__set__startTime))  _startTime;

constexpr void __set__startTime(float_t value) ;

constexpr float_t __get__startTime() const;

 float_t __declspec(property(get=__get__duration, put=__set__duration))  _duration;

constexpr void __set__duration(float_t value) ;

constexpr float_t __get__duration() const;

 bool __declspec(property(get=__get__loop, put=__set__loop))  _loop;

constexpr void __set__loop(bool value) ;

constexpr bool __get__loop() const;

 float_t __declspec(property(get=__get__delay, put=__set__delay))  _delay;

constexpr void __set__delay(float_t value) ;

constexpr float_t __get__delay() const;

 bool __declspec(property(get=__get__isStarted, put=__set__isStarted))  _isStarted;

constexpr void __set__isStarted(bool value) ;

constexpr bool __get__isStarted() const;

 bool __declspec(property(get=__get__isKilled, put=__set__isKilled))  _isKilled;

constexpr void __set__isKilled(bool value) ;

constexpr bool __get__isKilled() const;

 ::GlobalNamespace::EaseType __declspec(property(get=__get__easeType, put=__set__easeType))  _easeType;

constexpr void __set__easeType(::GlobalNamespace::EaseType value) ;

constexpr ::GlobalNamespace::EaseType __get__easeType() const;

/// @brief Field kEpsilon offset 0
static constexpr float_t  kEpsilon{0.001};


// Properties

 bool __declspec(property(get=get_isStarted))  isStarted;

 bool __declspec(property(get=get_isActive))  isActive;

 bool __declspec(property(get=get_isComplete))  isComplete;

 bool __declspec(property(get=get_isKilled))  isKilled;

 float_t __declspec(property(get=get_progress))  progress;

 float_t __declspec(property(get=get_startTime))  startTime;

 float_t __declspec(property(get=get_duration, put=set_duration))  duration;

 bool __declspec(property(get=get_loop, put=set_loop))  loop;

 float_t __declspec(property(get=get_delay, put=set_delay))  delay;

 ::GlobalNamespace::EaseType __declspec(property(get=get_easeType, put=set_easeType))  easeType;


// Methods

/// @brief Method get_isStarted addr 0x287a9bc size 0x8 virtual false final false
 bool get_isStarted() ;

/// @brief Method get_isActive addr 0x287a9c4 size 0x30 virtual false final false
 bool get_isActive() ;

/// @brief Method get_isComplete addr 0x287a9f4 size 0x14 virtual false final false
 bool get_isComplete() ;

/// @brief Method get_isKilled addr 0x287aa08 size 0x8 virtual false final false
 bool get_isKilled() ;

/// @brief Method get_progress addr 0x287aa10 size 0x8 virtual false final false
 float_t get_progress() ;

/// @brief Method get_startTime addr 0x287aa18 size 0x8 virtual false final false
 float_t get_startTime() ;

/// @brief Method get_duration addr 0x287aa20 size 0x8 virtual false final false
 float_t get_duration() ;

/// @brief Method set_duration addr 0x287aa28 size 0x8 virtual false final false
 void set_duration(float_t value) ;

/// @brief Method get_loop addr 0x287aa30 size 0x8 virtual false final false
 bool get_loop() ;

/// @brief Method set_loop addr 0x287aa38 size 0xc virtual false final false
 void set_loop(bool value) ;

/// @brief Method get_delay addr 0x287aa44 size 0x8 virtual false final false
 float_t get_delay() ;

/// @brief Method set_delay addr 0x287aa4c size 0x8 virtual false final false
 void set_delay(float_t value) ;

/// @brief Method get_easeType addr 0x287aa54 size 0x8 virtual false final false
 ::GlobalNamespace::EaseType get_easeType() ;

/// @brief Method set_easeType addr 0x287aa5c size 0x8 virtual false final false
 void set_easeType(::GlobalNamespace::EaseType value) ;

/// @brief Method Kill addr 0x287aa64 size 0xc virtual false final false
 void Kill() ;

/// @brief Method Restart addr 0x287aa70 size 0x10 virtual false final false
 void Restart(float_t startTime) ;

/// @brief Method Resume addr 0x287aa80 size 0x8 virtual false final false
 void Resume() ;

/// @brief Method SetStartTimeAndEndTime addr 0x287aa88 size 0xc virtual false final false
 void SetStartTimeAndEndTime(float_t startTime, float_t endTime) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(float_t currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
 void Sample(float_t t) ;

// Ctor Parameters []
explicit Tween() ;

/// @brief Method .ctor addr 0x287aa94 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
} // end anonymous namespace
NEED_NO_BOX(::Tweening::Tween);
DEFINE_IL2CPP_ARG_TYPE(::Tweening::Tween, "Tweening", "Tween");
