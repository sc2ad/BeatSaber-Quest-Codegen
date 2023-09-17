#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class IStandaloneThreadRunnable;
}
namespace GlobalNamespace {
class IStandaloneThreadRunner;
}
// Forward declare root types
namespace GlobalNamespace {
class StandaloneThreadContext;
}
// Type: ::StandaloneThreadContext
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12906))
// CS Name: StandaloneThreadContext
class CORDL_TYPE StandaloneThreadContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IStandaloneThreadRunner
constexpr operator  ::GlobalNamespace::IStandaloneThreadRunner() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StandaloneThreadContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneThreadContext", modifiers: " const&", def_value: None }]
constexpr StandaloneThreadContext(StandaloneThreadContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StandaloneThreadContext", modifiers: "&&", def_value: None }]
constexpr StandaloneThreadContext(StandaloneThreadContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StandaloneThreadContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StandaloneThreadContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StandaloneThreadContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StandaloneThreadContext& operator=(StandaloneThreadContext&& o) noexcept = default;
  constexpr StandaloneThreadContext& operator=(StandaloneThreadContext const& o) noexcept = default;
                


// Fields

static ::GlobalNamespace::StandaloneThreadContext __declspec(property(get=__get_instance, put=__set_instance))  instance;

static void __set_instance(::GlobalNamespace::StandaloneThreadContext value) ;

static ::GlobalNamespace::StandaloneThreadContext __get_instance() ;


// Methods

/// @brief Method Run addr 0xdcc2c4 size 0x4 virtual true final true
 void Run(::GlobalNamespace::IStandaloneThreadRunnable runnable) ;

// Ctor Parameters []
explicit StandaloneThreadContext() ;

/// @brief Method .ctor addr 0xdcc2c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::StandaloneThreadContext);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandaloneThreadContext, "", "StandaloneThreadContext");
