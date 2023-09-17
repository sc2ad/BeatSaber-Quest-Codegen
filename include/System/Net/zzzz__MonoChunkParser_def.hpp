#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System::Text {
class StringBuilder;
}
namespace System::Net {
class WebHeaderCollection;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Net {
struct ____System__Net__MonoChunkParser__State;
}
namespace System::Net {
class MonoChunkParser;
}
namespace System::Net {
class ____System__Net__MonoChunkParser__Chunk;
}
// Type: ::State
namespace System::Net {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8042))
// CS Name: System.Net.MonoChunkParser::State
struct CORDL_TYPE ____System__Net__MonoChunkParser__State : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ____System__Net__MonoChunkParser__State(int32_t value__) noexcept;


                    constexpr ____System__Net__MonoChunkParser__State(____System__Net__MonoChunkParser__State const&) = default;
                    constexpr ____System__Net__MonoChunkParser__State(____System__Net__MonoChunkParser__State&&) = default;
                    constexpr ____System__Net__MonoChunkParser__State& operator=(____System__Net__MonoChunkParser__State const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Net__MonoChunkParser__State& operator=(____System__Net__MonoChunkParser__State&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__MonoChunkParser__State(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______System__Net__MonoChunkParser__State_Unwrapped : int32_t {
__None = 0,
__PartialSize = 1,
__Body = 2,
__BodyFinished = 3,
__Trailer = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______System__Net__MonoChunkParser__State_Unwrapped () const noexcept {
return std::bit_cast<______System__Net__MonoChunkParser__State_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static ::System::Net::____System__Net__MonoChunkParser__State const None;

/// @brief Field PartialSize offset 0
static ::System::Net::____System__Net__MonoChunkParser__State const PartialSize;

/// @brief Field Body offset 0
static ::System::Net::____System__Net__MonoChunkParser__State const Body;

/// @brief Field BodyFinished offset 0
static ::System::Net::____System__Net__MonoChunkParser__State const BodyFinished;

/// @brief Field Trailer offset 0
static ::System::Net::____System__Net__MonoChunkParser__State const Trailer;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net
// Type: ::Chunk
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8043))
// CS Name: System.Net.MonoChunkParser::Chunk
class CORDL_TYPE ____System__Net__MonoChunkParser__Chunk : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~____System__Net__MonoChunkParser__Chunk() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__MonoChunkParser__Chunk", modifiers: " const&", def_value: None }]
constexpr ____System__Net__MonoChunkParser__Chunk(____System__Net__MonoChunkParser__Chunk const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__MonoChunkParser__Chunk", modifiers: "&&", def_value: None }]
constexpr ____System__Net__MonoChunkParser__Chunk(____System__Net__MonoChunkParser__Chunk&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__MonoChunkParser__Chunk(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__MonoChunkParser__Chunk& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__MonoChunkParser__Chunk& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__MonoChunkParser__Chunk& operator=(____System__Net__MonoChunkParser__Chunk&& o) noexcept = default;
  constexpr ____System__Net__MonoChunkParser__Chunk& operator=(____System__Net__MonoChunkParser__Chunk const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_Bytes, put=__set_Bytes))  Bytes;

constexpr void __set_Bytes(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Bytes() const;

 int32_t __declspec(property(get=__get_Offset, put=__set_Offset))  Offset;

constexpr void __set_Offset(int32_t value) ;

constexpr int32_t __get_Offset() const;


// Methods

// Ctor Parameters [CppParam { name: "chunk", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }]
explicit ____System__Net__MonoChunkParser__Chunk(::ArrayW<uint8_t> chunk) ;

/// @brief Method .ctor addr 0x28421f4 size 0x28 virtual false final false
 void _ctor(::ArrayW<uint8_t> chunk) ;

/// @brief Method Read addr 0x28416f8 size 0x60 virtual false final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::MonoChunkParser
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8044))
// CS Name: System.Net.MonoChunkParser
class CORDL_TYPE MonoChunkParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Chunk = ::System::Net::____System__Net__MonoChunkParser__Chunk;

using State = ::System::Net::____System__Net__MonoChunkParser__State;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoChunkParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: " const&", def_value: None }]
constexpr MonoChunkParser(MonoChunkParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoChunkParser", modifiers: "&&", def_value: None }]
constexpr MonoChunkParser(MonoChunkParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoChunkParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoChunkParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoChunkParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoChunkParser& operator=(MonoChunkParser&& o) noexcept = default;
  constexpr MonoChunkParser& operator=(MonoChunkParser const& o) noexcept = default;
                


// Fields

 ::System::Net::WebHeaderCollection __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::System::Net::WebHeaderCollection value) ;

constexpr ::System::Net::WebHeaderCollection __get_headers() const;

 int32_t __declspec(property(get=__get_chunkSize, put=__set_chunkSize))  chunkSize;

constexpr void __set_chunkSize(int32_t value) ;

constexpr int32_t __get_chunkSize() const;

 int32_t __declspec(property(get=__get_chunkRead, put=__set_chunkRead))  chunkRead;

constexpr void __set_chunkRead(int32_t value) ;

constexpr int32_t __get_chunkRead() const;

 int32_t __declspec(property(get=__get_totalWritten, put=__set_totalWritten))  totalWritten;

constexpr void __set_totalWritten(int32_t value) ;

constexpr int32_t __get_totalWritten() const;

 ::System::Net::____System__Net__MonoChunkParser__State __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(::System::Net::____System__Net__MonoChunkParser__State value) ;

constexpr ::System::Net::____System__Net__MonoChunkParser__State __get_state() const;

 ::System::Text::StringBuilder __declspec(property(get=__get_saved, put=__set_saved))  saved;

constexpr void __set_saved(::System::Text::StringBuilder value) ;

constexpr ::System::Text::StringBuilder __get_saved() const;

 bool __declspec(property(get=__get_sawCR, put=__set_sawCR))  sawCR;

constexpr void __set_sawCR(bool value) ;

constexpr bool __get_sawCR() const;

 bool __declspec(property(get=__get_gotit, put=__set_gotit))  gotit;

constexpr void __set_gotit(bool value) ;

constexpr bool __get_gotit() const;

 int32_t __declspec(property(get=__get_trailerState, put=__set_trailerState))  trailerState;

constexpr void __set_trailerState(int32_t value) ;

constexpr int32_t __get_trailerState() const;

 ::System::Collections::ArrayList __declspec(property(get=__get_chunks, put=__set_chunks))  chunks;

constexpr void __set_chunks(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_chunks() const;


// Properties

 bool __declspec(property(get=get_WantMore))  WantMore;

 bool __declspec(property(get=get_DataAvailable))  DataAvailable;

 int32_t __declspec(property(get=get_ChunkLeft))  ChunkLeft;


// Methods

// Ctor Parameters [CppParam { name: "headers", ty: "::System::Net::WebHeaderCollection", modifiers: "", def_value: None }]
explicit MonoChunkParser(::System::Net::WebHeaderCollection headers) ;

/// @brief Method .ctor addr 0x2841324 size 0xb8 virtual false final false
 void _ctor(::System::Net::WebHeaderCollection headers) ;

/// @brief Method Read addr 0x28413dc size 0x4 virtual false final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method ReadFromChunks addr 0x28413e0 size 0x318 virtual false final false
 int32_t ReadFromChunks(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Write addr 0x2841758 size 0x20 virtual false final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method InternalWrite addr 0x2841778 size 0x13c virtual false final false
 void InternalWrite(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size) ;

/// @brief Method get_WantMore addr 0x28420c0 size 0x28 virtual false final false
 bool get_WantMore() ;

/// @brief Method get_DataAvailable addr 0x28420e8 size 0x100 virtual false final false
 bool get_DataAvailable() ;

/// @brief Method get_ChunkLeft addr 0x28421e8 size 0xc virtual false final false
 int32_t get_ChunkLeft() ;

/// @brief Method ReadBody addr 0x2841bbc size 0x138 virtual false final false
 ::System::Net::____System__Net__MonoChunkParser__State ReadBody(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size) ;

/// @brief Method GetChunkSize addr 0x28418b4 size 0x308 virtual false final false
 ::System::Net::____System__Net__MonoChunkParser__State GetChunkSize(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size) ;

/// @brief Method RemoveChunkExtension addr 0x2842274 size 0x48 virtual false final false
static ::StringW RemoveChunkExtension(::StringW input) ;

/// @brief Method ReadCRLF addr 0x2841cf4 size 0x100 virtual false final false
 ::System::Net::____System__Net__MonoChunkParser__State ReadCRLF(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size) ;

/// @brief Method ReadTrailer addr 0x2841df4 size 0x2cc virtual false final false
 ::System::Net::____System__Net__MonoChunkParser__State ReadTrailer(::ArrayW<uint8_t> buffer, ByRef<int32_t> offset, int32_t size) ;

/// @brief Method ThrowProtocolViolation addr 0x284221c size 0x58 virtual false final false
static void ThrowProtocolViolation(::StringW message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__MonoChunkParser__State, "System.Net", "MonoChunkParser/State");
NEED_NO_BOX(::System::Net::MonoChunkParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::MonoChunkParser, "System.Net", "MonoChunkParser");
NEED_NO_BOX(::System::Net::____System__Net__MonoChunkParser__Chunk);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::____System__Net__MonoChunkParser__Chunk, "System.Net", "MonoChunkParser/Chunk");
