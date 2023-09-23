#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace Zenject {
class ITickable;
}
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class DelayedMenuButtonTrigger;
}
// Type: ::DelayedMenuButtonTrigger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5152))
// CS Name: DelayedMenuButtonTrigger
class CORDL_TYPE DelayedMenuButtonTrigger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::ITickable
constexpr operator  Zenject::ITickable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IMenuButtonTrigger
constexpr operator  GlobalNamespace::IMenuButtonTrigger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DelayedMenuButtonTrigger() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelayedMenuButtonTrigger", modifiers: " const&", def_value: None }]
constexpr DelayedMenuButtonTrigger(DelayedMenuButtonTrigger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelayedMenuButtonTrigger", modifiers: "&&", def_value: None }]
constexpr DelayedMenuButtonTrigger(DelayedMenuButtonTrigger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelayedMenuButtonTrigger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DelayedMenuButtonTrigger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelayedMenuButtonTrigger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelayedMenuButtonTrigger& operator=(DelayedMenuButtonTrigger&& o) noexcept = default;
  constexpr DelayedMenuButtonTrigger& operator=(DelayedMenuButtonTrigger const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_menuButtonTriggeredEvent, put=__set_menuButtonTriggeredEvent))  menuButtonTriggeredEvent;

constexpr void __set_menuButtonTriggeredEvent(System::Action value) ;

constexpr System::Action __get_menuButtonTriggeredEvent() const;

 float_t __declspec(property(get=__get__pressDuration, put=__set__pressDuration))  _pressDuration;

constexpr void __set__pressDuration(float_t value) ;

constexpr float_t __get__pressDuration() const;

 float_t __declspec(property(get=__get__timer, put=__set__timer))  _timer;

constexpr void __set__timer(float_t value) ;

constexpr float_t __get__timer() const;

 bool __declspec(property(get=__get__waitingForButtonRelease, put=__set__waitingForButtonRelease))  _waitingForButtonRelease;

constexpr void __set__waitingForButtonRelease(bool value) ;

constexpr bool __get__waitingForButtonRelease() const;

 GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(GlobalNamespace::IVRPlatformHelper value) ;

constexpr GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;


// Methods

/// @brief Method add_menuButtonTriggeredEvent addr 0x20ce494 size 0x9c virtual true final true
 void add_menuButtonTriggeredEvent(System::Action value) ;

/// @brief Method remove_menuButtonTriggeredEvent addr 0x20ce530 size 0x9c virtual true final true
 void remove_menuButtonTriggeredEvent(System::Action value) ;

/// @brief Method Tick addr 0x20ce5cc size 0x110 virtual true final true
 void Tick() ;

// Ctor Parameters []
explicit DelayedMenuButtonTrigger() ;

/// @brief Method .ctor addr 0x20ce6dc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DelayedMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DelayedMenuButtonTrigger, "", "DelayedMenuButtonTrigger");
