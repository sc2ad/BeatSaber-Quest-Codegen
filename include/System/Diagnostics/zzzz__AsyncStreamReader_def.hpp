#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class Decoder;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace System::Diagnostics {
class AsyncStreamReader;
}
// Type: System.Diagnostics::AsyncStreamReader
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7798))
// CS Name: System.Diagnostics.AsyncStreamReader
class CORDL_TYPE AsyncStreamReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~AsyncStreamReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncStreamReader", modifiers: " const&", def_value: None }]
constexpr AsyncStreamReader(AsyncStreamReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncStreamReader", modifiers: "&&", def_value: None }]
constexpr AsyncStreamReader(AsyncStreamReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncStreamReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncStreamReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncStreamReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncStreamReader& operator=(AsyncStreamReader&& o) noexcept = default;
  constexpr AsyncStreamReader& operator=(AsyncStreamReader const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get_stream, put=__set_stream))  stream;

constexpr void __set_stream(System::IO::Stream value) ;

constexpr System::IO::Stream __get_stream() const;

 System::Text::Encoding __declspec(property(get=__get_encoding, put=__set_encoding))  encoding;

constexpr void __set_encoding(System::Text::Encoding value) ;

constexpr System::Text::Encoding __get_encoding() const;

 System::Text::Decoder __declspec(property(get=__get_decoder, put=__set_decoder))  decoder;

constexpr void __set_decoder(System::Text::Decoder value) ;

constexpr System::Text::Decoder __get_decoder() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_byteBuffer, put=__set_byteBuffer))  byteBuffer;

constexpr void __set_byteBuffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_byteBuffer() const;

 ::ArrayW<char16_t> __declspec(property(get=__get_charBuffer, put=__set_charBuffer))  charBuffer;

constexpr void __set_charBuffer(::ArrayW<char16_t> value) ;

constexpr ::ArrayW<char16_t> __get_charBuffer() const;

 bool __declspec(property(get=__get_cancelOperation, put=__set_cancelOperation))  cancelOperation;

constexpr void __set_cancelOperation(bool value) ;

constexpr bool __get_cancelOperation() const;

 System::Threading::ManualResetEvent __declspec(property(get=__get_eofEvent, put=__set_eofEvent))  eofEvent;

constexpr void __set_eofEvent(System::Threading::ManualResetEvent value) ;

constexpr System::Threading::ManualResetEvent __get_eofEvent() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_syncObject, put=__set_syncObject))  syncObject;

constexpr void __set_syncObject(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_syncObject() const;

 System::IAsyncResult __declspec(property(get=__get_asyncReadResult, put=__set_asyncReadResult))  asyncReadResult;

constexpr void __set_asyncReadResult(System::IAsyncResult value) ;

constexpr System::IAsyncResult __get_asyncReadResult() const;


// Methods

/// @brief Method Close addr 0x27dc688 size 0x10 virtual true final false
 void Close() ;

/// @brief Method Dispose addr 0x27dc698 size 0x370 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method CancelOperation addr 0x27dca08 size 0xc virtual false final false
 void CancelOperation() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::AsyncStreamReader);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::AsyncStreamReader, "System.Diagnostics", "AsyncStreamReader");
