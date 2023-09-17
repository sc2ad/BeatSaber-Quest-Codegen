#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::ComponentModel {
class InvalidEnumArgumentException;
}
// Type: System.ComponentModel::InvalidEnumArgumentException
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8250))
// CS Name: System.ComponentModel.InvalidEnumArgumentException
class CORDL_TYPE InvalidEnumArgumentException : public ::System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~InvalidEnumArgumentException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidEnumArgumentException", modifiers: " const&", def_value: None }]
constexpr InvalidEnumArgumentException(InvalidEnumArgumentException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InvalidEnumArgumentException", modifiers: "&&", def_value: None }]
constexpr InvalidEnumArgumentException(InvalidEnumArgumentException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InvalidEnumArgumentException(void* ptr) noexcept : ::System::ArgumentException(ptr) {
}


  constexpr InvalidEnumArgumentException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InvalidEnumArgumentException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InvalidEnumArgumentException& operator=(InvalidEnumArgumentException&& o) noexcept = default;
  constexpr InvalidEnumArgumentException& operator=(InvalidEnumArgumentException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InvalidEnumArgumentException() ;

/// @brief Method .ctor addr 0x27724c4 size 0xc virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit InvalidEnumArgumentException(::StringW message) ;

/// @brief Method .ctor addr 0x27724d0 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

// Ctor Parameters [CppParam { name: "argumentName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "invalidValue", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "enumClass", ty: "::System::Type", modifiers: "", def_value: None }]
explicit InvalidEnumArgumentException(::StringW argumentName, int32_t invalidValue, ::System::Type enumClass) ;

/// @brief Method .ctor addr 0x27724d8 size 0xe4 virtual false final false
 void _ctor(::StringW argumentName, int32_t invalidValue, ::System::Type enumClass) ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit InvalidEnumArgumentException(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27725bc size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::InvalidEnumArgumentException);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::InvalidEnumArgumentException, "System.ComponentModel", "InvalidEnumArgumentException");
