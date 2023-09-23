#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Diagnostics::Tracing {
class EventSourceAttribute;
}
// Type: System.Diagnostics.Tracing::EventSourceAttribute
namespace System::Diagnostics::Tracing {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3733))
// CS Name: System.Diagnostics.Tracing.EventSourceAttribute
class CORDL_TYPE EventSourceAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EventSourceAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: " const&", def_value: None }]
constexpr EventSourceAttribute(EventSourceAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventSourceAttribute", modifiers: "&&", def_value: None }]
constexpr EventSourceAttribute(EventSourceAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventSourceAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr EventSourceAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventSourceAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventSourceAttribute& operator=(EventSourceAttribute&& o) noexcept = default;
  constexpr EventSourceAttribute& operator=(EventSourceAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Guid_k__BackingField, put=__set__Guid_k__BackingField))  _Guid_k__BackingField;

constexpr void __set__Guid_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Guid_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Name_k__BackingField, put=__set__Name_k__BackingField))  _Name_k__BackingField;

constexpr void __set__Name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Name_k__BackingField() const;


// Properties

 ::StringW __declspec(property(put=set_Guid))  Guid;

 ::StringW __declspec(property(put=set_Name))  Name;


// Methods

/// @brief Method set_Guid addr 0x240e24c size 0x8 virtual false final false
 void set_Guid(::StringW value) ;

/// @brief Method set_Name addr 0x240e254 size 0x8 virtual false final false
 void set_Name(::StringW value) ;

// Ctor Parameters []
explicit EventSourceAttribute() ;

/// @brief Method .ctor addr 0x240e25c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics::Tracing
NEED_NO_BOX(System::Diagnostics::Tracing::EventSourceAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::EventSourceAttribute, "System.Diagnostics.Tracing", "EventSourceAttribute");
