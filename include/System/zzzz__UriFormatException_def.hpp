#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__FormatException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System {
class UriFormatException;
}
// Type: System::UriFormatException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2382))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7727))
// CS Name: System.UriFormatException
class CORDL_TYPE UriFormatException : public ::System::FormatException {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~UriFormatException() = default;

// Ctor Parameters [CppParam { name: "", ty: "UriFormatException", modifiers: " const&", def_value: None }]
constexpr UriFormatException(UriFormatException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UriFormatException", modifiers: "&&", def_value: None }]
constexpr UriFormatException(UriFormatException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UriFormatException(void* ptr) noexcept : ::System::FormatException(ptr) {
}


  constexpr UriFormatException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UriFormatException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UriFormatException& operator=(UriFormatException&& o) noexcept = default;
  constexpr UriFormatException& operator=(UriFormatException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UriFormatException() ;

/// @brief Method .ctor addr 0x27b8024 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "textString", ty: "::StringW", modifiers: "", def_value: None }]
explicit UriFormatException(::StringW textString) ;

/// @brief Method .ctor addr 0x27b6204 size 0x8 virtual false final false
 void _ctor(::StringW textString) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit UriFormatException(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x27b802c size 0x8 virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x27b8034 size 0x8 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::UriFormatException);
DEFINE_IL2CPP_ARG_TYPE(::System::UriFormatException, "System", "UriFormatException");
