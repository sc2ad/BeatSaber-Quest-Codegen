#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class TestCategories;
}
// Type: ::TestCategories
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16098))
// CS Name: TestCategories
class CORDL_TYPE TestCategories : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TestCategories() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestCategories", modifiers: " const&", def_value: None }]
constexpr TestCategories(TestCategories const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestCategories", modifiers: "&&", def_value: None }]
constexpr TestCategories(TestCategories&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestCategories(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TestCategories& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestCategories& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestCategories& operator=(TestCategories&& o) noexcept = default;
  constexpr TestCategories& operator=(TestCategories const& o) noexcept = default;
                


// Fields

/// @brief Field kLongRunning offset 0
static constexpr ::ConstString  kLongRunning{u"LongRunning"};

/// @brief Field kSingleplayer offset 0
static constexpr ::ConstString  kSingleplayer{u"Singleplayer"};

/// @brief Field kMultiplayer offset 0
static constexpr ::ConstString  kMultiplayer{u"Multiplayer"};

/// @brief Field kOnlyMustPassBeforeRelease offset 0
static constexpr ::ConstString  kOnlyMustPassBeforeRelease{u"OnlyMustPassBeforeRelease"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TestCategories);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestCategories, "", "TestCategories");
