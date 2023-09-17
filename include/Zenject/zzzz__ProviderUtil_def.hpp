#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ProviderUtil;
}
// Type: Zenject::ProviderUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11176))
// CS Name: Zenject.ProviderUtil
class CORDL_TYPE ProviderUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ProviderUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderUtil", modifiers: " const&", def_value: None }]
constexpr ProviderUtil(ProviderUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ProviderUtil", modifiers: "&&", def_value: None }]
constexpr ProviderUtil(ProviderUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ProviderUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ProviderUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ProviderUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ProviderUtil& operator=(ProviderUtil&& o) noexcept = default;
  constexpr ProviderUtil& operator=(ProviderUtil const& o) noexcept = default;
                


// Methods

/// @brief Method GetTypeToInstantiate addr 0x2d907ec size 0xc4 virtual false final false
static ::System::Type GetTypeToInstantiate(::System::Type contractType, ::System::Type concreteType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::ProviderUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProviderUtil, "Zenject", "ProviderUtil");
