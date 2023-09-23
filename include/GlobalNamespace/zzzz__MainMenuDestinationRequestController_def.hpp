#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class MenuDestination;
}
namespace Zenject {
class DiContainer;
}
namespace GlobalNamespace {
class ScenesTransitionSetupDataSO;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class MenuScenesTransitionSetupDataSO;
}
namespace GlobalNamespace {
class IDestinationRequestManager;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace Zenject {
class IInitializable;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
struct AsyncVoidMethodBuilder;
}
namespace System::Runtime::CompilerServices {
struct TaskAwaiter;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0;
}
namespace GlobalNamespace {
class MainMenuDestinationRequestController;
}
namespace GlobalNamespace {
struct GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8;
}
// Type: ::<>c__DisplayClass8_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4181))
// CS Name: MainMenuDestinationRequestController::<>c__DisplayClass8_0
class CORDL_TYPE GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0(GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0(GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0& operator=(GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0&& o) noexcept = default;
  constexpr GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0& operator=(GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MenuDestination __declspec(property(get=__get_menuDestination, put=__set_menuDestination))  menuDestination;

constexpr void __set_menuDestination(GlobalNamespace::MenuDestination value) ;

constexpr GlobalNamespace::MenuDestination __get_menuDestination() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0() ;

/// @brief Method .ctor addr 0x21bce20 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ProcessDestinationRequest>b__0 addr 0x21bce28 size 0xd4 virtual false final false
 void _ProcessDestinationRequest_b__0(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<ProcessDestinationRequest>d__8
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4182))
// CS Name: MainMenuDestinationRequestController::<ProcessDestinationRequest>d__8
struct CORDL_TYPE GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: None }, CppParam { name: "menuDestination", ty: "GlobalNamespace::MenuDestination", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "GlobalNamespace::MainMenuDestinationRequestController", modifiers: "", def_value: None }, CppParam { name: "__8__1", ty: "GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0", modifiers: "", def_value: None }, CppParam { name: "_cancellationToken_5__2", ty: "System::Threading::CancellationToken", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8(int32_t __1__state, System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, GlobalNamespace::MenuDestination menuDestination, GlobalNamespace::MainMenuDestinationRequestController __4__this, GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 __8__1, System::Threading::CancellationToken _cancellationToken_5__2, System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept;


                    constexpr GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8(GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8 const&) = default;
                    constexpr GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8(GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8&&) = default;
                    constexpr GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8& operator=(GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8& operator=(GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x50};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncVoidMethodBuilder __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncVoidMethodBuilder value) ;

constexpr System::Runtime::CompilerServices::AsyncVoidMethodBuilder __get___t__builder() const;

 GlobalNamespace::MenuDestination __declspec(property(get=__get_menuDestination, put=__set_menuDestination))  menuDestination;

constexpr void __set_menuDestination(GlobalNamespace::MenuDestination value) ;

constexpr GlobalNamespace::MenuDestination __get_menuDestination() const;

 GlobalNamespace::MainMenuDestinationRequestController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MainMenuDestinationRequestController value) ;

constexpr GlobalNamespace::MainMenuDestinationRequestController __get___4__this() const;

 GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 __declspec(property(get=__get___8__1, put=__set___8__1))  __8__1;

constexpr void __set___8__1(GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 value) ;

constexpr GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0 __get___8__1() const;

 System::Threading::CancellationToken __declspec(property(get=__get__cancellationToken_5__2, put=__set__cancellationToken_5__2))  _cancellationToken_5__2;

constexpr void __set__cancellationToken_5__2(System::Threading::CancellationToken value) ;

constexpr System::Threading::CancellationToken __get__cancellationToken_5__2() const;

 System::Runtime::CompilerServices::TaskAwaiter __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::TaskAwaiter value) ;

constexpr System::Runtime::CompilerServices::TaskAwaiter __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x21bcefc size 0x560 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x21bd45c size 0xc virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MainMenuDestinationRequestController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4183))
// CS Name: MainMenuDestinationRequestController
class CORDL_TYPE MainMenuDestinationRequestController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _ProcessDestinationRequest_d__8 = GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8;

using __c__DisplayClass8_0 = GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0;

/// @brief Convert operator to Zenject::IInitializable
constexpr operator  Zenject::IInitializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MainMenuDestinationRequestController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuDestinationRequestController", modifiers: " const&", def_value: None }]
constexpr MainMenuDestinationRequestController(MainMenuDestinationRequestController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainMenuDestinationRequestController", modifiers: "&&", def_value: None }]
constexpr MainMenuDestinationRequestController(MainMenuDestinationRequestController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainMenuDestinationRequestController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MainMenuDestinationRequestController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainMenuDestinationRequestController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainMenuDestinationRequestController& operator=(MainMenuDestinationRequestController&& o) noexcept = default;
  constexpr MainMenuDestinationRequestController& operator=(MainMenuDestinationRequestController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::IDestinationRequestManager __declspec(property(get=__get__destinationRequestManager, put=__set__destinationRequestManager))  _destinationRequestManager;

constexpr void __set__destinationRequestManager(GlobalNamespace::IDestinationRequestManager value) ;

constexpr GlobalNamespace::IDestinationRequestManager __get__destinationRequestManager() const;

 GlobalNamespace::MenuScenesTransitionSetupDataSO __declspec(property(get=__get__menuScenesTransitionSetupData, put=__set__menuScenesTransitionSetupData))  _menuScenesTransitionSetupData;

constexpr void __set__menuScenesTransitionSetupData(GlobalNamespace::MenuScenesTransitionSetupDataSO value) ;

constexpr GlobalNamespace::MenuScenesTransitionSetupDataSO __get__menuScenesTransitionSetupData() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 System::Threading::CancellationTokenSource __declspec(property(get=__get__cancellationTokenSource, put=__set__cancellationTokenSource))  _cancellationTokenSource;

constexpr void __set__cancellationTokenSource(System::Threading::CancellationTokenSource value) ;

constexpr System::Threading::CancellationTokenSource __get__cancellationTokenSource() const;


// Methods

/// @brief Method Initialize addr 0x21bc750 size 0x1dc virtual true final true
 void Initialize() ;

/// @brief Method Dispose addr 0x21bc9cc size 0x1b4 virtual true final true
 void Dispose() ;

/// @brief Method HandleGameScenesManagerInstallEarlyBindings addr 0x21bcb80 size 0x294 virtual false final false
 void HandleGameScenesManagerInstallEarlyBindings(GlobalNamespace::ScenesTransitionSetupDataSO scenesTransitionSetupData, Zenject::DiContainer container) ;

/// @brief Method HandleDestinationRequestManagerDidSendMenuDestinationRequest addr 0x21bce14 size 0x4 virtual false final false
 void HandleDestinationRequestManagerDidSendMenuDestinationRequest(GlobalNamespace::MenuDestination menuDestination) ;

/// @brief Method ProcessDestinationRequest addr 0x21bc92c size 0xa0 virtual false final false
 void ProcessDestinationRequest(GlobalNamespace::MenuDestination menuDestination) ;

// Ctor Parameters []
explicit MainMenuDestinationRequestController() ;

/// @brief Method .ctor addr 0x21bce18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController____c__DisplayClass8_0, "", "MainMenuDestinationRequestController/<>c__DisplayClass8_0");
NEED_NO_BOX(GlobalNamespace::MainMenuDestinationRequestController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuDestinationRequestController, "", "MainMenuDestinationRequestController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MainMenuDestinationRequestController___ProcessDestinationRequest_d__8, "", "MainMenuDestinationRequestController/<ProcessDestinationRequest>d__8");
