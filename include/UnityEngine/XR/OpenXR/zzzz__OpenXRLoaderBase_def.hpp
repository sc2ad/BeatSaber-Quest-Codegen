#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRDisplaySubsystem;
}
namespace UnityEngine::XR {
class XRInputSubsystemDescriptor;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
namespace System {
class UnhandledExceptionEventHandler;
}
namespace UnityEngine::XR::OpenXR::Features {
struct ____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent;
}
namespace System {
class UnhandledExceptionEventArgs;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace UnityEngine::XR::OpenXR::Features {
class OpenXRFeature;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
struct ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState;
}
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderBase;
}
namespace UnityEngine::XR::OpenXR {
class ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate;
}
namespace UnityEngine::XR::OpenXR {
class ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c;
}
// Type: ::LoaderState
namespace UnityEngine::XR::OpenXR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14165))
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase::LoaderState
struct CORDL_TYPE ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState(int32_t value__) noexcept;


                    constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState&&) = default;
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState& operator=(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState& operator=(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState_Unwrapped : int32_t {
__Uninitialized = 0,
__InitializeAttempted = 1,
__Initialized = 2,
__StartAttempted = 3,
__Started = 4,
__StopAttempted = 5,
__Stopped = 6,
__DeinitializeAttempted = 7,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState_Unwrapped () const noexcept {
return std::bit_cast<______UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Uninitialized offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const Uninitialized;

/// @brief Field InitializeAttempted offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const InitializeAttempted;

/// @brief Field Initialized offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const Initialized;

/// @brief Field StartAttempted offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const StartAttempted;

/// @brief Field Started offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const Started;

/// @brief Field StopAttempted offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const StopAttempted;

/// @brief Field Stopped offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const Stopped;

/// @brief Field DeinitializeAttempted offset 0
static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState const DeinitializeAttempted;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: ::ReceiveNativeEventDelegate
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14166))
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase::ReceiveNativeEventDelegate
class CORDL_TYPE ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate& operator=(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate&& o) noexcept = default;
  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate& operator=(____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2aeaf10 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2aeb12c size 0x14 virtual true final false
 void Invoke(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload) ;

/// @brief Method BeginInvoke addr 0x2aeb140 size 0xb4 virtual true final false
 ::System::IAsyncResult BeginInvoke(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2aeb1f4 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: ::<>c
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14167))
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase::<>c
class CORDL_TYPE ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c(____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c(____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c& operator=(____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c&& o) noexcept = default;
  constexpr ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c& operator=(____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c const& o) noexcept = default;
                


// Fields

static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c value) ;

static ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c __get___9() ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool> __declspec(property(get=__get___9__31_0, put=__set___9__31_0))  __9__31_0;

static void __set___9__31_0(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool> value) ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,bool> __get___9__31_0() ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t> __declspec(property(get=__get___9__31_1, put=__set___9__31_1))  __9__31_1;

static void __set___9__31_1(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t> value) ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,int32_t> __get___9__31_1() ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW> __declspec(property(get=__get___9__31_2, put=__set___9__31_2))  __9__31_2;

static void __set___9__31_2(::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW> value) ;

static ::System::Func_2<::UnityEngine::XR::OpenXR::Features::OpenXRFeature,::StringW> __get___9__31_2() ;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c() ;

/// @brief Method .ctor addr 0x2aeb264 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <InitializeInternal>b__31_0 addr 0x2aeb26c size 0x5c virtual false final false
 bool _InitializeInternal_b__31_0(::UnityEngine::XR::OpenXR::Features::OpenXRFeature f) ;

/// @brief Method <InitializeInternal>b__31_1 addr 0x2aeb2c8 size 0x18 virtual false final false
 int32_t _InitializeInternal_b__31_1(::UnityEngine::XR::OpenXR::Features::OpenXRFeature f) ;

/// @brief Method <InitializeInternal>b__31_2 addr 0x2aeb2e0 size 0x18 virtual false final false
 ::StringW _InitializeInternal_b__31_2(::UnityEngine::XR::OpenXR::Features::OpenXRFeature f) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
// Type: UnityEngine.XR.OpenXR::OpenXRLoaderBase
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15892))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14168))
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderBase
class CORDL_TYPE OpenXRLoaderBase : public ::UnityEngine::XR::Management::XRLoaderHelper {
public:
// Declarations
using __c = ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c;

using ReceiveNativeEventDelegate = ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate;

using LoaderState = ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~OpenXRLoaderBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase", modifiers: " const&", def_value: None }]
constexpr OpenXRLoaderBase(OpenXRLoaderBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderBase", modifiers: "&&", def_value: None }]
constexpr OpenXRLoaderBase(OpenXRLoaderBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRLoaderBase(void* ptr) noexcept : ::UnityEngine::XR::Management::XRLoaderHelper(ptr) {
}


  constexpr OpenXRLoaderBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRLoaderBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRLoaderBase& operator=(OpenXRLoaderBase&& o) noexcept = default;
  constexpr OpenXRLoaderBase& operator=(OpenXRLoaderBase const& o) noexcept = default;
                


// Fields

/// @brief Field k_IdlePollingWaitTimeInSeconds offset 0
static constexpr double_t  k_IdlePollingWaitTimeInSeconds{0.1};

static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor> __declspec(property(get=__get_s_DisplaySubsystemDescriptors, put=__set_s_DisplaySubsystemDescriptors))  s_DisplaySubsystemDescriptors;

static void __set_s_DisplaySubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRDisplaySubsystemDescriptor> __get_s_DisplaySubsystemDescriptors() ;

static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystemDescriptor> __declspec(property(get=__get_s_InputSubsystemDescriptors, put=__set_s_InputSubsystemDescriptors))  s_InputSubsystemDescriptors;

static void __set_s_InputSubsystemDescriptors(::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystemDescriptor> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::XR::XRInputSubsystemDescriptor> __get_s_InputSubsystemDescriptors() ;

static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase __declspec(property(get=__get__Instance_k__BackingField, put=__set__Instance_k__BackingField))  _Instance_k__BackingField;

static void __set__Instance_k__BackingField(::UnityEngine::XR::OpenXR::OpenXRLoaderBase value) ;

static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase __get__Instance_k__BackingField() ;

 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState __declspec(property(get=__get__currentLoaderState_k__BackingField, put=__set__currentLoaderState_k__BackingField))  _currentLoaderState_k__BackingField;

constexpr void __set__currentLoaderState_k__BackingField(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState value) ;

constexpr ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState __get__currentLoaderState_k__BackingField() const;

 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __declspec(property(get=__get_validLoaderInitStates, put=__set_validLoaderInitStates))  validLoaderInitStates;

constexpr void __set_validLoaderInitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __get_validLoaderInitStates() const;

 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __declspec(property(get=__get_validLoaderStartStates, put=__set_validLoaderStartStates))  validLoaderStartStates;

constexpr void __set_validLoaderStartStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __get_validLoaderStartStates() const;

 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __declspec(property(get=__get_validLoaderStopStates, put=__set_validLoaderStopStates))  validLoaderStopStates;

constexpr void __set_validLoaderStopStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __get_validLoaderStopStates() const;

 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __declspec(property(get=__get_validLoaderDeinitStates, put=__set_validLoaderDeinitStates))  validLoaderDeinitStates;

constexpr void __set_validLoaderDeinitStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __get_validLoaderDeinitStates() const;

 ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __declspec(property(get=__get_runningStates, put=__set_runningStates))  runningStates;

constexpr void __set_runningStates(::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState> __get_runningStates() const;

 ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent __declspec(property(get=__get_currentOpenXRState, put=__set_currentOpenXRState))  currentOpenXRState;

constexpr void __set_currentOpenXRState(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent value) ;

constexpr ::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent __get_currentOpenXRState() const;

 bool __declspec(property(get=__get_actionSetsAttached, put=__set_actionSetsAttached))  actionSetsAttached;

constexpr void __set_actionSetsAttached(bool value) ;

constexpr bool __get_actionSetsAttached() const;

 ::System::UnhandledExceptionEventHandler __declspec(property(get=__get_unhandledExceptionHandler, put=__set_unhandledExceptionHandler))  unhandledExceptionHandler;

constexpr void __set_unhandledExceptionHandler(::System::UnhandledExceptionEventHandler value) ;

constexpr ::System::UnhandledExceptionEventHandler __get_unhandledExceptionHandler() const;

 bool __declspec(property(get=__get_DisableValidationChecksOnEnteringPlaymode, put=__set_DisableValidationChecksOnEnteringPlaymode))  DisableValidationChecksOnEnteringPlaymode;

constexpr void __set_DisableValidationChecksOnEnteringPlaymode(bool value) ;

constexpr bool __get_DisableValidationChecksOnEnteringPlaymode() const;

 double_t __declspec(property(get=__get_lastPollCheckTime, put=__set_lastPollCheckTime))  lastPollCheckTime;

constexpr void __set_lastPollCheckTime(double_t value) ;

constexpr double_t __get_lastPollCheckTime() const;

/// @brief Field LibraryName offset 0
static constexpr ::ConstString  LibraryName{u"UnityOpenXR"};


// Properties

static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase __declspec(property(get=get_Instance, put=set_Instance))  Instance;

 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState __declspec(property(get=get_currentLoaderState, put=set_currentLoaderState))  currentLoaderState;

 ::UnityEngine::XR::XRDisplaySubsystem __declspec(property(get=get_displaySubsystem))  displaySubsystem;

 ::UnityEngine::XR::XRInputSubsystem __declspec(property(get=get_inputSubsystem))  inputSubsystem;

 bool __declspec(property(get=get_isInitialized))  isInitialized;

 bool __declspec(property(get=get_isStarted))  isStarted;


// Methods

/// @brief Method get_Instance addr 0x2ae6158 size 0x58 virtual false final false
static ::UnityEngine::XR::OpenXR::OpenXRLoaderBase get_Instance() ;

/// @brief Method set_Instance addr 0x2ae61b0 size 0x5c virtual false final false
static void set_Instance(::UnityEngine::XR::OpenXR::OpenXRLoaderBase value) ;

/// @brief Method get_currentLoaderState addr 0x2ae620c size 0x8 virtual false final false
 ::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState get_currentLoaderState() ;

/// @brief Method set_currentLoaderState addr 0x2ae6214 size 0x8 virtual false final false
 void set_currentLoaderState(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState value) ;

/// @brief Method get_displaySubsystem addr 0x2ae621c size 0x70 virtual false final false
 ::UnityEngine::XR::XRDisplaySubsystem get_displaySubsystem() ;

/// @brief Method get_inputSubsystem addr 0x2ae628c size 0xd8 virtual false final false
 ::UnityEngine::XR::XRInputSubsystem get_inputSubsystem() ;

/// @brief Method get_isInitialized addr 0x2ae6364 size 0x1c virtual false final false
 bool get_isInitialized() ;

/// @brief Method get_isStarted addr 0x2ae6380 size 0x54 virtual false final false
 bool get_isStarted() ;

/// @brief Method ExceptionHandler addr 0x2ae63d4 size 0x234 virtual false final false
static void ExceptionHandler(::bs_hook::Il2CppWrapperType sender, ::System::UnhandledExceptionEventArgs args) ;

/// @brief Method Initialize addr 0x2ae6608 size 0x260 virtual true final false
 bool Initialize() ;

/// @brief Method InitializeInternal addr 0x2ae6868 size 0x510 virtual false final false
 bool InitializeInternal() ;

/// @brief Method CreateSubsystems addr 0x2ae7ccc size 0x11c virtual false final false
 bool CreateSubsystems() ;

/// @brief Method ProcessOpenXRMessageLoop addr 0x2ae8190 size 0x9c virtual false final false
 void ProcessOpenXRMessageLoop() ;

/// @brief Method Start addr 0x2ae8290 size 0xa0 virtual true final false
 bool Start() ;

/// @brief Method StartInternal addr 0x2ae8330 size 0x1a8 virtual false final false
 bool StartInternal() ;

/// @brief Method Stop addr 0x2ae9b14 size 0x120 virtual true final false
 bool Stop() ;

/// @brief Method StopInternal addr 0x2ae9c34 size 0x58 virtual false final false
 void StopInternal() ;

/// @brief Method Deinitialize addr 0x2ae9cf0 size 0x2c4 virtual true final false
 bool Deinitialize() ;

/// @brief Method CreateSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
 void CreateSubsystem(::System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id) ;

/// @brief Method StartSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void StartSubsystem() ;

/// @brief Method StopSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void StopSubsystem() ;

/// @brief Method DestroySubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DestroySubsystem() ;

/// @brief Method SetApplicationInfo addr 0x2ae72f4 size 0x164 virtual false final false
 void SetApplicationInfo() ;

/// @brief Method StringToWCHAR_T addr 0x2aea1b0 size 0x98 virtual false final false
static ::ArrayW<uint8_t> StringToWCHAR_T(::StringW s) ;

/// @brief Method LoadOpenXRSymbols addr 0x2ae7100 size 0x68 virtual false final false
 bool LoadOpenXRSymbols() ;

/// @brief Method RequestOpenXRFeatures addr 0x2ae7458 size 0x7dc virtual false final false
 void RequestOpenXRFeatures() ;

/// @brief Method DebugLogEnabledSpecExtensions addr 0x2ae7fbc size 0x1d4 virtual false final false
static void DebugLogEnabledSpecExtensions() ;

/// @brief Method ReceiveNativeEvent addr 0x2ae5ea8 size 0x2b0 virtual false final false
static void ReceiveNativeEvent(::UnityEngine::XR::OpenXR::Features::____UnityEngine__XR__OpenXR__Features__OpenXRFeature__NativeEvent e, uint64_t payload) ;

/// @brief Method RegisterOpenXRCallbacks addr 0x2ae7c34 size 0x98 virtual false final false
static void RegisterOpenXRCallbacks() ;

/// @brief Method Internal_LoadOpenXRLibrary addr 0x2aea248 size 0x8c virtual false final false
static bool Internal_LoadOpenXRLibrary(::ArrayW<uint8_t> loaderPath) ;

/// @brief Method Internal_UnloadOpenXRLibrary addr 0x2aea07c size 0x64 virtual false final false
static void Internal_UnloadOpenXRLibrary() ;

/// @brief Method Internal_SetCallbacks addr 0x2aeafd4 size 0x80 virtual false final false
static void Internal_SetCallbacks(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate callback) ;

/// @brief Method Internal_SetApplicationInfo addr 0x2aea0e0 size 0xd0 virtual false final false
static void Internal_SetApplicationInfo(::StringW applicationName, ::StringW applicationVersion, uint32_t applicationVersionHash, ::StringW engineVersion) ;

/// @brief Method Internal_RequestExitSession addr 0x2ae9fb4 size 0x64 virtual false final false
static void Internal_RequestExitSession() ;

/// @brief Method Internal_InitializeSession addr 0x2ae7284 size 0x70 virtual false final false
static bool Internal_InitializeSession() ;

/// @brief Method Internal_CreateSessionIfNeeded addr 0x2ae84d8 size 0x70 virtual false final false
static bool Internal_CreateSessionIfNeeded() ;

/// @brief Method Internal_BeginSession addr 0x2ae8548 size 0x64 virtual false final false
static void Internal_BeginSession() ;

/// @brief Method Internal_EndSession addr 0x2ae9c8c size 0x64 virtual false final false
static void Internal_EndSession() ;

/// @brief Method Internal_DestroySession addr 0x2aea018 size 0x64 virtual false final false
static void Internal_DestroySession() ;

/// @brief Method Internal_PumpMessageLoop addr 0x2ae822c size 0x64 virtual false final false
static void Internal_PumpMessageLoop() ;

/// @brief Method Internal_SetSuccessfullyInitialized addr 0x2ae6d78 size 0x7c virtual false final false
static void Internal_SetSuccessfullyInitialized(bool value) ;

/// @brief Method Internal_RequestEnableExtensionString addr 0x2aea3c0 size 0x90 virtual false final false
static bool Internal_RequestEnableExtensionString(::StringW extensionString) ;

// Ctor Parameters []
explicit OpenXRLoaderBase() ;

/// @brief Method .ctor addr 0x2ae57c8 size 0x6e0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__LoaderState, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/LoaderState");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::OpenXRLoaderBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::OpenXRLoaderBase, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase__ReceiveNativeEventDelegate, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/ReceiveNativeEventDelegate");
NEED_NO_BOX(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::____UnityEngine__XR__OpenXR__OpenXRLoaderBase____c, "UnityEngine.XR.OpenXR", "OpenXRLoaderBase/<>c");
