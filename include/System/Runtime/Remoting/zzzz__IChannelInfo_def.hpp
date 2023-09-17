#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Remoting {
class IChannelInfo;
}
// Type: System.Runtime.Remoting::IChannelInfo
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3053))
// CS Name: System.Runtime.Remoting.IChannelInfo
class CORDL_TYPE IChannelInfo : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IChannelInfo() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IChannelInfo(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ChannelData))  ChannelData;


// Methods

/// @brief Method get_ChannelData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_ChannelData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::IChannelInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::IChannelInfo, "System.Runtime.Remoting", "IChannelInfo");
