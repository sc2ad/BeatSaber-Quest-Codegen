#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::ComponentModel::Design {
class CheckoutException;
}
// Type: System.ComponentModel.Design::CheckoutException
namespace System::ComponentModel::Design {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3298))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8347))
// CS Name: System.ComponentModel.Design.CheckoutException
class CORDL_TYPE CheckoutException : public System::Runtime::InteropServices::ExternalException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~CheckoutException() = default;

// Ctor Parameters [CppParam { name: "", ty: "CheckoutException", modifiers: " const&", def_value: None }]
constexpr CheckoutException(CheckoutException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CheckoutException", modifiers: "&&", def_value: None }]
constexpr CheckoutException(CheckoutException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CheckoutException(void* ptr) noexcept : System::Runtime::InteropServices::ExternalException(ptr) {
}


  constexpr CheckoutException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CheckoutException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CheckoutException& operator=(CheckoutException&& o) noexcept = default;
  constexpr CheckoutException& operator=(CheckoutException const& o) noexcept = default;
                


// Fields

static System::ComponentModel::Design::CheckoutException __declspec(property(get=__get_Canceled, put=__set_Canceled))  Canceled;

static void __set_Canceled(System::ComponentModel::Design::CheckoutException value) ;

static System::ComponentModel::Design::CheckoutException __get_Canceled() ;


// Methods

// Ctor Parameters []
explicit CheckoutException() ;

/// @brief Method .ctor addr 0x27a817c size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "errorCode", ty: "int32_t", modifiers: "", def_value: None }]
explicit CheckoutException(::StringW message, int32_t errorCode) ;

/// @brief Method .ctor addr 0x27a8184 size 0x8 virtual false final false
 void _ctor(::StringW message, int32_t errorCode) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit CheckoutException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27a818c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel::Design
NEED_NO_BOX(System::ComponentModel::Design::CheckoutException);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Design::CheckoutException, "System.ComponentModel.Design", "CheckoutException");
