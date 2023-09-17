#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeBloomPrePassLightWithId;
}
// Type: ::TubeBloomPrePassLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14703))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14719))
// CS Name: TubeBloomPrePassLightWithId
class CORDL_TYPE TubeBloomPrePassLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TubeBloomPrePassLightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: " const&", def_value: None }]
constexpr TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TubeBloomPrePassLightWithId", modifiers: "&&", def_value: None }]
constexpr TubeBloomPrePassLightWithId(TubeBloomPrePassLightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TubeBloomPrePassLightWithId(void* ptr) noexcept : ::GlobalNamespace::LightWithIdMonoBehaviour(ptr) {
}


  constexpr TubeBloomPrePassLightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TubeBloomPrePassLightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TubeBloomPrePassLightWithId& operator=(TubeBloomPrePassLightWithId&& o) noexcept = default;
  constexpr TubeBloomPrePassLightWithId& operator=(TubeBloomPrePassLightWithId const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::TubeBloomPrePassLight __declspec(property(get=__get__tubeBloomPrePassLight, put=__set__tubeBloomPrePassLight))  _tubeBloomPrePassLight;

constexpr void __set__tubeBloomPrePassLight(::GlobalNamespace::TubeBloomPrePassLight value) ;

constexpr ::GlobalNamespace::TubeBloomPrePassLight __get__tubeBloomPrePassLight() const;

 bool __declspec(property(get=__get__setOnlyOnce, put=__set__setOnlyOnce))  _setOnlyOnce;

constexpr void __set__setOnlyOnce(bool value) ;

constexpr bool __get__setOnlyOnce() const;

 bool __declspec(property(get=__get__setColorOnly, put=__set__setColorOnly))  _setColorOnly;

constexpr void __set__setColorOnly(bool value) ;

constexpr bool __get__setColorOnly() const;


// Properties

 ::UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x1fa16e4 size 0x20 virtual false final false
 ::UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x1fa1704 size 0x58 virtual true final false
 void ColorWasSet(::UnityEngine::Color color) ;

// Ctor Parameters []
explicit TubeBloomPrePassLightWithId() ;

/// @brief Method .ctor addr 0x1fa175c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLightWithId, "", "TubeBloomPrePassLightWithId");
