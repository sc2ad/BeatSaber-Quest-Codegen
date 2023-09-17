#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine {
class Coroutine;
}
namespace GlobalNamespace {
class ICoroutineStarter;
}
// Forward declare root types
namespace GlobalNamespace {
class CoroutineStarter;
}
// Type: ::CoroutineStarter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13786))
// CS Name: CoroutineStarter
class CORDL_TYPE CoroutineStarter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ICoroutineStarter
constexpr operator  ::GlobalNamespace::ICoroutineStarter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CoroutineStarter() = default;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineStarter", modifiers: " const&", def_value: None }]
constexpr CoroutineStarter(CoroutineStarter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CoroutineStarter", modifiers: "&&", def_value: None }]
constexpr CoroutineStarter(CoroutineStarter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CoroutineStarter(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr CoroutineStarter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CoroutineStarter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CoroutineStarter& operator=(CoroutineStarter&& o) noexcept = default;
  constexpr CoroutineStarter& operator=(CoroutineStarter const& o) noexcept = default;
                


// Methods

/// @brief Method ICoroutineStarter.StartCoroutine addr 0x1f765b0 size 0xd4 virtual true final true
 ::UnityEngine::Coroutine ICoroutineStarter_StartCoroutine(::System::Collections::IEnumerator routine) ;

/// @brief Method ICoroutineStarter.StopCoroutine addr 0x1f76684 size 0xcc virtual true final true
 void ICoroutineStarter_StopCoroutine(::UnityEngine::Coroutine routine) ;

// Ctor Parameters []
explicit CoroutineStarter() ;

/// @brief Method .ctor addr 0x1f76750 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CoroutineStarter, "", "CoroutineStarter");
