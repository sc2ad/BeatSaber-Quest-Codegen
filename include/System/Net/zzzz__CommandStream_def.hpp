#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__NetworkStreamWrapper_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Text {
class Decoder;
}
namespace System::Net::Sockets {
class TcpClient;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
struct WebExceptionStatus;
}
namespace System {
class AsyncCallback;
}
namespace System::Text {
class Encoding;
}
namespace System {
class Exception;
}
namespace System::Net {
class ResponseDescription;
}
namespace System::Net {
struct FtpStatusCode;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class ReceiveState;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net {
struct System__Net__CommandStream__PipelineEntryFlags;
}
namespace System::Net {
struct System__Net__CommandStream__PipelineInstruction;
}
namespace System::Net {
class CommandStream;
}
namespace System::Net {
class System__Net__CommandStream__PipelineEntry;
}
// Type: ::PipelineInstruction
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7884))
// CS Name: System.Net.CommandStream::PipelineInstruction
struct CORDL_TYPE System__Net__CommandStream__PipelineInstruction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__CommandStream__PipelineInstruction(int32_t value__) noexcept;


                    constexpr System__Net__CommandStream__PipelineInstruction(System__Net__CommandStream__PipelineInstruction const&) = default;
                    constexpr System__Net__CommandStream__PipelineInstruction(System__Net__CommandStream__PipelineInstruction&&) = default;
                    constexpr System__Net__CommandStream__PipelineInstruction& operator=(System__Net__CommandStream__PipelineInstruction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__CommandStream__PipelineInstruction& operator=(System__Net__CommandStream__PipelineInstruction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__CommandStream__PipelineInstruction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__CommandStream__PipelineInstruction_Unwrapped : int32_t {
__Abort = 0,
__Advance = 1,
__Pause = 2,
__Reread = 3,
__GiveStream = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__CommandStream__PipelineInstruction_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__CommandStream__PipelineInstruction_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Abort offset 0
static System::Net::System__Net__CommandStream__PipelineInstruction const Abort;

/// @brief Field Advance offset 0
static System::Net::System__Net__CommandStream__PipelineInstruction const Advance;

/// @brief Field Pause offset 0
static System::Net::System__Net__CommandStream__PipelineInstruction const Pause;

/// @brief Field Reread offset 0
static System::Net::System__Net__CommandStream__PipelineInstruction const Reread;

/// @brief Field GiveStream offset 0
static System::Net::System__Net__CommandStream__PipelineInstruction const GiveStream;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::PipelineEntryFlags
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7885))
// CS Name: System.Net.CommandStream::PipelineEntryFlags
struct CORDL_TYPE System__Net__CommandStream__PipelineEntryFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Net__CommandStream__PipelineEntryFlags(int32_t value__) noexcept;


                    constexpr System__Net__CommandStream__PipelineEntryFlags(System__Net__CommandStream__PipelineEntryFlags const&) = default;
                    constexpr System__Net__CommandStream__PipelineEntryFlags(System__Net__CommandStream__PipelineEntryFlags&&) = default;
                    constexpr System__Net__CommandStream__PipelineEntryFlags& operator=(System__Net__CommandStream__PipelineEntryFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Net__CommandStream__PipelineEntryFlags& operator=(System__Net__CommandStream__PipelineEntryFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Net__CommandStream__PipelineEntryFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Net__CommandStream__PipelineEntryFlags_Unwrapped : int32_t {
__UserCommand = 1,
__GiveDataStream = 2,
__CreateDataConnection = 4,
__DontLogParameter = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Net__CommandStream__PipelineEntryFlags_Unwrapped () const noexcept {
return std::bit_cast<__System__Net__CommandStream__PipelineEntryFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UserCommand offset 0
static System::Net::System__Net__CommandStream__PipelineEntryFlags const UserCommand;

/// @brief Field GiveDataStream offset 0
static System::Net::System__Net__CommandStream__PipelineEntryFlags const GiveDataStream;

/// @brief Field CreateDataConnection offset 0
static System::Net::System__Net__CommandStream__PipelineEntryFlags const CreateDataConnection;

/// @brief Field DontLogParameter offset 0
static System::Net::System__Net__CommandStream__PipelineEntryFlags const DontLogParameter;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::PipelineEntry
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7886))
// CS Name: System.Net.CommandStream::PipelineEntry
class CORDL_TYPE System__Net__CommandStream__PipelineEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Net__CommandStream__PipelineEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__CommandStream__PipelineEntry", modifiers: " const&", def_value: None }]
constexpr System__Net__CommandStream__PipelineEntry(System__Net__CommandStream__PipelineEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__CommandStream__PipelineEntry", modifiers: "&&", def_value: None }]
constexpr System__Net__CommandStream__PipelineEntry(System__Net__CommandStream__PipelineEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__CommandStream__PipelineEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__CommandStream__PipelineEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__CommandStream__PipelineEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__CommandStream__PipelineEntry& operator=(System__Net__CommandStream__PipelineEntry&& o) noexcept = default;
  constexpr System__Net__CommandStream__PipelineEntry& operator=(System__Net__CommandStream__PipelineEntry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Command, put=__set_Command))  Command;

constexpr void __set_Command(::StringW value) ;

constexpr ::StringW __get_Command() const;

 System::Net::System__Net__CommandStream__PipelineEntryFlags __declspec(property(get=__get_Flags, put=__set_Flags))  Flags;

constexpr void __set_Flags(System::Net::System__Net__CommandStream__PipelineEntryFlags value) ;

constexpr System::Net::System__Net__CommandStream__PipelineEntryFlags __get_Flags() const;


// Methods

// Ctor Parameters [CppParam { name: "command", ty: "::StringW", modifiers: "", def_value: None }]
explicit System__Net__CommandStream__PipelineEntry(::StringW command) ;

/// @brief Method .ctor addr 0x27fd4f0 size 0x28 virtual false final false
 void _ctor(::StringW command) ;

// Ctor Parameters [CppParam { name: "command", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "flags", ty: "System::Net::System__Net__CommandStream__PipelineEntryFlags", modifiers: "", def_value: None }]
explicit System__Net__CommandStream__PipelineEntry(::StringW command, System::Net::System__Net__CommandStream__PipelineEntryFlags flags) ;

/// @brief Method .ctor addr 0x27fd518 size 0x30 virtual false final false
 void _ctor(::StringW command, System::Net::System__Net__CommandStream__PipelineEntryFlags flags) ;

/// @brief Method HasFlag addr 0x27fc1b4 size 0x10 virtual false final false
 bool HasFlag(System::Net::System__Net__CommandStream__PipelineEntryFlags flags) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::CommandStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7905))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7887))
