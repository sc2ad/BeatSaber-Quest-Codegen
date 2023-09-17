#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class MultiplayerStatusData;
}
namespace System::Threading {
struct CancellationToken;
}
// Forward declare root types
namespace GlobalNamespace {
class IMultiplayerStatusModel;
}
// Type: ::IMultiplayerStatusModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4476))
// CS Name: IMultiplayerStatusModel
class CORDL_TYPE IMultiplayerStatusModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IMultiplayerStatusModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IMultiplayerStatusModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetMultiplayerStatusAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData> GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IMultiplayerStatusModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMultiplayerStatusModel, "", "IMultiplayerStatusModel");
