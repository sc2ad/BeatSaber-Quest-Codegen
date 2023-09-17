#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
namespace {
namespace GlobalNamespace {
class IEditTimeValidated;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class LightGroupLinearLayouter;
}
// Type: ::LightGroupLinearLayouter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5031))
// CS Name: LightGroupLinearLayouter
class CORDL_TYPE LightGroupLinearLayouter : public ::GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IEditTimeValidated
constexpr operator  ::GlobalNamespace::IEditTimeValidated() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightGroupLinearLayouter() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupLinearLayouter", modifiers: " const&", def_value: None }]
constexpr LightGroupLinearLayouter(LightGroupLinearLayouter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupLinearLayouter", modifiers: "&&", def_value: None }]
constexpr LightGroupLinearLayouter(LightGroupLinearLayouter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupLinearLayouter(void* ptr) noexcept : ::GlobalNamespace::LightGroupSubsystem(ptr) {
}


  constexpr LightGroupLinearLayouter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupLinearLayouter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupLinearLayouter& operator=(LightGroupLinearLayouter&& o) noexcept = default;
  constexpr LightGroupLinearLayouter& operator=(LightGroupLinearLayouter const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Vector3 __declspec(property(get=__get__movementStep, put=__set__movementStep))  _movementStep;

constexpr void __set__movementStep(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__movementStep() const;

 ::UnityEngine::Vector3 __declspec(property(get=__get__defaultRotation, put=__set__defaultRotation))  _defaultRotation;

constexpr void __set__defaultRotation(::UnityEngine::Vector3 value) ;

constexpr ::UnityEngine::Vector3 __get__defaultRotation() const;

 bool __declspec(property(get=__get__startFromCenter, put=__set__startFromCenter))  _startFromCenter;

constexpr void __set__startFromCenter(bool value) ;

constexpr bool __get__startFromCenter() const;


// Methods

// Ctor Parameters []
explicit LightGroupLinearLayouter() ;

/// @brief Method .ctor addr 0x225e6f8 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::LightGroupLinearLayouter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightGroupLinearLayouter, "", "LightGroupLinearLayouter");
