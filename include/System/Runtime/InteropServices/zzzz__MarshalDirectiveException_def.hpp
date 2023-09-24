#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class MarshalDirectiveException;
}
// Type: System.Runtime.InteropServices::MarshalDirectiveException
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3300))
// CS Name: System.Runtime.InteropServices.MarshalDirectiveException
class CORDL_TYPE MarshalDirectiveException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~MarshalDirectiveException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MarshalDirectiveException", modifiers: " const&", def_value: None }]
constexpr MarshalDirectiveException(MarshalDirectiveException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MarshalDirectiveException", modifiers: "&&", def_value: None }]
constexpr MarshalDirectiveException(MarshalDirectiveException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MarshalDirectiveException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr MarshalDirectiveException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MarshalDirectiveException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MarshalDirectiveException& operator=(MarshalDirectiveException&& o) noexcept = default;
  constexpr MarshalDirectiveException& operator=(MarshalDirectiveException const& o) noexcept = default;
                


// Methods

static System::Runtime::InteropServices::MarshalDirectiveException New_ctor() ;

/// @brief Method .ctor addr 0x236a548 size 0x5c virtual false final false
 void _ctor() ;

static System::Runtime::InteropServices::MarshalDirectiveException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x236a5a4 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::Runtime::InteropServices::MarshalDirectiveException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x236a5c8 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::MarshalDirectiveException);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::MarshalDirectiveException, "System.Runtime.InteropServices", "MarshalDirectiveException");
