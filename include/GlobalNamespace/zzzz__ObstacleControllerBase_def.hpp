#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ObstacleControllerBase;
}
// Type: ::ObstacleControllerBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4909))
// CS Name: ObstacleControllerBase
class CORDL_TYPE ObstacleControllerBase : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ObstacleControllerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleControllerBase", modifiers: " const&", def_value: None }]
constexpr ObstacleControllerBase(ObstacleControllerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ObstacleControllerBase", modifiers: "&&", def_value: None }]
constexpr ObstacleControllerBase(ObstacleControllerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ObstacleControllerBase(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ObstacleControllerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ObstacleControllerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ObstacleControllerBase& operator=(ObstacleControllerBase&& o) noexcept = default;
  constexpr ObstacleControllerBase& operator=(ObstacleControllerBase const& o) noexcept = default;
                


// Fields

 System::Action_1<GlobalNamespace::ObstacleControllerBase> __declspec(property(get=__get_didInitEvent, put=__set_didInitEvent))  didInitEvent;

constexpr void __set_didInitEvent(System::Action_1<GlobalNamespace::ObstacleControllerBase> value) ;

constexpr System::Action_1<GlobalNamespace::ObstacleControllerBase> __get_didInitEvent() const;

 System::Action_2<GlobalNamespace::ObstacleControllerBase,float_t> __declspec(property(get=__get_didStartDissolvingEvent, put=__set_didStartDissolvingEvent))  didStartDissolvingEvent;

constexpr void __set_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleControllerBase,float_t> value) ;

constexpr System::Action_2<GlobalNamespace::ObstacleControllerBase,float_t> __get_didStartDissolvingEvent() const;


// Methods

/// @brief Method add_didInitEvent addr 0x2245ab0 size 0xb0 virtual false final false
 void add_didInitEvent(System::Action_1<GlobalNamespace::ObstacleControllerBase> value) ;

/// @brief Method remove_didInitEvent addr 0x2245b60 size 0xb0 virtual false final false
 void remove_didInitEvent(System::Action_1<GlobalNamespace::ObstacleControllerBase> value) ;

/// @brief Method add_didStartDissolvingEvent addr 0x2244940 size 0xb0 virtual false final false
 void add_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleControllerBase,float_t> value) ;

/// @brief Method remove_didStartDissolvingEvent addr 0x22443b4 size 0xb0 virtual false final false
 void remove_didStartDissolvingEvent(System::Action_2<GlobalNamespace::ObstacleControllerBase,float_t> value) ;

/// @brief Method InvokeDidInitEvent addr 0x22449f0 size 0x1c virtual false final false
 void InvokeDidInitEvent(GlobalNamespace::ObstacleControllerBase obstacleController) ;

/// @brief Method InvokeDidStartDissolvingEvent addr 0x2244a2c size 0x1c virtual false final false
 void InvokeDidStartDissolvingEvent(GlobalNamespace::ObstacleControllerBase obstacleController, float_t duration) ;

static GlobalNamespace::ObstacleControllerBase New_ctor() ;

/// @brief Method .ctor addr 0x2244a50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ObstacleControllerBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ObstacleControllerBase, "", "ObstacleControllerBase");
