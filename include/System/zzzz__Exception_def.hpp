#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct System__Exception__ExceptionMessageKind;
}
namespace System::Diagnostics {
class StackTrace;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SafeSerializationManager;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System {
struct System__Exception__ExceptionMessageKind;
}
namespace System {
class Exception;
}
// Type: ::ExceptionMessageKind
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2559))
// CS Name: System.Exception::ExceptionMessageKind
struct CORDL_TYPE System__Exception__ExceptionMessageKind : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Exception__ExceptionMessageKind(int32_t value__) noexcept;


                    constexpr System__Exception__ExceptionMessageKind(System__Exception__ExceptionMessageKind const&) = default;
                    constexpr System__Exception__ExceptionMessageKind(System__Exception__ExceptionMessageKind&&) = default;
                    constexpr System__Exception__ExceptionMessageKind& operator=(System__Exception__ExceptionMessageKind const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Exception__ExceptionMessageKind& operator=(System__Exception__ExceptionMessageKind&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Exception__ExceptionMessageKind(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Exception__ExceptionMessageKind_Unwrapped : int32_t {
__ThreadAbort = 1,
__ThreadInterrupted = 2,
__OutOfMemory = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Exception__ExceptionMessageKind_Unwrapped () const noexcept {
return std::bit_cast<__System__Exception__ExceptionMessageKind_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field ThreadAbort offset 0
static System::System__Exception__ExceptionMessageKind const ThreadAbort;

/// @brief Field ThreadInterrupted offset 0
static System::System__Exception__ExceptionMessageKind const ThreadInterrupted;

/// @brief Field OutOfMemory offset 0
static System::System__Exception__ExceptionMessageKind const OutOfMemory;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Exception
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2560))
// CS Name: System.Exception
class CORDL_TYPE Exception : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ExceptionMessageKind = System::System__Exception__ExceptionMessageKind;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~Exception() = default;

// Ctor Parameters [CppParam { name: "", ty: "Exception", modifiers: " const&", def_value: None }]
constexpr Exception(Exception const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Exception", modifiers: "&&", def_value: None }]
constexpr Exception(Exception&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Exception(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Exception& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Exception& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Exception& operator=(Exception&& o) noexcept = default;
  constexpr Exception& operator=(Exception const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_EDILock, put=__set_s_EDILock))  s_EDILock;

static void __set_s_EDILock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_EDILock() ;

 ::StringW __declspec(property(get=__get__className, put=__set__className))  _className;

constexpr void __set__className(::StringW value) ;

constexpr ::StringW __get__className() const;

 ::StringW __declspec(property(get=__get__message, put=__set__message))  _message;

constexpr void __set__message(::StringW value) ;

constexpr ::StringW __get__message() const;

 System::Collections::IDictionary __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(System::Collections::IDictionary value) ;

constexpr System::Collections::IDictionary __get__data() const;

 System::Exception __declspec(property(get=__get__innerException, put=__set__innerException))  _innerException;

constexpr void __set__innerException(System::Exception value) ;

constexpr System::Exception __get__innerException() const;

 ::StringW __declspec(property(get=__get__helpURL, put=__set__helpURL))  _helpURL;

constexpr void __set__helpURL(::StringW value) ;

constexpr ::StringW __get__helpURL() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__stackTrace, put=__set__stackTrace))  _stackTrace;

constexpr void __set__stackTrace(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__stackTrace() const;

 ::StringW __declspec(property(get=__get__stackTraceString, put=__set__stackTraceString))  _stackTraceString;

constexpr void __set__stackTraceString(::StringW value) ;

constexpr ::StringW __get__stackTraceString() const;

 ::StringW __declspec(property(get=__get__remoteStackTraceString, put=__set__remoteStackTraceString))  _remoteStackTraceString;

constexpr void __set__remoteStackTraceString(::StringW value) ;

constexpr ::StringW __get__remoteStackTraceString() const;

 int32_t __declspec(property(get=__get__remoteStackIndex, put=__set__remoteStackIndex))  _remoteStackIndex;

constexpr void __set__remoteStackIndex(int32_t value) ;

constexpr int32_t __get__remoteStackIndex() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__dynamicMethods, put=__set__dynamicMethods))  _dynamicMethods;

constexpr void __set__dynamicMethods(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__dynamicMethods() const;

 int32_t __declspec(property(get=__get__HResult, put=__set__HResult))  _HResult;

constexpr void __set__HResult(int32_t value) ;

constexpr int32_t __get__HResult() const;

 ::StringW __declspec(property(get=__get__source, put=__set__source))  _source;

constexpr void __set__source(::StringW value) ;

constexpr ::StringW __get__source() const;

 System::Runtime::Serialization::SafeSerializationManager __declspec(property(get=__get__safeSerializationManager, put=__set__safeSerializationManager))  _safeSerializationManager;

constexpr void __set__safeSerializationManager(System::Runtime::Serialization::SafeSerializationManager value) ;

constexpr System::Runtime::Serialization::SafeSerializationManager __get__safeSerializationManager() const;

 ::ArrayW<System::Diagnostics::StackTrace> __declspec(property(get=__get_captured_traces, put=__set_captured_traces))  captured_traces;

constexpr void __set_captured_traces(::ArrayW<System::Diagnostics::StackTrace> value) ;

constexpr ::ArrayW<System::Diagnostics::StackTrace> __get_captured_traces() const;

 ::ArrayW<::cordl_internals::intptr_t> __declspec(property(get=__get_native_trace_ips, put=__set_native_trace_ips))  native_trace_ips;

constexpr void __set_native_trace_ips(::ArrayW<::cordl_internals::intptr_t> value) ;

constexpr ::ArrayW<::cordl_internals::intptr_t> __get_native_trace_ips() const;

 int32_t __declspec(property(get=__get_caught_in_unmanaged, put=__set_caught_in_unmanaged))  caught_in_unmanaged;

constexpr void __set_caught_in_unmanaged(int32_t value) ;

constexpr int32_t __get_caught_in_unmanaged() const;

/// @brief Field _COMPlusExceptionCode offset 0
static constexpr int32_t  _COMPlusExceptionCode{-532462766};


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;

 System::Collections::IDictionary __declspec(property(get=get_Data))  Data;

 System::Exception __declspec(property(get=get_InnerException))  InnerException;

 ::StringW __declspec(property(get=get_StackTrace))  StackTrace;

 ::StringW __declspec(property(get=get_Source))  Source;

 int32_t __declspec(property(get=get_HResult, put=set_HResult))  HResult;


// Methods

/// @brief Method Init addr 0x24784f4 size 0x78 virtual false final false
 void Init() ;

static System::Exception New_ctor() ;

/// @brief Method .ctor addr 0x247856c size 0x1c virtual false final false
 void _ctor() ;

static System::Exception New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2478588 size 0x30 virtual false final false
 void _ctor(::StringW message) ;

static System::Exception New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x24785b8 size 0x38 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static System::Exception New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24785f0 size 0x468 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x2478a58 size 0xd8 virtual true final false
 ::StringW get_Message() ;

/// @brief Method get_Data addr 0x2478b6c size 0x6c virtual true final false
 System::Collections::IDictionary get_Data() ;

/// @brief Method GetClassName addr 0x2478b30 size 0x3c virtual false final false
 ::StringW GetClassName() ;

/// @brief Method get_InnerException addr 0x2478be0 size 0x8 virtual true final true
 System::Exception get_InnerException() ;

/// @brief Method get_StackTrace addr 0x2478be8 size 0x8 virtual true final false
 ::StringW get_StackTrace() ;

/// @brief Method GetStackTrace addr 0x2478bf0 size 0x4c virtual false final false
 ::StringW GetStackTrace(bool needFileInfo) ;

/// @brief Method SetErrorCode addr 0x2478c44 size 0x8 virtual false final false
 void SetErrorCode(int32_t hr) ;

/// @brief Method get_Source addr 0x2478c4c size 0x10c virtual true final false
 ::StringW get_Source() ;

/// @brief Method ToString addr 0x2478d58 size 0xc virtual true final false
 ::StringW ToString() ;

/// @brief Method ToString addr 0x2478d64 size 0x2a4 virtual false final false
 ::StringW ToString(bool needFileLineInfo, bool needMessage) ;

/// @brief Method GetObjectData addr 0x2479008 size 0x4ac virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method OnDeserialized addr 0x24794b4 size 0x80 virtual false final false
 void OnDeserialized(System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method StripFileInfo addr 0x2478c3c size 0x8 virtual false final false
 ::StringW StripFileInfo(::StringW stackTrace, bool isRemoteStackTrace) ;

/// @brief Method RestoreExceptionDispatchInfo addr 0x2479534 size 0x9c virtual false final false
 void RestoreExceptionDispatchInfo(System::Runtime::ExceptionServices::ExceptionDispatchInfo exceptionDispatchInfo) ;

/// @brief Method get_HResult addr 0x24795d0 size 0x8 virtual false final false
 int32_t get_HResult() ;

/// @brief Method set_HResult addr 0x24795d8 size 0x8 virtual false final false
 void set_HResult(int32_t value) ;

/// @brief Method GetType addr 0x2478bd8 size 0x8 virtual true final true
 System::Type GetType() ;

/// @brief Method GetMessageFromNativeResources addr 0x24795e0 size 0x84 virtual false final false
static ::StringW GetMessageFromNativeResources(System::System__Exception__ExceptionMessageKind kind) ;

/// @brief Method FixRemotingException addr 0x2479664 size 0xe8 virtual false final false
 System::Exception FixRemotingException() ;

/// @brief Method ReportUnhandledException addr 0x247974c size 0x4 virtual false final false
static void ReportUnhandledException(System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__Exception__ExceptionMessageKind, "System", "Exception/ExceptionMessageKind");
NEED_NO_BOX(System::Exception);
DEFINE_IL2CPP_ARG_TYPE(System::Exception, "System", "Exception");
