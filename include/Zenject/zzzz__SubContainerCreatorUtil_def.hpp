#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorUtil;
}
// Type: Zenject::SubContainerCreatorUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11238))
// CS Name: Zenject.SubContainerCreatorUtil
class CORDL_TYPE SubContainerCreatorUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SubContainerCreatorUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorUtil", modifiers: " const&", def_value: None }]
constexpr SubContainerCreatorUtil(SubContainerCreatorUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorUtil", modifiers: "&&", def_value: None }]
constexpr SubContainerCreatorUtil(SubContainerCreatorUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubContainerCreatorUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubContainerCreatorUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubContainerCreatorUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubContainerCreatorUtil& operator=(SubContainerCreatorUtil&& o) noexcept = default;
  constexpr SubContainerCreatorUtil& operator=(SubContainerCreatorUtil const& o) noexcept = default;
                


// Methods

/// @brief Method ApplyBindSettings addr 0x2d91de0 size 0x304 virtual false final false
static void ApplyBindSettings(::Zenject::SubContainerCreatorBindInfo subContainerBindInfo, ::Zenject::DiContainer subContainer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::SubContainerCreatorUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorUtil, "Zenject", "SubContainerCreatorUtil");