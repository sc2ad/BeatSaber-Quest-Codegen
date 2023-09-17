#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UI {
class Button;
}
namespace UnityEngine::UI {
class Text;
}
namespace GlobalNamespace {
class OVRTrackedKeyboard;
}
namespace UnityEngine::UI {
class InputField;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRTrackedKeyboardSampleControls;
}
namespace GlobalNamespace {
class ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19;
}
// Type: ::<SetShaderCoroutine>d__19
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8872))
// CS Name: OVRTrackedKeyboardSampleControls::<SetShaderCoroutine>d__19
class CORDL_TYPE ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::bs_hook::Il2CppWrapperType>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19(____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19(____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19& operator=(____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19&& o) noexcept = default;
  constexpr ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19& operator=(____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 ::GlobalNamespace::OVRTrackedKeyboardSampleControls __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::GlobalNamespace::OVRTrackedKeyboardSampleControls value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboardSampleControls __get___4__this() const;

 ::StringW __declspec(property(get=__get_shaderName, put=__set_shaderName))  shaderName;

constexpr void __set_shaderName(::StringW value) ;

constexpr ::StringW __get_shaderName() const;

 bool __declspec(property(get=__get__trackingWasEnabled_5__2, put=__set__trackingWasEnabled_5__2))  _trackingWasEnabled_5__2;

constexpr void __set__trackingWasEnabled_5__2(bool value) ;

constexpr bool __get__trackingWasEnabled_5__2() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2618434 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2618504 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2618508 size 0x134 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x261863c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x2618644 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2618684 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRTrackedKeyboardSampleControls
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8873))
// CS Name: OVRTrackedKeyboardSampleControls
class CORDL_TYPE OVRTrackedKeyboardSampleControls : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _SetShaderCoroutine_d__19 = ::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~OVRTrackedKeyboardSampleControls() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls", modifiers: " const&", def_value: None }]
constexpr OVRTrackedKeyboardSampleControls(OVRTrackedKeyboardSampleControls const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRTrackedKeyboardSampleControls", modifiers: "&&", def_value: None }]
constexpr OVRTrackedKeyboardSampleControls(OVRTrackedKeyboardSampleControls&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRTrackedKeyboardSampleControls(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRTrackedKeyboardSampleControls& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRTrackedKeyboardSampleControls& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRTrackedKeyboardSampleControls& operator=(OVRTrackedKeyboardSampleControls&& o) noexcept = default;
  constexpr OVRTrackedKeyboardSampleControls& operator=(OVRTrackedKeyboardSampleControls const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::OVRTrackedKeyboard __declspec(property(get=__get_trackedKeyboard, put=__set_trackedKeyboard))  trackedKeyboard;

constexpr void __set_trackedKeyboard(::GlobalNamespace::OVRTrackedKeyboard value) ;

constexpr ::GlobalNamespace::OVRTrackedKeyboard __get_trackedKeyboard() const;

 ::UnityEngine::UI::InputField __declspec(property(get=__get_StartingFocusField, put=__set_StartingFocusField))  StartingFocusField;

constexpr void __set_StartingFocusField(::UnityEngine::UI::InputField value) ;

constexpr ::UnityEngine::UI::InputField __get_StartingFocusField() const;

 ::UnityEngine::UI::Text __declspec(property(get=__get_NameValue, put=__set_NameValue))  NameValue;

constexpr void __set_NameValue(::UnityEngine::UI::Text value) ;

constexpr ::UnityEngine::UI::Text __get_NameValue() const;

 ::UnityEngine::UI::Text __declspec(property(get=__get_ConnectedValue, put=__set_ConnectedValue))  ConnectedValue;

constexpr void __set_ConnectedValue(::UnityEngine::UI::Text value) ;

constexpr ::UnityEngine::UI::Text __get_ConnectedValue() const;

 ::UnityEngine::UI::Text __declspec(property(get=__get_StateValue, put=__set_StateValue))  StateValue;

constexpr void __set_StateValue(::UnityEngine::UI::Text value) ;

constexpr ::UnityEngine::UI::Text __get_StateValue() const;

 ::UnityEngine::UI::Text __declspec(property(get=__get_SelectKeyboardValue, put=__set_SelectKeyboardValue))  SelectKeyboardValue;

constexpr void __set_SelectKeyboardValue(::UnityEngine::UI::Text value) ;

constexpr ::UnityEngine::UI::Text __get_SelectKeyboardValue() const;

 ::UnityEngine::UI::Text __declspec(property(get=__get_TypeValue, put=__set_TypeValue))  TypeValue;

constexpr void __set_TypeValue(::UnityEngine::UI::Text value) ;

constexpr ::UnityEngine::UI::Text __get_TypeValue() const;

 ::UnityEngine::Color __declspec(property(get=__get_GoodStateColor, put=__set_GoodStateColor))  GoodStateColor;

constexpr void __set_GoodStateColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_GoodStateColor() const;

 ::UnityEngine::Color __declspec(property(get=__get_BadStateColor, put=__set_BadStateColor))  BadStateColor;

constexpr void __set_BadStateColor(::UnityEngine::Color value) ;

constexpr ::UnityEngine::Color __get_BadStateColor() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get_TrackingToggle, put=__set_TrackingToggle))  TrackingToggle;

constexpr void __set_TrackingToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get_TrackingToggle() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get_ConnectionToggle, put=__set_ConnectionToggle))  ConnectionToggle;

constexpr void __set_ConnectionToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get_ConnectionToggle() const;

 ::UnityEngine::UI::Toggle __declspec(property(get=__get_RemoteKeyboardToggle, put=__set_RemoteKeyboardToggle))  RemoteKeyboardToggle;

constexpr void __set_RemoteKeyboardToggle(::UnityEngine::UI::Toggle value) ;

constexpr ::UnityEngine::UI::Toggle __get_RemoteKeyboardToggle() const;

 ::ArrayW<::UnityEngine::UI::Button> __declspec(property(get=__get_ShaderButtons, put=__set_ShaderButtons))  ShaderButtons;

constexpr void __set_ShaderButtons(::ArrayW<::UnityEngine::UI::Button> value) ;

constexpr ::ArrayW<::UnityEngine::UI::Button> __get_ShaderButtons() const;


// Methods

/// @brief Method Start addr 0x2617f68 size 0x120 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2618088 size 0x248 virtual false final false
 void Update() ;

/// @brief Method SetPresentationOpaque addr 0x26182d0 size 0x20 virtual false final false
 void SetPresentationOpaque() ;

/// @brief Method SetPresentationKeyLabels addr 0x26182f0 size 0x20 virtual false final false
 void SetPresentationKeyLabels() ;

/// @brief Method SetUnlitShader addr 0x2618310 size 0x58 virtual false final false
 void SetUnlitShader() ;

/// @brief Method SetDiffuseShader addr 0x26183dc size 0x58 virtual false final false
 void SetDiffuseShader() ;

/// @brief Method SetShaderCoroutine addr 0x2618368 size 0x74 virtual false final false
 ::System::Collections::IEnumerator SetShaderCoroutine(::StringW shaderName) ;

/// @brief Method LaunchKeyboardSelection addr 0x261845c size 0x48 virtual false final false
 void LaunchKeyboardSelection() ;

/// @brief Method SetTrackingEnabled addr 0x26184a4 size 0x20 virtual false final false
 void SetTrackingEnabled(bool value) ;

// Ctor Parameters []
explicit OVRTrackedKeyboardSampleControls() ;

/// @brief Method .ctor addr 0x26184c4 size 0x1c virtual false final false
 void _ctor() ;

/// @brief Method <SetShaderCoroutine>b__19_0 addr 0x26184e0 size 0x24 virtual false final false
 bool _SetShaderCoroutine_b__19_0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRTrackedKeyboardSampleControls);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRTrackedKeyboardSampleControls, "", "OVRTrackedKeyboardSampleControls");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__OVRTrackedKeyboardSampleControls___SetShaderCoroutine_d__19, "", "OVRTrackedKeyboardSampleControls/<SetShaderCoroutine>d__19");
