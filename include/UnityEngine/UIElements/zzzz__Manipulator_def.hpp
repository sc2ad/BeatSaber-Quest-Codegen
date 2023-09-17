#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
class IManipulator;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class Manipulator;
}
// Type: UnityEngine.UIElements::Manipulator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6991))
// CS Name: UnityEngine.UIElements.Manipulator
class CORDL_TYPE Manipulator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IManipulator
constexpr operator  ::UnityEngine::UIElements::IManipulator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Manipulator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Manipulator", modifiers: " const&", def_value: None }]
constexpr Manipulator(Manipulator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Manipulator", modifiers: "&&", def_value: None }]
constexpr Manipulator(Manipulator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Manipulator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Manipulator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Manipulator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Manipulator& operator=(Manipulator&& o) noexcept = default;
  constexpr Manipulator& operator=(Manipulator const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_Target, put=__set_m_Target))  m_Target;

constexpr void __set_m_Target(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_Target() const;


// Properties

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=get_target, put=set_target))  target;


// Methods

/// @brief Method RegisterCallbacksOnTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 void RegisterCallbacksOnTarget() ;

/// @brief Method UnregisterCallbacksFromTarget addr 0x0 size 0xffffffffffffffff virtual true final false
 void UnregisterCallbacksFromTarget() ;

/// @brief Method get_target addr 0x2c863c8 size 0x8 virtual true final true
 ::UnityEngine::UIElements::VisualElement get_target() ;

/// @brief Method set_target addr 0x2c863d0 size 0x54 virtual true final true
 void set_target(::UnityEngine::UIElements::VisualElement value) ;

// Ctor Parameters []
explicit Manipulator() ;

/// @brief Method .ctor addr 0x2c86424 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::Manipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Manipulator, "UnityEngine.UIElements", "Manipulator");
