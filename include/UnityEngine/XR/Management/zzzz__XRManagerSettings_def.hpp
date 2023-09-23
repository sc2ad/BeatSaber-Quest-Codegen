#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
struct System__Collections__Generic__List_1__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::XR::Management {
class XRLoader;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24;
}
namespace UnityEngine::XR::Management {
class XRManagerSettings;
}
// Type: ::<InitializeLoader>d__24
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15895))
// CS Name: UnityEngine.XR.Management.XRManagerSettings::<InitializeLoader>d__24
class CORDL_TYPE UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24(UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24(UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24& operator=(UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24&& o) noexcept = default;
  constexpr UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24& operator=(UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 UnityEngine::XR::Management::XRManagerSettings __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::XR::Management::XRManagerSettings value) ;

constexpr UnityEngine::XR::Management::XRManagerSettings __get___4__this() const;

 System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::XR::Management::XRLoader> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::XR::Management::XRLoader> value) ;

constexpr System::Collections::Generic::System__Collections__Generic__List_1__Enumerator<UnityEngine::XR::Management::XRLoader> __get___7__wrap1() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2adde80 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2ade3c0 size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2ade3dc size 0x2bc virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x2ade698 size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2ade6e8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2ade6f0 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2ade730 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
// Type: UnityEngine.XR.Management::XRManagerSettings
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15896))
// CS Name: UnityEngine.XR.Management.XRManagerSettings
class CORDL_TYPE XRManagerSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
using _InitializeLoader_d__24 = UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~XRManagerSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings", modifiers: " const&", def_value: None }]
constexpr XRManagerSettings(XRManagerSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRManagerSettings", modifiers: "&&", def_value: None }]
constexpr XRManagerSettings(XRManagerSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRManagerSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr XRManagerSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRManagerSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRManagerSettings& operator=(XRManagerSettings&& o) noexcept = default;
  constexpr XRManagerSettings& operator=(XRManagerSettings const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_InitializationComplete, put=__set_m_InitializationComplete))  m_InitializationComplete;

constexpr void __set_m_InitializationComplete(bool value) ;

constexpr bool __get_m_InitializationComplete() const;

 bool __declspec(property(get=__get_m_RequiresSettingsUpdate, put=__set_m_RequiresSettingsUpdate))  m_RequiresSettingsUpdate;

constexpr void __set_m_RequiresSettingsUpdate(bool value) ;

constexpr bool __get_m_RequiresSettingsUpdate() const;

 bool __declspec(property(get=__get_m_AutomaticLoading, put=__set_m_AutomaticLoading))  m_AutomaticLoading;

constexpr void __set_m_AutomaticLoading(bool value) ;

constexpr bool __get_m_AutomaticLoading() const;

 bool __declspec(property(get=__get_m_AutomaticRunning, put=__set_m_AutomaticRunning))  m_AutomaticRunning;

constexpr void __set_m_AutomaticRunning(bool value) ;

constexpr bool __get_m_AutomaticRunning() const;

 System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> __declspec(property(get=__get_m_Loaders, put=__set_m_Loaders))  m_Loaders;

constexpr void __set_m_Loaders(System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> __get_m_Loaders() const;

 System::Collections::Generic::HashSet_1<UnityEngine::XR::Management::XRLoader> __declspec(property(get=__get_m_RegisteredLoaders, put=__set_m_RegisteredLoaders))  m_RegisteredLoaders;

constexpr void __set_m_RegisteredLoaders(System::Collections::Generic::HashSet_1<UnityEngine::XR::Management::XRLoader> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::XR::Management::XRLoader> __get_m_RegisteredLoaders() const;

 UnityEngine::XR::Management::XRLoader __declspec(property(get=__get__activeLoader_k__BackingField, put=__set__activeLoader_k__BackingField))  _activeLoader_k__BackingField;

constexpr void __set__activeLoader_k__BackingField(UnityEngine::XR::Management::XRLoader value) ;

constexpr UnityEngine::XR::Management::XRLoader __get__activeLoader_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_automaticLoading, put=set_automaticLoading))  automaticLoading;

 bool __declspec(property(get=get_automaticRunning, put=set_automaticRunning))  automaticRunning;

 System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> __declspec(property(get=get_loaders))  loaders;

 System::Collections::Generic::IReadOnlyList_1<UnityEngine::XR::Management::XRLoader> __declspec(property(get=get_activeLoaders))  activeLoaders;

 bool __declspec(property(get=get_isInitializationComplete))  isInitializationComplete;

 UnityEngine::XR::Management::XRLoader __declspec(property(get=get_activeLoader, put=set_activeLoader))  activeLoader;

 System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> __declspec(property(get=get_currentLoaders, put=set_currentLoaders))  currentLoaders;

 System::Collections::Generic::HashSet_1<UnityEngine::XR::Management::XRLoader> __declspec(property(get=get_registeredLoaders))  registeredLoaders;


// Methods

/// @brief Method get_automaticLoading addr 0x2addc74 size 0x8 virtual false final false
 bool get_automaticLoading() ;

/// @brief Method set_automaticLoading addr 0x2addc7c size 0xc virtual false final false
 void set_automaticLoading(bool value) ;

/// @brief Method get_automaticRunning addr 0x2addc88 size 0x8 virtual false final false
 bool get_automaticRunning() ;

/// @brief Method set_automaticRunning addr 0x2addc90 size 0xc virtual false final false
 void set_automaticRunning(bool value) ;

/// @brief Method get_loaders addr 0x2addc9c size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> get_loaders() ;

/// @brief Method get_activeLoaders addr 0x2addca4 size 0x8 virtual false final false
 System::Collections::Generic::IReadOnlyList_1<UnityEngine::XR::Management::XRLoader> get_activeLoaders() ;

/// @brief Method get_isInitializationComplete addr 0x2addcac size 0x8 virtual false final false
 bool get_isInitializationComplete() ;

/// @brief Method get_activeLoader addr 0x2addcb4 size 0x8 virtual false final false
 UnityEngine::XR::Management::XRLoader get_activeLoader() ;

/// @brief Method set_activeLoader addr 0x2addcbc size 0x8 virtual false final false
 void set_activeLoader(UnityEngine::XR::Management::XRLoader value) ;

/// @brief Method ActiveLoaderAs addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T ActiveLoaderAs() ;

/// @brief Method InitializeLoaderSync addr 0x2add500 size 0x23c virtual false final false
 void InitializeLoaderSync() ;

/// @brief Method InitializeLoader addr 0x2adde18 size 0x68 virtual false final false
 System::Collections::IEnumerator InitializeLoader() ;

/// @brief Method TryAddLoader addr 0x2addea8 size 0x194 virtual false final false
 bool TryAddLoader(UnityEngine::XR::Management::XRLoader loader, int32_t index) ;

/// @brief Method TryRemoveLoader addr 0x2ade03c size 0x94 virtual false final false
 bool TryRemoveLoader(UnityEngine::XR::Management::XRLoader loader) ;

/// @brief Method TrySetLoaders addr 0x2ade0d0 size 0x1d8 virtual false final false
 bool TrySetLoaders(System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> reorderedLoaders) ;

/// @brief Method CheckGraphicsAPICompatibility addr 0x2addcc4 size 0x154 virtual false final false
 bool CheckGraphicsAPICompatibility(UnityEngine::XR::Management::XRLoader loader) ;

/// @brief Method StartSubsystems addr 0x2add73c size 0xdc virtual false final false
 void StartSubsystems() ;

/// @brief Method StopSubsystems addr 0x2add8c4 size 0xdc virtual false final false
 void StopSubsystems() ;

/// @brief Method DeinitializeLoader addr 0x2add9a0 size 0xe4 virtual false final false
 void DeinitializeLoader() ;

/// @brief Method Start addr 0x2ade2a8 size 0x18 virtual false final false
 void Start() ;

/// @brief Method OnDisable addr 0x2ade2c0 size 0x18 virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x2ade2d8 size 0x10 virtual false final false
 void OnDestroy() ;

/// @brief Method get_currentLoaders addr 0x2ade2e8 size 0x8 virtual false final false
 System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> get_currentLoaders() ;

/// @brief Method set_currentLoaders addr 0x2ade2f0 size 0x8 virtual false final false
 void set_currentLoaders(System::Collections::Generic::List_1<UnityEngine::XR::Management::XRLoader> value) ;

/// @brief Method get_registeredLoaders addr 0x2ade2f8 size 0x8 virtual false final false
 System::Collections::Generic::HashSet_1<UnityEngine::XR::Management::XRLoader> get_registeredLoaders() ;

// Ctor Parameters []
explicit XRManagerSettings() ;

/// @brief Method .ctor addr 0x2ade300 size 0xc0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Management::UnityEngine__XR__Management__XRManagerSettings___InitializeLoader_d__24, "UnityEngine.XR.Management", "XRManagerSettings/<InitializeLoader>d__24");
NEED_NO_BOX(UnityEngine::XR::Management::XRManagerSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Management::XRManagerSettings, "UnityEngine.XR.Management", "XRManagerSettings");
