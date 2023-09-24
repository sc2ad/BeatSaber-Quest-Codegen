#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__MouseManipulator_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerManipulator;
}
// Type: UnityEngine.UIElements::PointerManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6877))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6912))
// CS Name: UnityEngine.UIElements.PointerManipulator
class CORDL_TYPE PointerManipulator : public UnityEngine::UIElements::MouseManipulator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PointerManipulator() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerManipulator", modifiers: " const&", def_value: None }]
constexpr PointerManipulator(PointerManipulator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointerManipulator", modifiers: "&&", def_value: None }]
constexpr PointerManipulator(PointerManipulator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointerManipulator(void* ptr) noexcept : UnityEngine::UIElements::MouseManipulator(ptr) {
}


  constexpr PointerManipulator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointerManipulator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointerManipulator& operator=(PointerManipulator&& o) noexcept = default;
  constexpr PointerManipulator& operator=(PointerManipulator const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_CurrentPointerId, put=__set_m_CurrentPointerId))  m_CurrentPointerId;

constexpr void __set_m_CurrentPointerId(int32_t value) ;

constexpr int32_t __get_m_CurrentPointerId() const;


// Methods

/// @brief Method CanStartManipulation addr 0x2c453f8 size 0x1f4 virtual false final false
 bool CanStartManipulation(UnityEngine::UIElements::IPointerEvent e) ;

/// @brief Method CanStopManipulation addr 0x2c45830 size 0xb4 virtual false final false
 bool CanStopManipulation(UnityEngine::UIElements::IPointerEvent e) ;

static UnityEngine::UIElements::PointerManipulator New_ctor() ;

/// @brief Method .ctor addr 0x2c4449c size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::PointerManipulator);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::PointerManipulator, "UnityEngine.UIElements", "PointerManipulator");
