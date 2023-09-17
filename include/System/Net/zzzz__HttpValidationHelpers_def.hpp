#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Net {
class HttpValidationHelpers;
}
// Type: System.Net::HttpValidationHelpers
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7873))
// CS Name: System.Net.HttpValidationHelpers
class CORDL_TYPE HttpValidationHelpers : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~HttpValidationHelpers() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: " const&", def_value: None }]
constexpr HttpValidationHelpers(HttpValidationHelpers const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpValidationHelpers", modifiers: "&&", def_value: None }]
constexpr HttpValidationHelpers(HttpValidationHelpers&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpValidationHelpers(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpValidationHelpers& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpValidationHelpers& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpValidationHelpers& operator=(HttpValidationHelpers&& o) noexcept = default;
  constexpr HttpValidationHelpers& operator=(HttpValidationHelpers const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_s_httpTrimCharacters, put=__set_s_httpTrimCharacters))  s_httpTrimCharacters;

static void __set_s_httpTrimCharacters(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_s_httpTrimCharacters() ;


// Methods

/// @brief Method IsInvalidMethodOrHeaderString addr 0x27f7620 size 0x100 virtual false final false
static bool IsInvalidMethodOrHeaderString(::StringW stringValue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::HttpValidationHelpers);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::HttpValidationHelpers, "System.Net", "HttpValidationHelpers");
