#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading {
struct CancellationToken;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
class IDisposable;
}
namespace System::Net::Http {
class HttpMessageHandler;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
// Forward declare root types
namespace System::Net::Http {
class HttpMessageInvoker;
}
// Type: System.Net.Http::HttpMessageInvoker
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14811))
// CS Name: System.Net.Http.HttpMessageInvoker
class CORDL_TYPE HttpMessageInvoker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HttpMessageInvoker() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpMessageInvoker", modifiers: " const&", def_value: None }]
constexpr HttpMessageInvoker(HttpMessageInvoker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpMessageInvoker", modifiers: "&&", def_value: None }]
constexpr HttpMessageInvoker(HttpMessageInvoker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpMessageInvoker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpMessageInvoker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpMessageInvoker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpMessageInvoker& operator=(HttpMessageInvoker&& o) noexcept = default;
  constexpr HttpMessageInvoker& operator=(HttpMessageInvoker const& o) noexcept = default;
                


// Fields

 System::Net::Http::HttpMessageHandler __declspec(property(get=__get_handler, put=__set_handler))  handler;

constexpr void __set_handler(System::Net::Http::HttpMessageHandler value) ;

constexpr System::Net::Http::HttpMessageHandler __get_handler() const;

 bool __declspec(property(get=__get_disposeHandler, put=__set_disposeHandler))  disposeHandler;

constexpr void __set_disposeHandler(bool value) ;

constexpr bool __get_disposeHandler() const;


// Methods

static System::Net::Http::HttpMessageInvoker New_ctor(System::Net::Http::HttpMessageHandler handler, bool disposeHandler) ;

/// @brief Method .ctor addr 0x269f3a4 size 0x84 virtual false final false
 void _ctor(System::Net::Http::HttpMessageHandler handler, bool disposeHandler) ;

/// @brief Method Dispose addr 0x26a1ae0 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x269f5d0 size 0x38 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method SendAsync addr 0x26a0014 size 0x20 virtual true final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpMessageInvoker);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMessageInvoker, "System.Net.Http", "HttpMessageInvoker");
