#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class Sprite;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class ISpriteAsyncLoader;
}
// Type: ::ISpriteAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5987))
// CS Name: ISpriteAsyncLoader
class CORDL_TYPE ISpriteAsyncLoader : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISpriteAsyncLoader() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISpriteAsyncLoader(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method LoadSpriteAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<UnityEngine::Sprite> LoadSpriteAsync(::StringW path, System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ISpriteAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ISpriteAsyncLoader, "", "ISpriteAsyncLoader");
