#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/Remoting/Messaging/zzzz__MessageDictionary_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMethodReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class MethodReturnDictionary;
}
// Type: System.Runtime.Remoting.Messaging::MethodReturnDictionary
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3173))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3175))
// CS Name: System.Runtime.Remoting.Messaging.MethodReturnDictionary
class CORDL_TYPE MethodReturnDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MethodReturnDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodReturnDictionary", modifiers: " const&", def_value: None }]
constexpr MethodReturnDictionary(MethodReturnDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodReturnDictionary", modifiers: "&&", def_value: None }]
constexpr MethodReturnDictionary(MethodReturnDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodReturnDictionary(void* ptr) noexcept : System::Runtime::Remoting::Messaging::MessageDictionary(ptr) {
}


  constexpr MethodReturnDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodReturnDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodReturnDictionary& operator=(MethodReturnDictionary&& o) noexcept = default;
  constexpr MethodReturnDictionary& operator=(MethodReturnDictionary const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_InternalReturnKeys, put=__set_InternalReturnKeys))  InternalReturnKeys;

static void __set_InternalReturnKeys(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_InternalReturnKeys() ;

static ::ArrayW<::StringW> __declspec(property(get=__get_InternalExceptionKeys, put=__set_InternalExceptionKeys))  InternalExceptionKeys;

static void __set_InternalExceptionKeys(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_InternalExceptionKeys() ;


// Methods

// Ctor Parameters [CppParam { name: "message", ty: "System::Runtime::Remoting::Messaging::IMethodReturnMessage", modifiers: "", def_value: None }]
explicit MethodReturnDictionary(System::Runtime::Remoting::Messaging::IMethodReturnMessage message) ;

/// @brief Method .ctor addr 0x2344588 size 0xfc virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMethodReturnMessage message) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::MethodReturnDictionary);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::MethodReturnDictionary, "System.Runtime.Remoting.Messaging", "MethodReturnDictionary");
