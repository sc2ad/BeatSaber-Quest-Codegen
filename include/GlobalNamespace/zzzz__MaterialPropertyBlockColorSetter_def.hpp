#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
// Type: ::MaterialPropertyBlockColorSetter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14725))
// CS Name: MaterialPropertyBlockColorSetter
class CORDL_TYPE MaterialPropertyBlockColorSetter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MaterialPropertyBlockColorSetter() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorSetter", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockColorSetter(MaterialPropertyBlockColorSetter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorSetter", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockColorSetter(MaterialPropertyBlockColorSetter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockColorSetter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MaterialPropertyBlockColorSetter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockColorSetter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockColorSetter& operator=(MaterialPropertyBlockColorSetter&& o) noexcept = default;
  constexpr MaterialPropertyBlockColorSetter& operator=(MaterialPropertyBlockColorSetter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__useTestColor, put=__set__useTestColor))  _useTestColor;

constexpr void __set__useTestColor(bool value) ;

constexpr bool __get__useTestColor() const;

 UnityEngine::Color __declspec(property(get=__get__testColor, put=__set__testColor))  _testColor;

constexpr void __set__testColor(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__testColor() const;

 ::StringW __declspec(property(get=__get__property, put=__set__property))  _property;

constexpr void __set__property(::StringW value) ;

constexpr ::StringW __get__property() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 bool __declspec(property(get=__get__inverseAlpha, put=__set__inverseAlpha))  _inverseAlpha;

constexpr void __set__inverseAlpha(bool value) ;

constexpr bool __get__inverseAlpha() const;

 bool __declspec(property(get=__get__multiplyWithAlpha, put=__set__multiplyWithAlpha))  _multiplyWithAlpha;

constexpr void __set__multiplyWithAlpha(bool value) ;

constexpr bool __get__multiplyWithAlpha() const;

 int32_t __declspec(property(get=__get__propertyId, put=__set__propertyId))  _propertyId;

constexpr void __set__propertyId(int32_t value) ;

constexpr int32_t __get__propertyId() const;

 bool __declspec(property(get=__get__isInitialized, put=__set__isInitialized))  _isInitialized;

constexpr void __set__isInitialized(bool value) ;

constexpr bool __get__isInitialized() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=get_materialPropertyBlockController, put=set_materialPropertyBlockController))  materialPropertyBlockController;


// Methods

/// @brief Method get_color addr 0x1fa2458 size 0x2c virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method get_materialPropertyBlockController addr 0x1fa2484 size 0x8 virtual false final false
 GlobalNamespace::MaterialPropertyBlockController get_materialPropertyBlockController() ;

/// @brief Method set_materialPropertyBlockController addr 0x1fa248c size 0x8 virtual false final false
 void set_materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

/// @brief Method Awake addr 0x1fa2494 size 0x30 virtual false final false
 void Awake() ;

/// @brief Method InitIfNeeded addr 0x1fa24c4 size 0x30 virtual false final false
 void InitIfNeeded() ;

/// @brief Method SetColor addr 0x1fa24f4 size 0xac virtual true final false
 void SetColor(UnityEngine::Color color) ;

/// @brief Method OnValidate addr 0x1fa25a0 size 0x40 virtual false final false
 void OnValidate() ;

static GlobalNamespace::MaterialPropertyBlockColorSetter New_ctor() ;

/// @brief Method .ctor addr 0x1fa25e0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MaterialPropertyBlockColorSetter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockColorSetter, "", "MaterialPropertyBlockColorSetter");
