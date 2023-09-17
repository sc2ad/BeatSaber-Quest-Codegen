#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class ISubsystemDescriptor;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class IntegratedSubsystem;
}
// Type: UnityEngine::IntegratedSubsystem
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15848))
// CS Name: UnityEngine.IntegratedSubsystem
class CORDL_TYPE IntegratedSubsystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ISubsystem
constexpr operator  ::UnityEngine::ISubsystem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntegratedSubsystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem", modifiers: " const&", def_value: None }]
constexpr IntegratedSubsystem(IntegratedSubsystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem", modifiers: "&&", def_value: None }]
constexpr IntegratedSubsystem(IntegratedSubsystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntegratedSubsystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IntegratedSubsystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntegratedSubsystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntegratedSubsystem& operator=(IntegratedSubsystem&& o) noexcept = default;
  constexpr IntegratedSubsystem& operator=(IntegratedSubsystem const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 ::UnityEngine::ISubsystemDescriptor __declspec(property(get=__get_m_SubsystemDescriptor, put=__set_m_SubsystemDescriptor))  m_SubsystemDescriptor;

constexpr void __set_m_SubsystemDescriptor(::UnityEngine::ISubsystemDescriptor value) ;

constexpr ::UnityEngine::ISubsystemDescriptor __get_m_SubsystemDescriptor() const;


// Properties

 bool __declspec(property(get=get_running))  running;

 bool __declspec(property(get=get_valid))  valid;


// Methods

/// @brief Method SetHandle addr 0x2ba30fc size 0x44 virtual false final false
 void SetHandle(::UnityEngine::IntegratedSubsystem subsystem) ;

/// @brief Method Start addr 0x2ba3140 size 0x3c virtual true final true
 void Start() ;

/// @brief Method Stop addr 0x2ba317c size 0x3c virtual true final true
 void Stop() ;

/// @brief Method Destroy addr 0x2ba31b8 size 0xb0 virtual true final true
 void Destroy() ;

/// @brief Method get_running addr 0x2ba3428 size 0x54 virtual true final true
 bool get_running() ;

/// @brief Method get_valid addr 0x2ba347c size 0x54 virtual false final false
 bool get_valid() ;

/// @brief Method IsRunning addr 0x2ba34d0 size 0x3c virtual false final false
 bool IsRunning() ;

// Ctor Parameters []
explicit IntegratedSubsystem() ;

/// @brief Method .ctor addr 0x2ba350c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::IntegratedSubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::IntegratedSubsystem, "UnityEngine", "IntegratedSubsystem");
