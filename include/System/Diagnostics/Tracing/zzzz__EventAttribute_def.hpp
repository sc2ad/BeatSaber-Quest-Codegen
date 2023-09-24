#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
namespace System::Diagnostics::Tracing {
struct EventLevel;
}
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventAttribute;
}
// Type: System.Diagnostics.Tracing::EventAttribute
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3730))
// CS Name: System.Diagnostics.Tracing.EventAttribute
class CORDL_TYPE EventAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EventAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventAttribute", modifiers: " const&", def_value: None }]
constexpr EventAttribute(EventAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventAttribute", modifiers: "&&", def_value: None }]
constexpr EventAttribute(EventAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr EventAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventAttribute& operator=(EventAttribute&& o) noexcept = default;
  constexpr EventAttribute& operator=(EventAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__EventId_k__BackingField, put=__set__EventId_k__BackingField))  _EventId_k__BackingField;

constexpr void __set__EventId_k__BackingField(int32_t value) ;

constexpr int32_t __get__EventId_k__BackingField() const;

 System::Diagnostics::Tracing::EventLevel __declspec(property(get=__get__Level_k__BackingField, put=__set__Level_k__BackingField))  _Level_k__BackingField;

constexpr void __set__Level_k__BackingField(System::Diagnostics::Tracing::EventLevel value) ;

constexpr System::Diagnostics::Tracing::EventLevel __get__Level_k__BackingField() const;

 System::Diagnostics::Tracing::EventKeywords __declspec(property(get=__get__Keywords_k__BackingField, put=__set__Keywords_k__BackingField))  _Keywords_k__BackingField;

constexpr void __set__Keywords_k__BackingField(System::Diagnostics::Tracing::EventKeywords value) ;

constexpr System::Diagnostics::Tracing::EventKeywords __get__Keywords_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Message_k__BackingField, put=__set__Message_k__BackingField))  _Message_k__BackingField;

constexpr void __set__Message_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Message_k__BackingField() const;


// Properties

 int32_t __declspec(property(put=set_EventId))  EventId;

 System::Diagnostics::Tracing::EventLevel __declspec(property(put=set_Level))  Level;

 System::Diagnostics::Tracing::EventKeywords __declspec(property(put=set_Keywords))  Keywords;

 ::StringW __declspec(property(put=set_Message))  Message;


// Methods

static System::Diagnostics::Tracing::EventAttribute New_ctor(int32_t eventId) ;

/// @brief Method .ctor addr 0x240dbf4 size 0x28 virtual false final false
 void _ctor(int32_t eventId) ;

/// @brief Method set_EventId addr 0x240dc1c size 0x8 virtual false final false
 void set_EventId(int32_t value) ;

/// @brief Method set_Level addr 0x240dc24 size 0x8 virtual false final false
 void set_Level(System::Diagnostics::Tracing::EventLevel value) ;

/// @brief Method set_Keywords addr 0x240dc2c size 0x8 virtual false final false
 void set_Keywords(System::Diagnostics::Tracing::EventKeywords value) ;

/// @brief Method set_Message addr 0x240dc34 size 0x8 virtual false final false
 void set_Message(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Tracing
NEED_NO_BOX(System::Diagnostics::Tracing::EventAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventAttribute, "System.Diagnostics.Tracing", "EventAttribute");
