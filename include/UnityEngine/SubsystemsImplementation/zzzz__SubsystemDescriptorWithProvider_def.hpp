#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class ISubsystemDescriptor;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemDescriptorWithProvider;
}
// Type: UnityEngine.SubsystemsImplementation::SubsystemDescriptorWithProvider
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15856))
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
class CORDL_TYPE SubsystemDescriptorWithProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ISubsystemDescriptor
constexpr operator  UnityEngine::ISubsystemDescriptor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubsystemDescriptorWithProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider", modifiers: " const&", def_value: None }]
constexpr SubsystemDescriptorWithProvider(SubsystemDescriptorWithProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider", modifiers: "&&", def_value: None }]
constexpr SubsystemDescriptorWithProvider(SubsystemDescriptorWithProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemDescriptorWithProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemDescriptorWithProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemDescriptorWithProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemDescriptorWithProvider& operator=(SubsystemDescriptorWithProvider&& o) noexcept = default;
  constexpr SubsystemDescriptorWithProvider& operator=(SubsystemDescriptorWithProvider const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(::StringW value) ;

constexpr ::StringW __get__id_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x2ba42d8 size 0x8 virtual true final true
 ::StringW get_id() ;

/// @brief Method CreateImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ISubsystem CreateImpl() ;

/// @brief Method UnityEngine.ISubsystemDescriptor.Create addr 0x2ba42e0 size 0xc virtual true final true
 UnityEngine::ISubsystem UnityEngine_ISubsystemDescriptor_Create() ;

static UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider New_ctor() ;

/// @brief Method .ctor addr 0x2ba42ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SubsystemsImplementation
NEED_NO_BOX(UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider, "UnityEngine.SubsystemsImplementation", "SubsystemDescriptorWithProvider");
