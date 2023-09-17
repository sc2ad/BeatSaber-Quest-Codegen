#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace BGNet::Core {
class ITimeProvider;
}
// Forward declare root types
namespace BGNet::Core {
class DefaultTimeProvider;
}
// Type: BGNet.Core::DefaultTimeProvider
namespace BGNet::Core {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12940))
// CS Name: BGNet.Core.DefaultTimeProvider
class CORDL_TYPE DefaultTimeProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~DefaultTimeProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: " const&", def_value: None }]
constexpr DefaultTimeProvider(DefaultTimeProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultTimeProvider", modifiers: "&&", def_value: None }]
constexpr DefaultTimeProvider(DefaultTimeProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultTimeProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultTimeProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultTimeProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultTimeProvider& operator=(DefaultTimeProvider&& o) noexcept = default;
  constexpr DefaultTimeProvider& operator=(DefaultTimeProvider const& o) noexcept = default;
                


// Properties

static ::BGNet::Core::ITimeProvider __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0xdd1038 size 0x58 virtual false final false
static ::BGNet::Core::ITimeProvider get_instance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core
} // end anonymous namespace
NEED_NO_BOX(::BGNet::Core::DefaultTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::DefaultTimeProvider, "BGNet.Core", "DefaultTimeProvider");
