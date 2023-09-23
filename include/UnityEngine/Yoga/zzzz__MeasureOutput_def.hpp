#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class MeasureOutput;
}
// Type: UnityEngine.Yoga::MeasureOutput
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15383))
// CS Name: UnityEngine.Yoga.MeasureOutput
class CORDL_TYPE MeasureOutput : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MeasureOutput() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeasureOutput", modifiers: " const&", def_value: None }]
constexpr MeasureOutput(MeasureOutput const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeasureOutput", modifiers: "&&", def_value: None }]
constexpr MeasureOutput(MeasureOutput&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeasureOutput(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MeasureOutput& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeasureOutput& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeasureOutput& operator=(MeasureOutput&& o) noexcept = default;
  constexpr MeasureOutput& operator=(MeasureOutput const& o) noexcept = default;
                


// Methods

/// @brief Method Make addr 0x2d2dc14 size 0x4 virtual false final false
static UnityEngine::Yoga::YogaSize Make(float_t width, float_t height) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(UnityEngine::Yoga::MeasureOutput);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::MeasureOutput, "UnityEngine.Yoga", "MeasureOutput");
