#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class COMException;
}
// Type: System.Runtime.InteropServices::COMException
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3298))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3304))
// CS Name: System.Runtime.InteropServices.COMException
class CORDL_TYPE COMException : public System::Runtime::InteropServices::ExternalException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~COMException() = default;

// Ctor Parameters [CppParam { name: "", ty: "COMException", modifiers: " const&", def_value: None }]
constexpr COMException(COMException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "COMException", modifiers: "&&", def_value: None }]
constexpr COMException(COMException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit COMException(void* ptr) noexcept : System::Runtime::InteropServices::ExternalException(ptr) {
}


  constexpr COMException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr COMException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr COMException& operator=(COMException&& o) noexcept = default;
  constexpr COMException& operator=(COMException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit COMException() ;

/// @brief Method .ctor addr 0x236a9b0 size 0x4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit COMException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x236a9b4 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method ToString addr 0x236a9bc size 0x1e4 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::InteropServices
NEED_NO_BOX(System::Runtime::InteropServices::COMException);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::COMException, "System.Runtime.InteropServices", "COMException");
