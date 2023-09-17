#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class MonoInstallerUtil;
}
// Type: Zenject::MonoInstallerUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11087))
// CS Name: Zenject.MonoInstallerUtil
class CORDL_TYPE MonoInstallerUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MonoInstallerUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerUtil", modifiers: " const&", def_value: None }]
constexpr MonoInstallerUtil(MonoInstallerUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoInstallerUtil", modifiers: "&&", def_value: None }]
constexpr MonoInstallerUtil(MonoInstallerUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoInstallerUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoInstallerUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoInstallerUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoInstallerUtil& operator=(MonoInstallerUtil&& o) noexcept = default;
  constexpr MonoInstallerUtil& operator=(MonoInstallerUtil const& o) noexcept = default;
                


// Methods

/// @brief Method GetDefaultResourcePath addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
static ::StringW GetDefaultResourcePath() ;

/// @brief Method CreateInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
static TInstaller CreateInstaller(::StringW resourcePath, ::Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::MonoInstallerUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::MonoInstallerUtil, "Zenject", "MonoInstallerUtil");
