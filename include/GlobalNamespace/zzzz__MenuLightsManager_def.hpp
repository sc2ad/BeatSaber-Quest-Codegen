#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class GlobalNamespace__MenuLightsManager___Start_d__4;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__MenuLightsManager___Start_d__4;
}
namespace GlobalNamespace {
class MenuLightsManager;
}
// Type: ::<Start>d__4
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4980))
// CS Name: MenuLightsManager::<Start>d__4
class CORDL_TYPE GlobalNamespace__MenuLightsManager___Start_d__4 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__MenuLightsManager___Start_d__4() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MenuLightsManager___Start_d__4", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MenuLightsManager___Start_d__4(GlobalNamespace__MenuLightsManager___Start_d__4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MenuLightsManager___Start_d__4", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MenuLightsManager___Start_d__4(GlobalNamespace__MenuLightsManager___Start_d__4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MenuLightsManager___Start_d__4(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MenuLightsManager___Start_d__4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MenuLightsManager___Start_d__4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MenuLightsManager___Start_d__4& operator=(GlobalNamespace__MenuLightsManager___Start_d__4&& o) noexcept = default;
  constexpr GlobalNamespace__MenuLightsManager___Start_d__4& operator=(GlobalNamespace__MenuLightsManager___Start_d__4 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::MenuLightsManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::MenuLightsManager value) ;

constexpr GlobalNamespace::MenuLightsManager __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::GlobalNamespace__MenuLightsManager___Start_d__4 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x225215c size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x22525e0 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x22525e4 size 0xcc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x22526b0 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x22526b8 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x22526f8 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MenuLightsManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4981))
// CS Name: MenuLightsManager
class CORDL_TYPE MenuLightsManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__4 = GlobalNamespace::GlobalNamespace__MenuLightsManager___Start_d__4;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MenuLightsManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: " const&", def_value: None }]
constexpr MenuLightsManager(MenuLightsManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: "&&", def_value: None }]
constexpr MenuLightsManager(MenuLightsManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuLightsManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MenuLightsManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuLightsManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuLightsManager& operator=(MenuLightsManager&& o) noexcept = default;
  constexpr MenuLightsManager& operator=(MenuLightsManager const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__defaultPreset, put=__set__defaultPreset))  _defaultPreset;

constexpr void __set__defaultPreset(GlobalNamespace::MenuLightsPresetSO value) ;

constexpr GlobalNamespace::MenuLightsPresetSO __get__defaultPreset() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightManager, put=__set__lightManager))  _lightManager;

constexpr void __set__lightManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightManager() const;

 GlobalNamespace::MenuLightsPresetSO __declspec(property(get=__get__preset, put=__set__preset))  _preset;

constexpr void __set__preset(GlobalNamespace::MenuLightsPresetSO value) ;

constexpr GlobalNamespace::MenuLightsPresetSO __get__preset() const;


// Methods

/// @brief Method Start addr 0x22520f4 size 0x68 virtual false final false
 System::Collections::IEnumerator Start() ;

/// @brief Method Update addr 0x2252184 size 0x40 virtual false final false
 void Update() ;

/// @brief Method IsColorVeryCloseToColor addr 0x2252328 size 0x44 virtual false final false
 bool IsColorVeryCloseToColor(UnityEngine::Color color0, UnityEngine::Color color1) ;

/// @brief Method SetColor addr 0x225236c size 0x1c virtual false final false
 void SetColor(int32_t lightId, UnityEngine::Color color) ;

/// @brief Method CurrentColorForID addr 0x2252388 size 0x20 virtual false final false
 UnityEngine::Color CurrentColorForID(int32_t lightId) ;

/// @brief Method SetColorsFromPreset addr 0x22521c4 size 0x164 virtual false final false
 bool SetColorsFromPreset(GlobalNamespace::MenuLightsPresetSO preset, float_t interpolationFactor) ;

/// @brief Method RefreshLightsDictForPreset addr 0x22523a8 size 0xe0 virtual false final false
 void RefreshLightsDictForPreset(GlobalNamespace::MenuLightsPresetSO preset) ;

/// @brief Method SetColorPreset addr 0x2252488 size 0xbc virtual false final false
 void SetColorPreset(GlobalNamespace::MenuLightsPresetSO preset, bool animated) ;

/// @brief Method RefreshColors addr 0x2252544 size 0x8c virtual false final false
 void RefreshColors() ;

static GlobalNamespace::MenuLightsManager New_ctor() ;

/// @brief Method .ctor addr 0x22525d0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MenuLightsManager___Start_d__4);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MenuLightsManager___Start_d__4, "", "MenuLightsManager/<Start>d__4");
NEED_NO_BOX(GlobalNamespace::MenuLightsManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuLightsManager, "", "MenuLightsManager");
