#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Threading {
struct CancellationToken;
}
namespace GlobalNamespace {
class IQuickPlaySetupModel;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace GlobalNamespace {
class QuickPlaySetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class MockQuickPlaySetupModel;
}
// Type: ::MockQuickPlaySetupModel
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5286))
// CS Name: MockQuickPlaySetupModel
class CORDL_TYPE MockQuickPlaySetupModel : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IQuickPlaySetupModel
constexpr operator  GlobalNamespace::IQuickPlaySetupModel() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MockQuickPlaySetupModel() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockQuickPlaySetupModel", modifiers: " const&", def_value: None }]
constexpr MockQuickPlaySetupModel(MockQuickPlaySetupModel const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockQuickPlaySetupModel", modifiers: "&&", def_value: None }]
constexpr MockQuickPlaySetupModel(MockQuickPlaySetupModel&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockQuickPlaySetupModel(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockQuickPlaySetupModel& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockQuickPlaySetupModel& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockQuickPlaySetupModel& operator=(MockQuickPlaySetupModel&& o) noexcept = default;
  constexpr MockQuickPlaySetupModel& operator=(MockQuickPlaySetupModel const& o) noexcept = default;
                


// Fields

 GlobalNamespace::QuickPlaySetupData __declspec(property(get=__get__quickPlaySetupData, put=__set__quickPlaySetupData))  _quickPlaySetupData;

constexpr void __set__quickPlaySetupData(GlobalNamespace::QuickPlaySetupData value) ;

constexpr GlobalNamespace::QuickPlaySetupData __get__quickPlaySetupData() const;


// Methods

/// @brief Method GetQuickPlaySetupAsync addr 0x20efa0c size 0x70 virtual true final true
 System::Threading::Tasks::Task_1<GlobalNamespace::QuickPlaySetupData> GetQuickPlaySetupAsync(System::Threading::CancellationToken cancellationToken) ;

static GlobalNamespace::MockQuickPlaySetupModel New_ctor() ;

/// @brief Method .ctor addr 0x20efa7c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockQuickPlaySetupModel);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockQuickPlaySetupModel, "", "MockQuickPlaySetupModel");
