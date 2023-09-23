#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Comparison_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TDelegate>
struct CallbackArray_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
class Stream;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0;
}
namespace UnityEngine::InputSystem::LowLevel {
class InputEventTrace;
}
namespace UnityEngine::InputSystem::LowLevel {
class UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
class UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo;
}
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6621))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace::Enumerator
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator(UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator(UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::LowLevel::InputEventTrace __declspec(property(get=__get_m_Trace, put=__set_m_Trace))  m_Trace;

constexpr void __set_m_Trace(UnityEngine::InputSystem::LowLevel::InputEventTrace value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventTrace __get_m_Trace() const;

 int32_t __declspec(property(get=__get_m_ChangeCounter, put=__set_m_ChangeCounter))  m_ChangeCounter;

constexpr void __set_m_ChangeCounter(int32_t value) ;

constexpr int32_t __get_m_ChangeCounter() const;

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=__get_m_Current, put=__set_m_Current))  m_Current;

constexpr void __set_m_Current(UnityEngine::InputSystem::LowLevel::InputEventPtr value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventPtr __get_m_Current() const;


// Properties

 UnityEngine::InputSystem::LowLevel::InputEventPtr __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "trace", ty: "UnityEngine::InputSystem::LowLevel::InputEventTrace", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator(UnityEngine::InputSystem::LowLevel::InputEventTrace trace) ;

/// @brief Method .ctor addr 0x295b9b0 size 0x38 virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputEventTrace trace) ;

/// @brief Method Dispose addr 0x295c128 size 0xc virtual true final true
 void Dispose() ;

/// @brief Method MoveNext addr 0x295c134 size 0xd0 virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x295c204 size 0x24 virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x295c228 size 0x8 virtual true final true
 UnityEngine::InputSystem::LowLevel::InputEventPtr get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x295c230 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::FileFlags
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6622))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace::FileFlags
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags(UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags(UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags_Unwrapped : int32_t {
__FixedUpdate = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field FixedUpdate offset 0
static UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags const FixedUpdate;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6623))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace::ReplayController::<>c
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c __get___9() ;

static System::Comparison_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get___9__38_0, put=__set___9__38_0))  __9__38_0;

static void __set___9__38_0(System::Comparison_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

static System::Comparison_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __get___9__38_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c() ;

/// @brief Method .ctor addr 0x295d98c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <PlayAllEventsAccordingToTimestamps>b__38_0 addr 0x295d994 size 0xc8 virtual false final false
 int32_t _PlayAllEventsAccordingToTimestamps_b__38_0(UnityEngine::InputSystem::LowLevel::InputEventPtr a, UnityEngine::InputSystem::LowLevel::InputEventPtr b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<>c__DisplayClass43_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6624))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace::ReplayController::<>c__DisplayClass43_0
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_originalDeviceId, put=__set_originalDeviceId))  originalDeviceId;

constexpr void __set_originalDeviceId(int32_t value) ;

constexpr int32_t __get_originalDeviceId() const;


// Methods

// Ctor Parameters []
explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0() ;

/// @brief Method .ctor addr 0x295d920 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ApplyDeviceMapping>b__0 addr 0x295da5c size 0x14 virtual false final false
 bool _ApplyDeviceMapping_b__0(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ReplayController
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6625))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace::ReplayController
class CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass43_0 = GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0;

using __c = GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__finished_k__BackingField, put=__set__finished_k__BackingField))  _finished_k__BackingField;

constexpr void __set__finished_k__BackingField(bool value) ;

constexpr bool __get__finished_k__BackingField() const;

 bool __declspec(property(get=__get__paused_k__BackingField, put=__set__paused_k__BackingField))  _paused_k__BackingField;

constexpr void __set__paused_k__BackingField(bool value) ;

constexpr bool __get__paused_k__BackingField() const;

 int32_t __declspec(property(get=__get__position_k__BackingField, put=__set__position_k__BackingField))  _position_k__BackingField;

constexpr void __set__position_k__BackingField(int32_t value) ;

