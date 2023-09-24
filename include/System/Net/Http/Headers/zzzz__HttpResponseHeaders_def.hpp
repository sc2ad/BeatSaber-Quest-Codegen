#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpResponseHeaders;
}
// Type: System.Net.Http.Headers::HttpResponseHeaders
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14837))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14840))
// CS Name: System.Net.Http.Headers.HttpResponseHeaders
class CORDL_TYPE HttpResponseHeaders : public System::Net::Http::Headers::HttpHeaders {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HttpResponseHeaders() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseHeaders", modifiers: " const&", def_value: None }]
constexpr HttpResponseHeaders(HttpResponseHeaders const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpResponseHeaders", modifiers: "&&", def_value: None }]
constexpr HttpResponseHeaders(HttpResponseHeaders&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpResponseHeaders(void* ptr) noexcept : System::Net::Http::Headers::HttpHeaders(ptr) {
}


  constexpr HttpResponseHeaders& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpResponseHeaders& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpResponseHeaders& operator=(HttpResponseHeaders&& o) noexcept = default;
  constexpr HttpResponseHeaders& operator=(HttpResponseHeaders const& o) noexcept = default;
                


// Methods

static System::Net::Http::Headers::HttpResponseHeaders New_ctor() ;

/// @brief Method .ctor addr 0x26a2708 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::HttpResponseHeaders);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpResponseHeaders, "System.Net.Http.Headers", "HttpResponseHeaders");
