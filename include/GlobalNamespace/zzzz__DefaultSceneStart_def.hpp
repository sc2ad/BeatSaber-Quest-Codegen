#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class GameScenesManager;
}
namespace System::Collections {
class IEnumerator;
}
namespace HMUI {
class HierarchyManager;
}
namespace HMUI {
class FlowCoordinator;
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
class DefaultSceneStart;
}
namespace GlobalNamespace {
class GlobalNamespace__DefaultSceneStart___Start_d__3;
}
// Type: ::<Start>d__3
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6080))
// CS Name: DefaultSceneStart::<Start>d__3
class CORDL_TYPE GlobalNamespace__DefaultSceneStart___Start_d__3 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__DefaultSceneStart___Start_d__3() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultSceneStart___Start_d__3", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__DefaultSceneStart___Start_d__3(GlobalNamespace__DefaultSceneStart___Start_d__3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__DefaultSceneStart___Start_d__3", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__DefaultSceneStart___Start_d__3(GlobalNamespace__DefaultSceneStart___Start_d__3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__DefaultSceneStart___Start_d__3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__DefaultSceneStart___Start_d__3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__DefaultSceneStart___Start_d__3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__DefaultSceneStart___Start_d__3& operator=(GlobalNamespace__DefaultSceneStart___Start_d__3&& o) noexcept = default;
  constexpr GlobalNamespace__DefaultSceneStart___Start_d__3& operator=(GlobalNamespace__DefaultSceneStart___Start_d__3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::DefaultSceneStart __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::DefaultSceneStart value) ;

constexpr GlobalNamespace::DefaultSceneStart __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__DefaultSceneStart___Start_d__3(int32_t __1__state) ;

/// @brief Method .ctor addr 0x21b3e8c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x21b3ebc size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x21b3ec0 size 0x78 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x21b3f38 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x21b3f40 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x21b3f80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::DefaultSceneStart
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6081))
// CS Name: DefaultSceneStart
class CORDL_TYPE DefaultSceneStart : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__3 = GlobalNamespace::GlobalNamespace__DefaultSceneStart___Start_d__3;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DefaultSceneStart() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSceneStart", modifiers: " const&", def_value: None }]
constexpr DefaultSceneStart(DefaultSceneStart const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSceneStart", modifiers: "&&", def_value: None }]
constexpr DefaultSceneStart(DefaultSceneStart&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultSceneStart(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DefaultSceneStart& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultSceneStart& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultSceneStart& operator=(DefaultSceneStart&& o) noexcept = default;
  constexpr DefaultSceneStart& operator=(DefaultSceneStart const& o) noexcept = default;
                


// Fields

 HMUI::FlowCoordinator __declspec(property(get=__get__flowCoordinator, put=__set__flowCoordinator))  _flowCoordinator;

constexpr void __set__flowCoordinator(HMUI::FlowCoordinator value) ;

constexpr HMUI::FlowCoordinator __get__flowCoordinator() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 HMUI::HierarchyManager __declspec(property(get=__get__hierarchyManager, put=__set__hierarchyManager))  _hierarchyManager;

constexpr void __set__hierarchyManager(HMUI::HierarchyManager value) ;

constexpr HMUI::HierarchyManager __get__hierarchyManager() const;


// Methods

/// @brief Method Start addr 0x21b3e24 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

// Ctor Parameters []
explicit DefaultSceneStart() ;

/// @brief Method .ctor addr 0x21b3eb4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DefaultSceneStart);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DefaultSceneStart, "", "DefaultSceneStart");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__DefaultSceneStart___Start_d__3);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__DefaultSceneStart___Start_d__3, "", "DefaultSceneStart/<Start>d__3");
