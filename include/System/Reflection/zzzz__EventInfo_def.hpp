#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace Mono {
struct RuntimeEventHandle;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
struct RuntimeTypeHandle;
}
namespace System {
class Delegate;
}
// Forward declare root types
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class ____System__Reflection__EventInfo__AddEventAdapter;
}
// Type: ::AddEventAdapter
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3457))
// CS Name: System.Reflection.EventInfo::AddEventAdapter
class CORDL_TYPE ____System__Reflection__EventInfo__AddEventAdapter : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____System__Reflection__EventInfo__AddEventAdapter() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Reflection__EventInfo__AddEventAdapter", modifiers: " const&", def_value: None }]
constexpr ____System__Reflection__EventInfo__AddEventAdapter(____System__Reflection__EventInfo__AddEventAdapter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Reflection__EventInfo__AddEventAdapter", modifiers: "&&", def_value: None }]
constexpr ____System__Reflection__EventInfo__AddEventAdapter(____System__Reflection__EventInfo__AddEventAdapter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Reflection__EventInfo__AddEventAdapter(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____System__Reflection__EventInfo__AddEventAdapter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Reflection__EventInfo__AddEventAdapter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Reflection__EventInfo__AddEventAdapter& operator=(____System__Reflection__EventInfo__AddEventAdapter&& o) noexcept = default;
  constexpr ____System__Reflection__EventInfo__AddEventAdapter& operator=(____System__Reflection__EventInfo__AddEventAdapter const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____System__Reflection__EventInfo__AddEventAdapter(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x237941c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x237954c size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType _this, ::System::Delegate dele) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
// Type: System.Reflection::EventInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3466))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3458))
// CS Name: System.Reflection.EventInfo
class CORDL_TYPE EventInfo : public ::System::Reflection::MemberInfo {
public:
// Declarations
using AddEventAdapter = ::System::Reflection::____System__Reflection__EventInfo__AddEventAdapter;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EventInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventInfo", modifiers: " const&", def_value: None }]
constexpr EventInfo(EventInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventInfo", modifiers: "&&", def_value: None }]
constexpr EventInfo(EventInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventInfo(void* ptr) noexcept : ::System::Reflection::MemberInfo(ptr) {
}


  constexpr EventInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventInfo& operator=(EventInfo&& o) noexcept = default;
  constexpr EventInfo& operator=(EventInfo const& o) noexcept = default;
                


// Fields

 ::System::Reflection::____System__Reflection__EventInfo__AddEventAdapter __declspec(property(get=__get_cached_add_event, put=__set_cached_add_event))  cached_add_event;

constexpr void __set_cached_add_event(::System::Reflection::____System__Reflection__EventInfo__AddEventAdapter value) ;

constexpr ::System::Reflection::____System__Reflection__EventInfo__AddEventAdapter __get_cached_add_event() const;


// Properties

 ::System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;

 ::System::Type __declspec(property(get=get_EventHandlerType))  EventHandlerType;


// Methods

// Ctor Parameters []
explicit EventInfo() ;

/// @brief Method .ctor addr 0x2379140 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_MemberType addr 0x2379150 size 0x8 virtual true final false
 ::System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method GetAddMethod addr 0x2379158 size 0x14 virtual true final true
 ::System::Reflection::MethodInfo GetAddMethod() ;

/// @brief Method GetRemoveMethod addr 0x237916c size 0x14 virtual true final true
 ::System::Reflection::MethodInfo GetRemoveMethod() ;

/// @brief Method GetAddMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Reflection::MethodInfo GetAddMethod(bool nonPublic) ;

/// @brief Method GetRemoveMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Reflection::MethodInfo GetRemoveMethod(bool nonPublic) ;

/// @brief Method GetRaiseMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Reflection::MethodInfo GetRaiseMethod(bool nonPublic) ;

/// @brief Method get_EventHandlerType addr 0x2379180 size 0x128 virtual true final false
 ::System::Type get_EventHandlerType() ;

/// @brief Method Equals addr 0x23792a8 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x23792b8 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x23792c8 size 0x2c virtual false final false
static bool op_Equality(::System::Reflection::EventInfo left, ::System::Reflection::EventInfo right) ;

/// @brief Method op_Inequality addr 0x23792f4 size 0x3c virtual false final false
static bool op_Inequality(::System::Reflection::EventInfo left, ::System::Reflection::EventInfo right) ;

/// @brief Method internal_from_handle_type addr 0x2379330 size 0x4 virtual false final false
static ::System::Reflection::EventInfo internal_from_handle_type(::cordl_internals::intptr_t event_handle, ::cordl_internals::intptr_t type_handle) ;

/// @brief Method GetEventFromHandle addr 0x2379334 size 0xe8 virtual false final false
static ::System::Reflection::EventInfo GetEventFromHandle(::Mono::RuntimeEventHandle handle, ::System::RuntimeTypeHandle reflectedType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::EventInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::EventInfo, "System.Reflection", "EventInfo");
NEED_NO_BOX(::System::Reflection::____System__Reflection__EventInfo__AddEventAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::____System__Reflection__EventInfo__AddEventAdapter, "System.Reflection", "EventInfo/AddEventAdapter");
