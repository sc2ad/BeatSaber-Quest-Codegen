#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ChannelData;
}
// Type: System.Runtime.Remoting::ChannelData
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3062))
// CS Name: System.Runtime.Remoting.ChannelData
class CORDL_TYPE ChannelData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ChannelData() = default;

// Ctor Parameters [CppParam { name: "", ty: "ChannelData", modifiers: " const&", def_value: None }]
constexpr ChannelData(ChannelData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ChannelData", modifiers: "&&", def_value: None }]
constexpr ChannelData(ChannelData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ChannelData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ChannelData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ChannelData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ChannelData& operator=(ChannelData&& o) noexcept = default;
  constexpr ChannelData& operator=(ChannelData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Ref, put=__set_Ref))  Ref;

constexpr void __set_Ref(::StringW value) ;

constexpr ::StringW __get_Ref() const;

 ::StringW __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(::StringW value) ;

constexpr ::StringW __get_Type() const;

 ::StringW __declspec(property(get=__get_Id, put=__set_Id))  Id;

constexpr void __set_Id(::StringW value) ;

constexpr ::StringW __get_Id() const;

 ::StringW __declspec(property(get=__get_DelayLoadAsClientChannel, put=__set_DelayLoadAsClientChannel))  DelayLoadAsClientChannel;

constexpr void __set_DelayLoadAsClientChannel(::StringW value) ;

constexpr ::StringW __get_DelayLoadAsClientChannel() const;

 System::Collections::ArrayList __declspec(property(get=__get__serverProviders, put=__set__serverProviders))  _serverProviders;

constexpr void __set__serverProviders(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__serverProviders() const;

 System::Collections::ArrayList __declspec(property(get=__get__clientProviders, put=__set__clientProviders))  _clientProviders;

constexpr void __set__clientProviders(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__clientProviders() const;

 System::Collections::Hashtable __declspec(property(get=__get__customProperties, put=__set__customProperties))  _customProperties;

constexpr void __set__customProperties(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__customProperties() const;


// Properties

 System::Collections::ArrayList __declspec(property(get=get_ServerProviders))  ServerProviders;

 System::Collections::ArrayList __declspec(property(get=get_ClientProviders))  ClientProviders;

 System::Collections::Hashtable __declspec(property(get=get_CustomProperties))  CustomProperties;


// Methods

/// @brief Method get_ServerProviders addr 0x231dfa0 size 0x6c virtual false final false
 System::Collections::ArrayList get_ServerProviders() ;

/// @brief Method get_ClientProviders addr 0x231e710 size 0x6c virtual false final false
 System::Collections::ArrayList get_ClientProviders() ;

/// @brief Method get_CustomProperties addr 0x232233c size 0x6c virtual false final false
 System::Collections::Hashtable get_CustomProperties() ;

/// @brief Method CopyFrom addr 0x231d660 size 0x940 virtual false final false
 void CopyFrom(System::Runtime::Remoting::ChannelData other) ;

static System::Runtime::Remoting::ChannelData New_ctor() ;

/// @brief Method .ctor addr 0x2322288 size 0xb4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
NEED_NO_BOX(System::Runtime::Remoting::ChannelData);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ChannelData, "System.Runtime.Remoting", "ChannelData");
