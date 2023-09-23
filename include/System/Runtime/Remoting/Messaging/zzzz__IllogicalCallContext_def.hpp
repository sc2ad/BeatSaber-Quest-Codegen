#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class IllogicalCallContext;
}
// Type: System.Runtime.Remoting.Messaging::IllogicalCallContext
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3140))
// CS Name: System.Runtime.Remoting.Messaging.IllogicalCallContext
class CORDL_TYPE IllogicalCallContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IllogicalCallContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: " const&", def_value: None }]
constexpr IllogicalCallContext(IllogicalCallContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IllogicalCallContext", modifiers: "&&", def_value: None }]
constexpr IllogicalCallContext(IllogicalCallContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IllogicalCallContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IllogicalCallContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IllogicalCallContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IllogicalCallContext& operator=(IllogicalCallContext&& o) noexcept = default;
  constexpr IllogicalCallContext& operator=(IllogicalCallContext const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get_m_Datastore, put=__set_m_Datastore))  m_Datastore;

constexpr void __set_m_Datastore(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_m_Datastore() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_HostContext, put=__set_m_HostContext))  m_HostContext;

constexpr void __set_m_HostContext(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_HostContext() const;


// Properties

 System::Collections::Hashtable __declspec(property(get=get_Datastore))  Datastore;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_HostContext, put=set_HostContext))  HostContext;

 bool __declspec(property(get=get_HasUserData))  HasUserData;


// Methods

/// @brief Method get_Datastore addr 0x233a110 size 0x6c virtual false final false
 System::Collections::Hashtable get_Datastore() ;

/// @brief Method get_HostContext addr 0x233a17c size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_HostContext() ;

/// @brief Method set_HostContext addr 0x233a184 size 0x8 virtual false final false
 void set_HostContext(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_HasUserData addr 0x233a18c size 0x2c virtual false final false
 bool get_HasUserData() ;

/// @brief Method FreeNamedDataSlot addr 0x233a04c size 0x2c virtual false final false
 void FreeNamedDataSlot(::StringW name) ;

/// @brief Method CreateCopy addr 0x233a1b8 size 0x254 virtual false final false
 System::Runtime::Remoting::Messaging::IllogicalCallContext CreateCopy() ;

// Ctor Parameters []
explicit IllogicalCallContext() ;

/// @brief Method .ctor addr 0x233a40c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::IllogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::IllogicalCallContext, "System.Runtime.Remoting.Messaging", "IllogicalCallContext");
