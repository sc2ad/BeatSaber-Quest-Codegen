#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform::Models {
class Error;
}
// Type: Oculus.Platform.Models::Error
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13413))
// CS Name: Oculus.Platform.Models.Error
class CORDL_TYPE Error : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Error() = default;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: " const&", def_value: None }]
constexpr Error(Error const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
constexpr Error(Error&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Error(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Error& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Error& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Error& operator=(Error&& o) noexcept = default;
  constexpr Error& operator=(Error const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_Code, put=__set_Code))  Code;

constexpr void __set_Code(int32_t value) ;

constexpr int32_t __get_Code() const;

 int32_t __declspec(property(get=__get_HttpCode, put=__set_HttpCode))  HttpCode;

constexpr void __set_HttpCode(int32_t value) ;

constexpr int32_t __get_HttpCode() const;

 ::StringW __declspec(property(get=__get_Message, put=__set_Message))  Message;

constexpr void __set_Message(::StringW value) ;

constexpr ::StringW __get_Message() const;


// Methods

static Oculus::Platform::Models::Error New_ctor(int32_t code, ::StringW message, int32_t httpCode) ;

/// @brief Method .ctor addr 0x259eb20 size 0x3c virtual false final false
 void _ctor(int32_t code, ::StringW message, int32_t httpCode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(Oculus::Platform::Models::Error);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Error, "Oculus.Platform.Models", "Error");
