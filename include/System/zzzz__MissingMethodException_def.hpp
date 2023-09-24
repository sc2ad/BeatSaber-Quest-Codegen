#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MissingMemberException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class MissingMethodException;
}
// Type: System::MissingMethodException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2527))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2441))
// CS Name: System.MissingMethodException
class CORDL_TYPE MissingMethodException : public System::MissingMemberException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~MissingMethodException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: " const&", def_value: None }]
constexpr MissingMethodException(MissingMethodException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingMethodException", modifiers: "&&", def_value: None }]
constexpr MissingMethodException(MissingMethodException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissingMethodException(void* ptr) noexcept : System::MissingMemberException(ptr) {
}


  constexpr MissingMethodException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissingMethodException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissingMethodException& operator=(MissingMethodException&& o) noexcept = default;
  constexpr MissingMethodException& operator=(MissingMethodException const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

static System::MissingMethodException New_ctor() ;

/// @brief Method .ctor addr 0x24427fc size 0x5c virtual false final false
 void _ctor() ;

static System::MissingMethodException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2442858 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::MissingMethodException New_ctor(::StringW className, ::StringW methodName) ;

/// @brief Method .ctor addr 0x244287c size 0x2c virtual false final false
 void _ctor(::StringW className, ::StringW methodName) ;

static System::MissingMethodException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24428a8 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x24428b0 size 0x12c virtual true final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MissingMethodException);
DEFINE_IL2CPP_ARG_TYPE(System::MissingMethodException, "System", "MissingMethodException");
