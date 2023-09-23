#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IObserver_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
template<typename T>
class IObservable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver;
}
namespace UnityEngine::InputSystem::LowLevel {
class UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventListener;
}
// Type: ::ObserverState
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6616))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventListener::ObserverState
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState(UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState(UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState& operator=(UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState& operator=(UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> __declspec(property(get=__get_observers, put=__set_observers))  observers;

constexpr void __set_observers(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> __get_observers() const;

 System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_onEventDelegate, put=__set_onEventDelegate))  onEventDelegate;

constexpr void __set_onEventDelegate(System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> value) ;

constexpr System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> __get_onEventDelegate() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState() ;

/// @brief Method .ctor addr 0x2958a18 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__2_0 addr 0x2958aa8 size 0xf4 virtual false final false
 void __ctor_b__2_0(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, UnityEngine::InputSystem::InputDevice device) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::DisposableObserver
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6617))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventListener::DisposableObserver
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver(UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver(UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver& operator=(UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver& operator=(UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver const& o) noexcept = default;
                


// Fields

 System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_observer, put=__set_observer))  observer;

constexpr void __set_observer(System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_observer() const;


// Methods

/// @brief Method Dispose addr 0x2958b9c size 0x138 virtual true final true
 void Dispose() ;

// Ctor Parameters []
explicit UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver() ;

/// @brief Method .ctor addr 0x2958aa0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventListener
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6618))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventListener
struct CORDL_TYPE InputEventListener : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using DisposableObserver = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver;

using ObserverState = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState;

/// @brief Convert operator to System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::IObservable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const;


                    constexpr InputEventListener(InputEventListener const&) = default;
                    constexpr InputEventListener(InputEventListener&&) = default;
                    constexpr InputEventListener& operator=(InputEventListener const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputEventListener& operator=(InputEventListener&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputEventListener(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState __declspec(property(get=__get_s_ObserverState, put=__set_s_ObserverState))  s_ObserverState;

static void __set_s_ObserverState(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState value) ;

static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState __get_s_ObserverState() ;


// Methods

/// @brief Method op_Addition addr 0x295271c size 0x180 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputEventListener op_Addition(UnityEngine::InputSystem::LowLevel::InputEventListener _, System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> callback) ;

/// @brief Method op_Subtraction addr 0x2952a00 size 0x180 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputEventListener op_Subtraction(UnityEngine::InputSystem::LowLevel::InputEventListener _, System::Action_2<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice> callback) ;

/// @brief Method Subscribe addr 0x29588bc size 0x15c virtual true final true
 System::IDisposable Subscribe(System::IObserver_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> observer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__DisposableObserver, "UnityEngine.InputSystem.LowLevel", "InputEventListener/DisposableObserver");
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventListener__ObserverState, "UnityEngine.InputSystem.LowLevel", "InputEventListener/ObserverState");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputEventListener, "UnityEngine.InputSystem.LowLevel", "InputEventListener");
