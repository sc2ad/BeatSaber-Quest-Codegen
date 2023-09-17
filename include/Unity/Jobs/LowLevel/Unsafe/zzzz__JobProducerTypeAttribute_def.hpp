#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Jobs::LowLevel::Unsafe {
class JobProducerTypeAttribute;
}
// Type: Unity.Jobs.LowLevel.Unsafe::JobProducerTypeAttribute
namespace Unity::Jobs::LowLevel::Unsafe {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9920))
// CS Name: Unity.Jobs.LowLevel.Unsafe.JobProducerTypeAttribute
class CORDL_TYPE JobProducerTypeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~JobProducerTypeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "JobProducerTypeAttribute", modifiers: " const&", def_value: None }]
constexpr JobProducerTypeAttribute(JobProducerTypeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JobProducerTypeAttribute", modifiers: "&&", def_value: None }]
constexpr JobProducerTypeAttribute(JobProducerTypeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JobProducerTypeAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr JobProducerTypeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JobProducerTypeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JobProducerTypeAttribute& operator=(JobProducerTypeAttribute&& o) noexcept = default;
  constexpr JobProducerTypeAttribute& operator=(JobProducerTypeAttribute const& o) noexcept = default;
                


// Fields

 ::System::Type __declspec(property(get=__get__ProducerType_k__BackingField, put=__set__ProducerType_k__BackingField))  _ProducerType_k__BackingField;

constexpr void __set__ProducerType_k__BackingField(::System::Type value) ;

constexpr ::System::Type __get__ProducerType_k__BackingField() const;


// Methods

// Ctor Parameters [CppParam { name: "producerType", ty: "::System::Type", modifiers: "", def_value: None }]
explicit JobProducerTypeAttribute(::System::Type producerType) ;

/// @brief Method .ctor addr 0x2b28040 size 0x28 virtual false final false
 void _ctor(::System::Type producerType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Jobs::LowLevel::Unsafe
} // end anonymous namespace
NEED_NO_BOX(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute, "Unity.Jobs.LowLevel.Unsafe", "JobProducerTypeAttribute");
