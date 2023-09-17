#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class FPSCounter;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace System::Collections {
class IEnumerator;
}
namespace GlobalNamespace {
class GameScenesManager;
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
class FPSCounterUIController;
}
namespace GlobalNamespace {
class ____GlobalNamespace__FPSCounterUIController___Start_d__9;
}
// Type: ::<Start>d__9
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5456))
// CS Name: FPSCounterUIController::<Start>d__9
class CORDL_TYPE ____GlobalNamespace__FPSCounterUIController___Start_d__9 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~____GlobalNamespace__FPSCounterUIController___Start_d__9() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__FPSCounterUIController___Start_d__9", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__FPSCounterUIController___Start_d__9(____GlobalNamespace__FPSCounterUIController___Start_d__9 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__FPSCounterUIController___Start_d__9", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__FPSCounterUIController___Start_d__9(____GlobalNamespace__FPSCounterUIController___Start_d__9&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__FPSCounterUIController___Start_d__9(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__FPSCounterUIController___Start_d__9& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__FPSCounterUIController___Start_d__9& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__FPSCounterUIController___Start_d__9& operator=(____GlobalNamespace__FPSCounterUIController___Start_d__9&& o) noexcept = default;
  constexpr ____GlobalNamespace__FPSCounterUIController___Start_d__9& operator=(____GlobalNamespace__FPSCounterUIController___Start_d__9 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::FPSCounterUIController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::FPSCounterUIController value) ;

constexpr ::GlobalNamespace::FPSCounterUIController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__FPSCounterUIController___Start_d__9(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2115d24 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2115ea0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2115ea4 size 0x94 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2115f38 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2115f40 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2115f80 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FPSCounterUIController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5457))
// CS Name: FPSCounterUIController
class CORDL_TYPE FPSCounterUIController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__9 = ::GlobalNamespace::____GlobalNamespace__FPSCounterUIController___Start_d__9;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~FPSCounterUIController() = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController", modifiers: " const&", def_value: None }]
constexpr FPSCounterUIController(FPSCounterUIController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FPSCounterUIController", modifiers: "&&", def_value: None }]
constexpr FPSCounterUIController(FPSCounterUIController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FPSCounterUIController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FPSCounterUIController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FPSCounterUIController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FPSCounterUIController& operator=(FPSCounterUIController&& o) noexcept = default;
  constexpr FPSCounterUIController& operator=(FPSCounterUIController const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__uiUpdateTimeInterval, put=__set__uiUpdateTimeInterval))  _uiUpdateTimeInterval;

constexpr void __set__uiUpdateTimeInterval(float_t value) ;

constexpr float_t __get__uiUpdateTimeInterval() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__currentFPSText, put=__set__currentFPSText))  _currentFPSText;

constexpr void __set__currentFPSText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__currentFPSText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__lowestFPSText, put=__set__lowestFPSText))  _lowestFPSText;

constexpr void __set__lowestFPSText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__lowestFPSText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__highestFPSText, put=__set__highestFPSText))  _highestFPSText;

constexpr void __set__highestFPSText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__highestFPSText() const;

 ::TMPro::TextMeshProUGUI __declspec(property(get=__get__droppedFramesText, put=__set__droppedFramesText))  _droppedFramesText;

constexpr void __set__droppedFramesText(::TMPro::TextMeshProUGUI value) ;

constexpr ::TMPro::TextMeshProUGUI __get__droppedFramesText() const;

 ::GlobalNamespace::GameScenesManager __declspec(property(get=__get__gameScenesManager, put=__set__gameScenesManager))  _gameScenesManager;

constexpr void __set__gameScenesManager(::GlobalNamespace::GameScenesManager value) ;

constexpr ::GlobalNamespace::GameScenesManager __get__gameScenesManager() const;

 ::GlobalNamespace::FPSCounter __declspec(property(get=__get__fpsCounter, put=__set__fpsCounter))  _fpsCounter;

constexpr void __set__fpsCounter(::GlobalNamespace::FPSCounter value) ;

constexpr ::GlobalNamespace::FPSCounter __get__fpsCounter() const;

 float_t __declspec(property(get=__get__timeToUpdateUI, put=__set__timeToUpdateUI))  _timeToUpdateUI;

constexpr void __set__timeToUpdateUI(float_t value) ;

constexpr float_t __get__timeToUpdateUI() const;


// Methods

/// @brief Method Awake addr 0x2115c5c size 0x60 virtual false final false
 void Awake() ;

/// @brief Method Start addr 0x2115cbc size 0x68 virtual false final false
 ::System::Collections::IEnumerator Start() ;

/// @brief Method LateUpdate addr 0x2115d4c size 0x144 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit FPSCounterUIController() ;

/// @brief Method .ctor addr 0x2115e90 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FPSCounterUIController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FPSCounterUIController, "", "FPSCounterUIController");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__FPSCounterUIController___Start_d__9);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__FPSCounterUIController___Start_d__9, "", "FPSCounterUIController/<Start>d__9");
