#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GlobalNamespace__EnvironmentShaderWarmup___Start_d__6;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentShaderWarmup;
}
namespace GlobalNamespace {
class GlobalNamespace__EnvironmentShaderWarmup___Start_d__6;
}
// Type: ::<Start>d__6
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3940))
// CS Name: EnvironmentShaderWarmup::<Start>d__6
class CORDL_TYPE GlobalNamespace__EnvironmentShaderWarmup___Start_d__6 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__EnvironmentShaderWarmup___Start_d__6() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EnvironmentShaderWarmup___Start_d__6", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__EnvironmentShaderWarmup___Start_d__6(GlobalNamespace__EnvironmentShaderWarmup___Start_d__6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EnvironmentShaderWarmup___Start_d__6", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__EnvironmentShaderWarmup___Start_d__6(GlobalNamespace__EnvironmentShaderWarmup___Start_d__6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EnvironmentShaderWarmup___Start_d__6(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__EnvironmentShaderWarmup___Start_d__6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__EnvironmentShaderWarmup___Start_d__6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__EnvironmentShaderWarmup___Start_d__6& operator=(GlobalNamespace__EnvironmentShaderWarmup___Start_d__6&& o) noexcept = default;
  constexpr GlobalNamespace__EnvironmentShaderWarmup___Start_d__6& operator=(GlobalNamespace__EnvironmentShaderWarmup___Start_d__6 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::EnvironmentShaderWarmup __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::EnvironmentShaderWarmup value) ;

constexpr GlobalNamespace::EnvironmentShaderWarmup __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__EnvironmentShaderWarmup___Start_d__6 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x20a442c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x20a445c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x20a4460 size 0x444 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x20a48a4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x20a48ac size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x20a48ec size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentShaderWarmup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3941))
// CS Name: EnvironmentShaderWarmup
class CORDL_TYPE EnvironmentShaderWarmup : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__6 = GlobalNamespace::GlobalNamespace__EnvironmentShaderWarmup___Start_d__6;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~EnvironmentShaderWarmup() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup", modifiers: " const&", def_value: None }]
constexpr EnvironmentShaderWarmup(EnvironmentShaderWarmup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentShaderWarmup", modifiers: "&&", def_value: None }]
constexpr EnvironmentShaderWarmup(EnvironmentShaderWarmup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentShaderWarmup(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentShaderWarmup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentShaderWarmup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentShaderWarmup& operator=(EnvironmentShaderWarmup&& o) noexcept = default;
  constexpr EnvironmentShaderWarmup& operator=(EnvironmentShaderWarmup const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Material> __declspec(property(get=__get__materials, put=__set__materials))  _materials;

constexpr void __set__materials(::ArrayW<UnityEngine::Material> value) ;

constexpr ::ArrayW<UnityEngine::Material> __get__materials() const;

 GlobalNamespace::MainCamera __declspec(property(get=__get__mainCamera, put=__set__mainCamera))  _mainCamera;

constexpr void __set__mainCamera(GlobalNamespace::MainCamera value) ;

constexpr GlobalNamespace::MainCamera __get__mainCamera() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 UnityEngine::Transform __declspec(property(get=__get__parentingTransform, put=__set__parentingTransform))  _parentingTransform;

constexpr void __set__parentingTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__parentingTransform() const;

/// @brief Field kNumberOfColumns offset 0
static constexpr int32_t  kNumberOfColumns{4};

/// @brief Field kNumberOfRows offset 0
static constexpr int32_t  kNumberOfRows{4};


// Methods

/// @brief Method Start addr 0x20a43c4 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

static GlobalNamespace::EnvironmentShaderWarmup New_ctor() ;

/// @brief Method .ctor addr 0x20a4454 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentShaderWarmup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentShaderWarmup, "", "EnvironmentShaderWarmup");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EnvironmentShaderWarmup___Start_d__6);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EnvironmentShaderWarmup___Start_d__6, "", "EnvironmentShaderWarmup/<Start>d__6");
