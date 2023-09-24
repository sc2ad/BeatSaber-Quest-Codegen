#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Type: UnityEngine::AndroidJavaRunnable
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14876))
// CS Name: UnityEngine.AndroidJavaRunnable
class CORDL_TYPE AndroidJavaRunnable : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~AndroidJavaRunnable() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnable", modifiers: " const&", def_value: None }]
constexpr AndroidJavaRunnable(AndroidJavaRunnable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnable", modifiers: "&&", def_value: None }]
constexpr AndroidJavaRunnable(AndroidJavaRunnable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJavaRunnable(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr AndroidJavaRunnable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJavaRunnable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJavaRunnable& operator=(AndroidJavaRunnable&& o) noexcept = default;
  constexpr AndroidJavaRunnable& operator=(AndroidJavaRunnable const& o) noexcept = default;
                


// Methods

static UnityEngine::AndroidJavaRunnable New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2b0dfe4 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2b0e0a0 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::AndroidJavaRunnable);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AndroidJavaRunnable, "UnityEngine", "AndroidJavaRunnable");
