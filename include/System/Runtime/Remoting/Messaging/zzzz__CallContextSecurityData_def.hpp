#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Security::Principal {
class IPrincipal;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CallContextSecurityData;
}
// Type: System.Runtime.Remoting.Messaging::CallContextSecurityData
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3143))
// CS Name: System.Runtime.Remoting.Messaging.CallContextSecurityData
class CORDL_TYPE CallContextSecurityData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CallContextSecurityData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallContextSecurityData", modifiers: " const&", def_value: None }]
constexpr CallContextSecurityData(CallContextSecurityData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallContextSecurityData", modifiers: "&&", def_value: None }]
constexpr CallContextSecurityData(CallContextSecurityData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallContextSecurityData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CallContextSecurityData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallContextSecurityData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallContextSecurityData& operator=(CallContextSecurityData&& o) noexcept = default;
  constexpr CallContextSecurityData& operator=(CallContextSecurityData const& o) noexcept = default;
                


// Fields

 ::System::Security::Principal::IPrincipal __declspec(property(get=__get__principal, put=__set__principal))  _principal;

constexpr void __set__principal(::System::Security::Principal::IPrincipal value) ;

constexpr ::System::Security::Principal::IPrincipal __get__principal() const;


// Properties

 bool __declspec(property(get=get_HasInfo))  HasInfo;


// Methods

/// @brief Method get_HasInfo addr 0x233b1dc size 0x10 virtual false final false
 bool get_HasInfo() ;

/// @brief Method Clone addr 0x233b164 size 0x68 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

// Ctor Parameters []
explicit CallContextSecurityData() ;

/// @brief Method .ctor addr 0x233b338 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContextSecurityData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContextSecurityData, "System.Runtime.Remoting.Messaging", "CallContextSecurityData");
