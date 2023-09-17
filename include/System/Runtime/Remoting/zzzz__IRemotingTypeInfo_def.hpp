#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class IRemotingTypeInfo;
}
// Type: System.Runtime.Remoting::IRemotingTypeInfo
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3055))
// CS Name: System.Runtime.Remoting.IRemotingTypeInfo
class CORDL_TYPE IRemotingTypeInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRemotingTypeInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRemotingTypeInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_TypeName))  TypeName;


// Methods

/// @brief Method get_TypeName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_TypeName() ;

/// @brief Method CanCastTo addr 0x0 size 0xffffffffffffffff virtual true final false
 bool CanCastTo(::System::Type fromType, ::bs_hook::Il2CppWrapperType o) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::IRemotingTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IRemotingTypeInfo, "System.Runtime.Remoting", "IRemotingTypeInfo");
