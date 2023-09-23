#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
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
struct GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles;
}
namespace GlobalNamespace {
class OVRPassthroughLayer;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags;
}
namespace GlobalNamespace {
class OVROverlay;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class MeshRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
struct OVRTextureQualityFiltering;
}
namespace UnityEngine {
class MeshFilter;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRTrackedKeyboard___Start_d__88;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;
}
namespace GlobalNamespace {
class GlobalNamespace__OVRTrackedKeyboard____c;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;
}
// Type: ::TrackedKeyboardState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8858))
// CS Name: OVRTrackedKeyboard::TrackedKeyboardState
struct CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState&&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState& operator=(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState& operator=(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped : int32_t {
__Uninitialized = 0,
__NoTrackableKeyboard = 1,
__Offline = 2,
__StartedNotTracked = 3,
__Stale = 4,
__Valid = 5,
__Error = 6,
__ErrorExtensionFailed = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Uninitialized offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const Uninitialized;

/// @brief Field NoTrackableKeyboard offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const NoTrackableKeyboard;

/// @brief Field Offline offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const Offline;

/// @brief Field StartedNotTracked offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const StartedNotTracked;

/// @brief Field Stale offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const Stale;

/// @brief Field Valid offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const Valid;

/// @brief Field Error offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const Error;

/// @brief Field ErrorExtensionFailed offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState const ErrorExtensionFailed;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::KeyboardPresentation
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8859))
// CS Name: OVRTrackedKeyboard::KeyboardPresentation
struct CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation(int32_t value__) noexcept;


                    constexpr GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation(GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation const&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation(GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation&&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation& operator=(GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation& operator=(GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation_Unwrapped : int32_t {
__PreferOpaque = 0,
__PreferKeyLabels = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field PreferOpaque offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation const PreferOpaque;

/// @brief Field PreferKeyLabels offset 0
static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation const PreferKeyLabels;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackedKeyboardVisibilityChangedEvent
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8860))
// CS Name: OVRTrackedKeyboard::TrackedKeyboardVisibilityChangedEvent
struct CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "ActiveKeyboardName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "State", ty: "GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState", modifiers: "", def_value: None }, CppParam { name: "TrackingTimeout", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(::StringW ActiveKeyboardName, GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState State, bool TrackingTimeout) noexcept;


                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent const&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent&&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent& operator=(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent& operator=(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_ActiveKeyboardName, put=__set_ActiveKeyboardName))  ActiveKeyboardName;

constexpr void __set_ActiveKeyboardName(::StringW value) ;

constexpr ::StringW __get_ActiveKeyboardName() const;

 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState __declspec(property(get=__get_State, put=__set_State))  State;

constexpr void __set_State(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState __get_State() const;

 bool __declspec(property(get=__get_TrackingTimeout, put=__set_TrackingTimeout))  TrackingTimeout;

constexpr void __set_TrackingTimeout(bool value) ;

constexpr bool __get_TrackingTimeout() const;


// Methods

/// @brief Method .ctor addr 0x2614a68 size 0x14 virtual false final false
 void _ctor(::StringW keyboardModel, GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState state, bool timeout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TrackedKeyboardSetActiveEvent
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8861))
// CS Name: OVRTrackedKeyboard::TrackedKeyboardSetActiveEvent
struct CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "IsEnabled", ty: "bool", modifiers: "", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(bool IsEnabled) noexcept;


                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent const&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent&&) = default;
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent& operator=(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent& operator=(GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_IsEnabled, put=__set_IsEnabled))  IsEnabled;

constexpr void __set_IsEnabled(bool value) ;

constexpr bool __get_IsEnabled() const;


// Methods

/// @brief Method .ctor addr 0x2614a7c size 0xc virtual false final false
 void _ctor(bool isEnabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<Start>d__88
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8862))
// CS Name: OVRTrackedKeyboard::<Start>d__88
class CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard___Start_d__88 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__OVRTrackedKeyboard___Start_d__88() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___Start_d__88", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___Start_d__88(GlobalNamespace__OVRTrackedKeyboard___Start_d__88 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___Start_d__88", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___Start_d__88(GlobalNamespace__OVRTrackedKeyboard___Start_d__88&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard___Start_d__88(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRTrackedKeyboard___Start_d__88& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___Start_d__88& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___Start_d__88& operator=(GlobalNamespace__OVRTrackedKeyboard___Start_d__88&& o) noexcept = default;
  constexpr GlobalNamespace__OVRTrackedKeyboard___Start_d__88& operator=(GlobalNamespace__OVRTrackedKeyboard___Start_d__88 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRTrackedKeyboard __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRTrackedKeyboard value) ;

constexpr GlobalNamespace::OVRTrackedKeyboard __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRTrackedKeyboard___Start_d__88(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2614a88 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2614ab0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2614ab4 size 0x10c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2614bc0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2614bc8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2614c08 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<InitializeHandPresenceData>d__89
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8863))
// CS Name: OVRTrackedKeyboard::<InitializeHandPresenceData>d__89
class CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89(GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89(GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89& operator=(GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89&& o) noexcept = default;
  constexpr GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89& operator=(GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRTrackedKeyboard __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRTrackedKeyboard value) ;

constexpr GlobalNamespace::OVRTrackedKeyboard __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2614c10 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2614c38 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2614c3c size 0x170 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2614dac size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2614db4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2614df4 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateTrackingStateCoroutine>d__95
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8864))
// CS Name: OVRTrackedKeyboard::<UpdateTrackingStateCoroutine>d__95
class CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95& operator=(GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95&& o) noexcept = default;
  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95& operator=(GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRTrackedKeyboard __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRTrackedKeyboard value) ;

constexpr GlobalNamespace::OVRTrackedKeyboard __get___4__this() const;

 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __declspec(property(get=__get__keyboardInfo_5__2, put=__set__keyboardInfo_5__2))  _keyboardInfo_5__2;

constexpr void __set__keyboardInfo_5__2(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __get__keyboardInfo_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2614dfc size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2614e24 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2614e28 size 0x4d8 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2615300 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2615308 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2615348 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<StartKeyboardTrackingCoroutine>d__96
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8865))
// CS Name: OVRTrackedKeyboard::<StartKeyboardTrackingCoroutine>d__96
class CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96& operator=(GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96&& o) noexcept = default;
  constexpr GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96& operator=(GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRTrackedKeyboard __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRTrackedKeyboard value) ;

constexpr GlobalNamespace::OVRTrackedKeyboard __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2615350 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2615378 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x261537c size 0x2a0 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x261561c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2615624 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2615664 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<UpdateKeyboardPose>d__98
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8866))
// CS Name: OVRTrackedKeyboard::<UpdateKeyboardPose>d__98
class CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98(GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98(GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98& operator=(GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98&& o) noexcept = default;
  constexpr GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98& operator=(GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRTrackedKeyboard __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRTrackedKeyboard value) ;

constexpr GlobalNamespace::OVRTrackedKeyboard __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98(int32_t __1__state) ;

/// @brief Method .ctor addr 0x261566c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2615694 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2615698 size 0x98c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2616024 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x261602c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x261606c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8867))
// CS Name: OVRTrackedKeyboard::<>c
class CORDL_TYPE GlobalNamespace__OVRTrackedKeyboard____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRTrackedKeyboard____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard____c", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard____c(GlobalNamespace__OVRTrackedKeyboard____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRTrackedKeyboard____c", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRTrackedKeyboard____c(GlobalNamespace__OVRTrackedKeyboard____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRTrackedKeyboard____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRTrackedKeyboard____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRTrackedKeyboard____c& operator=(GlobalNamespace__OVRTrackedKeyboard____c&& o) noexcept = default;
  constexpr GlobalNamespace__OVRTrackedKeyboard____c& operator=(GlobalNamespace__OVRTrackedKeyboard____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c value) ;

static GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c __get___9() ;

static System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> __declspec(property(get=__get___9__113_0, put=__set___9__113_0))  __9__113_0;

static void __set___9__113_0(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> value) ;

static System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> __get___9__113_0() ;

static System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> __declspec(property(get=__get___9__113_1, put=__set___9__113_1))  __9__113_1;

static void __set___9__113_1(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> value) ;

static System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> __get___9__113_1() ;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__OVRTrackedKeyboard____c() ;

/// @brief Method .ctor addr 0x26160d8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <.ctor>b__113_0 addr 0x26160e0 size 0x4 virtual false final false
 void __ctor_b__113_0(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent _p0_) ;

/// @brief Method <.ctor>b__113_1 addr 0x26160e4 size 0x4 virtual false final false
 void __ctor_b__113_1(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent _p0_) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTrackedKeyboard
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8868))
// CS Name: OVRTrackedKeyboard
class CORDL_TYPE OVRTrackedKeyboard : public UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c;

using _UpdateKeyboardPose_d__98 = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98;

using _StartKeyboardTrackingCoroutine_d__96 = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96;

using _UpdateTrackingStateCoroutine_d__95 = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95;

using _InitializeHandPresenceData_d__89 = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89;

using _Start_d__88 = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88;

using TrackedKeyboardSetActiveEvent = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent;

using TrackedKeyboardVisibilityChangedEvent = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent;

using KeyboardPresentation = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation;

using TrackedKeyboardState = GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x190};

