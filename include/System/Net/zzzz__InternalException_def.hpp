#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
// Forward declare root types
namespace System::Net {
class InternalException;
}
// Type: System.Net::InternalException
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7924))
// CS Name: System.Net.InternalException
class CORDL_TYPE InternalException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~InternalException() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalException", modifiers: " const&", def_value: None }]
constexpr InternalException(InternalException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalException", modifiers: "&&", def_value: None }]
constexpr InternalException(InternalException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr InternalException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalException& operator=(InternalException&& o) noexcept = default;
  constexpr InternalException& operator=(InternalException const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit InternalException() ;

/// @brief Method .ctor addr 0x280c054 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::InternalException);
DEFINE_IL2CPP_ARG_TYPE(System::Net::InternalException, "System.Net", "InternalException");
