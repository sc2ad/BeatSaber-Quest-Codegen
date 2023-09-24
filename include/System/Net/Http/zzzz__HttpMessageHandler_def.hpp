#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net::Http {
class HttpResponseMessage;
}
namespace System::Net::Http {
class HttpRequestMessage;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Net::Http {
class HttpMessageHandler;
}
// Type: System.Net.Http::HttpMessageHandler
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14810))
// CS Name: System.Net.Http.HttpMessageHandler
class CORDL_TYPE HttpMessageHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HttpMessageHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpMessageHandler", modifiers: " const&", def_value: None }]
constexpr HttpMessageHandler(HttpMessageHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpMessageHandler", modifiers: "&&", def_value: None }]
constexpr HttpMessageHandler(HttpMessageHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpMessageHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpMessageHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpMessageHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpMessageHandler& operator=(HttpMessageHandler&& o) noexcept = default;
  constexpr HttpMessageHandler& operator=(HttpMessageHandler const& o) noexcept = default;
                


// Methods

/// @brief Method Dispose addr 0x26a1ad0 size 0x10 virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x269b2a4 size 0x4 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method SendAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<System::Net::Http::HttpResponseMessage> SendAsync(System::Net::Http::HttpRequestMessage request, System::Threading::CancellationToken cancellationToken) ;

static System::Net::Http::HttpMessageHandler New_ctor() ;

/// @brief Method .ctor addr 0x269af68 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpMessageHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMessageHandler, "System.Net.Http", "HttpMessageHandler");
