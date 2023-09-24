#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace GlobalNamespace {
class GlobalNamespace__ShaderWarmupSceneStart___Start_d__2;
}
namespace GlobalNamespace {
class GameScenesManager;
}
namespace GlobalNamespace {
class ShaderWarmupSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__ShaderWarmupSceneStart___Start_d__2;
}
namespace GlobalNamespace {
class ShaderWarmupSceneStart;
}
// Type: ::<Start>d__2
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6140))
// CS Name: ShaderWarmupSceneStart::<Start>d__2
class CORDL_TYPE GlobalNamespace__ShaderWarmupSceneStart___Start_d__2 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__ShaderWarmupSceneStart___Start_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ShaderWarmupSceneStart___Start_d__2", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__ShaderWarmupSceneStart___Start_d__2(GlobalNamespace__ShaderWarmupSceneStart___Start_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__ShaderWarmupSceneStart___Start_d__2", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__ShaderWarmupSceneStart___Start_d__2(GlobalNamespace__ShaderWarmupSceneStart___Start_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ShaderWarmupSceneStart___Start_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__ShaderWarmupSceneStart___Start_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__ShaderWarmupSceneStart___Start_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__ShaderWarmupSceneStart___Start_d__2& operator=(GlobalNamespace__ShaderWarmupSceneStart___Start_d__2&& o) noexcept = default;
  constexpr GlobalNamespace__ShaderWarmupSceneStart___Start_d__2& operator=(GlobalNamespace__ShaderWarmupSceneStart___Start_d__2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::ShaderWarmupSceneStart __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::ShaderWarmupSceneStart value) ;

constexpr GlobalNamespace::ShaderWarmupSceneStart __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__ShaderWarmupSceneStart___Start_d__2 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21d3cfc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21d3d2c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21d3d30 size 0x90 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21d3dc0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21d3dc8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21d3e08 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ShaderWarmupSceneStart
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6141))
// CS Name: ShaderWarmupSceneStart
class CORDL_TYPE ShaderWarmupSceneStart : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__2 = GlobalNamespace::GlobalNamespace__ShaderWarmupSceneStart___Start_d__2;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ShaderWarmupSceneStart() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneStart", modifiers: " const&", def_value: None }]
constexpr ShaderWarmupSceneStart(ShaderWarmupSceneStart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShaderWarmupSceneStart", modifiers: "&&", def_value: None }]
constexpr ShaderWarmupSceneStart(ShaderWarmupSceneStart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShaderWarmupSceneStart(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ShaderWarmupSceneStart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShaderWarmupSceneStart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShaderWarmupSceneStart& operator=(ShaderWarmupSceneStart&& o) noexcept = default;
  constexpr ShaderWarmupSceneStart& operator=(ShaderWarmupSceneStart const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ShaderWarmupSceneSetupData __declspec(property(get=__get__sceneSetupData, put=__set__sceneSetupData))  _sceneSetupData;

constexpr void __set__sceneSetupData(GlobalNamespace::ShaderWarmupSceneSetupData value) ;

constexpr GlobalNamespace::ShaderWarmupSceneSetupData __get__sceneSetupData() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;


// Methods

/// @brief Method Start addr 0x21d3c94 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

static GlobalNamespace::ShaderWarmupSceneStart New_ctor() ;

/// @brief Method .ctor addr 0x21d3d24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__ShaderWarmupSceneStart___Start_d__2);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ShaderWarmupSceneStart___Start_d__2, "", "ShaderWarmupSceneStart/<Start>d__2");
NEED_NO_BOX(GlobalNamespace::ShaderWarmupSceneStart);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShaderWarmupSceneStart, "", "ShaderWarmupSceneStart");
