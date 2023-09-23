#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace UnityEngine {
class SetupCoroutine;
}
// Type: UnityEngine::SetupCoroutine
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10145))
// CS Name: UnityEngine.SetupCoroutine
class CORDL_TYPE SetupCoroutine : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SetupCoroutine() = default;

// Ctor Parameters [CppParam { name: "", ty: "SetupCoroutine", modifiers: " const&", def_value: None }]
constexpr SetupCoroutine(SetupCoroutine const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SetupCoroutine", modifiers: "&&", def_value: None }]
constexpr SetupCoroutine(SetupCoroutine&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SetupCoroutine(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SetupCoroutine& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SetupCoroutine& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SetupCoroutine& operator=(SetupCoroutine&& o) noexcept = default;
  constexpr SetupCoroutine& operator=(SetupCoroutine const& o) noexcept = default;
                


// Methods

/// @brief Method InvokeMoveNext addr 0x2b5975c size 0x154 virtual false final false
static void InvokeMoveNext(System::Collections::IEnumerator enumerator, ::cordl_internals::intptr_t returnValueAddress) ;

/// @brief Method InvokeMember addr 0x2b598b0 size 0xf4 virtual false final false
static ::bs_hook::Il2CppWrapperType InvokeMember(::bs_hook::Il2CppWrapperType behaviour, ::StringW name, ::bs_hook::Il2CppWrapperType variable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SetupCoroutine);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SetupCoroutine, "UnityEngine", "SetupCoroutine");
