#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
namespace {
namespace UnityEngine {
class AndroidJavaRunnable;
}
// Forward declare root types
namespace UnityEngine {
class AndroidJavaRunnableProxy;
}
// Type: UnityEngine::AndroidJavaRunnableProxy
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14879))
// CS Name: UnityEngine.AndroidJavaRunnableProxy
class CORDL_TYPE AndroidJavaRunnableProxy : public ::UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AndroidJavaRunnableProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: " const&", def_value: None }]
constexpr AndroidJavaRunnableProxy(AndroidJavaRunnableProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidJavaRunnableProxy", modifiers: "&&", def_value: None }]
constexpr AndroidJavaRunnableProxy(AndroidJavaRunnableProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidJavaRunnableProxy(void* ptr) noexcept : ::UnityEngine::AndroidJavaProxy(ptr) {
}


  constexpr AndroidJavaRunnableProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidJavaRunnableProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidJavaRunnableProxy& operator=(AndroidJavaRunnableProxy&& o) noexcept = default;
  constexpr AndroidJavaRunnableProxy& operator=(AndroidJavaRunnableProxy const& o) noexcept = default;
                


// Fields

 ::UnityEngine::AndroidJavaRunnable __declspec(property(get=__get_mRunnable, put=__set_mRunnable))  mRunnable;

constexpr void __set_mRunnable(::UnityEngine::AndroidJavaRunnable value) ;

constexpr ::UnityEngine::AndroidJavaRunnable __get_mRunnable() const;


// Methods

// Ctor Parameters [CppParam { name: "runnable", ty: "::UnityEngine::AndroidJavaRunnable", modifiers: "", def_value: None }]
explicit AndroidJavaRunnableProxy(::UnityEngine::AndroidJavaRunnable runnable) ;

/// @brief Method .ctor addr 0x2b0e2f0 size 0x80 virtual false final false
 void _ctor(::UnityEngine::AndroidJavaRunnable runnable) ;

/// @brief Method run addr 0x2b0e3ec size 0x24 virtual false final false
 void run() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::AndroidJavaRunnableProxy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AndroidJavaRunnableProxy, "UnityEngine", "AndroidJavaRunnableProxy");
