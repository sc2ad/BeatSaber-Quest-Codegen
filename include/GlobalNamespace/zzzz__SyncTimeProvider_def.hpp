#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class IMultiplayerSessionManager;
}
namespace GlobalNamespace {
class ITimeProvider;
}
// Forward declare root types
namespace GlobalNamespace {
class SyncTimeProvider;
}
// Type: ::SyncTimeProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5473))
// CS Name: SyncTimeProvider
class CORDL_TYPE SyncTimeProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::ITimeProvider
constexpr operator  ::GlobalNamespace::ITimeProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~SyncTimeProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: " const&", def_value: None }]
constexpr SyncTimeProvider(SyncTimeProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SyncTimeProvider", modifiers: "&&", def_value: None }]
constexpr SyncTimeProvider(SyncTimeProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SyncTimeProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SyncTimeProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SyncTimeProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SyncTimeProvider& operator=(SyncTimeProvider&& o) noexcept = default;
  constexpr SyncTimeProvider& operator=(SyncTimeProvider const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::IMultiplayerSessionManager __declspec(property(get=__get__multiplayerSessionManager, put=__set__multiplayerSessionManager))  _multiplayerSessionManager;

constexpr void __set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager value) ;

constexpr ::GlobalNamespace::IMultiplayerSessionManager __get__multiplayerSessionManager() const;


// Properties

 float_t __declspec(property(get=get_time))  time;


// Methods

/// @brief Method get_time addr 0x21170e4 size 0xa4 virtual true final true
 float_t get_time() ;

// Ctor Parameters []
explicit SyncTimeProvider() ;

/// @brief Method .ctor addr 0x2117188 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SyncTimeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SyncTimeProvider, "", "SyncTimeProvider");
