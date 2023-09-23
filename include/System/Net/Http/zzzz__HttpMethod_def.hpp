#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace System::Net::Http {
class HttpMethod;
}
// Type: System.Net.Http::HttpMethod
namespace System::Net::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14812))
// CS Name: System.Net.Http.HttpMethod
class CORDL_TYPE HttpMethod : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<System::Net::Http::HttpMethod>
constexpr operator  System::IEquatable_1<System::Net::Http::HttpMethod>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HttpMethod() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpMethod", modifiers: " const&", def_value: None }]
constexpr HttpMethod(HttpMethod const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpMethod", modifiers: "&&", def_value: None }]
constexpr HttpMethod(HttpMethod&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpMethod(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpMethod& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpMethod& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpMethod& operator=(HttpMethod&& o) noexcept = default;
  constexpr HttpMethod& operator=(HttpMethod const& o) noexcept = default;
                


// Fields

static System::Net::Http::HttpMethod __declspec(property(get=__get_delete_method, put=__set_delete_method))  delete_method;

static void __set_delete_method(System::Net::Http::HttpMethod value) ;

static System::Net::Http::HttpMethod __get_delete_method() ;

static System::Net::Http::HttpMethod __declspec(property(get=__get_get_method, put=__set_get_method))  get_method;

static void __set_get_method(System::Net::Http::HttpMethod value) ;

static System::Net::Http::HttpMethod __get_get_method() ;

static System::Net::Http::HttpMethod __declspec(property(get=__get_head_method, put=__set_head_method))  head_method;

static void __set_head_method(System::Net::Http::HttpMethod value) ;

static System::Net::Http::HttpMethod __get_head_method() ;

static System::Net::Http::HttpMethod __declspec(property(get=__get_options_method, put=__set_options_method))  options_method;

static void __set_options_method(System::Net::Http::HttpMethod value) ;

static System::Net::Http::HttpMethod __get_options_method() ;

static System::Net::Http::HttpMethod __declspec(property(get=__get_post_method, put=__set_post_method))  post_method;

static void __set_post_method(System::Net::Http::HttpMethod value) ;

static System::Net::Http::HttpMethod __get_post_method() ;

static System::Net::Http::HttpMethod __declspec(property(get=__get_put_method, put=__set_put_method))  put_method;

static void __set_put_method(System::Net::Http::HttpMethod value) ;

static System::Net::Http::HttpMethod __get_put_method() ;

static System::Net::Http::HttpMethod __declspec(property(get=__get_trace_method, put=__set_trace_method))  trace_method;

static void __set_trace_method(System::Net::Http::HttpMethod value) ;

static System::Net::Http::HttpMethod __get_trace_method() ;

 ::StringW __declspec(property(get=__get_method, put=__set_method))  method;

constexpr void __set_method(::StringW value) ;

constexpr ::StringW __get_method() const;


// Properties

static System::Net::Http::HttpMethod __declspec(property(get=get_Get))  Get;

 ::StringW __declspec(property(get=get_Method))  Method;

static System::Net::Http::HttpMethod __declspec(property(get=get_Post))  Post;


// Methods

// Ctor Parameters [CppParam { name: "method", ty: "::StringW", modifiers: "", def_value: None }]
explicit HttpMethod(::StringW method) ;

/// @brief Method .ctor addr 0x26a1af0 size 0x8c virtual false final false
 void _ctor(::StringW method) ;

/// @brief Method get_Get addr 0x26a1c88 size 0x58 virtual false final false
static System::Net::Http::HttpMethod get_Get() ;

/// @brief Method get_Method addr 0x26a1ce0 size 0x8 virtual false final false
 ::StringW get_Method() ;

/// @brief Method get_Post addr 0x26a1ce8 size 0x58 virtual false final false
static System::Net::Http::HttpMethod get_Post() ;

/// @brief Method op_Equality addr 0x26a1d40 size 0x18 virtual false final false
static bool op_Equality(System::Net::Http::HttpMethod left, System::Net::Http::HttpMethod right) ;

/// @brief Method Equals addr 0x26a1d58 size 0x24 virtual true final true
 bool Equals(System::Net::Http::HttpMethod other) ;

/// @brief Method Equals addr 0x26a1d7c size 0x8c virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26a1e08 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x26a1e28 size 0x8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::HttpMethod);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::HttpMethod, "System.Net.Http", "HttpMethod");
