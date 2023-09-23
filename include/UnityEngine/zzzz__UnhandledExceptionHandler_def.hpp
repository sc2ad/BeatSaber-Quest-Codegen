#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class UnhandledExceptionEventArgs;
}
namespace System {
class UnhandledExceptionEventHandler;
}
// Forward declare root types
namespace UnityEngine {
class UnhandledExceptionHandler;
}
namespace UnityEngine {
class UnityEngine__UnhandledExceptionHandler____c;
}
// Type: ::<>c
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10167))
// CS Name: UnityEngine.UnhandledExceptionHandler::<>c
class CORDL_TYPE UnityEngine__UnhandledExceptionHandler____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__UnhandledExceptionHandler____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UnhandledExceptionHandler____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UnhandledExceptionHandler____c(UnityEngine__UnhandledExceptionHandler____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UnhandledExceptionHandler____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UnhandledExceptionHandler____c(UnityEngine__UnhandledExceptionHandler____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UnhandledExceptionHandler____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__UnhandledExceptionHandler____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UnhandledExceptionHandler____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UnhandledExceptionHandler____c& operator=(UnityEngine__UnhandledExceptionHandler____c&& o) noexcept = default;
  constexpr UnityEngine__UnhandledExceptionHandler____c& operator=(UnityEngine__UnhandledExceptionHandler____c const& o) noexcept = default;
                


// Fields

static UnityEngine::UnityEngine__UnhandledExceptionHandler____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::UnityEngine__UnhandledExceptionHandler____c value) ;

static UnityEngine::UnityEngine__UnhandledExceptionHandler____c __get___9() ;

static System::UnhandledExceptionEventHandler __declspec(property(get=__get___9__0_0, put=__set___9__0_0))  __9__0_0;

static void __set___9__0_0(System::UnhandledExceptionEventHandler value) ;

static System::UnhandledExceptionEventHandler __get___9__0_0() ;


// Methods

// Ctor Parameters []
explicit UnityEngine__UnhandledExceptionHandler____c() ;

/// @brief Method .ctor addr 0x2b5bfd0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <RegisterUECatcher>b__0_0 addr 0x2b5bfd8 size 0xb4 virtual false final false
 void _RegisterUECatcher_b__0_0(::bs_hook::Il2CppWrapperType sender, System::UnhandledExceptionEventArgs e) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Type: UnityEngine::UnhandledExceptionHandler
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10168))
// CS Name: UnityEngine.UnhandledExceptionHandler
class CORDL_TYPE UnhandledExceptionHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::UnityEngine__UnhandledExceptionHandler____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnhandledExceptionHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler", modifiers: " const&", def_value: None }]
constexpr UnhandledExceptionHandler(UnhandledExceptionHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionHandler", modifiers: "&&", def_value: None }]
constexpr UnhandledExceptionHandler(UnhandledExceptionHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnhandledExceptionHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnhandledExceptionHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnhandledExceptionHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnhandledExceptionHandler& operator=(UnhandledExceptionHandler&& o) noexcept = default;
  constexpr UnhandledExceptionHandler& operator=(UnhandledExceptionHandler const& o) noexcept = default;
                


// Methods

/// @brief Method RegisterUECatcher addr 0x2b5be74 size 0xf8 virtual false final false
static void RegisterUECatcher() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::UnhandledExceptionHandler);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnhandledExceptionHandler, "UnityEngine", "UnhandledExceptionHandler");
NEED_NO_BOX(UnityEngine::UnityEngine__UnhandledExceptionHandler____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityEngine__UnhandledExceptionHandler____c, "UnityEngine", "UnhandledExceptionHandler/<>c");
