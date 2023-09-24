#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Net::Http {
class HttpRequestException;
}
// Type: System.Net.Http::HttpRequestException
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14813))
// CS Name: System.Net.Http.HttpRequestException
class CORDL_TYPE HttpRequestException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~HttpRequestException() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestException", modifiers: " const&", def_value: None }]
constexpr HttpRequestException(HttpRequestException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestException", modifiers: "&&", def_value: None }]
constexpr HttpRequestException(HttpRequestException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpRequestException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr HttpRequestException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpRequestException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpRequestException& operator=(HttpRequestException&& o) noexcept = default;
  constexpr HttpRequestException& operator=(HttpRequestException const& o) noexcept = default;
                


// Methods

static System::Net::Http::HttpRequestException New_ctor() ;

/// @brief Method .ctor addr 0x26a1fe4 size 0x58 virtual false final false
 void _ctor() ;

static System::Net::Http::HttpRequestException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x26a123c size 0x68 virtual false final false
 void _ctor(::StringW message) ;

static System::Net::Http::HttpRequestException New_ctor(::StringW message, System::Exception inner) ;

/// @brief Method .ctor addr 0x269eb78 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception inner) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpRequestException);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpRequestException, "System.Net.Http", "HttpRequestException");
