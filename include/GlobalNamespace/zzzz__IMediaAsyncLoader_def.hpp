#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class IMediaAsyncLoader;
}
// Type: ::IMediaAsyncLoader
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5983))
// CS Name: IMediaAsyncLoader
class CORDL_TYPE IMediaAsyncLoader : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMediaAsyncLoader() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMediaAsyncLoader(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method LoadAudioClipFromFilePathAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip> LoadAudioClipFromFilePathAsync(::StringW filePath) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IMediaAsyncLoader);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMediaAsyncLoader, "", "IMediaAsyncLoader");
