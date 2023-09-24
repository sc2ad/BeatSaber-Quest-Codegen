#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
class Animator;
}
// Forward declare root types
namespace GlobalNamespace {
class MarkableUIButton;
}
// Type: ::MarkableUIButton
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13812))
// CS Name: MarkableUIButton
class CORDL_TYPE MarkableUIButton : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MarkableUIButton() = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkableUIButton", modifiers: " const&", def_value: None }]
constexpr MarkableUIButton(MarkableUIButton const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MarkableUIButton", modifiers: "&&", def_value: None }]
constexpr MarkableUIButton(MarkableUIButton&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MarkableUIButton(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MarkableUIButton& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MarkableUIButton& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MarkableUIButton& operator=(MarkableUIButton&& o) noexcept = default;
  constexpr MarkableUIButton& operator=(MarkableUIButton const& o) noexcept = default;
                


// Fields

 UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get__animator() const;

 bool __declspec(property(get=__get__marked, put=__set__marked))  _marked;

constexpr void __set__marked(bool value) ;

constexpr bool __get__marked() const;

 int32_t __declspec(property(get=__get__markedTriggerId, put=__set__markedTriggerId))  _markedTriggerId;

constexpr void __set__markedTriggerId(int32_t value) ;

constexpr int32_t __get__markedTriggerId() const;


// Properties

 bool __declspec(property(get=get_marked, put=set_marked))  marked;


// Methods

/// @brief Method get_marked addr 0x1f78dcc size 0x8 virtual false final false
 bool get_marked() ;

/// @brief Method set_marked addr 0x1f78dd4 size 0x2c virtual false final false
 void set_marked(bool value) ;

/// @brief Method Awake addr 0x1f78e00 size 0x50 virtual false final false
 void Awake() ;

/// @brief Method ToggleMarked addr 0x1f78e50 size 0x10 virtual false final false
 void ToggleMarked() ;

static GlobalNamespace::MarkableUIButton New_ctor() ;

/// @brief Method .ctor addr 0x1f78e60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MarkableUIButton);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MarkableUIButton, "", "MarkableUIButton");
