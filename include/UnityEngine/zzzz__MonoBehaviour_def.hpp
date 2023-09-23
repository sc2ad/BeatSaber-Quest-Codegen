#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Coroutine;
}
// Forward declare root types
namespace UnityEngine {
class MonoBehaviour;
}
// Type: UnityEngine::MonoBehaviour
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10166))
// CS Name: UnityEngine.MonoBehaviour
class CORDL_TYPE MonoBehaviour : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MonoBehaviour() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: " const&", def_value: None }]
constexpr MonoBehaviour(MonoBehaviour const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoBehaviour", modifiers: "&&", def_value: None }]
constexpr MonoBehaviour(MonoBehaviour&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoBehaviour(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr MonoBehaviour& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoBehaviour& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoBehaviour& operator=(MonoBehaviour&& o) noexcept = default;
  constexpr MonoBehaviour& operator=(MonoBehaviour const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_useGUILayout, put=set_useGUILayout))  useGUILayout;


// Methods

/// @brief Method IsInvoking addr 0x2b5b408 size 0x3c virtual false final false
 bool IsInvoking() ;

/// @brief Method CancelInvoke addr 0x2b5b480 size 0x3c virtual false final false
 void CancelInvoke() ;

/// @brief Method Invoke addr 0x2b5b4f8 size 0x58 virtual false final false
 void Invoke(::StringW methodName, float_t time) ;

/// @brief Method InvokeRepeating addr 0x2b5b5ac size 0xbc virtual false final false
 void InvokeRepeating(::StringW methodName, float_t time, float_t repeatRate) ;

/// @brief Method CancelInvoke addr 0x2b5b668 size 0x44 virtual false final false
 void CancelInvoke(::StringW methodName) ;

/// @brief Method IsInvoking addr 0x2b5b6f0 size 0x44 virtual false final false
 bool IsInvoking(::StringW methodName) ;

/// @brief Method StartCoroutine addr 0x2b5b778 size 0x8 virtual false final false
 UnityEngine::Coroutine StartCoroutine(::StringW methodName) ;

/// @brief Method StartCoroutine addr 0x2b5b780 size 0x114 virtual false final false
 UnityEngine::Coroutine StartCoroutine(::StringW methodName, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method StartCoroutine addr 0x2b5b924 size 0xf8 virtual false final false
 UnityEngine::Coroutine StartCoroutine(System::Collections::IEnumerator routine) ;

/// @brief Method StartCoroutine_Auto addr 0x2b5ba60 size 0x4 virtual false final false
 UnityEngine::Coroutine StartCoroutine_Auto(System::Collections::IEnumerator routine) ;

/// @brief Method StopCoroutine addr 0x2b5ba64 size 0xf8 virtual false final false
 void StopCoroutine(System::Collections::IEnumerator routine) ;

/// @brief Method StopCoroutine addr 0x2b5bba0 size 0xf8 virtual false final false
 void StopCoroutine(UnityEngine::Coroutine routine) ;

/// @brief Method StopCoroutine addr 0x2b5bcdc size 0x44 virtual false final false
 void StopCoroutine(::StringW methodName) ;

/// @brief Method StopAllCoroutines addr 0x2b5bd20 size 0x3c virtual false final false
 void StopAllCoroutines() ;

/// @brief Method get_useGUILayout addr 0x2b5bd5c size 0x3c virtual false final false
 bool get_useGUILayout() ;

/// @brief Method set_useGUILayout addr 0x2b5bd98 size 0x44 virtual false final false
 void set_useGUILayout(bool value) ;

/// @brief Method print addr 0x2b5bddc size 0x58 virtual false final false
static void print(::bs_hook::Il2CppWrapperType message) ;

/// @brief Method Internal_CancelInvokeAll addr 0x2b5b4bc size 0x3c virtual false final false
static void Internal_CancelInvokeAll(UnityEngine::MonoBehaviour self) ;

/// @brief Method Internal_IsInvokingAll addr 0x2b5b444 size 0x3c virtual false final false
static bool Internal_IsInvokingAll(UnityEngine::MonoBehaviour self) ;

/// @brief Method InvokeDelayed addr 0x2b5b550 size 0x5c virtual false final false
static void InvokeDelayed(UnityEngine::MonoBehaviour self, ::StringW methodName, float_t time, float_t repeatRate) ;

/// @brief Method CancelInvoke addr 0x2b5b6ac size 0x44 virtual false final false
static void CancelInvoke(UnityEngine::MonoBehaviour self, ::StringW methodName) ;

/// @brief Method IsInvoking addr 0x2b5b734 size 0x44 virtual false final false
static bool IsInvoking(UnityEngine::MonoBehaviour self, ::StringW methodName) ;

/// @brief Method IsObjectMonoBehaviour addr 0x2b5b894 size 0x3c virtual false final false
static bool IsObjectMonoBehaviour(UnityEngine::Object obj) ;

/// @brief Method StartCoroutineManaged addr 0x2b5b8d0 size 0x54 virtual false final false
 UnityEngine::Coroutine StartCoroutineManaged(::StringW methodName, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method StartCoroutineManaged2 addr 0x2b5ba1c size 0x44 virtual false final false
 UnityEngine::Coroutine StartCoroutineManaged2(System::Collections::IEnumerator enumerator) ;

/// @brief Method StopCoroutineManaged addr 0x2b5bc98 size 0x44 virtual false final false
 void StopCoroutineManaged(UnityEngine::Coroutine routine) ;

/// @brief Method StopCoroutineFromEnumeratorManaged addr 0x2b5bb5c size 0x44 virtual false final false
 void StopCoroutineFromEnumeratorManaged(System::Collections::IEnumerator routine) ;

/// @brief Method GetScriptClassName addr 0x2b5be34 size 0x3c virtual false final false
 ::StringW GetScriptClassName() ;

// Ctor Parameters []
explicit MonoBehaviour() ;

/// @brief Method .ctor addr 0x2b5be70 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::MonoBehaviour);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::MonoBehaviour, "UnityEngine", "MonoBehaviour");
