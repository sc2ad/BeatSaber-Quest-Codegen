#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class ColorStepValuePicker;
}
// Forward declare root types
namespace GlobalNamespace {
class IncDecColorController;
}
// Type: ::IncDecColorController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5522))
// CS Name: IncDecColorController
class CORDL_TYPE IncDecColorController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IncDecColorController() = default;

// Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: " const&", def_value: None }]
constexpr IncDecColorController(IncDecColorController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IncDecColorController", modifiers: "&&", def_value: None }]
constexpr IncDecColorController(IncDecColorController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IncDecColorController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr IncDecColorController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IncDecColorController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IncDecColorController& operator=(IncDecColorController&& o) noexcept = default;
  constexpr IncDecColorController& operator=(IncDecColorController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::ColorStepValuePicker __declspec(property(get=__get__stepValuePicker, put=__set__stepValuePicker))  _stepValuePicker;

constexpr void __set__stepValuePicker(GlobalNamespace::ColorStepValuePicker value) ;

constexpr GlobalNamespace::ColorStepValuePicker __get__stepValuePicker() const;


// Properties

 bool __declspec(property(put=set_enableDec))  enableDec;

 bool __declspec(property(put=set_enableInc))  enableInc;

 UnityEngine::Color __declspec(property(put=set_color))  color;


// Methods

/// @brief Method set_enableDec addr 0x2124ea0 size 0x28 virtual false final false
 void set_enableDec(bool value) ;

/// @brief Method set_enableInc addr 0x2124ec8 size 0x28 virtual false final false
 void set_enableInc(bool value) ;

/// @brief Method set_color addr 0x2124ef0 size 0x2c virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method Awake addr 0x2124f1c size 0xb8 virtual true final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2124fd4 size 0x104 virtual false final false
 void OnDestroy() ;

/// @brief Method IncButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
 void IncButtonPressed() ;

/// @brief Method DecButtonPressed addr 0x0 size 0xffffffffffffffff virtual true final false
 void DecButtonPressed() ;

static GlobalNamespace::IncDecColorController New_ctor() ;

/// @brief Method .ctor addr 0x21250d8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IncDecColorController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IncDecColorController, "", "IncDecColorController");
