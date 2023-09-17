#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::ComponentModel {
class ISite;
}
namespace System::ComponentModel {
class IComponent;
}
namespace System {
class IDisposable;
}
namespace System::ComponentModel {
class EventHandlerList;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::ComponentModel {
class Component;
}
// Type: System.ComponentModel::Component
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8320))
// CS Name: System.ComponentModel.Component
class CORDL_TYPE Component : public ::System::MarshalByRefObject {
public:
// Declarations
/// @brief Convert operator to ::System::ComponentModel::IComponent
constexpr operator  ::System::ComponentModel::IComponent() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Component() = default;

// Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: " const&", def_value: None }]
constexpr Component(Component const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Component", modifiers: "&&", def_value: None }]
constexpr Component(Component&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Component(void* ptr) noexcept : ::System::MarshalByRefObject(ptr) {
}


  constexpr Component& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Component& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Component& operator=(Component&& o) noexcept = default;
  constexpr Component& operator=(Component const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_EventDisposed, put=__set_EventDisposed))  EventDisposed;

static void __set_EventDisposed(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_EventDisposed() ;

 ::System::ComponentModel::ISite __declspec(property(get=__get_site, put=__set_site))  site;

constexpr void __set_site(::System::ComponentModel::ISite value) ;

constexpr ::System::ComponentModel::ISite __get_site() const;

 ::System::ComponentModel::EventHandlerList __declspec(property(get=__get_events, put=__set_events))  events;

constexpr void __set_events(::System::ComponentModel::EventHandlerList value) ;

constexpr ::System::ComponentModel::EventHandlerList __get_events() const;


// Properties

 bool __declspec(property(get=get_CanRaiseEvents))  CanRaiseEvents;

 bool __declspec(property(get=get_CanRaiseEventsInternal))  CanRaiseEventsInternal;

 ::System::ComponentModel::ISite __declspec(property(get=get_Site))  Site;

 bool __declspec(property(get=get_DesignMode))  DesignMode;


// Methods

/// @brief Method Finalize addr 0x2787380 size 0xa0 virtual true final false
 void Finalize() ;

/// @brief Method get_CanRaiseEvents addr 0x2787420 size 0x8 virtual true final false
 bool get_CanRaiseEvents() ;

/// @brief Method get_CanRaiseEventsInternal addr 0x2787428 size 0xc virtual false final false
 bool get_CanRaiseEventsInternal() ;

/// @brief Method get_Site addr 0x2787434 size 0x8 virtual true final false
 ::System::ComponentModel::ISite get_Site() ;

/// @brief Method Dispose addr 0x278743c size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x27874a8 size 0x304 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method GetService addr 0x27877ac size 0xb4 virtual true final false
 ::bs_hook::Il2CppWrapperType GetService(::System::Type service) ;

/// @brief Method get_DesignMode addr 0x2787860 size 0xb0 virtual false final false
 bool get_DesignMode() ;

/// @brief Method ToString addr 0x2787910 size 0x130 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit Component() ;

/// @brief Method .ctor addr 0x2787a40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
} // end anonymous namespace
NEED_NO_BOX(::System::ComponentModel::Component);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::Component, "System.ComponentModel", "Component");
