#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace GlobalNamespace {
class IStartSeekSongController;
}
// Forward declare root types
namespace GlobalNamespace {
class IStartSeekSongControllerProvider;
}
// Type: ::IStartSeekSongControllerProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5266))
// CS Name: IStartSeekSongControllerProvider
class CORDL_TYPE IStartSeekSongControllerProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IStartSeekSongControllerProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IStartSeekSongControllerProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::GlobalNamespace::IStartSeekSongController __declspec(property(get=get_songController))  songController;


// Methods

/// @brief Method get_songController addr 0x0 size 0xffffffffffffffff virtual true final false
 ::GlobalNamespace::IStartSeekSongController get_songController() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IStartSeekSongControllerProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IStartSeekSongControllerProvider, "", "IStartSeekSongControllerProvider");
