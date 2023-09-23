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
class GameScenesManager;
}
namespace GlobalNamespace {
class GameSongController;
}
namespace GlobalNamespace {
class MainCamera;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__TrailerGameplayManager___Start_d__4;
}
namespace GlobalNamespace {
class TrailerGameplayManager;
}
// Type: ::<Start>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5127))
// CS Name: TrailerGameplayManager::<Start>d__4
class CORDL_TYPE GlobalNamespace__TrailerGameplayManager___Start_d__4 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__TrailerGameplayManager___Start_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TrailerGameplayManager___Start_d__4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__TrailerGameplayManager___Start_d__4(GlobalNamespace__TrailerGameplayManager___Start_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__TrailerGameplayManager___Start_d__4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__TrailerGameplayManager___Start_d__4(GlobalNamespace__TrailerGameplayManager___Start_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TrailerGameplayManager___Start_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__TrailerGameplayManager___Start_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__TrailerGameplayManager___Start_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__TrailerGameplayManager___Start_d__4& operator=(GlobalNamespace__TrailerGameplayManager___Start_d__4&& o) noexcept = default;
  constexpr GlobalNamespace__TrailerGameplayManager___Start_d__4& operator=(GlobalNamespace__TrailerGameplayManager___Start_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::TrailerGameplayManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::TrailerGameplayManager value) ;

constexpr GlobalNamespace::TrailerGameplayManager __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__TrailerGameplayManager___Start_d__4(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2272768 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2272798 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x227279c size 0xec virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2272888 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2272890 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x22728d0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrailerGameplayManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5128))
// CS Name: TrailerGameplayManager
class CORDL_TYPE TrailerGameplayManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__4 = GlobalNamespace::GlobalNamespace__TrailerGameplayManager___Start_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TrailerGameplayManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager", modifiers: " const&", def_value: None }]
constexpr TrailerGameplayManager(TrailerGameplayManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrailerGameplayManager", modifiers: "&&", def_value: None }]
constexpr TrailerGameplayManager(TrailerGameplayManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrailerGameplayManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TrailerGameplayManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrailerGameplayManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrailerGameplayManager& operator=(TrailerGameplayManager&& o) noexcept = default;
  constexpr TrailerGameplayManager& operator=(TrailerGameplayManager const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__disableMainCamera, put=__set__disableMainCamera))  _disableMainCamera;

constexpr void __set__disableMainCamera(bool value) ;

constexpr bool __get__disableMainCamera() const;

 GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(GlobalNamespace::GameScenesManager value) ;

constexpr GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 GlobalNamespace::GameSongController __declspec(property(get=__get__gameSongController, put=__set__gameSongController))  _gameSongController;

constexpr void __set__gameSongController(GlobalNamespace::GameSongController value) ;

constexpr GlobalNamespace::GameSongController __get__gameSongController() const;

 GlobalNamespace::MainCamera __declspec(property(get=__get__mainCamera, put=__set__mainCamera))  _mainCamera;

constexpr void __set__mainCamera(GlobalNamespace::MainCamera value) ;

constexpr GlobalNamespace::MainCamera __get__mainCamera() const;


// Methods

/// @brief Method Start addr 0x2272700 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

// Ctor Parameters []
explicit TrailerGameplayManager() ;

/// @brief Method .ctor addr 0x2272790 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__TrailerGameplayManager___Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TrailerGameplayManager___Start_d__4, "", "TrailerGameplayManager/<Start>d__4");
NEED_NO_BOX(GlobalNamespace::TrailerGameplayManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TrailerGameplayManager, "", "TrailerGameplayManager");
