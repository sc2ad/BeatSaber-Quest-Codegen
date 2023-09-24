#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
namespace GlobalNamespace {
class BloomPrePassBackgroundColor;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassBackgroundLightWithId;
}
// Type: ::BloomPrePassBackgroundLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14677))
// CS Name: BloomPrePassBackgroundLightWithId
class CORDL_TYPE BloomPrePassBackgroundLightWithId : public GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BloomPrePassBackgroundLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundLightWithId", modifiers: " const&", def_value: None }]
constexpr BloomPrePassBackgroundLightWithId(BloomPrePassBackgroundLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassBackgroundLightWithId", modifiers: "&&", def_value: None }]
constexpr BloomPrePassBackgroundLightWithId(BloomPrePassBackgroundLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BloomPrePassBackgroundLightWithId(void* ptr) noexcept : GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr BloomPrePassBackgroundLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BloomPrePassBackgroundLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BloomPrePassBackgroundLightWithId& operator=(BloomPrePassBackgroundLightWithId&& o) noexcept = default;
  constexpr BloomPrePassBackgroundLightWithId& operator=(BloomPrePassBackgroundLightWithId const& o) noexcept = default;
                


// Fields

 GlobalNamespace::BloomPrePassBackgroundColor __declspec(property(get=__get__bloomPrePassBackgroundColor, put=__set__bloomPrePassBackgroundColor))  _bloomPrePassBackgroundColor;

constexpr void __set__bloomPrePassBackgroundColor(GlobalNamespace::BloomPrePassBackgroundColor value) ;

constexpr GlobalNamespace::BloomPrePassBackgroundColor __get__bloomPrePassBackgroundColor() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x1f9c5bc size 0x20 virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x1f9c5dc size 0x20 virtual true final false
 void ColorWasSet(UnityEngine::Color newColor) ;

static GlobalNamespace::BloomPrePassBackgroundLightWithId New_ctor() ;

/// @brief Method .ctor addr 0x1f9c5fc size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BloomPrePassBackgroundLightWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BloomPrePassBackgroundLightWithId, "", "BloomPrePassBackgroundLightWithId");
