#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
class IDisposable;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class BeatmapIdentifierNetSerializable;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class MockBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class IMockBeatmapDataProvider;
}
// Type: ::IMockBeatmapDataProvider
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15483))
// CS Name: IMockBeatmapDataProvider
class CORDL_TYPE IMockBeatmapDataProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

~IMockBeatmapDataProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMockBeatmapDataProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetBeatmapData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::MockBeatmapData> GetBeatmapData(::GlobalNamespace::BeatmapIdentifierNetSerializable beatmap, ::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IMockBeatmapDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMockBeatmapDataProvider, "", "IMockBeatmapDataProvider");
