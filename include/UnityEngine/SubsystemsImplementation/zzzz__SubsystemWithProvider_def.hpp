#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class ISubsystem;
}
namespace UnityEngine::SubsystemsImplementation {
class SubsystemProvider;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemWithProvider;
}
// Type: UnityEngine.SubsystemsImplementation::SubsystemWithProvider
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15857))
// CS Name: UnityEngine.SubsystemsImplementation.SubsystemWithProvider
class CORDL_TYPE SubsystemWithProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ISubsystem
constexpr operator  UnityEngine::ISubsystem() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SubsystemWithProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider", modifiers: " const&", def_value: None }]
constexpr SubsystemWithProvider(SubsystemWithProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemWithProvider", modifiers: "&&", def_value: None }]
constexpr SubsystemWithProvider(SubsystemWithProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemWithProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemWithProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemWithProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemWithProvider& operator=(SubsystemWithProvider&& o) noexcept = default;
  constexpr SubsystemWithProvider& operator=(SubsystemWithProvider const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__running_k__BackingField, put=__set__running_k__BackingField))  _running_k__BackingField;

constexpr void __set__running_k__BackingField(bool value) ;

constexpr bool __get__running_k__BackingField() const;

 UnityEngine::SubsystemsImplementation::SubsystemProvider __declspec(property(get=__get__providerBase_k__BackingField, put=__set__providerBase_k__BackingField))  _providerBase_k__BackingField;

constexpr void __set__providerBase_k__BackingField(UnityEngine::SubsystemsImplementation::SubsystemProvider value) ;

constexpr UnityEngine::SubsystemsImplementation::SubsystemProvider __get__providerBase_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_running, put=set_running))  running;

 UnityEngine::SubsystemsImplementation::SubsystemProvider __declspec(property(get=get_providerBase))  providerBase;


// Methods

/// @brief Method Start addr 0x2ba42f4 size 0x3c virtual true final true
 void Start() ;

/// @brief Method OnStart addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnStart() ;

/// @brief Method Stop addr 0x2ba4330 size 0x38 virtual true final true
 void Stop() ;

/// @brief Method OnStop addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnStop() ;

/// @brief Method Destroy addr 0x2ba4368 size 0x7c virtual true final true
 void Destroy() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDestroy() ;

/// @brief Method get_running addr 0x2ba43e4 size 0x8 virtual true final true
 bool get_running() ;

/// @brief Method set_running addr 0x2ba43ec size 0xc virtual false final false
 void set_running(bool value) ;

/// @brief Method get_providerBase addr 0x2ba43f8 size 0x8 virtual false final false
 UnityEngine::SubsystemsImplementation::SubsystemProvider get_providerBase() ;

static UnityEngine::SubsystemsImplementation::SubsystemWithProvider New_ctor() ;

/// @brief Method .ctor addr 0x2ba4400 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::SubsystemsImplementation
NEED_NO_BOX(UnityEngine::SubsystemsImplementation::SubsystemWithProvider);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemsImplementation::SubsystemWithProvider, "UnityEngine.SubsystemsImplementation", "SubsystemWithProvider");