constexpr int32_t __get__position_k__BackingField() const;

 UnityEngine::InputSystem::LowLevel::InputEventTrace __declspec(property(get=__get_m_EventTrace, put=__set_m_EventTrace))  m_EventTrace;

constexpr void __set_m_EventTrace(UnityEngine::InputSystem::LowLevel::InputEventTrace value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputEventTrace __get_m_EventTrace() const;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator __declspec(property(get=__get_m_Enumerator, put=__set_m_Enumerator))  m_Enumerator;

constexpr void __set_m_Enumerator(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator value) ;

constexpr UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator __get_m_Enumerator() const;

 UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> __declspec(property(get=__get_m_DeviceIDMappings, put=__set_m_DeviceIDMappings))  m_DeviceIDMappings;

constexpr void __set_m_DeviceIDMappings(UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<System::Collections::Generic::KeyValuePair_2<int32_t,int32_t>> __get_m_DeviceIDMappings() const;

 bool __declspec(property(get=__get_m_CreateNewDevices, put=__set_m_CreateNewDevices))  m_CreateNewDevices;

constexpr void __set_m_CreateNewDevices(bool value) ;

constexpr bool __get_m_CreateNewDevices() const;

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_m_CreatedDevices, put=__set_m_CreatedDevices))  m_CreatedDevices;

constexpr void __set_m_CreatedDevices(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputDevice> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::InputDevice> __get_m_CreatedDevices() const;

 System::Action __declspec(property(get=__get_m_OnFinished, put=__set_m_OnFinished))  m_OnFinished;

constexpr void __set_m_OnFinished(System::Action value) ;

constexpr System::Action __get_m_OnFinished() const;

 System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_m_OnEvent, put=__set_m_OnEvent))  m_OnEvent;

constexpr void __set_m_OnEvent(System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_m_OnEvent() const;

 double_t __declspec(property(get=__get_m_StartTimeAsPerFirstEvent, put=__set_m_StartTimeAsPerFirstEvent))  m_StartTimeAsPerFirstEvent;

constexpr void __set_m_StartTimeAsPerFirstEvent(double_t value) ;

constexpr double_t __get_m_StartTimeAsPerFirstEvent() const;

 double_t __declspec(property(get=__get_m_StartTimeAsPerRuntime, put=__set_m_StartTimeAsPerRuntime))  m_StartTimeAsPerRuntime;

constexpr void __set_m_StartTimeAsPerRuntime(double_t value) ;

constexpr double_t __get_m_StartTimeAsPerRuntime() const;

 int32_t __declspec(property(get=__get_m_AllEventsByTimeIndex, put=__set_m_AllEventsByTimeIndex))  m_AllEventsByTimeIndex;

constexpr void __set_m_AllEventsByTimeIndex(int32_t value) ;

constexpr int32_t __get_m_AllEventsByTimeIndex() const;

 System::Collections::Generic::List_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __declspec(property(get=__get_m_AllEventsByTime, put=__set_m_AllEventsByTime))  m_AllEventsByTime;

constexpr void __set_m_AllEventsByTime(System::Collections::Generic::List_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> __get_m_AllEventsByTime() const;


// Properties

 UnityEngine::InputSystem::LowLevel::InputEventTrace __declspec(property(get=get_trace))  trace;

 bool __declspec(property(get=get_finished, put=set_finished))  finished;

 bool __declspec(property(get=get_paused, put=set_paused))  paused;

 int32_t __declspec(property(get=get_position, put=set_position))  position;

 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=get_createdDevices))  createdDevices;


// Methods

/// @brief Method get_trace addr 0x295c28c size 0x8 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputEventTrace get_trace() ;

/// @brief Method get_finished addr 0x295c294 size 0x8 virtual false final false
 bool get_finished() ;

/// @brief Method set_finished addr 0x295c29c size 0xc virtual false final false
 void set_finished(bool value) ;

/// @brief Method get_paused addr 0x295c2a8 size 0x8 virtual false final false
 bool get_paused() ;

/// @brief Method set_paused addr 0x295c2b0 size 0xc virtual false final false
 void set_paused(bool value) ;

