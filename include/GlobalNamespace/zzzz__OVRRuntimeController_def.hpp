#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class GameObject;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
namespace GlobalNamespace {
class OVRGLTFAnimatinonNode;
}
namespace UnityEngine {
class Shader;
}
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__Controller;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16;
}
namespace GlobalNamespace {
class OVRRuntimeController;
}
// Type: ::<UpdateControllerModel>d__16
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8950))
// CS Name: OVRRuntimeController::<UpdateControllerModel>d__16
class CORDL_TYPE GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16 : public ::bs_hook::Il2CppWrapperType {
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

virtual ~GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16(GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16(GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16& operator=(GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16&& o) noexcept = default;
  constexpr GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16& operator=(GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get___2__current() const;

 GlobalNamespace::OVRRuntimeController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::OVRRuntimeController value) ;

constexpr GlobalNamespace::OVRRuntimeController __get___4__this() const;


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current))  System_Collections_Generic_IEnumerator_System_Object__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16(int32_t __1__state) ;

/// @brief Method .ctor addr 0x262ff28 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x2630000 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x2630004 size 0x120 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current addr 0x2630124 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x263012c size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x263016c size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::OVRRuntimeController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8951))
// CS Name: OVRRuntimeController
class CORDL_TYPE OVRRuntimeController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateControllerModel_d__16 = GlobalNamespace::GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~OVRRuntimeController() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeController", modifiers: " const&", def_value: None }]
constexpr OVRRuntimeController(OVRRuntimeController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRRuntimeController", modifiers: "&&", def_value: None }]
constexpr OVRRuntimeController(OVRRuntimeController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRRuntimeController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRRuntimeController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRRuntimeController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRRuntimeController& operator=(OVRRuntimeController&& o) noexcept = default;
  constexpr OVRRuntimeController& operator=(OVRRuntimeController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__Controller __declspec(property(get=__get_m_controller, put=__set_m_controller))  m_controller;

constexpr void __set_m_controller(GlobalNamespace::GlobalNamespace__OVRInput__Controller value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__Controller __get_m_controller() const;

 UnityEngine::Shader __declspec(property(get=__get_m_controllerModelShader, put=__set_m_controllerModelShader))  m_controllerModelShader;

constexpr void __set_m_controllerModelShader(UnityEngine::Shader value) ;

constexpr UnityEngine::Shader __get_m_controllerModelShader() const;

 bool __declspec(property(get=__get_m_supportAnimation, put=__set_m_supportAnimation))  m_supportAnimation;

constexpr void __set_m_supportAnimation(bool value) ;

constexpr bool __get_m_supportAnimation() const;

 UnityEngine::GameObject __declspec(property(get=__get_m_controllerObject, put=__set_m_controllerObject))  m_controllerObject;

constexpr void __set_m_controllerObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get_m_controllerObject() const;

static ::StringW __declspec(property(get=__get_leftControllerModelPath, put=__set_leftControllerModelPath))  leftControllerModelPath;

static void __set_leftControllerModelPath(::StringW value) ;

static ::StringW __get_leftControllerModelPath() ;

static ::StringW __declspec(property(get=__get_rightControllerModelPath, put=__set_rightControllerModelPath))  rightControllerModelPath;

static void __set_rightControllerModelPath(::StringW value) ;

static ::StringW __get_rightControllerModelPath() ;

 ::StringW __declspec(property(get=__get_m_controllerModelPath, put=__set_m_controllerModelPath))  m_controllerModelPath;

constexpr void __set_m_controllerModelPath(::StringW value) ;

constexpr ::StringW __get_m_controllerModelPath() const;

 bool __declspec(property(get=__get_m_modelSupported, put=__set_m_modelSupported))  m_modelSupported;

constexpr void __set_m_modelSupported(bool value) ;

constexpr bool __get_m_modelSupported() const;

 bool __declspec(property(get=__get_m_hasInputFocus, put=__set_m_hasInputFocus))  m_hasInputFocus;

constexpr void __set_m_hasInputFocus(bool value) ;

constexpr bool __get_m_hasInputFocus() const;

 bool __declspec(property(get=__get_m_hasInputFocusPrev, put=__set_m_hasInputFocusPrev))  m_hasInputFocusPrev;

constexpr void __set_m_hasInputFocusPrev(bool value) ;

constexpr bool __get_m_hasInputFocusPrev() const;

 bool __declspec(property(get=__get_m_controllerConnectedPrev, put=__set_m_controllerConnectedPrev))  m_controllerConnectedPrev;

constexpr void __set_m_controllerConnectedPrev(bool value) ;

constexpr bool __get_m_controllerConnectedPrev() const;

 System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> __declspec(property(get=__get_m_animationNodes, put=__set_m_animationNodes))  m_animationNodes;

constexpr void __set_m_animationNodes(System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> value) ;

constexpr System::Collections::Generic::Dictionary_2<GlobalNamespace::OVRGLTFInputNode,GlobalNamespace::OVRGLTFAnimatinonNode> __get_m_animationNodes() const;


// Methods

/// @brief Method Start addr 0x262f4d8 size 0x184 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x262f828 size 0x10c virtual false final false
 void Update() ;

/// @brief Method IsModelSupported addr 0x262f65c size 0x164 virtual false final false
 bool IsModelSupported(::StringW modelPath) ;

/// @brief Method LoadControllerModel addr 0x262fc68 size 0x2c0 virtual false final false
 bool LoadControllerModel(::StringW modelPath) ;

/// @brief Method UpdateControllerModel addr 0x262f7c0 size 0x68 virtual false final false
 System::Collections::IEnumerator UpdateControllerModel() ;

/// @brief Method UpdateControllerAnimation addr 0x262f934 size 0x334 virtual false final false
 void UpdateControllerAnimation() ;

/// @brief Method InputFocusAquired addr 0x262ff50 size 0xc virtual false final false
 void InputFocusAquired() ;

/// @brief Method InputFocusLost addr 0x262ff5c size 0x8 virtual false final false
 void InputFocusLost() ;

// Ctor Parameters []
explicit OVRRuntimeController() ;

/// @brief Method .ctor addr 0x262ff64 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__OVRRuntimeController___UpdateControllerModel_d__16, "", "OVRRuntimeController/<UpdateControllerModel>d__16");
NEED_NO_BOX(GlobalNamespace::OVRRuntimeController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRRuntimeController, "", "OVRRuntimeController");
