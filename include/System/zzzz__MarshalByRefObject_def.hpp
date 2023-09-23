#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting {
class ServerIdentity;
}
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class MarshalByRefObject;
}
// Type: System::MarshalByRefObject
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2604))
// CS Name: System.MarshalByRefObject
class CORDL_TYPE MarshalByRefObject : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MarshalByRefObject() = default;

// Ctor Parameters [CppParam { name: "", ty: "MarshalByRefObject", modifiers: " const&", def_value: None }]
constexpr MarshalByRefObject(MarshalByRefObject const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MarshalByRefObject", modifiers: "&&", def_value: None }]
constexpr MarshalByRefObject(MarshalByRefObject&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MarshalByRefObject(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MarshalByRefObject& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MarshalByRefObject& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MarshalByRefObject& operator=(MarshalByRefObject&& o) noexcept = default;
  constexpr MarshalByRefObject& operator=(MarshalByRefObject const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__identity, put=__set__identity))  _identity;

constexpr void __set__identity(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__identity() const;


// Properties

 System::Runtime::Remoting::ServerIdentity __declspec(property(get=get_ObjectIdentity, put=set_ObjectIdentity))  ObjectIdentity;


// Methods

// Ctor Parameters []
explicit MarshalByRefObject() ;

/// @brief Method .ctor addr 0x2485910 size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method get_ObjectIdentity addr 0x248bff4 size 0x40 virtual false final false
 System::Runtime::Remoting::ServerIdentity get_ObjectIdentity() ;

/// @brief Method set_ObjectIdentity addr 0x248c034 size 0x40 virtual false final false
 void set_ObjectIdentity(System::Runtime::Remoting::ServerIdentity value) ;

/// @brief Method CreateObjRef addr 0x248c074 size 0x40 virtual true final false
 System::Runtime::Remoting::ObjRef CreateObjRef(System::Type requestedType) ;

/// @brief Method InitializeLifetimeService addr 0x248c0b4 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType InitializeLifetimeService() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MarshalByRefObject);
DEFINE_IL2CPP_ARG_TYPE(System::MarshalByRefObject, "System", "MarshalByRefObject");