virtual ~OVRTrackedKeyboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: " const&", def_value: None }]
constexpr OVRTrackedKeyboard(OVRTrackedKeyboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboard", modifiers: "&&", def_value: None }]
constexpr OVRTrackedKeyboard(OVRTrackedKeyboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRTrackedKeyboard(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRTrackedKeyboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRTrackedKeyboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRTrackedKeyboard& operator=(OVRTrackedKeyboard&& o) noexcept = default;
  constexpr OVRTrackedKeyboard& operator=(OVRTrackedKeyboard const& o) noexcept = default;
                


// Fields

static float_t __declspec(property(get=__get_underlayScaleMultX_, put=__set_underlayScaleMultX_))  underlayScaleMultX_;

static void __set_underlayScaleMultX_(float_t value) ;

static float_t __get_underlayScaleMultX_() ;

static float_t __declspec(property(get=__get_underlayScaleConstY_, put=__set_underlayScaleConstY_))  underlayScaleConstY_;

static void __set_underlayScaleConstY_(float_t value) ;

static float_t __get_underlayScaleConstY_() ;

static float_t __declspec(property(get=__get_underlayScaleMultZ_, put=__set_underlayScaleMultZ_))  underlayScaleMultZ_;

static void __set_underlayScaleMultZ_(float_t value) ;

static float_t __get_underlayScaleMultZ_() ;

static UnityEngine::Vector3 __declspec(property(get=__get_underlayOffset_, put=__set_underlayOffset_))  underlayOffset_;

static void __set_underlayOffset_(UnityEngine::Vector3 value) ;

static UnityEngine::Vector3 __get_underlayOffset_() ;

static float_t __declspec(property(get=__get_boundingBoxAboveKeyboardY_, put=__set_boundingBoxAboveKeyboardY_))  boundingBoxAboveKeyboardY_;

static void __set_boundingBoxAboveKeyboardY_(float_t value) ;

static float_t __get_boundingBoxAboveKeyboardY_() ;

static float_t __declspec(property(get=__get_initialHorizontalDistanceKeyboard_, put=__set_initialHorizontalDistanceKeyboard_))  initialHorizontalDistanceKeyboard_;

static void __set_initialHorizontalDistanceKeyboard_(float_t value) ;

static float_t __get_initialHorizontalDistanceKeyboard_() ;

static float_t __declspec(property(get=__get_initialVerticalDistanceKeyboard_, put=__set_initialVerticalDistanceKeyboard_))  initialVerticalDistanceKeyboard_;

static void __set_initialVerticalDistanceKeyboard_(float_t value) ;

static float_t __get_initialVerticalDistanceKeyboard_() ;

 float_t __declspec(property(get=__get__CurrentKeyboardAngleFromUp_k__BackingField, put=__set__CurrentKeyboardAngleFromUp_k__BackingField))  _CurrentKeyboardAngleFromUp_k__BackingField;

constexpr void __set__CurrentKeyboardAngleFromUp_k__BackingField(float_t value) ;

constexpr float_t __get__CurrentKeyboardAngleFromUp_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState __declspec(property(get=__get__TrackingState_k__BackingField, put=__set__TrackingState_k__BackingField))  _TrackingState_k__BackingField;

constexpr void __set__TrackingState_k__BackingField(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState __get__TrackingState_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __declspec(property(get=__get__ActiveKeyboardInfo_k__BackingField, put=__set__ActiveKeyboardInfo_k__BackingField))  _ActiveKeyboardInfo_k__BackingField;

constexpr void __set__ActiveKeyboardInfo_k__BackingField(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __get__ActiveKeyboardInfo_k__BackingField() const;

 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __declspec(property(get=__get__SystemKeyboardInfo_k__BackingField, put=__set__SystemKeyboardInfo_k__BackingField))  _SystemKeyboardInfo_k__BackingField;

constexpr void __set__SystemKeyboardInfo_k__BackingField(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __get__SystemKeyboardInfo_k__BackingField() const;

 bool __declspec(property(get=__get_trackingEnabled, put=__set_trackingEnabled))  trackingEnabled;

constexpr void __set_trackingEnabled(bool value) ;

constexpr bool __get_trackingEnabled() const;

 bool __declspec(property(get=__get_connectionRequired, put=__set_connectionRequired))  connectionRequired;

constexpr void __set_connectionRequired(bool value) ;

constexpr bool __get_connectionRequired() const;

 bool __declspec(property(get=__get_showUntracked, put=__set_showUntracked))  showUntracked;

constexpr void __set_showUntracked(bool value) ;

constexpr bool __get_showUntracked() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags __declspec(property(get=__get_keyboardQueryFlags, put=__set_keyboardQueryFlags))  keyboardQueryFlags;

constexpr void __set_keyboardQueryFlags(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags __get_keyboardQueryFlags() const;

 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation __declspec(property(get=__get_presentation, put=__set_presentation))  presentation;

constexpr void __set_presentation(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation __get_presentation() const;

 GlobalNamespace::OVRTextureQualityFiltering __declspec(property(get=__get_textureFiltering, put=__set_textureFiltering))  textureFiltering;

constexpr void __set_textureFiltering(GlobalNamespace::OVRTextureQualityFiltering value) ;

constexpr GlobalNamespace::OVRTextureQualityFiltering __get_textureFiltering() const;

 float_t __declspec(property(get=__get_mipmapBias, put=__set_mipmapBias))  mipmapBias;

constexpr void __set_mipmapBias(float_t value) ;

constexpr float_t __get_mipmapBias() const;

 float_t __declspec(property(get=__get_PassthroughBorderMultiplier, put=__set_PassthroughBorderMultiplier))  PassthroughBorderMultiplier;

constexpr void __set_PassthroughBorderMultiplier(float_t value) ;

constexpr float_t __get_PassthroughBorderMultiplier() const;

 UnityEngine::Shader __declspec(property(get=__get_keyboardModelShader, put=__set_keyboardModelShader))  keyboardModelShader;

constexpr void __set_keyboardModelShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_keyboardModelShader() const;

 UnityEngine::Shader __declspec(property(get=__get_keyboardModelAlphaBlendShader, put=__set_keyboardModelAlphaBlendShader))  keyboardModelAlphaBlendShader;

constexpr void __set_keyboardModelAlphaBlendShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_keyboardModelAlphaBlendShader() const;

 GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles __declspec(property(get=__get_currentKeyboardPresentationStyles, put=__set_currentKeyboardPresentationStyles))  currentKeyboardPresentationStyles;

constexpr void __set_currentKeyboardPresentationStyles(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardPresentationStyles __get_currentKeyboardPresentationStyles() const;

 GlobalNamespace::OVROverlay __declspec(property(get=__get_projectedPassthroughOpaque_, put=__set_projectedPassthroughOpaque_))  projectedPassthroughOpaque_;

constexpr void __set_projectedPassthroughOpaque_(GlobalNamespace::OVROverlay value) ;

constexpr GlobalNamespace::OVROverlay __get_projectedPassthroughOpaque_() const;

 ::ArrayW<UnityEngine::MeshRenderer> __declspec(property(get=__get_activeKeyboardRenderers_, put=__set_activeKeyboardRenderers_))  activeKeyboardRenderers_;

constexpr void __set_activeKeyboardRenderers_(::ArrayW<UnityEngine::MeshRenderer> value) ;

constexpr ::ArrayW<UnityEngine::MeshRenderer> __get_activeKeyboardRenderers_() const;

 UnityEngine::GameObject __declspec(property(get=__get_activeKeyboardMesh_, put=__set_activeKeyboardMesh_))  activeKeyboardMesh_;

constexpr void __set_activeKeyboardMesh_(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_activeKeyboardMesh_() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get_keyboardMeshNodes_, put=__set_keyboardMeshNodes_))  keyboardMeshNodes_;

constexpr void __set_keyboardMeshNodes_(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get_keyboardMeshNodes_() const;

 UnityEngine::MeshRenderer __declspec(property(get=__get_activeKeyboardMeshRenderer_, put=__set_activeKeyboardMeshRenderer_))  activeKeyboardMeshRenderer_;

constexpr void __set_activeKeyboardMeshRenderer_(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get_activeKeyboardMeshRenderer_() const;

 UnityEngine::GameObject __declspec(property(get=__get_passthroughQuad_, put=__set_passthroughQuad_))  passthroughQuad_;

constexpr void __set_passthroughQuad_(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_passthroughQuad_() const;

 UnityEngine::Shader __declspec(property(get=__get_opaqueShader_, put=__set_opaqueShader_))  opaqueShader_;

constexpr void __set_opaqueShader_(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_opaqueShader_() const;

 UnityEngine::Texture2D __declspec(property(get=__get_dynamicQualityTexture_, put=__set_dynamicQualityTexture_))  dynamicQualityTexture_;

constexpr void __set_dynamicQualityTexture_(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_dynamicQualityTexture_() const;

 UnityEngine::Vector3 __declspec(property(get=__get_untrackedPosition_, put=__set_untrackedPosition_))  untrackedPosition_;

constexpr void __set_untrackedPosition_(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_untrackedPosition_() const;

 UnityEngine::Shader __declspec(property(get=__get_KeyLabelModeShader, put=__set_KeyLabelModeShader))  KeyLabelModeShader;

constexpr void __set_KeyLabelModeShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_KeyLabelModeShader() const;

 UnityEngine::Shader __declspec(property(get=__get_PassthroughShader, put=__set_PassthroughShader))  PassthroughShader;

constexpr void __set_PassthroughShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_PassthroughShader() const;

 UnityEngine::Transform __declspec(property(get=__get_projectedPassthroughRoot, put=__set_projectedPassthroughRoot))  projectedPassthroughRoot;

constexpr void __set_projectedPassthroughRoot(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_projectedPassthroughRoot() const;

 UnityEngine::MeshFilter __declspec(property(get=__get_projectedPassthroughMesh, put=__set_projectedPassthroughMesh))  projectedPassthroughMesh;

constexpr void __set_projectedPassthroughMesh(UnityEngine::MeshFilter value) ;

constexpr UnityEngine::MeshFilter __get_projectedPassthroughMesh() const;

 GlobalNamespace::OVRPassthroughLayer __declspec(property(get=__get_ProjectedPassthroughKeyLabel, put=__set_ProjectedPassthroughKeyLabel))  ProjectedPassthroughKeyLabel;

constexpr void __set_ProjectedPassthroughKeyLabel(GlobalNamespace::OVRPassthroughLayer value) ;

constexpr GlobalNamespace::OVRPassthroughLayer __get_ProjectedPassthroughKeyLabel() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> __declspec(property(get=__get_TrackedKeyboardActiveChanged, put=__set_TrackedKeyboardActiveChanged))  TrackedKeyboardActiveChanged;

constexpr void __set_TrackedKeyboardActiveChanged(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent> __get_TrackedKeyboardActiveChanged() const;

 System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> __declspec(property(get=__get_TrackedKeyboardVisibilityChanged, put=__set_TrackedKeyboardVisibilityChanged))  TrackedKeyboardVisibilityChanged;

constexpr void __set_TrackedKeyboardVisibilityChanged(System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> value) ;

constexpr System::Action_1<GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent> __get_TrackedKeyboardVisibilityChanged() const;

 UnityEngine::Transform __declspec(property(get=__get_ActiveKeyboardTransform, put=__set_ActiveKeyboardTransform))  ActiveKeyboardTransform;

constexpr void __set_ActiveKeyboardTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get_ActiveKeyboardTransform() const;

 bool __declspec(property(get=__get_HandsOverKeyboard, put=__set_HandsOverKeyboard))  HandsOverKeyboard;

constexpr void __set_HandsOverKeyboard(bool value) ;

constexpr bool __get_HandsOverKeyboard() const;

 GlobalNamespace::OVRCameraRig __declspec(property(get=__get_cameraRig_, put=__set_cameraRig_))  cameraRig_;

constexpr void __set_cameraRig_(GlobalNamespace::OVRCameraRig value) ;

constexpr GlobalNamespace::OVRCameraRig __get_cameraRig_() const;

 UnityEngine::Coroutine __declspec(property(get=__get_updateKeyboardRoutine_, put=__set_updateKeyboardRoutine_))  updateKeyboardRoutine_;

constexpr void __set_updateKeyboardRoutine_(UnityEngine::Coroutine value) ;

constexpr UnityEngine::Coroutine __get_updateKeyboardRoutine_() const;

 UnityEngine::BoxCollider __declspec(property(get=__get_keyboardBoundingBox_, put=__set_keyboardBoundingBox_))  keyboardBoundingBox_;

constexpr void __set_keyboardBoundingBox_(UnityEngine::BoxCollider value) ;

constexpr UnityEngine::BoxCollider __get_keyboardBoundingBox_() const;

 float_t __declspec(property(get=__get_staleTimeoutCounter_, put=__set_staleTimeoutCounter_))  staleTimeoutCounter_;

constexpr void __set_staleTimeoutCounter_(float_t value) ;

constexpr float_t __get_staleTimeoutCounter_() const;

/// @brief Field STALE_TIMEOUT offset 0
static constexpr float_t  STALE_TIMEOUT{10};

 float_t __declspec(property(get=__get_reacquisitionTimer_, put=__set_reacquisitionTimer_))  reacquisitionTimer_;

constexpr void __set_reacquisitionTimer_(float_t value) ;

constexpr float_t __get_reacquisitionTimer_() const;

 float_t __declspec(property(get=__get_sendFilteredPoseEventTimer_, put=__set_sendFilteredPoseEventTimer_))  sendFilteredPoseEventTimer_;

constexpr void __set_sendFilteredPoseEventTimer_(float_t value) ;

constexpr float_t __get_sendFilteredPoseEventTimer_() const;

 int32_t __declspec(property(get=__get_skippedPoseCount_, put=__set_skippedPoseCount_))  skippedPoseCount_;

constexpr void __set_skippedPoseCount_(int32_t value) ;

constexpr int32_t __get_skippedPoseCount_() const;

/// @brief Field FILTERED_POSE_TIMEOUT offset 0
static constexpr float_t  FILTERED_POSE_TIMEOUT{15};

 System::Nullable_1<UnityEngine::Vector3> __declspec(property(get=__get_EWAPosition, put=__set_EWAPosition))  EWAPosition;

constexpr void __set_EWAPosition(System::Nullable_1<UnityEngine::Vector3> value) ;

constexpr System::Nullable_1<UnityEngine::Vector3> __get_EWAPosition() const;

 System::Nullable_1<UnityEngine::Quaternion> __declspec(property(get=__get_EWARotation, put=__set_EWARotation))  EWARotation;

constexpr void __set_EWARotation(System::Nullable_1<UnityEngine::Quaternion> value) ;

constexpr System::Nullable_1<UnityEngine::Quaternion> __get_EWARotation() const;

 float_t __declspec(property(get=__get_HAND_HEIGHT_TUNING, put=__set_HAND_HEIGHT_TUNING))  HAND_HEIGHT_TUNING;

constexpr void __set_HAND_HEIGHT_TUNING(float_t value) ;

constexpr float_t __get_HAND_HEIGHT_TUNING() const;

 bool __declspec(property(get=__get_UseHeuristicRollback, put=__set_UseHeuristicRollback))  UseHeuristicRollback;

constexpr void __set_UseHeuristicRollback(bool value) ;

constexpr bool __get_UseHeuristicRollback() const;


// Properties

 float_t __declspec(property(get=get_CurrentKeyboardAngleFromUp, put=set_CurrentKeyboardAngleFromUp))  CurrentKeyboardAngleFromUp;

 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState __declspec(property(get=get_TrackingState, put=set_TrackingState))  TrackingState;

 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __declspec(property(get=get_ActiveKeyboardInfo, put=set_ActiveKeyboardInfo))  ActiveKeyboardInfo;

 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo __declspec(property(get=get_SystemKeyboardInfo, put=set_SystemKeyboardInfo))  SystemKeyboardInfo;

 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation __declspec(property(get=get_Presentation, put=set_Presentation))  Presentation;

 bool __declspec(property(get=get_TrackingEnabled, put=set_TrackingEnabled))  TrackingEnabled;

 bool __declspec(property(get=get_ConnectionRequired, put=set_ConnectionRequired))  ConnectionRequired;

 bool __declspec(property(get=get_ShowUntracked, put=set_ShowUntracked))  ShowUntracked;

 bool __declspec(property(get=get_RemoteKeyboard, put=set_RemoteKeyboard))  RemoteKeyboard;

 GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags __declspec(property(get=get_KeyboardQueryFlags, put=set_KeyboardQueryFlags))  KeyboardQueryFlags;

 GlobalNamespace::OVROverlay __declspec(property(get=get_PassthroughOverlay, put=set_PassthroughOverlay))  PassthroughOverlay;


// Methods

/// @brief Method get_CurrentKeyboardAngleFromUp addr 0x2612c90 size 0x8 virtual false final false
 float_t get_CurrentKeyboardAngleFromUp() ;

/// @brief Method set_CurrentKeyboardAngleFromUp addr 0x2612c98 size 0x8 virtual false final false
 void set_CurrentKeyboardAngleFromUp(float_t value) ;

/// @brief Method get_TrackingState addr 0x2612ca0 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState get_TrackingState() ;

/// @brief Method set_TrackingState addr 0x2612ca8 size 0x8 virtual false final false
 void set_TrackingState(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState value) ;

/// @brief Method get_ActiveKeyboardInfo addr 0x2612cb0 size 0x14 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo get_ActiveKeyboardInfo() ;

/// @brief Method set_ActiveKeyboardInfo addr 0x2612cc4 size 0x14 virtual false final false
 void set_ActiveKeyboardInfo(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value) ;

/// @brief Method get_SystemKeyboardInfo addr 0x2612cd8 size 0x18 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo get_SystemKeyboardInfo() ;

/// @brief Method set_SystemKeyboardInfo addr 0x2612cf0 size 0x18 virtual false final false
 void set_SystemKeyboardInfo(GlobalNamespace::GlobalNamespace__OVRKeyboard__TrackedKeyboardInfo value) ;

/// @brief Method get_Presentation addr 0x2612d08 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation get_Presentation() ;

/// @brief Method set_Presentation addr 0x2612d10 size 0x50 virtual false final false
 void set_Presentation(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation value) ;

/// @brief Method get_TrackingEnabled addr 0x2612f9c size 0x8 virtual false final false
 bool get_TrackingEnabled() ;

/// @brief Method set_TrackingEnabled addr 0x2612fa4 size 0xc virtual false final false
 void set_TrackingEnabled(bool value) ;

/// @brief Method get_ConnectionRequired addr 0x2612fb0 size 0x8 virtual false final false
 bool get_ConnectionRequired() ;

/// @brief Method set_ConnectionRequired addr 0x2612fb8 size 0xc virtual false final false
 void set_ConnectionRequired(bool value) ;

/// @brief Method get_ShowUntracked addr 0x2612fc4 size 0x8 virtual false final false
 bool get_ShowUntracked() ;

/// @brief Method set_ShowUntracked addr 0x2612fcc size 0xc virtual false final false
 void set_ShowUntracked(bool value) ;

/// @brief Method get_RemoteKeyboard addr 0x2612fd8 size 0x10 virtual false final false
 bool get_RemoteKeyboard() ;

/// @brief Method set_RemoteKeyboard addr 0x2612fe8 size 0x18 virtual false final false
 void set_RemoteKeyboard(bool value) ;

/// @brief Method get_KeyboardQueryFlags addr 0x2613000 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags get_KeyboardQueryFlags() ;

/// @brief Method set_KeyboardQueryFlags addr 0x2613008 size 0x8 virtual false final false
 void set_KeyboardQueryFlags(GlobalNamespace::GlobalNamespace__OVRPlugin__TrackedKeyboardQueryFlags value) ;

/// @brief Method get_PassthroughOverlay addr 0x2613010 size 0x8 virtual false final false
 GlobalNamespace::OVROverlay get_PassthroughOverlay() ;

/// @brief Method set_PassthroughOverlay addr 0x2613018 size 0x4 virtual false final false
 void set_PassthroughOverlay(GlobalNamespace::OVROverlay value) ;

/// @brief Method Start addr 0x261301c size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

/// @brief Method InitializeHandPresenceData addr 0x2613084 size 0x68 virtual false final false
 System::Collections::IEnumerator InitializeHandPresenceData() ;

/// @brief Method RegisterPassthroughMeshToSDK addr 0x26130ec size 0x98 virtual false final false
 void RegisterPassthroughMeshToSDK() ;

/// @brief Method GetDistanceToKeyboard addr 0x2613184 size 0x18c virtual false final false
 float_t GetDistanceToKeyboard(UnityEngine::Vector3 point) ;

/// @brief Method LaunchLocalKeyboardSelectionDialog addr 0x2613310 size 0x40 virtual false final false
 void LaunchLocalKeyboardSelectionDialog() ;

/// @brief Method LaunchRemoteKeyboardSelectionDialog addr 0x26136dc size 0x40 virtual false final false
 void LaunchRemoteKeyboardSelectionDialog() ;

/// @brief Method KeyboardTrackerIsRunning addr 0x261371c size 0x14 virtual false final false
 bool KeyboardTrackerIsRunning() ;

/// @brief Method UpdateTrackingStateCoroutine addr 0x2613730 size 0x68 virtual false final false
 System::Collections::IEnumerator UpdateTrackingStateCoroutine() ;

/// @brief Method StartKeyboardTrackingCoroutine addr 0x2613798 size 0x68 virtual false final false
 System::Collections::IEnumerator StartKeyboardTrackingCoroutine() ;

/// @brief Method StopKeyboardTrackingInternal addr 0x2613800 size 0x1f8 virtual false final false
 void StopKeyboardTrackingInternal() ;

/// @brief Method UpdateKeyboardPose addr 0x2613b0c size 0x68 virtual false final false
 System::Collections::IEnumerator UpdateKeyboardPose() ;

/// @brief Method UpdateSkippedPoseTimer addr 0x2613b74 size 0x48 virtual false final false
 void UpdateSkippedPoseTimer() ;

/// @brief Method LoadKeyboardMesh addr 0x2613bbc size 0x648 virtual false final false
 void LoadKeyboardMesh() ;

/// @brief Method UpdateTextureQuality addr 0x26144b8 size 0x130 virtual false final false
 void UpdateTextureQuality() ;

/// @brief Method UpdatePresentation addr 0x2612da4 size 0x1f8 virtual false final false
 void UpdatePresentation(bool isVisible) ;

/// @brief Method LoadRuntimeKeyboardMesh addr 0x2614204 size 0x2b4 virtual false final false
 UnityEngine::GameObject LoadRuntimeKeyboardMesh() ;

/// @brief Method UpdateKeyboardVisibility addr 0x26145e8 size 0x114 virtual false final false
 void UpdateKeyboardVisibility() ;

/// @brief Method SetKeyboardState addr 0x26139f8 size 0xc0 virtual false final false
 void SetKeyboardState(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState state) ;

/// @brief Method GetKeyboardVisibility addr 0x2612d60 size 0x44 virtual false final false
 bool GetKeyboardVisibility() ;

/// @brief Method InitializeKeyboardInfo addr 0x2613ab8 size 0x54 virtual false final false
 void InitializeKeyboardInfo() ;

/// @brief Method LaunchOverlayIntent addr 0x2613350 size 0x38c virtual false final false
 void LaunchOverlayIntent(::StringW dataUri) ;

/// @brief Method Dispose addr 0x261474c size 0x114 virtual false final false
 void Dispose() ;

/// @brief Method DispatchVisibilityEvent addr 0x26146fc size 0x50 virtual false final false
 void DispatchVisibilityEvent(bool timeOut) ;

// Ctor Parameters []
explicit OVRTrackedKeyboard() ;

/// @brief Method .ctor addr 0x2614860 size 0x190 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__KeyboardPresentation, "", "OVRTrackedKeyboard/KeyboardPresentation");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardState, "", "OVRTrackedKeyboard/TrackedKeyboardState");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___InitializeHandPresenceData_d__89, "", "OVRTrackedKeyboard/<InitializeHandPresenceData>d__89");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___StartKeyboardTrackingCoroutine_d__96, "", "OVRTrackedKeyboard/<StartKeyboardTrackingCoroutine>d__96");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___Start_d__88, "", "OVRTrackedKeyboard/<Start>d__88");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateKeyboardPose_d__98, "", "OVRTrackedKeyboard/<UpdateKeyboardPose>d__98");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard___UpdateTrackingStateCoroutine_d__95, "", "OVRTrackedKeyboard/<UpdateTrackingStateCoroutine>d__95");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard____c, "", "OVRTrackedKeyboard/<>c");
NEED_NO_BOX(GlobalNamespace::OVRTrackedKeyboard);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRTrackedKeyboard, "", "OVRTrackedKeyboard");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardSetActiveEvent, "", "OVRTrackedKeyboard/TrackedKeyboardSetActiveEvent");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRTrackedKeyboard__TrackedKeyboardVisibilityChangedEvent, "", "OVRTrackedKeyboard/TrackedKeyboardVisibilityChangedEvent");
