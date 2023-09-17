#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class IVRPlatformHelper;
}
namespace Zenject {
class ITickable;
}
namespace GlobalNamespace {
class IMenuButtonTrigger;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class InstantMenuButtonTrigger;
}
// Type: ::InstantMenuButtonTrigger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5154))
// CS Name: InstantMenuButtonTrigger
class CORDL_TYPE InstantMenuButtonTrigger : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::ITickable
constexpr operator  ::Zenject::ITickable() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::IMenuButtonTrigger
constexpr operator  ::GlobalNamespace::IMenuButtonTrigger() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~InstantMenuButtonTrigger() = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantMenuButtonTrigger", modifiers: " const&", def_value: None }]
constexpr InstantMenuButtonTrigger(InstantMenuButtonTrigger const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InstantMenuButtonTrigger", modifiers: "&&", def_value: None }]
constexpr InstantMenuButtonTrigger(InstantMenuButtonTrigger&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InstantMenuButtonTrigger(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InstantMenuButtonTrigger& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InstantMenuButtonTrigger& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InstantMenuButtonTrigger& operator=(InstantMenuButtonTrigger&& o) noexcept = default;
  constexpr InstantMenuButtonTrigger& operator=(InstantMenuButtonTrigger const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IVRPlatformHelper __declspec(property(get=__get__vrPlatformHelper, put=__set__vrPlatformHelper))  _vrPlatformHelper;

constexpr void __set__vrPlatformHelper(::GlobalNamespace::IVRPlatformHelper value) ;

constexpr ::GlobalNamespace::IVRPlatformHelper __get__vrPlatformHelper() const;

 ::System::Action __declspec(property(get=__get_menuButtonTriggeredEvent, put=__set_menuButtonTriggeredEvent))  menuButtonTriggeredEvent;

constexpr void __set_menuButtonTriggeredEvent(::System::Action value) ;

constexpr ::System::Action __get_menuButtonTriggeredEvent() const;


// Methods

/// @brief Method add_menuButtonTriggeredEvent addr 0x20ce6f0 size 0x9c virtual true final true
 void add_menuButtonTriggeredEvent(::System::Action value) ;

/// @brief Method remove_menuButtonTriggeredEvent addr 0x20ce78c size 0x9c virtual true final true
 void remove_menuButtonTriggeredEvent(::System::Action value) ;

/// @brief Method Tick addr 0x20ce828 size 0xcc virtual true final true
 void Tick() ;

// Ctor Parameters []
explicit InstantMenuButtonTrigger() ;

/// @brief Method .ctor addr 0x20ce8f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::InstantMenuButtonTrigger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::InstantMenuButtonTrigger, "", "InstantMenuButtonTrigger");
