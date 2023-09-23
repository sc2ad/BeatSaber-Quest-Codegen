#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__MemberDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Attribute;
}
// Forward declare root types
namespace System::ComponentModel {
class EventDescriptor;
}
// Type: System.ComponentModel::EventDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8325))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8274))
// CS Name: System.ComponentModel.EventDescriptor
class CORDL_TYPE EventDescriptor : public System::ComponentModel::MemberDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~EventDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptor", modifiers: " const&", def_value: None }]
constexpr EventDescriptor(EventDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventDescriptor", modifiers: "&&", def_value: None }]
constexpr EventDescriptor(EventDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventDescriptor(void* ptr) noexcept : System::ComponentModel::MemberDescriptor(ptr) {
}


  constexpr EventDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventDescriptor& operator=(EventDescriptor&& o) noexcept = default;
  constexpr EventDescriptor& operator=(EventDescriptor const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "attrs", ty: "::ArrayW<System::Attribute>", modifiers: "", def_value: None }]
explicit EventDescriptor(::StringW name, ::ArrayW<System::Attribute> attrs) ;

/// @brief Method .ctor addr 0x277c54c size 0x8 virtual false final false
 void _ctor(::StringW name, ::ArrayW<System::Attribute> attrs) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::EventDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::EventDescriptor, "System.ComponentModel", "EventDescriptor");
