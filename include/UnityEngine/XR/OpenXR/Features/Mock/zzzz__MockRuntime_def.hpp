#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewConfigurationType;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
struct UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrResult;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrReferenceSpaceType;
}
namespace UnityEngine {
struct Vector4;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSessionState;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrViewStateFlags;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate;
}
namespace UnityEngine::XR::OpenXR::NativeTypes {
struct XrSpaceLocationFlags;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector2;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::Mock {
struct UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class MockRuntime;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate;
}
namespace UnityEngine::XR::OpenXR::Features::Mock {
class UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate;
}
// Type: ::ScriptEvent
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16029))
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ScriptEvent
struct CORDL_TYPE UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent(int32_t value__) noexcept;


                    constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent const&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent&&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent_Unwrapped : int32_t {
__Unknown = 0,
__EndFrame = 1,
__HapticImpulse = 2,
__HapticStop = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent const Unknown;

/// @brief Field EndFrame offset 0
static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent const EndFrame;

/// @brief Field HapticImpulse offset 0
static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent const HapticImpulse;

/// @brief Field HapticStop offset 0
static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent const HapticStop;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Mock
// Type: ::ScriptEventDelegate
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16030))
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::ScriptEventDelegate
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate const& o) noexcept = default;
                


// Methods

static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b06254 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b06318 size 0x14 virtual true final false
 void Invoke(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent evt, uint64_t param) ;

/// @brief Method BeginInvoke addr 0x2b0632c size 0xb4 virtual true final false
 System::IAsyncResult BeginInvoke(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent evt, uint64_t param, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2b063e0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Mock
// Type: ::BeforeFunctionDelegate
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16031))
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::BeforeFunctionDelegate
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate const& o) noexcept = default;
                


// Methods

static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b05684 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b063ec size 0x14 virtual true final false
 UnityEngine::XR::OpenXR::NativeTypes::XrResult Invoke(::StringW functionName) ;

/// @brief Method BeginInvoke addr 0x2b06400 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW functionName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2b06420 size 0x28 virtual true final false
 UnityEngine::XR::OpenXR::NativeTypes::XrResult EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Mock
// Type: ::AfterFunctionDelegate
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16032))
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime::AfterFunctionDelegate
class CORDL_TYPE UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate", modifiers: " const&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate", modifiers: "&&", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate&& o) noexcept = default;
  constexpr UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate& operator=(UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate const& o) noexcept = default;
                


// Methods

static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b05758 size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b06448 size 0x14 virtual true final false
 void Invoke(::StringW functionName, UnityEngine::XR::OpenXR::NativeTypes::XrResult result) ;

/// @brief Method BeginInvoke addr 0x2b0645c size 0x94 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW functionName, UnityEngine::XR::OpenXR::NativeTypes::XrResult result, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2b064f0 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Mock
// Type: UnityEngine.XR.OpenXR.Features.Mock::MockRuntime
namespace UnityEngine::XR::OpenXR::Features::Mock {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16033))
// CS Name: UnityEngine.XR.OpenXR.Features.Mock.MockRuntime
class CORDL_TYPE MockRuntime : public UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using AfterFunctionDelegate = UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate;

using BeforeFunctionDelegate = UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate;

using ScriptEventDelegate = UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate;

using ScriptEvent = UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MockRuntime() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockRuntime", modifiers: " const&", def_value: None }]
constexpr MockRuntime(MockRuntime const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockRuntime", modifiers: "&&", def_value: None }]
constexpr MockRuntime(MockRuntime&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockRuntime(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRFeature(ptr) {
}


  constexpr MockRuntime& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockRuntime& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockRuntime& operator=(MockRuntime&& o) noexcept = default;
  constexpr MockRuntime& operator=(MockRuntime const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate> __declspec(property(get=__get_s_AfterFunctionCallbacks, put=__set_s_AfterFunctionCallbacks))  s_AfterFunctionCallbacks;

static void __set_s_AfterFunctionCallbacks(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate> __get_s_AfterFunctionCallbacks() ;

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate> __declspec(property(get=__get_s_BeforeFunctionCallbacks, put=__set_s_BeforeFunctionCallbacks))  s_BeforeFunctionCallbacks;

static void __set_s_BeforeFunctionCallbacks(System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate> __get_s_BeforeFunctionCallbacks() ;

static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate __declspec(property(get=__get_onScriptEvent, put=__set_onScriptEvent))  onScriptEvent;

static void __set_onScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate value) ;

static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate __get_onScriptEvent() ;

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.mockruntime"};

 bool __declspec(property(get=__get_ignoreValidationErrors, put=__set_ignoreValidationErrors))  ignoreValidationErrors;

constexpr void __set_ignoreValidationErrors(bool value) ;

constexpr bool __get_ignoreValidationErrors() const;

/// @brief Field extLib offset 0
static constexpr ::ConstString  extLib{u"mock_api"};


// Properties

static UnityEngine::XR::OpenXR::Features::Mock::MockRuntime __declspec(property(get=get_Instance))  Instance;


// Methods

/// @brief Method add_onScriptEvent addr 0x2b050b0 size 0xbc virtual false final false
static void add_onScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate value) ;

/// @brief Method remove_onScriptEvent addr 0x2b0516c size 0xbc virtual false final false
static void remove_onScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate value) ;

/// @brief Method get_Instance addr 0x2b05228 size 0x48 virtual false final false
static UnityEngine::XR::OpenXR::Features::Mock::MockRuntime get_Instance() ;

/// @brief Method ReceiveScriptEvent addr 0x2b04fb4 size 0x80 virtual false final false
static void ReceiveScriptEvent(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent evt, uint64_t param) ;

/// @brief Method BeforeFunctionCallback addr 0x2b05034 size 0x34 virtual false final false
static UnityEngine::XR::OpenXR::NativeTypes::XrResult BeforeFunctionCallback(::StringW function) ;

/// @brief Method AfterFunctionCallback addr 0x2b05068 size 0x48 virtual false final false
static void AfterFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::NativeTypes::XrResult result) ;

/// @brief Method SetFunctionCallback addr 0x2b05388 size 0x2fc virtual false final false
static void SetFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate beforeCallback, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate afterCallback) ;

/// @brief Method SetFunctionCallback addr 0x2b058c8 size 0x2c virtual false final false
static void SetFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate beforeCallback) ;

