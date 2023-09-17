#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentSingleton_1_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SharedCoroutineStarter;
}
namespace {
// Type: ::SharedCoroutineStarter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13880)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13880), inst: 4722 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13893))
// CS Name: SharedCoroutineStarter
class CORDL_TYPE SharedCoroutineStarter : public GlobalNamespace::PersistentSingleton_1<GlobalNamespace::SharedCoroutineStarter> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SharedCoroutineStarter() = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedCoroutineStarter", modifiers: " const&", def_value: None }]
constexpr SharedCoroutineStarter(SharedCoroutineStarter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SharedCoroutineStarter", modifiers: "&&", def_value: None }]
constexpr SharedCoroutineStarter(SharedCoroutineStarter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SharedCoroutineStarter(void* ptr) noexcept : GlobalNamespace::PersistentSingleton_1<GlobalNamespace::SharedCoroutineStarter>(ptr) {
}


  constexpr SharedCoroutineStarter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SharedCoroutineStarter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SharedCoroutineStarter& operator=(SharedCoroutineStarter&& o) noexcept = default;
  constexpr SharedCoroutineStarter& operator=(SharedCoroutineStarter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SharedCoroutineStarter() ;

/// @brief Method .ctor addr 0x1f99410 size 0x6c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SharedCoroutineStarter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SharedCoroutineStarter, "", "SharedCoroutineStarter");
} // end anonymous namespace
