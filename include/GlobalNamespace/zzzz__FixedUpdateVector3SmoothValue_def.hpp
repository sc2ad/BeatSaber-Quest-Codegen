#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__FixedUpdateSmoothValue_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FixedUpdateVector3SmoothValue;
}
// Type: ::FixedUpdateVector3SmoothValue
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13738)), TypeDefinitionIndex(TypeDefinitionIndex(10190)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13738), inst: 394 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13739))
// CS Name: FixedUpdateVector3SmoothValue
class CORDL_TYPE FixedUpdateVector3SmoothValue : public GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FixedUpdateVector3SmoothValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateVector3SmoothValue", modifiers: " const&", def_value: None }]
constexpr FixedUpdateVector3SmoothValue(FixedUpdateVector3SmoothValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateVector3SmoothValue", modifiers: "&&", def_value: None }]
constexpr FixedUpdateVector3SmoothValue(FixedUpdateVector3SmoothValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedUpdateVector3SmoothValue(void* ptr) noexcept : GlobalNamespace::FixedUpdateSmoothValue_1<UnityEngine::Vector3>(ptr) {
}


  constexpr FixedUpdateVector3SmoothValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedUpdateVector3SmoothValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedUpdateVector3SmoothValue& operator=(FixedUpdateVector3SmoothValue&& o) noexcept = default;
  constexpr FixedUpdateVector3SmoothValue& operator=(FixedUpdateVector3SmoothValue const& o) noexcept = default;
                


// Methods

static GlobalNamespace::FixedUpdateVector3SmoothValue New_ctor(float_t smooth) ;

/// @brief Method .ctor addr 0x1f71f44 size 0x58 virtual false final false
 void _ctor(float_t smooth) ;

/// @brief Method Interpolate addr 0x1f71f9c size 0x28 virtual true final false
 UnityEngine::Vector3 Interpolate(UnityEngine::Vector3 value0, UnityEngine::Vector3 value1, float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FixedUpdateVector3SmoothValue);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FixedUpdateVector3SmoothValue, "", "FixedUpdateVector3SmoothValue");
