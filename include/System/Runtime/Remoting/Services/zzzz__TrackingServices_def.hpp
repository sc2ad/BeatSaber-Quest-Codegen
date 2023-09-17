#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Runtime::Remoting {
class ObjRef;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Runtime::Remoting::Services {
class TrackingServices;
}
// Type: System.Runtime.Remoting.Services::TrackingServices
namespace System::Runtime::Remoting::Services {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3081))
// CS Name: System.Runtime.Remoting.Services.TrackingServices
class CORDL_TYPE TrackingServices : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TrackingServices() = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackingServices", modifiers: " const&", def_value: None }]
constexpr TrackingServices(TrackingServices const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TrackingServices", modifiers: "&&", def_value: None }]
constexpr TrackingServices(TrackingServices&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TrackingServices(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TrackingServices& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TrackingServices& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TrackingServices& operator=(TrackingServices&& o) noexcept = default;
  constexpr TrackingServices& operator=(TrackingServices const& o) noexcept = default;
                


// Fields

static ::System::Collections::ArrayList __declspec(property(get=__get__handlers, put=__set__handlers))  _handlers;

static void __set__handlers(::System::Collections::ArrayList value) ;

static ::System::Collections::ArrayList __get__handlers() ;


// Methods

/// @brief Method NotifyMarshaledObject addr 0x2329ac4 size 0x310 virtual false final false
static void NotifyMarshaledObject(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Remoting::ObjRef or) ;

/// @brief Method NotifyUnmarshaledObject addr 0x2329dd4 size 0x310 virtual false final false
static void NotifyUnmarshaledObject(::bs_hook::Il2CppWrapperType obj, ::System::Runtime::Remoting::ObjRef or) ;

/// @brief Method NotifyDisconnectedObject addr 0x2327220 size 0x304 virtual false final false
static void NotifyDisconnectedObject(::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Services
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Services::TrackingServices);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Services::TrackingServices, "System.Runtime.Remoting.Services", "TrackingServices");
