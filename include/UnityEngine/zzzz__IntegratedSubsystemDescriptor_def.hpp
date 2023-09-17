#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class ISubsystem;
}
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystemDescriptor;
}
// Type: UnityEngine::IntegratedSubsystemDescriptor
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15843))
// CS Name: UnityEngine.IntegratedSubsystemDescriptor
class CORDL_TYPE IntegratedSubsystemDescriptor : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ISubsystemDescriptor
constexpr operator  ::UnityEngine::ISubsystemDescriptor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IntegratedSubsystemDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: " const&", def_value: None }]
constexpr IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor", modifiers: "&&", def_value: None }]
constexpr IntegratedSubsystemDescriptor(IntegratedSubsystemDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntegratedSubsystemDescriptor(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntegratedSubsystemDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntegratedSubsystemDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntegratedSubsystemDescriptor& operator=(IntegratedSubsystemDescriptor&& o) noexcept = default;
  constexpr IntegratedSubsystemDescriptor& operator=(IntegratedSubsystemDescriptor const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;


// Properties

 ::StringW __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x2ba2f4c size 0x3c virtual true final true
 ::StringW get_id() ;

/// @brief Method UnityEngine.ISubsystemDescriptor.Create addr 0x2ba2fc4 size 0xc virtual true final true
 ::UnityEngine::ISubsystem UnityEngine_ISubsystemDescriptor_Create() ;

/// @brief Method CreateImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ISubsystem CreateImpl() ;

// Ctor Parameters []
explicit IntegratedSubsystemDescriptor() ;

/// @brief Method .ctor addr 0x2ba2fd0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::IntegratedSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystemDescriptor, "UnityEngine", "IntegratedSubsystemDescriptor");
