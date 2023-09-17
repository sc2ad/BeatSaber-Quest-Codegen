#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace GlobalNamespace {
class OVRSceneManager;
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
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneModelLoader;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6;
}
// Type: ::<AttemptToLoadSceneModel>d__6
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8827))
// CS Name: OVRSceneModelLoader::<AttemptToLoadSceneModel>d__6
class CORDL_TYPE ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6(____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6(____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6& operator=(____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6& operator=(____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::OVRSceneModelLoader __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OVRSceneModelLoader value) ;

constexpr ::GlobalNamespace::OVRSceneModelLoader __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2609780 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2609b20 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2609b24 size 0x6c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2609b90 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2609b98 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2609bd8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRSceneModelLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8828))
// CS Name: OVRSceneModelLoader
class CORDL_TYPE OVRSceneModelLoader : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _AttemptToLoadSceneModel_d__6 = ::GlobalNamespace::____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRSceneModelLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader", modifiers: " const&", def_value: None }]
constexpr OVRSceneModelLoader(OVRSceneModelLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRSceneModelLoader", modifiers: "&&", def_value: None }]
constexpr OVRSceneModelLoader(OVRSceneModelLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRSceneModelLoader(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRSceneModelLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRSceneModelLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRSceneModelLoader& operator=(OVRSceneModelLoader&& o) noexcept = default;
  constexpr OVRSceneModelLoader& operator=(OVRSceneModelLoader const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OVRSceneManager __declspec(property(get=__get__SceneManager_k__BackingField, put=__set__SceneManager_k__BackingField))  _SceneManager_k__BackingField;

constexpr void __set__SceneManager_k__BackingField(::GlobalNamespace::OVRSceneManager value) ;

constexpr ::GlobalNamespace::OVRSceneManager __get__SceneManager_k__BackingField() const;

 bool __declspec(property(get=__get__sceneCaptureRequested, put=__set__sceneCaptureRequested))  _sceneCaptureRequested;

constexpr void __set__sceneCaptureRequested(bool value) ;

constexpr bool __get__sceneCaptureRequested() const;


// Properties

 ::GlobalNamespace::OVRSceneManager __declspec(property(get=get_SceneManager, put=set_SceneManager))  SceneManager;


// Methods

/// @brief Method get_SceneManager addr 0x26094dc size 0x8 virtual false final false
 ::GlobalNamespace::OVRSceneManager get_SceneManager() ;

/// @brief Method set_SceneManager addr 0x26094e4 size 0x8 virtual false final false
 void set_SceneManager(::GlobalNamespace::OVRSceneManager value) ;

/// @brief Method Start addr 0x26094ec size 0x22c virtual false final false
 void Start() ;

/// @brief Method AttemptToLoadSceneModel addr 0x2609718 size 0x68 virtual false final false
 ::System::Collections::IEnumerator AttemptToLoadSceneModel() ;

/// @brief Method OnStart addr 0x26097a8 size 0xc8 virtual true final false
 void OnStart() ;

/// @brief Method OnSceneModelLoadedSuccessfully addr 0x2609870 size 0x98 virtual true final false
 void OnSceneModelLoadedSuccessfully() ;

/// @brief Method OnNoSceneModelToLoad addr 0x2609908 size 0xd8 virtual true final false
 void OnNoSceneModelToLoad() ;

/// @brief Method OnSceneCaptureReturnedWithoutError addr 0x26099e0 size 0xa0 virtual true final false
 void OnSceneCaptureReturnedWithoutError() ;

/// @brief Method OnUnexpectedErrorWithSceneCapture addr 0x2609a80 size 0x98 virtual true final false
 void OnUnexpectedErrorWithSceneCapture() ;

// Ctor Parameters []
explicit OVRSceneModelLoader() ;

/// @brief Method .ctor addr 0x2609b18 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneModelLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneModelLoader, "", "OVRSceneModelLoader");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRSceneModelLoader___AttemptToLoadSceneModel_d__6, "", "OVRSceneModelLoader/<AttemptToLoadSceneModel>d__6");
