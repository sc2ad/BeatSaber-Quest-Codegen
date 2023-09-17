#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Action;
}
namespace UnityEngine {
class IntegratedSubsystem;
}
namespace UnityEngine {
class Subsystem;
}
namespace UnityEngine::SubsystemsImplementation {
class SubsystemWithProvider;
}
// Forward declare root types
namespace UnityEngine {
class SubsystemManager;
}
// Type: UnityEngine::SubsystemManager
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15852))
// CS Name: UnityEngine.SubsystemManager
class CORDL_TYPE SubsystemManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SubsystemManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemManager", modifiers: " const&", def_value: None }]
constexpr SubsystemManager(SubsystemManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemManager", modifiers: "&&", def_value: None }]
constexpr SubsystemManager(SubsystemManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemManager& operator=(SubsystemManager&& o) noexcept = default;
  constexpr SubsystemManager& operator=(SubsystemManager const& o) noexcept = default;
                


// Fields

static ::System::Action __declspec(property(get=__get_reloadSubsytemsStarted, put=__set_reloadSubsytemsStarted))  reloadSubsytemsStarted;

static void __set_reloadSubsytemsStarted(::System::Action value) ;

static ::System::Action __get_reloadSubsytemsStarted() ;

static ::System::Action __declspec(property(get=__get_reloadSubsytemsCompleted, put=__set_reloadSubsytemsCompleted))  reloadSubsytemsCompleted;

static void __set_reloadSubsytemsCompleted(::System::Action value) ;

static ::System::Action __get_reloadSubsytemsCompleted() ;

static ::System::Action __declspec(property(get=__get_beforeReloadSubsystems, put=__set_beforeReloadSubsystems))  beforeReloadSubsystems;

static void __set_beforeReloadSubsystems(::System::Action value) ;

static ::System::Action __get_beforeReloadSubsystems() ;

static ::System::Action __declspec(property(get=__get_afterReloadSubsystems, put=__set_afterReloadSubsystems))  afterReloadSubsystems;

static void __set_afterReloadSubsystems(::System::Action value) ;

static ::System::Action __get_afterReloadSubsystems() ;

static ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem> __declspec(property(get=__get_s_IntegratedSubsystems, put=__set_s_IntegratedSubsystems))  s_IntegratedSubsystems;

static void __set_s_IntegratedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::IntegratedSubsystem> __get_s_IntegratedSubsystems() ;

static ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider> __declspec(property(get=__get_s_StandaloneSubsystems, put=__set_s_StandaloneSubsystems))  s_StandaloneSubsystems;

static void __set_s_StandaloneSubsystems(::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::SubsystemsImplementation::SubsystemWithProvider> __get_s_StandaloneSubsystems() ;

static ::System::Collections::Generic::List_1<::UnityEngine::Subsystem> __declspec(property(get=__get_s_DeprecatedSubsystems, put=__set_s_DeprecatedSubsystems))  s_DeprecatedSubsystems;

static void __set_s_DeprecatedSubsystems(::System::Collections::Generic::List_1<::UnityEngine::Subsystem> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::Subsystem> __get_s_DeprecatedSubsystems() ;


// Methods

/// @brief Method GetInstances addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void GetInstances(::System::Collections::Generic::List_1<T> subsystems) ;

/// @brief Method RemoveDeprecatedSubsystem addr 0x2ba3514 size 0x80 virtual false final false
static bool RemoveDeprecatedSubsystem(::UnityEngine::Subsystem subsystem) ;

/// @brief Method GetSubsystemDescriptors addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void GetSubsystemDescriptors(::System::Collections::Generic::List_1<T> descriptors) ;

/// @brief Method GetSubsystems addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void GetSubsystems(::System::Collections::Generic::List_1<T> subsystems) ;

/// @brief Method AddSubsystemSubset addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TBaseTypeInList,typename TQueryType>
static void AddSubsystemSubset(::System::Collections::Generic::List_1<TBaseTypeInList> copyFrom, ::System::Collections::Generic::List_1<TQueryType> copyTo) ;

/// @brief Method GetIntegratedSubsystemByPtr addr 0x2ba36fc size 0x184 virtual false final false
static ::UnityEngine::IntegratedSubsystem GetIntegratedSubsystemByPtr(::cordl_internals::intptr_t ptr) ;

/// @brief Method RemoveIntegratedSubsystemByPtr addr 0x2ba3268 size 0x184 virtual false final false
static void RemoveIntegratedSubsystemByPtr(::cordl_internals::intptr_t ptr) ;

/// @brief Method RemoveStandaloneSubsystem addr 0x2ba3880 size 0x80 virtual false final false
static bool RemoveStandaloneSubsystem(::UnityEngine::SubsystemsImplementation::SubsystemWithProvider subsystem) ;

/// @brief Method ReloadSubsystemsStarted addr 0x2ba3900 size 0xe0 virtual false final false
static void ReloadSubsystemsStarted() ;

/// @brief Method ReloadSubsystemsCompleted addr 0x2ba39e0 size 0xe0 virtual false final false
static void ReloadSubsystemsCompleted() ;

/// @brief Method InitializeIntegratedSubsystem addr 0x2ba3ac0 size 0x108 virtual false final false
static void InitializeIntegratedSubsystem(::cordl_internals::intptr_t ptr, ::UnityEngine::IntegratedSubsystem subsystem) ;

/// @brief Method ClearSubsystems addr 0x2ba3bc8 size 0x274 virtual false final false
static void ClearSubsystems() ;

/// @brief Method StaticConstructScriptingClassMap addr 0x2ba36d4 size 0x28 virtual false final false
static void StaticConstructScriptingClassMap() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SubsystemManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemManager, "UnityEngine", "SubsystemManager");
