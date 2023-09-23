#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace GlobalNamespace {
class ILightWithId;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__LightWithIds__LightWithId;
}
namespace GlobalNamespace {
class LightWithIds;
}
// Type: ::LightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14704))
// CS Name: LightWithIds::LightWithId
class CORDL_TYPE GlobalNamespace__LightWithIds__LightWithId : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::ILightWithId
constexpr operator  GlobalNamespace::ILightWithId() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~GlobalNamespace__LightWithIds__LightWithId() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightWithIds__LightWithId", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__LightWithIds__LightWithId(GlobalNamespace__LightWithIds__LightWithId const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__LightWithIds__LightWithId", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__LightWithIds__LightWithId(GlobalNamespace__LightWithIds__LightWithId&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LightWithIds__LightWithId(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__LightWithIds__LightWithId& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__LightWithIds__LightWithId& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__LightWithIds__LightWithId& operator=(GlobalNamespace__LightWithIds__LightWithId&& o) noexcept = default;
  constexpr GlobalNamespace__LightWithIds__LightWithId& operator=(GlobalNamespace__LightWithIds__LightWithId const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__lightId, put=__set__lightId))  _lightId;

constexpr void __set__lightId(int32_t value) ;

constexpr int32_t __get__lightId() const;

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 bool __declspec(property(get=__get__isRegistered, put=__set__isRegistered))  _isRegistered;

constexpr void __set__isRegistered(bool value) ;

constexpr bool __get__isRegistered() const;

 GlobalNamespace::LightWithIds __declspec(property(get=__get__parentLightWithIds, put=__set__parentLightWithIds))  _parentLightWithIds;

constexpr void __set__parentLightWithIds(GlobalNamespace::LightWithIds value) ;

constexpr GlobalNamespace::LightWithIds __get__parentLightWithIds() const;


// Properties

 int32_t __declspec(property(get=get_lightId))  lightId;

 UnityEngine::Color __declspec(property(get=get_color))  color;

 bool __declspec(property(get=get_isRegistered))  isRegistered;


// Methods

/// @brief Method get_lightId addr 0x1f9f094 size 0x8 virtual true final true
 int32_t get_lightId() ;

/// @brief Method get_color addr 0x1f9f09c size 0xc virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method get_isRegistered addr 0x1f9f0a8 size 0x8 virtual true final true
 bool get_isRegistered() ;

/// @brief Method __SetIsRegistered addr 0x1f9f0b0 size 0xc virtual true final true
 void __SetIsRegistered() ;

/// @brief Method __SetIsUnRegistered addr 0x1f9f0bc size 0x8 virtual true final true
 void __SetIsUnRegistered() ;

// Ctor Parameters []
explicit GlobalNamespace__LightWithIds__LightWithId() ;

/// @brief Method .ctor addr 0x1f9d1a4 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "lightId", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__LightWithIds__LightWithId(int32_t lightId) ;

/// @brief Method .ctor addr 0x1f9cae4 size 0x28 virtual false final false
 void _ctor(int32_t lightId) ;

/// @brief Method __SetParentLightWithIds addr 0x1f9f0c4 size 0x8 virtual false final false
 void __SetParentLightWithIds(GlobalNamespace::LightWithIds parentLightWithIds) ;

/// @brief Method ColorWasSet addr 0x1f9cb54 size 0x28 virtual true final false
 void ColorWasSet(UnityEngine::Color newColor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightWithIds
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14705))
// CS Name: LightWithIds
class CORDL_TYPE LightWithIds : public UnityEngine::MonoBehaviour {
public:
// Declarations
using LightWithId = GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LightWithIds() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightWithIds", modifiers: " const&", def_value: None }]
constexpr LightWithIds(LightWithIds const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightWithIds", modifiers: "&&", def_value: None }]
constexpr LightWithIds(LightWithIds&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightWithIds(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr LightWithIds& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightWithIds& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightWithIds& operator=(LightWithIds&& o) noexcept = default;
  constexpr LightWithIds& operator=(LightWithIds const& o) noexcept = default;
                


// Fields

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightManager, put=__set__lightManager))  _lightManager;

constexpr void __set__lightManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightManager() const;

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> __declspec(property(get=__get__lightWithIds, put=__set__lightWithIds))  _lightWithIds;

constexpr void __set__lightWithIds(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> value) ;

constexpr System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> __get__lightWithIds() const;

 bool __declspec(property(get=__get__isRegistered, put=__set__isRegistered))  _isRegistered;

constexpr void __set__isRegistered(bool value) ;

constexpr bool __get__isRegistered() const;

 bool __declspec(property(get=__get__childrenColorWasSet, put=__set__childrenColorWasSet))  _childrenColorWasSet;

constexpr void __set__childrenColorWasSet(bool value) ;

constexpr bool __get__childrenColorWasSet() const;


// Properties

 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> __declspec(property(get=get_lightWithIds))  lightWithIds;


// Methods

/// @brief Method get_lightWithIds addr 0x1f9e8d0 size 0x8 virtual false final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> get_lightWithIds() ;

/// @brief Method Awake addr 0x1f9d238 size 0x38 virtual true final false
 void Awake() ;

/// @brief Method Start addr 0x1f9e900 size 0x4 virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x1f9c624 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method MarkChildrenColorAsSet addr 0x1f9eccc size 0xc virtual false final false
 void MarkChildrenColorAsSet() ;

/// @brief Method SetNewLightsWithIds addr 0x1f9e8d8 size 0x28 virtual false final false
 void SetNewLightsWithIds(System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> lightsWithIds) ;

/// @brief Method GetLightWithIds addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IEnumerable_1<GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId> GetLightWithIds() ;

/// @brief Method RegisterForColorChanges addr 0x1f9e904 size 0x3c8 virtual false final false
 void RegisterForColorChanges() ;

/// @brief Method UnregisterFromColorChanges addr 0x1f9ecd8 size 0x39c virtual false final false
 void UnregisterFromColorChanges() ;

/// @brief Method OnDisable addr 0x1f9f074 size 0x4 virtual false final false
 void OnDisable() ;

/// @brief Method HandleLightManagerDidChangeSomeColorsThisFrame addr 0x1f9f078 size 0x1c virtual false final false
 void HandleLightManagerDidChangeSomeColorsThisFrame() ;

/// @brief Method ProcessNewColorData addr 0x0 size 0xffffffffffffffff virtual true final false
 void ProcessNewColorData() ;

// Ctor Parameters []
explicit LightWithIds() ;

/// @brief Method .ctor addr 0x1f9caac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LightWithIds__LightWithId, "", "LightWithIds/LightWithId");
NEED_NO_BOX(GlobalNamespace::LightWithIds);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightWithIds, "", "LightWithIds");
