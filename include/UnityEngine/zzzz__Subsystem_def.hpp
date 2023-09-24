#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class Subsystem;
}
// Type: UnityEngine::Subsystem
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15853))
// CS Name: UnityEngine.Subsystem
class CORDL_TYPE Subsystem : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ISubsystem
constexpr operator  UnityEngine::ISubsystem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Subsystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "Subsystem", modifiers: " const&", def_value: None }]
constexpr Subsystem(Subsystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Subsystem", modifiers: "&&", def_value: None }]
constexpr Subsystem(Subsystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Subsystem(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Subsystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Subsystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Subsystem& operator=(Subsystem&& o) noexcept = default;
  constexpr Subsystem& operator=(Subsystem const& o) noexcept = default;
                


// Methods

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 void Start() ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final false
 void Stop() ;

/// @brief Method Destroy addr 0x2ba3e3c size 0x74 virtual true final true
 void Destroy() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDestroy() ;

static UnityEngine::Subsystem New_ctor() ;

/// @brief Method .ctor addr 0x2ba3eb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Subsystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Subsystem, "UnityEngine", "Subsystem");
