#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
class IDisposable;
}
namespace System::Net::Security {
class SslClientAuthenticationOptions;
}
// Forward declare root types
namespace System::Net::Http {
class IMonoHttpClientHandler;
}
// Type: System.Net.Http::IMonoHttpClientHandler
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14795))
// CS Name: System.Net.Http.IMonoHttpClientHandler
class CORDL_TYPE IMonoHttpClientHandler : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

~IMonoHttpClientHandler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMonoHttpClientHandler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 System::Net::Security::SslClientAuthenticationOptions __declspec(property(get=get_SslOptions, put=set_SslOptions))  SslOptions;


// Methods

/// @brief Method get_SslOptions addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Net::Security::SslClientAuthenticationOptions get_SslOptions() ;

/// @brief Method set_SslOptions addr 0x0 size 0xffffffffffffffff virtual true final false
 void set_SslOptions(System::Net::Security::SslClientAuthenticationOptions value) ;

/// @brief Method SendAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken) ;

/// @brief Method SetWebRequestTimeout addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetWebRequestTimeout(System::TimeSpan timeout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::IMonoHttpClientHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::IMonoHttpClientHandler, "System.Net.Http", "IMonoHttpClientHandler");
