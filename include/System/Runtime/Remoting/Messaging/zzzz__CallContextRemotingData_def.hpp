#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CallContextRemotingData;
}
// Type: System.Runtime.Remoting.Messaging::CallContextRemotingData
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3144))
// CS Name: System.Runtime.Remoting.Messaging.CallContextRemotingData
class CORDL_TYPE CallContextRemotingData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CallContextRemotingData() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallContextRemotingData", modifiers: " const&", def_value: None }]
constexpr CallContextRemotingData(CallContextRemotingData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallContextRemotingData", modifiers: "&&", def_value: None }]
constexpr CallContextRemotingData(CallContextRemotingData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallContextRemotingData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CallContextRemotingData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallContextRemotingData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallContextRemotingData& operator=(CallContextRemotingData&& o) noexcept = default;
  constexpr CallContextRemotingData& operator=(CallContextRemotingData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__logicalCallID, put=__set__logicalCallID))  _logicalCallID;

constexpr void __set__logicalCallID(::StringW value) ;

constexpr ::StringW __get__logicalCallID() const;


// Properties

 ::StringW __declspec(property(get=get_LogicalCallID, put=set_LogicalCallID))  LogicalCallID;

 bool __declspec(property(get=get_HasInfo))  HasInfo;


// Methods

/// @brief Method get_LogicalCallID addr 0x233b340 size 0x8 virtual false final false
 ::StringW get_LogicalCallID() ;

/// @brief Method set_LogicalCallID addr 0x233b348 size 0x8 virtual false final false
 void set_LogicalCallID(::StringW value) ;

/// @brief Method get_HasInfo addr 0x233b1cc size 0x10 virtual false final false
 bool get_HasInfo() ;

/// @brief Method Clone addr 0x233b0fc size 0x68 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

// Ctor Parameters []
explicit CallContextRemotingData() ;

/// @brief Method .ctor addr 0x233b350 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::CallContextRemotingData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallContextRemotingData, "System.Runtime.Remoting.Messaging", "CallContextRemotingData");
