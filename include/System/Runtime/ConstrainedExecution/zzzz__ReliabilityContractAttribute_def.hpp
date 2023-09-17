#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System::Runtime::ConstrainedExecution {
struct Cer;
}
namespace System::Runtime::ConstrainedExecution {
struct Consistency;
}
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
class ReliabilityContractAttribute;
}
// Type: System.Runtime.ConstrainedExecution::ReliabilityContractAttribute
namespace System::Runtime::ConstrainedExecution {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3345))
// CS Name: System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
class CORDL_TYPE ReliabilityContractAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReliabilityContractAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReliabilityContractAttribute", modifiers: " const&", def_value: None }]
constexpr ReliabilityContractAttribute(ReliabilityContractAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReliabilityContractAttribute", modifiers: "&&", def_value: None }]
constexpr ReliabilityContractAttribute(ReliabilityContractAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReliabilityContractAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ReliabilityContractAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReliabilityContractAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReliabilityContractAttribute& operator=(ReliabilityContractAttribute&& o) noexcept = default;
  constexpr ReliabilityContractAttribute& operator=(ReliabilityContractAttribute const& o) noexcept = default;
                


// Fields

 ::System::Runtime::ConstrainedExecution::Consistency __declspec(property(get=__get__ConsistencyGuarantee_k__BackingField, put=__set__ConsistencyGuarantee_k__BackingField))  _ConsistencyGuarantee_k__BackingField;

constexpr void __set__ConsistencyGuarantee_k__BackingField(::System::Runtime::ConstrainedExecution::Consistency value) ;

constexpr ::System::Runtime::ConstrainedExecution::Consistency __get__ConsistencyGuarantee_k__BackingField() const;

 ::System::Runtime::ConstrainedExecution::Cer __declspec(property(get=__get__Cer_k__BackingField, put=__set__Cer_k__BackingField))  _Cer_k__BackingField;

constexpr void __set__Cer_k__BackingField(::System::Runtime::ConstrainedExecution::Cer value) ;

constexpr ::System::Runtime::ConstrainedExecution::Cer __get__Cer_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "consistencyGuarantee", ty: "::System::Runtime::ConstrainedExecution::Consistency", modifiers: "", def_value: None }, CppParam { name: "cer", ty: "::System::Runtime::ConstrainedExecution::Cer", modifiers: "", def_value: None }]
explicit ReliabilityContractAttribute(::System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee, ::System::Runtime::ConstrainedExecution::Cer cer) ;

/// @brief Method .ctor addr 0x236d950 size 0x2c virtual false final false
 void _ctor(::System::Runtime::ConstrainedExecution::Consistency consistencyGuarantee, ::System::Runtime::ConstrainedExecution::Cer cer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::ConstrainedExecution
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::ReliabilityContractAttribute, "System.Runtime.ConstrainedExecution", "ReliabilityContractAttribute");
