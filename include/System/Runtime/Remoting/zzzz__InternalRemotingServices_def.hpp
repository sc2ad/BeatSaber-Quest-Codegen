#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting::Metadata {
class SoapAttribute;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class InternalRemotingServices;
}
// Type: System.Runtime.Remoting::InternalRemotingServices
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3058))
// CS Name: System.Runtime.Remoting.InternalRemotingServices
class CORDL_TYPE InternalRemotingServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InternalRemotingServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalRemotingServices", modifiers: " const&", def_value: None }]
constexpr InternalRemotingServices(InternalRemotingServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalRemotingServices", modifiers: "&&", def_value: None }]
constexpr InternalRemotingServices(InternalRemotingServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalRemotingServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InternalRemotingServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalRemotingServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalRemotingServices& operator=(InternalRemotingServices&& o) noexcept = default;
  constexpr InternalRemotingServices& operator=(InternalRemotingServices const& o) noexcept = default;
                


// Fields

static System::Collections::Hashtable __declspec(property(get=__get__soapAttributes, put=__set__soapAttributes))  _soapAttributes;

static void __set__soapAttributes(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get__soapAttributes() ;


// Methods

/// @brief Method GetCachedSoapAttribute addr 0x231a230 size 0x550 virtual false final false
static System::Runtime::Remoting::Metadata::SoapAttribute GetCachedSoapAttribute(::bs_hook::Il2CppWrapperType reflectionObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::InternalRemotingServices);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::InternalRemotingServices, "System.Runtime.Remoting", "InternalRemotingServices");
