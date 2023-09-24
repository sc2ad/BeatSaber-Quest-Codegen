#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Runtime::Remoting {
class IChannelInfo;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ChannelInfo;
}
// Type: System.Runtime.Remoting::ChannelInfo
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3048))
// CS Name: System.Runtime.Remoting.ChannelInfo
class CORDL_TYPE ChannelInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::IChannelInfo
constexpr operator  System::Runtime::Remoting::IChannelInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ChannelInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChannelInfo", modifiers: " const&", def_value: None }]
constexpr ChannelInfo(ChannelInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChannelInfo", modifiers: "&&", def_value: None }]
constexpr ChannelInfo(ChannelInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChannelInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChannelInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChannelInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChannelInfo& operator=(ChannelInfo&& o) noexcept = default;
  constexpr ChannelInfo& operator=(ChannelInfo const& o) noexcept = default;
                


// Fields

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_channelData, put=__set_channelData))  channelData;

constexpr void __set_channelData(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

constexpr ::ArrayW<::bs_hook::Il2CppWrapperType> __get_channelData() const;


// Properties

 ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=get_ChannelData))  ChannelData;


// Methods

static System::Runtime::Remoting::ChannelInfo New_ctor() ;

/// @brief Method .ctor addr 0x2319a40 size 0x68 virtual false final false
 void _ctor() ;

static System::Runtime::Remoting::ChannelInfo New_ctor(::bs_hook::Il2CppWrapperType remoteChannelData) ;

/// @brief Method .ctor addr 0x2319aa8 size 0xa8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType remoteChannelData) ;

/// @brief Method get_ChannelData addr 0x2319b50 size 0x8 virtual true final true
 ::ArrayW<::bs_hook::Il2CppWrapperType> get_ChannelData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::ChannelInfo);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelInfo, "System.Runtime.Remoting", "ChannelInfo");
