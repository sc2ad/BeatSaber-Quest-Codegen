#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Remoting {
class IEnvoyInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class EnvoyInfo;
}
// Type: System.Runtime.Remoting::EnvoyInfo
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3052))
// CS Name: System.Runtime.Remoting.EnvoyInfo
class CORDL_TYPE EnvoyInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Runtime::Remoting::IEnvoyInfo
constexpr operator  ::System::Runtime::Remoting::IEnvoyInfo() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EnvoyInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvoyInfo", modifiers: " const&", def_value: None }]
constexpr EnvoyInfo(EnvoyInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvoyInfo", modifiers: "&&", def_value: None }]
constexpr EnvoyInfo(EnvoyInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvoyInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvoyInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvoyInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvoyInfo& operator=(EnvoyInfo&& o) noexcept = default;
  constexpr EnvoyInfo& operator=(EnvoyInfo const& o) noexcept = default;
                


// Fields

 ::System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get_envoySinks, put=__set_envoySinks))  envoySinks;

constexpr void __set_envoySinks(::System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr ::System::Runtime::Remoting::Messaging::IMessageSink __get_envoySinks() const;


// Properties

 ::System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=get_EnvoySinks))  EnvoySinks;


// Methods

// Ctor Parameters [CppParam { name: "sinks", ty: "::System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
explicit EnvoyInfo(::System::Runtime::Remoting::Messaging::IMessageSink sinks) ;

/// @brief Method .ctor addr 0x2319dfc size 0x28 virtual false final false
 void _ctor(::System::Runtime::Remoting::Messaging::IMessageSink sinks) ;

/// @brief Method get_EnvoySinks addr 0x2319e24 size 0x8 virtual true final true
 ::System::Runtime::Remoting::Messaging::IMessageSink get_EnvoySinks() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::EnvoyInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::EnvoyInfo, "System.Runtime.Remoting", "EnvoyInfo");
