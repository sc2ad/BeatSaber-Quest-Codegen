#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace {
namespace TMPro {
struct Compute_DistanceTransform_EventTypes;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace TMPro {
class Compute_DT_EventArgs;
}
// Type: TMPro::Compute_DT_EventArgs
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12255))
// CS Name: TMPro.Compute_DT_EventArgs
class CORDL_TYPE Compute_DT_EventArgs : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Compute_DT_EventArgs() = default;

// Ctor Parameters [CppParam { name: "", ty: "Compute_DT_EventArgs", modifiers: " const&", def_value: None }]
constexpr Compute_DT_EventArgs(Compute_DT_EventArgs const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Compute_DT_EventArgs", modifiers: "&&", def_value: None }]
constexpr Compute_DT_EventArgs(Compute_DT_EventArgs&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Compute_DT_EventArgs(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Compute_DT_EventArgs& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Compute_DT_EventArgs& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Compute_DT_EventArgs& operator=(Compute_DT_EventArgs&& o) noexcept = default;
  constexpr Compute_DT_EventArgs& operator=(Compute_DT_EventArgs const& o) noexcept = default;
                


// Fields

 ::TMPro::Compute_DistanceTransform_EventTypes __declspec(property(get=__get_EventType, put=__set_EventType))  EventType;

constexpr void __set_EventType(::TMPro::Compute_DistanceTransform_EventTypes value) ;

constexpr ::TMPro::Compute_DistanceTransform_EventTypes __get_EventType() const;

 float_t __declspec(property(get=__get_ProgressPercentage, put=__set_ProgressPercentage))  ProgressPercentage;

constexpr void __set_ProgressPercentage(float_t value) ;

constexpr float_t __get_ProgressPercentage() const;

 ::ArrayW<::UnityEngine::Color> __declspec(property(get=__get_Colors, put=__set_Colors))  Colors;

constexpr void __set_Colors(::ArrayW<::UnityEngine::Color> value) ;

constexpr ::ArrayW<::UnityEngine::Color> __get_Colors() const;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "::TMPro::Compute_DistanceTransform_EventTypes", modifiers: "", def_value: None }, CppParam { name: "progress", ty: "float_t", modifiers: "", def_value: None }]
explicit Compute_DT_EventArgs(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress) ;

/// @brief Method .ctor addr 0x2a67a74 size 0x38 virtual false final false
 void _ctor(::TMPro::Compute_DistanceTransform_EventTypes type, float_t progress) ;

// Ctor Parameters [CppParam { name: "type", ty: "::TMPro::Compute_DistanceTransform_EventTypes", modifiers: "", def_value: None }, CppParam { name: "colors", ty: "::ArrayW<::UnityEngine::Color>", modifiers: "", def_value: None }]
explicit Compute_DT_EventArgs(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color> colors) ;

/// @brief Method .ctor addr 0x2a67aac size 0x30 virtual false final false
 void _ctor(::TMPro::Compute_DistanceTransform_EventTypes type, ::ArrayW<::UnityEngine::Color> colors) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::Compute_DT_EventArgs);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::Compute_DT_EventArgs, "TMPro", "Compute_DT_EventArgs");