// CS Name: System.Net.CommandStream
class CORDL_TYPE CommandStream : public System::Net::NetworkStreamWrapper {
public:
// Declarations
using PipelineEntry = System::Net::System__Net__CommandStream__PipelineEntry;

using PipelineEntryFlags = System::Net::System__Net__CommandStream__PipelineEntryFlags;

using PipelineInstruction = System::Net::System__Net__CommandStream__PipelineInstruction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x88};

virtual ~CommandStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandStream", modifiers: " const&", def_value: None }]
constexpr CommandStream(CommandStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CommandStream", modifiers: "&&", def_value: None }]
constexpr CommandStream(CommandStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CommandStream(void* ptr) noexcept : System::Net::NetworkStreamWrapper(ptr) {
}


  constexpr CommandStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CommandStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CommandStream& operator=(CommandStream&& o) noexcept = default;
  constexpr CommandStream& operator=(CommandStream const& o) noexcept = default;
                


// Fields

static System::AsyncCallback __declspec(property(get=__get_s_writeCallbackDelegate, put=__set_s_writeCallbackDelegate))  s_writeCallbackDelegate;

static void __set_s_writeCallbackDelegate(System::AsyncCallback value) ;

static System::AsyncCallback __get_s_writeCallbackDelegate() ;

static System::AsyncCallback __declspec(property(get=__get_s_readCallbackDelegate, put=__set_s_readCallbackDelegate))  s_readCallbackDelegate;

static void __set_s_readCallbackDelegate(System::AsyncCallback value) ;

static System::AsyncCallback __get_s_readCallbackDelegate() ;

 bool __declspec(property(get=__get__recoverableFailure, put=__set__recoverableFailure))  _recoverableFailure;

constexpr void __set__recoverableFailure(bool value) ;

constexpr bool __get__recoverableFailure() const;

 System::Net::WebRequest __declspec(property(get=__get__request, put=__set__request))  _request;

constexpr void __set__request(System::Net::WebRequest value) ;

constexpr System::Net::WebRequest __get__request() const;

 bool __declspec(property(get=__get__isAsync, put=__set__isAsync))  _isAsync;

constexpr void __set__isAsync(bool value) ;

constexpr bool __get__isAsync() const;

 bool __declspec(property(get=__get__aborted, put=__set__aborted))  _aborted;

constexpr void __set__aborted(bool value) ;

constexpr bool __get__aborted() const;

 ::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> __declspec(property(get=__get__commands, put=__set__commands))  _commands;

constexpr void __set__commands(::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> value) ;

constexpr ::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> __get__commands() const;

 int32_t __declspec(property(get=__get__index, put=__set__index))  _index;

constexpr void __set__index(int32_t value) ;

constexpr int32_t __get__index() const;

 bool __declspec(property(get=__get__doRead, put=__set__doRead))  _doRead;

constexpr void __set__doRead(bool value) ;

constexpr bool __get__doRead() const;

 bool __declspec(property(get=__get__doSend, put=__set__doSend))  _doSend;

constexpr void __set__doSend(bool value) ;

constexpr bool __get__doSend() const;

 System::Net::ResponseDescription __declspec(property(get=__get__currentResponseDescription, put=__set__currentResponseDescription))  _currentResponseDescription;

constexpr void __set__currentResponseDescription(System::Net::ResponseDescription value) ;

constexpr System::Net::ResponseDescription __get__currentResponseDescription() const;

 ::StringW __declspec(property(get=__get__abortReason, put=__set__abortReason))  _abortReason;

constexpr void __set__abortReason(::StringW value) ;

constexpr ::StringW __get__abortReason() const;

 ::StringW __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::StringW value) ;

constexpr ::StringW __get__buffer() const;

 System::Text::Encoding __declspec(property(get=__get__encoding, put=__set__encoding))  _encoding;

constexpr void __set__encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get__encoding() const;

 System::Text::Decoder __declspec(property(get=__get__decoder, put=__set__decoder))  _decoder;

constexpr void __set__decoder(System::Text::Decoder value) ;

constexpr System::Text::Decoder __get__decoder() const;


// Properties

 bool __declspec(property(get=get_RecoverableFailure))  RecoverableFailure;

 System::Text::Encoding __declspec(property(get=get_Encoding, put=set_Encoding))  Encoding;


// Methods

// Ctor Parameters [CppParam { name: "client", ty: "System::Net::Sockets::TcpClient", modifiers: "", def_value: None }]
explicit CommandStream(System::Net::Sockets::TcpClient client) ;

/// @brief Method .ctor addr 0x27fb544 size 0x94 virtual false final false
 void _ctor(System::Net::Sockets::TcpClient client) ;

/// @brief Method Abort addr 0x27fb65c size 0x1f8 virtual true final false
 void Abort(System::Exception e) ;

/// @brief Method Dispose addr 0x27fb884 size 0x94 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method InvokeRequestCallback addr 0x27fb918 size 0x70 virtual false final false
 void InvokeRequestCallback(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method get_RecoverableFailure addr 0x27fb998 size 0x8 virtual false final false
 bool get_RecoverableFailure() ;

/// @brief Method MarkAsRecoverableFailure addr 0x27fb9a0 size 0x18 virtual false final false
 void MarkAsRecoverableFailure() ;

/// @brief Method SubmitRequest addr 0x27fb9b8 size 0x80 virtual false final false
 System::IO::Stream SubmitRequest(System::Net::WebRequest request, bool isAsync, bool readInitalResponseOnConnect) ;

/// @brief Method ClearState addr 0x27fbfa0 size 0x10 virtual true final false
 void ClearState() ;

/// @brief Method BuildCommandsList addr 0x27fbfb0 size 0x8 virtual true final false
 ::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> BuildCommandsList(System::Net::WebRequest request) ;

/// @brief Method GenerateException addr 0x27fbfb8 size 0x80 virtual false final false
 System::Exception GenerateException(::StringW message, System::Net::WebExceptionStatus status, System::Exception innerException) ;

/// @brief Method GenerateException addr 0x27fc038 size 0xc8 virtual false final false
 System::Exception GenerateException(System::Net::FtpStatusCode code, ::StringW statusDescription, System::Exception innerException) ;

/// @brief Method InitCommandPipeline addr 0x27fba38 size 0x90 virtual false final false
 void InitCommandPipeline(System::Net::WebRequest request, ::ArrayW<System::Net::System__Net__CommandStream__PipelineEntry> commands, bool isAsync) ;

/// @brief Method CheckContinuePipeline addr 0x27fc100 size 0xb4 virtual false final false
 void CheckContinuePipeline() ;

/// @brief Method ContinueCommandPipeline addr 0x27fbac8 size 0x4d8 virtual false final false
 System::IO::Stream ContinueCommandPipeline() ;

/// @brief Method PostSendCommandProcessing addr 0x27fc1c4 size 0x130 virtual false final false
 bool PostSendCommandProcessing(ByRef<System::IO::Stream> stream) ;

/// @brief Method PostReadCommandProcessing addr 0x27fc61c size 0x200 virtual false final false
 bool PostReadCommandProcessing(ByRef<System::IO::Stream> stream) ;

/// @brief Method PipelineCallback addr 0x27fc81c size 0x8 virtual true final false
 System::Net::System__Net__CommandStream__PipelineInstruction PipelineCallback(System::Net::System__Net__CommandStream__PipelineEntry entry, System::Net::ResponseDescription response, bool timeout, ByRef<System::IO::Stream> stream) ;

/// @brief Method ReadCallback addr 0x27fc824 size 0x2d0 virtual false final false
static void ReadCallback(System::IAsyncResult asyncResult) ;

/// @brief Method WriteCallback addr 0x27fd080 size 0x2b4 virtual false final false
static void WriteCallback(System::IAsyncResult asyncResult) ;

/// @brief Method get_Encoding addr 0x27fd334 size 0x8 virtual false final false
 System::Text::Encoding get_Encoding() ;

/// @brief Method set_Encoding addr 0x27fd33c size 0x38 virtual false final false
 void set_Encoding(System::Text::Encoding value) ;

/// @brief Method CheckValid addr 0x27fd374 size 0x8 virtual true final false
 bool CheckValid(System::Net::ResponseDescription response, ByRef<int32_t> validThrough, ByRef<int32_t> completeLength) ;

/// @brief Method ReceiveCommandResponse addr 0x27fc2f4 size 0x328 virtual false final false
 System::Net::ResponseDescription ReceiveCommandResponse() ;

/// @brief Method ReceiveCommandResponseCallback addr 0x27fcb2c size 0x554 virtual false final false
 void ReceiveCommandResponseCallback(System::Net::ReceiveState state, int32_t bytesRead) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__CommandStream__PipelineEntryFlags, "System.Net", "CommandStream/PipelineEntryFlags");
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__CommandStream__PipelineInstruction, "System.Net", "CommandStream/PipelineInstruction");
NEED_NO_BOX(System::Net::CommandStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::CommandStream, "System.Net", "CommandStream");
NEED_NO_BOX(System::Net::System__Net__CommandStream__PipelineEntry);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__CommandStream__PipelineEntry, "System.Net", "CommandStream/PipelineEntry");
