#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IExperimentData;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class IExperimentModel;
}
// Forward declare root types
namespace GlobalNamespace {
class NoExperimentModel;
}
// Type: ::NoExperimentModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4215))
// CS Name: NoExperimentModel
class CORDL_TYPE NoExperimentModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IExperimentModel
constexpr operator  GlobalNamespace::IExperimentModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NoExperimentModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoExperimentModel", modifiers: " const&", def_value: None }]
constexpr NoExperimentModel(NoExperimentModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoExperimentModel", modifiers: "&&", def_value: None }]
constexpr NoExperimentModel(NoExperimentModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoExperimentModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NoExperimentModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoExperimentModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoExperimentModel& operator=(NoExperimentModel&& o) noexcept = default;
  constexpr NoExperimentModel& operator=(NoExperimentModel const& o) noexcept = default;
                


// Methods

/// @brief Method IsEmployee addr 0x21bf7e0 size 0x68 virtual true final true
 System::Threading::Tasks::Task_1<bool> IsEmployee() ;

/// @brief Method IsInTest addr 0x21bf848 size 0x68 virtual true final true
 System::Threading::Tasks::Task_1<bool> IsInTest(GlobalNamespace::IExperimentData data) ;

static GlobalNamespace::NoExperimentModel New_ctor() ;

/// @brief Method .ctor addr 0x21bf8b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoExperimentModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoExperimentModel, "", "NoExperimentModel");
