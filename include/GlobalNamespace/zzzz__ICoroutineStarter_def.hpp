#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace UnityEngine {
class Coroutine;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
class ICoroutineStarter;
}
// Type: ::ICoroutineStarter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13785))
// CS Name: ICoroutineStarter
class CORDL_TYPE ICoroutineStarter : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICoroutineStarter() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICoroutineStarter(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method StartCoroutine addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Coroutine StartCoroutine(System::Collections::IEnumerator routine) ;

/// @brief Method StopCoroutine addr 0x0 size 0xffffffffffffffff virtual true final false
 void StopCoroutine(UnityEngine::Coroutine routine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ICoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ICoroutineStarter, "", "ICoroutineStarter");
