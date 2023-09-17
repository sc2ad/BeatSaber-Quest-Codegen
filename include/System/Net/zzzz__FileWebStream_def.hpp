#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__FileStream_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class FileWebRequest;
}
namespace System::IO {
struct FileMode;
}
namespace System {
class AsyncCallback;
}
namespace System::Net {
class ICloseEx;
}
namespace System::Net {
struct CloseExState;
}
namespace System {
class IAsyncResult;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
struct FileAccess;
}
// Forward declare root types
namespace System::Net {
class FileWebStream;
}
// Type: System.Net::FileWebStream
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3612))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7987))
// CS Name: System.Net.FileWebStream
class CORDL_TYPE FileWebStream : public ::System::IO::FileStream {
public:
// Declarations
/// @brief Convert operator to ::System::Net::ICloseEx
constexpr operator  ::System::Net::ICloseEx() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~FileWebStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebStream", modifiers: " const&", def_value: None }]
constexpr FileWebStream(FileWebStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FileWebStream", modifiers: "&&", def_value: None }]
constexpr FileWebStream(FileWebStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FileWebStream(void* ptr) noexcept : ::System::IO::FileStream(ptr) {
}


  constexpr FileWebStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FileWebStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FileWebStream& operator=(FileWebStream&& o) noexcept = default;
  constexpr FileWebStream& operator=(FileWebStream const& o) noexcept = default;
                


// Fields

 ::System::Net::FileWebRequest __declspec(property(get=__get_m_request, put=__set_m_request))  m_request;

constexpr void __set_m_request(::System::Net::FileWebRequest value) ;

constexpr ::System::Net::FileWebRequest __get_m_request() const;


// Methods

// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::FileWebRequest", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "sharing", ty: "::System::IO::FileShare", modifiers: "", def_value: None }]
explicit FileWebStream(::System::Net::FileWebRequest request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing) ;

/// @brief Method .ctor addr 0x2823b14 size 0x9c virtual false final false
 void _ctor(::System::Net::FileWebRequest request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing) ;

// Ctor Parameters [CppParam { name: "request", ty: "::System::Net::FileWebRequest", modifiers: "", def_value: None }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "mode", ty: "::System::IO::FileMode", modifiers: "", def_value: None }, CppParam { name: "access", ty: "::System::IO::FileAccess", modifiers: "", def_value: None }, CppParam { name: "sharing", ty: "::System::IO::FileShare", modifiers: "", def_value: None }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "async", ty: "bool", modifiers: "", def_value: None }]
explicit FileWebStream(::System::Net::FileWebRequest request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing, int32_t length, bool async) ;

/// @brief Method .ctor addr 0x2824784 size 0xb4 virtual false final false
 void _ctor(::System::Net::FileWebRequest request, ::StringW path, ::System::IO::FileMode mode, ::System::IO::FileAccess access, ::System::IO::FileShare sharing, int32_t length, bool async) ;

/// @brief Method Dispose addr 0x2824838 size 0xb0 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method System.Net.ICloseEx.CloseEx addr 0x28248e8 size 0x3c virtual true final true
 void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState closeState) ;

/// @brief Method Read addr 0x2824924 size 0xc8 virtual true final false
 int32_t Read(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method Write addr 0x2824a6c size 0xc8 virtual true final false
 void Write(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size) ;

/// @brief Method BeginRead addr 0x2824b34 size 0xe0 virtual true final false
 ::System::IAsyncResult BeginRead(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndRead addr 0x2824c14 size 0xa0 virtual true final false
 int32_t EndRead(::System::IAsyncResult ar) ;

/// @brief Method BeginWrite addr 0x2824cb4 size 0xe0 virtual true final false
 ::System::IAsyncResult BeginWrite(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndWrite addr 0x2824d94 size 0xa0 virtual true final false
 void EndWrite(::System::IAsyncResult ar) ;

/// @brief Method CheckError addr 0x28249ec size 0x80 virtual false final false
 void CheckError() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::FileWebStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebStream, "System.Net", "FileWebStream");