/// @brief Method get_position addr 0x295c2bc size 0x8 virtual false final false
 int32_t get_position() ;

/// @brief Method set_position addr 0x295c2c4 size 0x8 virtual false final false
 void set_position(int32_t value) ;

/// @brief Method get_createdDevices addr 0x295c2cc size 0x64 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputDevice> get_createdDevices() ;

// Ctor Parameters [CppParam { name: "trace", ty: "UnityEngine::InputSystem::LowLevel::InputEventTrace", modifiers: "", def_value: None }]
explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController(UnityEngine::InputSystem::LowLevel::InputEventTrace trace) ;

/// @brief Method .ctor addr 0x295b514 size 0x78 virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputEventTrace trace) ;

/// @brief Method Dispose addr 0x295c330 size 0x320 virtual true final true
 void Dispose() ;

/// @brief Method WithDeviceMappedFromTo addr 0x295c650 size 0x8c virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController WithDeviceMappedFromTo(UnityEngine::InputSystem::InputDevice recordedDevice, UnityEngine::InputSystem::InputDevice playbackDevice) ;

/// @brief Method WithDeviceMappedFromTo addr 0x295c6dc size 0x184 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController WithDeviceMappedFromTo(int32_t recordedDeviceId, int32_t playbackDeviceId) ;

/// @brief Method WithAllDevicesMappedToNewInstances addr 0x295c860 size 0xc virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController WithAllDevicesMappedToNewInstances() ;

/// @brief Method OnFinished addr 0x295c86c size 0x8 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController OnFinished(System::Action action) ;

/// @brief Method OnEvent addr 0x295c874 size 0x8 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController OnEvent(System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> action) ;

/// @brief Method PlayOneEvent addr 0x295c87c size 0x88 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController PlayOneEvent() ;

/// @brief Method Rewind addr 0x295ce60 size 0x18 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController Rewind() ;

/// @brief Method PlayAllFramesOneByOne addr 0x295ce78 size 0xb0 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController PlayAllFramesOneByOne() ;

/// @brief Method PlayAllEvents addr 0x295cf28 size 0xb8 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController PlayAllEvents() ;

/// @brief Method PlayAllEventsAccordingToTimestamps addr 0x295cfe0 size 0x288 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController PlayAllEventsAccordingToTimestamps() ;

/// @brief Method OnBeginFrame addr 0x295d268 size 0x24c virtual false final false
 void OnBeginFrame() ;

/// @brief Method Finished addr 0x295d4b4 size 0xd0 virtual false final false
 void Finished() ;

/// @brief Method QueueEvent addr 0x295cc24 size 0x23c virtual false final false
 void QueueEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method MoveNext addr 0x295c904 size 0x320 virtual false final false
 bool MoveNext(bool skipFrameEvents, ByRef<UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr) ;

/// @brief Method ApplyDeviceMapping addr 0x295d584 size 0x39c virtual false final false
 int32_t ApplyDeviceMapping(int32_t originalDeviceId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::DeviceInfo
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6626))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace::DeviceInfo
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_DeviceId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Layout", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "m_StateFormat", ty: "UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "m_StateSizeInBytes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_FullLayoutJson", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo(int32_t m_DeviceId, ::StringW m_Layout, UnityEngine::InputSystem::Utilities::FourCC m_StateFormat, int32_t m_StateSizeInBytes, ::StringW m_FullLayoutJson) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo(UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo(UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo& operator=(UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_DeviceId, put=__set_m_DeviceId))  m_DeviceId;

constexpr void __set_m_DeviceId(int32_t value) ;

constexpr int32_t __get_m_DeviceId() const;

 ::StringW __declspec(property(get=__get_m_Layout, put=__set_m_Layout))  m_Layout;

constexpr void __set_m_Layout(::StringW value) ;

constexpr ::StringW __get_m_Layout() const;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_m_StateFormat, put=__set_m_StateFormat))  m_StateFormat;

constexpr void __set_m_StateFormat(UnityEngine::InputSystem::Utilities::FourCC value) ;

