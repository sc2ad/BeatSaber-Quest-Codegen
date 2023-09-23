#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace UnityEngine {
class Animation;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class CountdownElementController;
}
// Type: ::CountdownElementController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5648))
// CS Name: CountdownElementController
class CORDL_TYPE CountdownElementController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~CountdownElementController() = default;

// Ctor Parameters [CppParam { name: "", ty: "CountdownElementController", modifiers: " const&", def_value: None }]
constexpr CountdownElementController(CountdownElementController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CountdownElementController", modifiers: "&&", def_value: None }]
constexpr CountdownElementController(CountdownElementController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CountdownElementController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CountdownElementController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CountdownElementController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CountdownElementController& operator=(CountdownElementController&& o) noexcept = default;
  constexpr CountdownElementController& operator=(CountdownElementController const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;

 UnityEngine::Animation __declspec(property(get=__get__animation, put=__set__animation))  _animation;

constexpr void __set__animation(UnityEngine::Animation value) ;

constexpr UnityEngine::Animation __get__animation() const;


// Methods

/// @brief Method SetTextAndRunAnimation addr 0x214b9e8 size 0x64 virtual false final false
 void SetTextAndRunAnimation(::StringW text) ;

/// @brief Method StopAndHide addr 0x214bb40 size 0x24 virtual false final false
 void StopAndHide() ;

// Ctor Parameters []
explicit CountdownElementController() ;

/// @brief Method .ctor addr 0x214bcc8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::CountdownElementController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CountdownElementController, "", "CountdownElementController");
