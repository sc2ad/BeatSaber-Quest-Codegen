#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
// Type: ::IQuickPlaySetupModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4477))
// CS Name: IQuickPlaySetupModel
class CORDL_TYPE IQuickPlaySetupModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IQuickPlaySetupModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IQuickPlaySetupModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetQuickPlaySetupAsync addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData> GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IQuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IQuickPlaySetupModel, "", "IQuickPlaySetupModel");
