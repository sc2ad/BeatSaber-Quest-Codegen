#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IPAPluginsDirDeleter;
}
// Type: ::IPAPluginsDirDeleter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5458))
// CS Name: IPAPluginsDirDeleter
class CORDL_TYPE IPAPluginsDirDeleter : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~IPAPluginsDirDeleter() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAPluginsDirDeleter", modifiers: " const&", def_value: None }]
constexpr IPAPluginsDirDeleter(IPAPluginsDirDeleter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPAPluginsDirDeleter", modifiers: "&&", def_value: None }]
constexpr IPAPluginsDirDeleter(IPAPluginsDirDeleter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPAPluginsDirDeleter(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr IPAPluginsDirDeleter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPAPluginsDirDeleter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPAPluginsDirDeleter& operator=(IPAPluginsDirDeleter&& o) noexcept = default;
  constexpr IPAPluginsDirDeleter& operator=(IPAPluginsDirDeleter const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit IPAPluginsDirDeleter() ;

/// @brief Method .ctor addr 0x2115f88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IPAPluginsDirDeleter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IPAPluginsDirDeleter, "", "IPAPluginsDirDeleter");
