#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include <cstdint>
namespace System::Net::Http::Headers {
class MediaTypeHeaderValue;
}
namespace System::Net::Http {
class HttpContent;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpContentHeaders;
}
// Type: System.Net.Http.Headers::HttpContentHeaders
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14837))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14832))
// CS Name: System.Net.Http.Headers.HttpContentHeaders
class CORDL_TYPE HttpContentHeaders : public System::Net::Http::Headers::HttpHeaders {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HttpContentHeaders() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpContentHeaders", modifiers: " const&", def_value: None }]
constexpr HttpContentHeaders(HttpContentHeaders const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpContentHeaders", modifiers: "&&", def_value: None }]
constexpr HttpContentHeaders(HttpContentHeaders&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpContentHeaders(void* ptr) noexcept : System::Net::Http::Headers::HttpHeaders(ptr) {
}


  constexpr HttpContentHeaders& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpContentHeaders& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpContentHeaders& operator=(HttpContentHeaders&& o) noexcept = default;
  constexpr HttpContentHeaders& operator=(HttpContentHeaders const& o) noexcept = default;
                


// Fields

 System::Net::Http::HttpContent __declspec(property(get=__get_content, put=__set_content))  content;

constexpr void __set_content(System::Net::Http::HttpContent value) ;

constexpr System::Net::Http::HttpContent __get_content() const;


// Properties

 System::Nullable_1<int64_t> __declspec(property(get=get_ContentLength))  ContentLength;

 System::Net::Http::Headers::MediaTypeHeaderValue __declspec(property(get=get_ContentType, put=set_ContentType))  ContentType;


// Methods

// Ctor Parameters [CppParam { name: "content", ty: "System::Net::Http::HttpContent", modifiers: "", def_value: None }]
explicit HttpContentHeaders(System::Net::Http::HttpContent content) ;

/// @brief Method .ctor addr 0x26a0d68 size 0x70 virtual false final false
 void _ctor(System::Net::Http::HttpContent content) ;

/// @brief Method get_ContentLength addr 0x269e970 size 0x128 virtual false final false
 System::Nullable_1<int64_t> get_ContentLength() ;

/// @brief Method get_ContentType addr 0x26a18fc size 0x68 virtual false final false
 System::Net::Http::Headers::MediaTypeHeaderValue get_ContentType() ;

/// @brief Method set_ContentType addr 0x26a2f2c size 0x74 virtual false final false
 void set_ContentType(System::Net::Http::Headers::MediaTypeHeaderValue value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::HttpContentHeaders);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpContentHeaders, "System.Net.Http.Headers", "HttpContentHeaders");