constexpr UnityEngine::InputSystem::Utilities::FourCC __get_m_StateFormat() const;

 int32_t __declspec(property(get=__get_m_StateSizeInBytes, put=__set_m_StateSizeInBytes))  m_StateSizeInBytes;

constexpr void __set_m_StateSizeInBytes(int32_t value) ;

constexpr int32_t __get_m_StateSizeInBytes() const;

 ::StringW __declspec(property(get=__get_m_FullLayoutJson, put=__set_m_FullLayoutJson))  m_FullLayoutJson;

constexpr void __set_m_FullLayoutJson(::StringW value) ;

constexpr ::StringW __get_m_FullLayoutJson() const;


// Properties

 int32_t __declspec(property(get=get_deviceId, put=set_deviceId))  deviceId;

 ::StringW __declspec(property(get=get_layout, put=set_layout))  layout;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_stateFormat, put=set_stateFormat))  stateFormat;

 int32_t __declspec(property(get=get_stateSizeInBytes, put=set_stateSizeInBytes))  stateSizeInBytes;


// Methods

/// @brief Method get_deviceId addr 0x295da70 size 0x8 virtual false final false
 int32_t get_deviceId() ;

/// @brief Method set_deviceId addr 0x295da78 size 0x8 virtual false final false
 void set_deviceId(int32_t value) ;

/// @brief Method get_layout addr 0x295da80 size 0x8 virtual false final false
 ::StringW get_layout() ;

/// @brief Method set_layout addr 0x295da88 size 0x8 virtual false final false
 void set_layout(::StringW value) ;

/// @brief Method get_stateFormat addr 0x295da90 size 0x8 virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method set_stateFormat addr 0x295da98 size 0x8 virtual false final false
 void set_stateFormat(UnityEngine::InputSystem::Utilities::FourCC value) ;

/// @brief Method get_stateSizeInBytes addr 0x295daa0 size 0x8 virtual false final false
 int32_t get_stateSizeInBytes() ;

/// @brief Method set_stateSizeInBytes addr 0x295daa8 size 0x8 virtual false final false
 void set_stateSizeInBytes(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputEventTrace
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6627))
// CS Name: UnityEngine.InputSystem.LowLevel.InputEventTrace
class CORDL_TYPE InputEventTrace : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using DeviceInfo = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo;

using ReplayController = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController;

using FileFlags = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags;

using Enumerator = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xc8};

