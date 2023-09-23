#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace System::Net {
class ResponseDescription;
}
// Type: System.Net::ResponseDescription
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7888))
// CS Name: System.Net.ResponseDescription
class CORDL_TYPE ResponseDescription : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ResponseDescription() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseDescription", modifiers: " const&", def_value: None }]
constexpr ResponseDescription(ResponseDescription const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResponseDescription", modifiers: "&&", def_value: None }]
constexpr ResponseDescription(ResponseDescription&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResponseDescription(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResponseDescription& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResponseDescription& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResponseDescription& operator=(ResponseDescription&& o) noexcept = default;
  constexpr ResponseDescription& operator=(ResponseDescription const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_Multiline, put=__set_Multiline))  Multiline;

constexpr void __set_Multiline(bool value) ;

constexpr bool __get_Multiline() const;

 int32_t __declspec(property(get=__get_Status, put=__set_Status))  Status;

constexpr void __set_Status(int32_t value) ;

constexpr int32_t __get_Status() const;

 ::StringW __declspec(property(get=__get_StatusDescription, put=__set_StatusDescription))  StatusDescription;

constexpr void __set_StatusDescription(::StringW value) ;

constexpr ::StringW __get_StatusDescription() const;

 System::Text::StringBuilder __declspec(property(get=__get_StatusBuffer, put=__set_StatusBuffer))  StatusBuffer;

constexpr void __set_StatusBuffer(System::Text::StringBuilder value) ;

constexpr System::Text::StringBuilder __get_StatusBuffer() const;

 ::StringW __declspec(property(get=__get_StatusCodeString, put=__set_StatusCodeString))  StatusCodeString;

constexpr void __set_StatusCodeString(::StringW value) ;

constexpr ::StringW __get_StatusCodeString() const;


// Properties

 bool __declspec(property(get=get_PositiveIntermediate))  PositiveIntermediate;

 bool __declspec(property(get=get_PositiveCompletion))  PositiveCompletion;

 bool __declspec(property(get=get_TransientFailure))  TransientFailure;

 bool __declspec(property(get=get_PermanentFailure))  PermanentFailure;

 bool __declspec(property(get=get_InvalidStatusCode))  InvalidStatusCode;


// Methods

/// @brief Method get_PositiveIntermediate addr 0x27fd548 size 0x14 virtual false final false
 bool get_PositiveIntermediate() ;

/// @brief Method get_PositiveCompletion addr 0x27fd55c size 0x14 virtual false final false
 bool get_PositiveCompletion() ;

/// @brief Method get_TransientFailure addr 0x27fd570 size 0x14 virtual false final false
 bool get_TransientFailure() ;

/// @brief Method get_PermanentFailure addr 0x27fd584 size 0x14 virtual false final false
 bool get_PermanentFailure() ;

/// @brief Method get_InvalidStatusCode addr 0x27fd598 size 0x14 virtual false final false
 bool get_InvalidStatusCode() ;

// Ctor Parameters []
explicit ResponseDescription() ;

/// @brief Method .ctor addr 0x27fd5ac size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::ResponseDescription);
DEFINE_IL2CPP_ARG_TYPE(System::Net::ResponseDescription, "System.Net", "ResponseDescription");
