#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class ISubsystem;
}
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine {
class SubsystemDescriptor;
}
// Type: UnityEngine::SubsystemDescriptor
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15846))
// CS Name: UnityEngine.SubsystemDescriptor
class CORDL_TYPE SubsystemDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ISubsystemDescriptor
constexpr operator  ::UnityEngine::ISubsystemDescriptor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SubsystemDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptor", modifiers: " const&", def_value: None }]
constexpr SubsystemDescriptor(SubsystemDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptor", modifiers: "&&", def_value: None }]
constexpr SubsystemDescriptor(SubsystemDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemDescriptor& operator=(SubsystemDescriptor&& o) noexcept = default;
  constexpr SubsystemDescriptor& operator=(SubsystemDescriptor const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__id_k__BackingField, put=__set__id_k__BackingField))  _id_k__BackingField;

constexpr void __set__id_k__BackingField(::StringW value) ;

constexpr ::StringW __get__id_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x2ba3014 size 0x8 virtual true final true
 ::StringW get_id() ;

/// @brief Method UnityEngine.ISubsystemDescriptor.Create addr 0x2ba301c size 0xc virtual true final true
 ::UnityEngine::ISubsystem UnityEngine_ISubsystemDescriptor_Create() ;

/// @brief Method CreateImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ISubsystem CreateImpl() ;

// Ctor Parameters []
explicit SubsystemDescriptor() ;

/// @brief Method .ctor addr 0x2ba3028 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemDescriptor, "UnityEngine", "SubsystemDescriptor");
