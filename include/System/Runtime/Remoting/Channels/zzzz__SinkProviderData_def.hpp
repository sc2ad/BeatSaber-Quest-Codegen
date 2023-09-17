#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class SinkProviderData;
}
// Type: System.Runtime.Remoting.Channels::SinkProviderData
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3124))
// CS Name: System.Runtime.Remoting.Channels.SinkProviderData
class CORDL_TYPE SinkProviderData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SinkProviderData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SinkProviderData", modifiers: " const&", def_value: None }]
constexpr SinkProviderData(SinkProviderData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SinkProviderData", modifiers: "&&", def_value: None }]
constexpr SinkProviderData(SinkProviderData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SinkProviderData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SinkProviderData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SinkProviderData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SinkProviderData& operator=(SinkProviderData&& o) noexcept = default;
  constexpr SinkProviderData& operator=(SinkProviderData const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_sinkName, put=__set_sinkName))  sinkName;

constexpr void __set_sinkName(::StringW value) ;

constexpr ::StringW __get_sinkName() const;

 ::System::Collections::ArrayList __declspec(property(get=__get_children, put=__set_children))  children;

constexpr void __set_children(::System::Collections::ArrayList value) ;

constexpr ::System::Collections::ArrayList __get_children() const;

 ::System::Collections::Hashtable __declspec(property(get=__get_properties, put=__set_properties))  properties;

constexpr void __set_properties(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_properties() const;


// Properties

 ::System::Collections::IList __declspec(property(get=get_Children))  Children;

 ::System::Collections::IDictionary __declspec(property(get=get_Properties))  Properties;


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }]
explicit SinkProviderData(::StringW name) ;

/// @brief Method .ctor addr 0x2337f98 size 0xac virtual false final false
 void _ctor(::StringW name) ;

/// @brief Method get_Children addr 0x2338044 size 0x8 virtual false final false
 ::System::Collections::IList get_Children() ;

/// @brief Method get_Properties addr 0x233804c size 0x8 virtual false final false
 ::System::Collections::IDictionary get_Properties() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Channels::SinkProviderData);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Channels::SinkProviderData, "System.Runtime.Remoting.Channels", "SinkProviderData");
