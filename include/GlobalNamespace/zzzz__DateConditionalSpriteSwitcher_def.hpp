#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Sprite;
}
namespace GlobalNamespace {
class ConditionalSpriteSwitcher;
}
// Forward declare root types
namespace GlobalNamespace {
class DateConditionalSpriteSwitcher;
}
// Type: ::DateConditionalSpriteSwitcher
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5448))
// CS Name: DateConditionalSpriteSwitcher
class CORDL_TYPE DateConditionalSpriteSwitcher : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~DateConditionalSpriteSwitcher() = default;

// Ctor Parameters [CppParam { name: "", ty: "DateConditionalSpriteSwitcher", modifiers: " const&", def_value: None }]
constexpr DateConditionalSpriteSwitcher(DateConditionalSpriteSwitcher const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DateConditionalSpriteSwitcher", modifiers: "&&", def_value: None }]
constexpr DateConditionalSpriteSwitcher(DateConditionalSpriteSwitcher&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DateConditionalSpriteSwitcher(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DateConditionalSpriteSwitcher& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DateConditionalSpriteSwitcher& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DateConditionalSpriteSwitcher& operator=(DateConditionalSpriteSwitcher&& o) noexcept = default;
  constexpr DateConditionalSpriteSwitcher& operator=(DateConditionalSpriteSwitcher const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__day, put=__set__day))  _day;

constexpr void __set__day(int32_t value) ;

constexpr int32_t __get__day() const;

 int32_t __declspec(property(get=__get__month, put=__set__month))  _month;

constexpr void __set__month(int32_t value) ;

constexpr int32_t __get__month() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__falseSprite, put=__set__falseSprite))  _falseSprite;

constexpr void __set__falseSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__falseSprite() const;

 ::UnityEngine::Sprite __declspec(property(get=__get__trueSprite, put=__set__trueSprite))  _trueSprite;

constexpr void __set__trueSprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get__trueSprite() const;

 ::GlobalNamespace::ConditionalSpriteSwitcher __declspec(property(get=__get__conditionalSpriteSwitcher, put=__set__conditionalSpriteSwitcher))  _conditionalSpriteSwitcher;

constexpr void __set__conditionalSpriteSwitcher(::GlobalNamespace::ConditionalSpriteSwitcher value) ;

constexpr ::GlobalNamespace::ConditionalSpriteSwitcher __get__conditionalSpriteSwitcher() const;


// Methods

/// @brief Method Awake addr 0x21158dc size 0xb8 virtual false final false
 void Awake() ;

// Ctor Parameters []
explicit DateConditionalSpriteSwitcher() ;

/// @brief Method .ctor addr 0x2115994 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::DateConditionalSpriteSwitcher);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DateConditionalSpriteSwitcher, "", "DateConditionalSpriteSwitcher");
