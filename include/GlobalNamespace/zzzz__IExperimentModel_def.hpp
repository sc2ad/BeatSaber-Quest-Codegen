#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IExperimentData;
}
// Forward declare root types
namespace GlobalNamespace {
class IExperimentModel;
}
// Type: ::IExperimentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4213))
// CS Name: IExperimentModel
class CORDL_TYPE IExperimentModel : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IExperimentModel() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IExperimentModel(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method IsEmployee addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<bool> IsEmployee() ;

/// @brief Method IsInTest addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Threading::Tasks::Task_1<bool> IsInTest(GlobalNamespace::IExperimentData data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IExperimentModel, "", "IExperimentModel");