virtual ~InputEventTrace() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputEventTrace", modifiers: " const&", def_value: None }]
constexpr InputEventTrace(InputEventTrace const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputEventTrace", modifiers: "&&", def_value: None }]
constexpr InputEventTrace(InputEventTrace&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputEventTrace(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputEventTrace& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputEventTrace& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputEventTrace& operator=(InputEventTrace&& o) noexcept = default;
  constexpr InputEventTrace& operator=(InputEventTrace const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultBufferSize offset 0
static constexpr int32_t  kDefaultBufferSize{1048576};

 int32_t __declspec(property(get=__get_m_ChangeCounter, put=__set_m_ChangeCounter))  m_ChangeCounter;

constexpr void __set_m_ChangeCounter(int32_t value) ;

constexpr int32_t __get_m_ChangeCounter() const;

 bool __declspec(property(get=__get_m_Enabled, put=__set_m_Enabled))  m_Enabled;

constexpr void __set_m_Enabled(bool value) ;

constexpr bool __get_m_Enabled() const;

 System::Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice,bool> __declspec(property(get=__get_m_OnFilterEvent, put=__set_m_OnFilterEvent))  m_OnFilterEvent;

constexpr void __set_m_OnFilterEvent(System::Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice,bool> value) ;

constexpr System::Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice,bool> __get_m_OnFilterEvent() const;

 int32_t __declspec(property(get=__get_m_DeviceId, put=__set_m_DeviceId))  m_DeviceId;

constexpr void __set_m_DeviceId(int32_t value) ;

constexpr int32_t __get_m_DeviceId() const;

 UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> __declspec(property(get=__get_m_EventListeners, put=__set_m_EventListeners))  m_EventListeners;

constexpr void __set_m_EventListeners(UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> value) ;

constexpr UnityEngine::InputSystem::Utilities::CallbackArray_1<System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr>> __get_m_EventListeners() const;

 int64_t __declspec(property(get=__get_m_EventBufferSize, put=__set_m_EventBufferSize))  m_EventBufferSize;

constexpr void __set_m_EventBufferSize(int64_t value) ;

constexpr int64_t __get_m_EventBufferSize() const;

 int64_t __declspec(property(get=__get_m_MaxEventBufferSize, put=__set_m_MaxEventBufferSize))  m_MaxEventBufferSize;

constexpr void __set_m_MaxEventBufferSize(int64_t value) ;

constexpr int64_t __get_m_MaxEventBufferSize() const;

 int64_t __declspec(property(get=__get_m_GrowIncrementSize, put=__set_m_GrowIncrementSize))  m_GrowIncrementSize;

constexpr void __set_m_GrowIncrementSize(int64_t value) ;

constexpr int64_t __get_m_GrowIncrementSize() const;

 int64_t __declspec(property(get=__get_m_EventCount, put=__set_m_EventCount))  m_EventCount;

constexpr void __set_m_EventCount(int64_t value) ;

constexpr int64_t __get_m_EventCount() const;

 int64_t __declspec(property(get=__get_m_EventSizeInBytes, put=__set_m_EventSizeInBytes))  m_EventSizeInBytes;

constexpr void __set_m_EventSizeInBytes(int64_t value) ;

constexpr int64_t __get_m_EventSizeInBytes() const;

 uint64_t __declspec(property(get=__get_m_EventBufferStorage, put=__set_m_EventBufferStorage))  m_EventBufferStorage;

constexpr void __set_m_EventBufferStorage(uint64_t value) ;

constexpr uint64_t __get_m_EventBufferStorage() const;

 uint64_t __declspec(property(get=__get_m_EventBufferHeadStorage, put=__set_m_EventBufferHeadStorage))  m_EventBufferHeadStorage;

constexpr void __set_m_EventBufferHeadStorage(uint64_t value) ;

constexpr uint64_t __get_m_EventBufferHeadStorage() const;

 uint64_t __declspec(property(get=__get_m_EventBufferTailStorage, put=__set_m_EventBufferTailStorage))  m_EventBufferTailStorage;

constexpr void __set_m_EventBufferTailStorage(uint64_t value) ;

constexpr uint64_t __get_m_EventBufferTailStorage() const;

 bool __declspec(property(get=__get_m_HasWrapped, put=__set_m_HasWrapped))  m_HasWrapped;

constexpr void __set_m_HasWrapped(bool value) ;

constexpr bool __get_m_HasWrapped() const;

 bool __declspec(property(get=__get_m_RecordFrameMarkers, put=__set_m_RecordFrameMarkers))  m_RecordFrameMarkers;

constexpr void __set_m_RecordFrameMarkers(bool value) ;

constexpr bool __get_m_RecordFrameMarkers() const;

 ::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> __declspec(property(get=__get_m_DeviceInfos, put=__set_m_DeviceInfos))  m_DeviceInfos;

constexpr void __set_m_DeviceInfos(::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> __get_m_DeviceInfos() const;

static int32_t __declspec(property(get=__get_kFileVersion, put=__set_kFileVersion))  kFileVersion;

static void __set_kFileVersion(int32_t value) ;

static int32_t __get_kFileVersion() ;


// Properties

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_FrameMarkerEvent))  FrameMarkerEvent;

 int32_t __declspec(property(get=get_deviceId, put=set_deviceId))  deviceId;

 bool __declspec(property(get=get_enabled))  enabled;

 bool __declspec(property(get=get_recordFrameMarkers, put=set_recordFrameMarkers))  recordFrameMarkers;

 int64_t __declspec(property(get=get_eventCount))  eventCount;

 int64_t __declspec(property(get=get_totalEventSizeInBytes))  totalEventSizeInBytes;

 int64_t __declspec(property(get=get_allocatedSizeInBytes))  allocatedSizeInBytes;

 int64_t __declspec(property(get=get_maxSizeInBytes))  maxSizeInBytes;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> __declspec(property(get=get_deviceInfos))  deviceInfos;

 System::Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice,bool> __declspec(property(get=get_onFilterEvent, put=set_onFilterEvent))  onFilterEvent;

 void* __declspec(property(get=get_m_EventBuffer, put=set_m_EventBuffer))  m_EventBuffer;

 void* __declspec(property(get=get_m_EventBufferHead, put=set_m_EventBufferHead))  m_EventBufferHead;

 void* __declspec(property(get=get_m_EventBufferTail, put=set_m_EventBufferTail))  m_EventBufferTail;

static UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_kFileFormat))  kFileFormat;


// Methods

/// @brief Method get_FrameMarkerEvent addr 0x2959aac size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_FrameMarkerEvent() ;

/// @brief Method get_deviceId addr 0x2959adc size 0x8 virtual false final false
 int32_t get_deviceId() ;

/// @brief Method set_deviceId addr 0x2959ae4 size 0x8 virtual false final false
 void set_deviceId(int32_t value) ;

/// @brief Method get_enabled addr 0x2959aec size 0x8 virtual false final false
 bool get_enabled() ;

/// @brief Method get_recordFrameMarkers addr 0x2959af4 size 0x8 virtual false final false
 bool get_recordFrameMarkers() ;

/// @brief Method set_recordFrameMarkers addr 0x2959afc size 0xf0 virtual false final false
 void set_recordFrameMarkers(bool value) ;

/// @brief Method get_eventCount addr 0x2959bec size 0x8 virtual false final false
 int64_t get_eventCount() ;

/// @brief Method get_totalEventSizeInBytes addr 0x2959bf4 size 0x8 virtual false final false
 int64_t get_totalEventSizeInBytes() ;

/// @brief Method get_allocatedSizeInBytes addr 0x2959bfc size 0x18 virtual false final false
 int64_t get_allocatedSizeInBytes() ;

/// @brief Method get_maxSizeInBytes addr 0x2959c1c size 0x8 virtual false final false
 int64_t get_maxSizeInBytes() ;

/// @brief Method get_deviceInfos addr 0x2959c24 size 0x48 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo> get_deviceInfos() ;

/// @brief Method get_onFilterEvent addr 0x2959c6c size 0x8 virtual false final false
 System::Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice,bool> get_onFilterEvent() ;

/// @brief Method set_onFilterEvent addr 0x2959c74 size 0x8 virtual false final false
 void set_onFilterEvent(System::Func_3<UnityEngine::InputSystem::LowLevel::InputEventPtr,UnityEngine::InputSystem::InputDevice,bool> value) ;

/// @brief Method add_onEvent addr 0x2959c7c size 0x58 virtual false final false
 void add_onEvent(System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

/// @brief Method remove_onEvent addr 0x2959cd4 size 0x58 virtual false final false
 void remove_onEvent(System::Action_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> value) ;

// Ctor Parameters [CppParam { name: "device", ty: "UnityEngine::InputSystem::InputDevice", modifiers: "", def_value: None }, CppParam { name: "bufferSizeInBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "growBuffer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "maxBufferSizeInBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "growIncrementSizeInBytes", ty: "int64_t", modifiers: "", def_value: None }]
explicit InputEventTrace(UnityEngine::InputSystem::InputDevice device, int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes) ;

/// @brief Method .ctor addr 0x2959d2c size 0xd8 virtual false final false
 void _ctor(UnityEngine::InputSystem::InputDevice device, int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes) ;

// Ctor Parameters [CppParam { name: "bufferSizeInBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "growBuffer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "maxBufferSizeInBytes", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "growIncrementSizeInBytes", ty: "int64_t", modifiers: "", def_value: None }]
explicit InputEventTrace(int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes) ;

/// @brief Method .ctor addr 0x2959e04 size 0x70 virtual false final false
 void _ctor(int64_t bufferSizeInBytes, bool growBuffer, int64_t maxBufferSizeInBytes, int64_t growIncrementSizeInBytes) ;

/// @brief Method WriteTo addr 0x2959e74 size 0x1d4 virtual false final false
 void WriteTo(::StringW filePath) ;

/// @brief Method WriteTo addr 0x295a048 size 0x6bc virtual false final false
 void WriteTo(System::IO::Stream stream) ;

/// @brief Method ReadFrom addr 0x295a794 size 0x1d4 virtual false final false
 void ReadFrom(::StringW filePath) ;

/// @brief Method ReadFrom addr 0x295a968 size 0x6e4 virtual false final false
 void ReadFrom(System::IO::Stream stream) ;

/// @brief Method LoadFrom addr 0x295b064 size 0x208 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputEventTrace LoadFrom(::StringW filePath) ;

/// @brief Method LoadFrom addr 0x295b26c size 0x128 virtual false final false
static UnityEngine::InputSystem::LowLevel::InputEventTrace LoadFrom(System::IO::Stream stream) ;

/// @brief Method Replay addr 0x295b394 size 0x68 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController Replay() ;

/// @brief Method Resize addr 0x295b58c size 0x200 virtual false final false
 bool Resize(int64_t newBufferSize, int64_t newMaxBufferSize) ;

/// @brief Method Clear addr 0x295b810 size 0x1c virtual false final false
 void Clear() ;

/// @brief Method Enable addr 0x295b82c size 0x154 virtual false final false
 void Enable() ;

/// @brief Method Disable addr 0x295b3fc size 0x118 virtual false final false
 void Disable() ;

/// @brief Method GetNextEvent addr 0x295b794 size 0x7c virtual false final false
 bool GetNextEvent(ByRef<UnityEngine::InputSystem::LowLevel::InputEventPtr> current) ;

/// @brief Method GetEnumerator addr 0x295a734 size 0x60 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::InputEventPtr> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x295b9e8 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dispose addr 0x295b9ec size 0x18 virtual true final true
 void Dispose() ;

/// @brief Method get_m_EventBuffer addr 0x2959c14 size 0x8 virtual false final false
 void* get_m_EventBuffer() ;

/// @brief Method set_m_EventBuffer addr 0x295b04c size 0x8 virtual false final false
 void set_m_EventBuffer(void* value) ;

/// @brief Method get_m_EventBufferHead addr 0x295b78c size 0x8 virtual false final false
 void* get_m_EventBufferHead() ;

/// @brief Method set_m_EventBufferHead addr 0x295b054 size 0x8 virtual false final false
 void set_m_EventBufferHead(void* value) ;

/// @brief Method get_m_EventBufferTail addr 0x295b9a8 size 0x8 virtual false final false
 void* get_m_EventBufferTail() ;

/// @brief Method set_m_EventBufferTail addr 0x295b05c size 0x8 virtual false final false
 void set_m_EventBufferTail(void* value) ;

/// @brief Method Allocate addr 0x295b980 size 0x28 virtual false final false
 void Allocate() ;

/// @brief Method Release addr 0x295ba04 size 0x40 virtual false final false
 void Release() ;

/// @brief Method OnBeforeUpdate addr 0x295ba44 size 0x1ac virtual false final false
 void OnBeforeUpdate() ;

/// @brief Method OnInputEvent addr 0x295bbf0 size 0x4ec virtual false final false
 void OnInputEvent(UnityEngine::InputSystem::LowLevel::InputEventPtr inputEvent, UnityEngine::InputSystem::InputDevice device) ;

/// @brief Method get_kFileFormat addr 0x295a704 size 0x30 virtual false final false
static UnityEngine::InputSystem::Utilities::FourCC get_kFileFormat() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__FileFlags, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/FileFlags");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController/<>c");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController____c__DisplayClass43_0, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController/<>c__DisplayClass43_0");
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::InputEventTrace);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputEventTrace, "UnityEngine.InputSystem.LowLevel", "InputEventTrace");
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/Enumerator");
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__ReplayController, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/ReplayController");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputEventTrace__DeviceInfo, "UnityEngine.InputSystem.LowLevel", "InputEventTrace/DeviceInfo");