/// @brief Method SetFunctionCallback addr 0x2b058f4 size 0x2c virtual false final false
static void SetFunctionCallback(::StringW function, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate afterCallback) ;

/// @brief Method GetBeforeFunctionCallback addr 0x2b05270 size 0x8c virtual false final false
static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate GetBeforeFunctionCallback(::StringW function) ;

/// @brief Method GetAfterFunctionCallback addr 0x2b052fc size 0x8c virtual false final false
static UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate GetAfterFunctionCallback(::StringW function) ;

/// @brief Method ClearFunctionCallbacks addr 0x2b05920 size 0x50 virtual false final false
static void ClearFunctionCallbacks() ;

/// @brief Method ResetDefaults addr 0x2b05970 size 0x48 virtual false final false
static void ResetDefaults() ;

/// @brief Method OnInstanceDestroy addr 0x2b059b8 size 0x4 virtual true final false
 void OnInstanceDestroy(uint64_t instance) ;

/// @brief Method HookCreateInstance addr 0x2b059bc size 0x78 virtual false final false
static ::cordl_internals::intptr_t HookCreateInstance(::cordl_internals::intptr_t func) ;

/// @brief Method SetKeepFunctionCallbacks addr 0x2b05a34 size 0x7c virtual false final false
static void SetKeepFunctionCallbacks(bool value) ;

/// @brief Method SetViewPose addr 0x2b05ab0 size 0xf4 virtual false final false
static void SetViewPose(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, int32_t viewIndex, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::Vector4 fov) ;

/// @brief Method SetViewState addr 0x2b05ba4 size 0x80 virtual false final false
static void SetViewState(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, UnityEngine::XR::OpenXR::NativeTypes::XrViewStateFlags viewStateFlags) ;

/// @brief Method SetSpace addr 0x2b05c24 size 0xdc virtual false final false
static void SetSpace(UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) ;

/// @brief Method SetSpace addr 0x2b05d00 size 0xdc virtual false final false
static void SetSpace(uint64_t actionHandle, UnityEngine::Vector3 position, UnityEngine::Quaternion orientation, UnityEngine::XR::OpenXR::NativeTypes::XrSpaceLocationFlags locationFlags) ;

/// @brief Method Internal_RegisterScriptEventCallback addr 0x2b05ddc size 0x7c virtual false final false
static UnityEngine::XR::OpenXR::NativeTypes::XrResult Internal_RegisterScriptEventCallback(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate callback) ;

/// @brief Method Internal_TransitionToState addr 0x2b05e58 size 0x88 virtual false final false
static bool Internal_TransitionToState(UnityEngine::XR::OpenXR::NativeTypes::XrSessionState state, bool forceTransition) ;

/// @brief Method Internal_GetSessionState addr 0x2b05ee0 size 0x68 virtual false final false
static UnityEngine::XR::OpenXR::NativeTypes::XrSessionState Internal_GetSessionState() ;

/// @brief Method RequestExitSession addr 0x2b05f48 size 0x64 virtual false final false
static void RequestExitSession() ;

/// @brief Method CauseInstanceLoss addr 0x2b05fac size 0x64 virtual false final false
static void CauseInstanceLoss() ;

/// @brief Method SetReferenceSpaceBounds addr 0x2b06010 size 0x94 virtual false final false
static void SetReferenceSpaceBounds(UnityEngine::XR::OpenXR::NativeTypes::XrReferenceSpaceType referenceSpace, UnityEngine::Vector2 bounds) ;

/// @brief Method GetEndFrameStats addr 0x2b060a4 size 0x84 virtual false final false
static void GetEndFrameStats(ByRef<int32_t> primaryLayerCount, ByRef<int32_t> secondaryLayerCount) ;

/// @brief Method ActivateSecondaryView addr 0x2b06128 size 0x80 virtual false final false
static void ActivateSecondaryView(UnityEngine::XR::OpenXR::NativeTypes::XrViewConfigurationType viewConfigurationType, bool activate) ;

/// @brief Method MockRuntime_RegisterFunctionCallbacks addr 0x2b05830 size 0x98 virtual false final false
static void MockRuntime_RegisterFunctionCallbacks(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate hookBefore, UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate hookAfter) ;

/// @brief Method MetaPerformanceMetrics_SeedCounterOnce_Float addr 0x2b061a8 size 0xa4 virtual false final false
static void MetaPerformanceMetrics_SeedCounterOnce_Float(::StringW xrPathString, float_t value, uint32_t unit) ;

static UnityEngine::XR::OpenXR::Features::Mock::MockRuntime New_ctor() ;

/// @brief Method .ctor addr 0x2b0624c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::Mock
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEvent, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/ScriptEvent");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Mock::MockRuntime);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Mock::MockRuntime, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__AfterFunctionDelegate, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/AfterFunctionDelegate");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__BeforeFunctionDelegate, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/BeforeFunctionDelegate");
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::Mock::UnityEngine__XR__OpenXR__Features__Mock__MockRuntime__ScriptEventDelegate, "UnityEngine.XR.OpenXR.Features.Mock", "MockRuntime/ScriptEventDelegate");
