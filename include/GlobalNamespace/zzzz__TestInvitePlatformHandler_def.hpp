#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace GlobalNamespace {
class IInvitePlatformHandler;
}
// Forward declare root types
namespace GlobalNamespace {
class TestInvitePlatformHandler;
}
// Type: ::TestInvitePlatformHandler
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4506))
// CS Name: TestInvitePlatformHandler
class CORDL_TYPE TestInvitePlatformHandler : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::IInvitePlatformHandler
constexpr operator  ::GlobalNamespace::IInvitePlatformHandler() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TestInvitePlatformHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "TestInvitePlatformHandler", modifiers: " const&", def_value: None }]
constexpr TestInvitePlatformHandler(TestInvitePlatformHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TestInvitePlatformHandler", modifiers: "&&", def_value: None }]
constexpr TestInvitePlatformHandler(TestInvitePlatformHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TestInvitePlatformHandler(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TestInvitePlatformHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TestInvitePlatformHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TestInvitePlatformHandler& operator=(TestInvitePlatformHandler&& o) noexcept = default;
  constexpr TestInvitePlatformHandler& operator=(TestInvitePlatformHandler const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_isSupported))  isSupported;


// Methods

/// @brief Method get_isSupported addr 0x21f30e0 size 0x8 virtual true final true
 bool get_isSupported() ;

/// @brief Method OpenInvitePanel addr 0x21f30e8 size 0x68 virtual true final true
 void OpenInvitePanel() ;

// Ctor Parameters []
explicit TestInvitePlatformHandler() ;

/// @brief Method .ctor addr 0x21f3150 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::TestInvitePlatformHandler);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TestInvitePlatformHandler, "", "TestInvitePlatformHandler");
