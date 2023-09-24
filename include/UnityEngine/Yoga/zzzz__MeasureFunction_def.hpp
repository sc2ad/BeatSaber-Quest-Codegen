#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::Yoga {
class YogaNode;
}
namespace UnityEngine::Yoga {
struct YogaMeasureMode;
}
namespace UnityEngine::Yoga {
struct YogaSize;
}
// Forward declare root types
namespace UnityEngine::Yoga {
class MeasureFunction;
}
// Type: UnityEngine.Yoga::MeasureFunction
namespace UnityEngine::Yoga {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15389))
// CS Name: UnityEngine.Yoga.MeasureFunction
class CORDL_TYPE MeasureFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~MeasureFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "MeasureFunction", modifiers: " const&", def_value: None }]
constexpr MeasureFunction(MeasureFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MeasureFunction", modifiers: "&&", def_value: None }]
constexpr MeasureFunction(MeasureFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MeasureFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr MeasureFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MeasureFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MeasureFunction& operator=(MeasureFunction&& o) noexcept = default;
  constexpr MeasureFunction& operator=(MeasureFunction const& o) noexcept = default;
                


// Methods

static UnityEngine::Yoga::MeasureFunction New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2d2e11c size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2d2e24c size 0x14 virtual true final false
 UnityEngine::Yoga::YogaSize Invoke(UnityEngine::Yoga::YogaNode node, float_t width, UnityEngine::Yoga::YogaMeasureMode widthMode, float_t height, UnityEngine::Yoga::YogaMeasureMode heightMode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Yoga
NEED_NO_BOX(UnityEngine::Yoga::MeasureFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Yoga::MeasureFunction, "UnityEngine.Yoga", "MeasureFunction");
