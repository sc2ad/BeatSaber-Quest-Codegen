#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Net {
class ValidationHelper;
}
// Type: System.Net::ValidationHelper
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7926))
// CS Name: System.Net.ValidationHelper
class CORDL_TYPE ValidationHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ValidationHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationHelper", modifiers: " const&", def_value: None }]
constexpr ValidationHelper(ValidationHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ValidationHelper", modifiers: "&&", def_value: None }]
constexpr ValidationHelper(ValidationHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ValidationHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ValidationHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ValidationHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ValidationHelper& operator=(ValidationHelper&& o) noexcept = default;
  constexpr ValidationHelper& operator=(ValidationHelper const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_EmptyArray, put=__set_EmptyArray))  EmptyArray;

static void __set_EmptyArray(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_EmptyArray() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_InvalidMethodChars, put=__set_InvalidMethodChars))  InvalidMethodChars;

static void __set_InvalidMethodChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_InvalidMethodChars() ;

static ::ArrayW<char16_t> __declspec(property(get=__get_InvalidParamChars, put=__set_InvalidParamChars))  InvalidParamChars;

static void __set_InvalidParamChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_InvalidParamChars() ;


// Methods

/// @brief Method MakeStringNull addr 0x280c720 size 0x14 virtual false final false
static ::StringW MakeStringNull(::StringW stringValue) ;

/// @brief Method IsBlankString addr 0x280c734 size 0x1c virtual false final false
static bool IsBlankString(::StringW stringValue) ;

/// @brief Method ValidateTcpPort addr 0x280c750 size 0xc virtual false final false
static bool ValidateTcpPort(int32_t port) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ValidationHelper);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ValidationHelper, "System.Net", "ValidationHelper");
