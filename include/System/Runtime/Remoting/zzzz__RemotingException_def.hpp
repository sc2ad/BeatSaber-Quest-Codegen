#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class RemotingException;
}
// Type: System.Runtime.Remoting::RemotingException
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3065))
// CS Name: System.Runtime.Remoting.RemotingException
class CORDL_TYPE RemotingException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~RemotingException() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingException", modifiers: " const&", def_value: None }]
constexpr RemotingException(RemotingException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemotingException", modifiers: "&&", def_value: None }]
constexpr RemotingException(RemotingException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemotingException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr RemotingException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemotingException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemotingException& operator=(RemotingException&& o) noexcept = default;
  constexpr RemotingException& operator=(RemotingException const& o) noexcept = default;
                


// Methods

static System::Runtime::Remoting::RemotingException New_ctor() ;

/// @brief Method .ctor addr 0x2322704 size 0x8 virtual false final false
 void _ctor() ;

static System::Runtime::Remoting::RemotingException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2319c88 size 0x8 virtual false final false
 void _ctor(::StringW message) ;

static System::Runtime::Remoting::RemotingException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x232270c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static System::Runtime::Remoting::RemotingException New_ctor(::StringW message, System::Exception InnerException) ;

/// @brief Method .ctor addr 0x23204dc size 0x8 virtual false final false
 void _ctor(::StringW message, System::Exception InnerException) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::RemotingException);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::RemotingException, "System.Runtime.Remoting", "RemotingException");
