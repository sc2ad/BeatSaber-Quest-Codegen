#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace System::Net::Security {
class AuthenticatedStream;
}
// Type: System.Net.Security::AuthenticatedStream
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8215))
// CS Name: System.Net.Security.AuthenticatedStream
class CORDL_TYPE AuthenticatedStream : public System::IO::Stream {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~AuthenticatedStream() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedStream", modifiers: " const&", def_value: None }]
constexpr AuthenticatedStream(AuthenticatedStream const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthenticatedStream", modifiers: "&&", def_value: None }]
constexpr AuthenticatedStream(AuthenticatedStream&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthenticatedStream(void* ptr) noexcept : System::IO::Stream(ptr) {
}


  constexpr AuthenticatedStream& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthenticatedStream& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthenticatedStream& operator=(AuthenticatedStream&& o) noexcept = default;
  constexpr AuthenticatedStream& operator=(AuthenticatedStream const& o) noexcept = default;
                


// Fields

 System::IO::Stream __declspec(property(get=__get__InnerStream, put=__set__InnerStream))  _InnerStream;

constexpr void __set__InnerStream(System::IO::Stream value) ;

constexpr System::IO::Stream __get__InnerStream() const;

 bool __declspec(property(get=__get__LeaveStreamOpen, put=__set__LeaveStreamOpen))  _LeaveStreamOpen;

constexpr void __set__LeaveStreamOpen(bool value) ;

constexpr bool __get__LeaveStreamOpen() const;


// Properties

 System::IO::Stream __declspec(property(get=get_InnerStream))  InnerStream;

 bool __declspec(property(get=get_IsAuthenticated))  IsAuthenticated;


// Methods

// Ctor Parameters [CppParam { name: "innerStream", ty: "System::IO::Stream", modifiers: "", def_value: None }, CppParam { name: "leaveInnerStreamOpen", ty: "bool", modifiers: "", def_value: None }]
explicit AuthenticatedStream(System::IO::Stream innerStream, bool leaveInnerStreamOpen) ;

/// @brief Method .ctor addr 0x276cdf4 size 0x198 virtual false final false
 void _ctor(System::IO::Stream innerStream, bool leaveInnerStreamOpen) ;

/// @brief Method get_InnerStream addr 0x276cf8c size 0x8 virtual false final false
 System::IO::Stream get_InnerStream() ;

/// @brief Method Dispose addr 0x276cf94 size 0xe8 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method get_IsAuthenticated addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_IsAuthenticated() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Security
NEED_NO_BOX(System::Net::Security::AuthenticatedStream);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Security::AuthenticatedStream, "System.Net.Security", "AuthenticatedStream");
