#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class MethodBase;
}
namespace System::Runtime::Remoting::Messaging {
class IMethodMessage;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CADMethodRef;
}
// Type: System.Runtime.Remoting.Messaging::CADMethodRef
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3150))
// CS Name: System.Runtime.Remoting.Messaging.CADMethodRef
class CORDL_TYPE CADMethodRef : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~CADMethodRef() = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMethodRef", modifiers: " const&", def_value: None }]
constexpr CADMethodRef(CADMethodRef const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CADMethodRef", modifiers: "&&", def_value: None }]
constexpr CADMethodRef(CADMethodRef&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CADMethodRef(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CADMethodRef& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CADMethodRef& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CADMethodRef& operator=(CADMethodRef&& o) noexcept = default;
  constexpr CADMethodRef& operator=(CADMethodRef const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_ctor, put=__set_ctor))  ctor;

constexpr void __set_ctor(bool value) ;

constexpr bool __get_ctor() const;

 ::StringW __declspec(property(get=__get_typeName, put=__set_typeName))  typeName;

constexpr void __set_typeName(::StringW value) ;

constexpr ::StringW __get_typeName() const;

 ::StringW __declspec(property(get=__get_methodName, put=__set_methodName))  methodName;

constexpr void __set_methodName(::StringW value) ;

constexpr ::StringW __get_methodName() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_param_names, put=__set_param_names))  param_names;

constexpr void __set_param_names(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_param_names() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_generic_arg_names, put=__set_generic_arg_names))  generic_arg_names;

constexpr void __set_generic_arg_names(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_generic_arg_names() const;


// Methods

/// @brief Method GetTypes addr 0x233b9ec size 0x14c virtual false final false
 ::ArrayW<System::Type> GetTypes(::ArrayW<::StringW> typeArray) ;

/// @brief Method Resolve addr 0x233bb38 size 0x524 virtual false final false
 System::Reflection::MethodBase Resolve() ;

// Ctor Parameters [CppParam { name: "msg", ty: "System::Runtime::Remoting::Messaging::IMethodMessage", modifiers: "", def_value: None }]
explicit CADMethodRef(System::Runtime::Remoting::Messaging::IMethodMessage msg) ;

/// @brief Method .ctor addr 0x233c05c size 0x2d0 virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMethodMessage msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::CADMethodRef);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CADMethodRef, "System.Runtime.Remoting.Messaging", "CADMethodRef");
